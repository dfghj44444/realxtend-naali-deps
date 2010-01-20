#include <QtCore/QDebug>
#include <QtCore/QTimer>
#include <QtDBus/QtDBus>
#include <QtTest/QtTest>

#include <QDateTime>
#include <QString>
#include <QVariantMap>

#include <TelepathyQt4/Account>
#include <TelepathyQt4/AccountManager>
#include <TelepathyQt4/AbstractClientHandler>
#include <TelepathyQt4/AbstractClientObserver>
#include <TelepathyQt4/Channel>
#include <TelepathyQt4/ChannelDispatchOperation>
#include <TelepathyQt4/ChannelRequest>
#include <TelepathyQt4/ClientHandlerInterface>
#include <TelepathyQt4/ClientInterfaceRequestsInterface>
#include <TelepathyQt4/ClientObserverInterface>
#include <TelepathyQt4/ClientRegistrar>
#include <TelepathyQt4/Connection>
#include <TelepathyQt4/Debug>
#include <TelepathyQt4/MethodInvocationContext>
#include <TelepathyQt4/PendingAccount>
#include <TelepathyQt4/PendingReady>
#include <TelepathyQt4/Types>

#include <telepathy-glib/debug.h>

#include <glib-object.h>
#include <dbus/dbus-glib.h>

#include <tests/lib/contacts-conn.h>
#include <tests/lib/echo/chan.h>
#include <tests/lib/test.h>

using namespace Tp;
using namespace Tp::Client;

class ChannelRequestAdaptor : public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.freedesktop.Telepathy.ChannelRequest")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.freedesktop.Telepathy.ChannelRequest\" >\n"
"    <property name=\"Account\" type=\"o\" access=\"read\" />\n"
"    <property name=\"UserActionTime\" type=\"x\" access=\"read\" />\n"
"    <property name=\"PreferredHandler\" type=\"s\" access=\"read\" />\n"
"    <property name=\"Requests\" type=\"aa{sv}\" access=\"read\" />\n"
"    <property name=\"Interfaces\" type=\"as\" access=\"read\" />\n"
"    <method name=\"Proceed\" />\n"
"    <method name=\"Cancel\" />\n"
"    <signal name=\"Failed\" >\n"
"      <arg name=\"Error\" type=\"s\" />\n"
"      <arg name=\"Message\" type=\"s\" />\n"
"    </signal>\n"
"    <signal name=\"Succeeded\" />"
"  </interface>\n"
        "")

    Q_PROPERTY(QDBusObjectPath Account READ Account)
    Q_PROPERTY(qulonglong UserActionTime READ UserActionTime)
    Q_PROPERTY(QString PreferredHandler READ PreferredHandler)
    Q_PROPERTY(QualifiedPropertyValueMapList Requests READ Requests)
    Q_PROPERTY(QStringList Interfaces READ Interfaces)

public:
    ChannelRequestAdaptor(QDBusObjectPath account,
            qulonglong userActionTime,
            QString preferredHandler,
            QualifiedPropertyValueMapList requests,
            QStringList interfaces,
            QObject *parent)
        : QDBusAbstractAdaptor(parent),
          mAccount(account), mUserActionTime(userActionTime),
          mPreferredHandler(preferredHandler), mRequests(requests),
          mInterfaces(interfaces)
    {
    }

    virtual ~ChannelRequestAdaptor()
    {
    }

public: // Properties
    inline QDBusObjectPath Account() const
    {
        return mAccount;
    }

    inline qulonglong UserActionTime() const
    {
        return mUserActionTime;
    }

    inline QString PreferredHandler() const
    {
        return mPreferredHandler;
    }

    inline QualifiedPropertyValueMapList Requests() const
    {
        return mRequests;
    }

    inline QStringList Interfaces() const
    {
        return mInterfaces;
    }

public Q_SLOTS: // Methods
    void Proceed()
    {
    }

    void Cancel()
    {
    }

Q_SIGNALS: // Signals
    void Failed(const QString &error, const QString &message);
    void Succeeded();

private:
    QDBusObjectPath mAccount;
    qulonglong mUserActionTime;
    QString mPreferredHandler;
    QualifiedPropertyValueMapList mRequests;
    QStringList mInterfaces;
};

class MyClient : public QObject,
                 public AbstractClientObserver,
                 public AbstractClientApprover,
                 public AbstractClientHandler
{
    Q_OBJECT

public:
    static AbstractClientPtr create(const ChannelClassList &channelFilter,
            bool bypassApproval = false,
            bool wantsRequestNotification = false)
    {
        return AbstractClientPtr::dynamicCast(SharedPtr<MyClient>(
                    new MyClient(channelFilter,
                        bypassApproval, wantsRequestNotification)));
    }

    MyClient(const ChannelClassList &channelFilter,
            bool bypassApproval = false,
            bool wantsRequestNotification = false)
        : AbstractClientObserver(channelFilter),
          AbstractClientApprover(channelFilter),
          AbstractClientHandler(channelFilter, wantsRequestNotification),
          mBypassApproval(bypassApproval)
    {
    }

    ~MyClient()
    {
    }

    void observeChannels(const MethodInvocationContextPtr<> &context,
            const AccountPtr &account,
            const ConnectionPtr &connection,
            const QList<ChannelPtr> &channels,
            const ChannelDispatchOperationPtr &dispatchOperation,
            const QList<ChannelRequestPtr> &requestsSatisfied,
            const QVariantMap &observerInfo)
    {
        mObserveChannelsAccount = account;
        mObserveChannelsConnection = connection;
        mObserveChannelsChannels = channels;
        mObserveChannelsDispatchOperation = dispatchOperation;
        mObserveChannelsRequestsSatisfied = requestsSatisfied;
        mObserveChannelsObserverInfo = observerInfo;

        context->setFinished();
        QTimer::singleShot(0, this, SIGNAL(observeChannelsFinished()));
    }

    void addDispatchOperation(const MethodInvocationContextPtr<> &context,
            const QList<ChannelPtr> &channels,
            const ChannelDispatchOperationPtr &dispatchOperation)
    {
        mAddDispatchOperationChannels = channels;
        mAddDispatchOperationDispatchOperation = dispatchOperation;

        context->setFinished();
        QTimer::singleShot(0, this, SIGNAL(addDispatchOperationFinished()));
    }

    bool bypassApproval() const
    {
        return mBypassApproval;
    }

    void handleChannels(const MethodInvocationContextPtr<> &context,
            const AccountPtr &account,
            const ConnectionPtr &connection,
            const QList<ChannelPtr> &channels,
            const QList<ChannelRequestPtr> &requestsSatisfied,
            const QDateTime &userActionTime,
            const QVariantMap &handlerInfo)
    {
        mHandleChannelsAccount = account;
        mHandleChannelsConnection = connection;
        mHandleChannelsChannels = channels;
        mHandleChannelsRequestsSatisfied = requestsSatisfied;
        mHandleChannelsUserActionTime = userActionTime;
        mHandleChannelsHandlerInfo = handlerInfo;

        foreach (const ChannelPtr &channel, channels) {
            connect(channel.data(),
                    SIGNAL(invalidated(Tp::DBusProxy *,
                                       const QString &, const QString &)),
                    SIGNAL(channelClosed()));
        }

        context->setFinished();
        QTimer::singleShot(0, this, SIGNAL(handleChannelsFinished()));
    }

    void addRequest(const ChannelRequestPtr &request)
    {
        mAddRequestRequest = request;
        emit requestAdded(request);
    }

    void removeRequest(const ChannelRequestPtr &request,
            const QString &errorName, const QString &errorMessage)
    {
        mRemoveRequestRequest = request;
        mRemoveRequestErrorName = errorName;
        mRemoveRequestErrorMessage = errorMessage;
        emit requestRemoved(request, errorName, errorMessage);
    }

    AccountPtr mObserveChannelsAccount;
    ConnectionPtr mObserveChannelsConnection;
    QList<ChannelPtr> mObserveChannelsChannels;
    ChannelDispatchOperationPtr mObserveChannelsDispatchOperation;
    QList<ChannelRequestPtr> mObserveChannelsRequestsSatisfied;
    QVariantMap mObserveChannelsObserverInfo;

    QList<ChannelPtr> mAddDispatchOperationChannels;
    ChannelDispatchOperationPtr mAddDispatchOperationDispatchOperation;

    bool mBypassApproval;
    AccountPtr mHandleChannelsAccount;
    ConnectionPtr mHandleChannelsConnection;
    QList<ChannelPtr> mHandleChannelsChannels;
    QList<ChannelRequestPtr> mHandleChannelsRequestsSatisfied;
    QDateTime mHandleChannelsUserActionTime;
    QVariantMap mHandleChannelsHandlerInfo;
    ChannelRequestPtr mAddRequestRequest;
    ChannelRequestPtr mRemoveRequestRequest;
    QString mRemoveRequestErrorName;
    QString mRemoveRequestErrorMessage;

Q_SIGNALS:
    void observeChannelsFinished();
    void addDispatchOperationFinished();
    void handleChannelsFinished();
    void requestAdded(const Tp::ChannelRequestPtr &request);
    void requestRemoved(const Tp::ChannelRequestPtr &request,
            const QString &errorName, const QString &errorMessage);
    void channelClosed();
};

class TestClient : public Test
{
    Q_OBJECT

public:
    TestClient(QObject *parent = 0)
        : Test(parent),
          mConnService(0), mBaseConnService(0), mContactRepo(0),
          mText1ChanService(0)
    { }

    void testObserveChannelsCommon(const AbstractClientPtr &clientObject,
            const QString &clientBusName, const QString &clientObjectPath);

protected Q_SLOTS:
    void expectSignalEmission();

private Q_SLOTS:
    void initTestCase();
    void init();

    void testRegister();
    void testObserveChannels();
    void testAddDispatchOperation();
    void testRequests();
    void testHandleChannels();

    void cleanup();
    void cleanupTestCase();

private:
    ContactsConnection *mConnService;
    TpBaseConnection *mBaseConnService;
    TpHandleRepoIface *mContactRepo;
    ExampleEchoChannel *mText1ChanService;
    ExampleEchoChannel *mText2ChanService;

    AccountManagerPtr mAM;
    AccountPtr mAccount;
    ConnectionPtr mConn;
    QString mText1ChanPath;
    QString mText2ChanPath;
    QString mConnName;
    QString mConnPath;

    ClientRegistrarPtr mClientRegistrar;
    QString mChannelRequestBusName;
    QString mChannelRequestPath;
    AbstractClientPtr mClientObject1;
    QString mClientObject1BusName;
    QString mClientObject1Path;
    AbstractClientPtr mClientObject2;
    QString mClientObject2BusName;
    QString mClientObject2Path;
    uint mUserActionTime;
};

void TestClient::expectSignalEmission()
{
    mLoop->exit(0);
}

void TestClient::initTestCase()
{
    initTestCaseImpl();

    g_type_init();
    g_set_prgname("client-client");
    tp_debug_set_flags("all");
    dbus_g_bus_get(DBUS_BUS_STARTER, 0);

    mAM = AccountManager::create();
    QVERIFY(connect(mAM->becomeReady(),
                    SIGNAL(finished(Tp::PendingOperation *)),
                    SLOT(expectSuccessfulCall(Tp::PendingOperation *))));
    QCOMPARE(mLoop->exec(), 0);
    QCOMPARE(mAM->isReady(), true);

    QVariantMap parameters;
    parameters["account"] = "foobar";
    PendingAccount *pacc = mAM->createAccount("foo",
            "bar", "foobar", parameters);
    QVERIFY(connect(pacc,
                    SIGNAL(finished(Tp::PendingOperation *)),
                    SLOT(expectSuccessfulCall(Tp::PendingOperation *))));
    QCOMPARE(mLoop->exec(), 0);
    QVERIFY(pacc->account());
    mAccount = pacc->account();

    gchar *name;
    gchar *connPath;
    GError *error = 0;

    mConnService = CONTACTS_CONNECTION(g_object_new(
            CONTACTS_TYPE_CONNECTION,
            "account", "me@example.com",
            "protocol", "example",
            0));
    QVERIFY(mConnService != 0);
    mBaseConnService = TP_BASE_CONNECTION(mConnService);
    QVERIFY(mBaseConnService != 0);

    QVERIFY(tp_base_connection_register(mBaseConnService,
                "example", &name, &connPath, &error));
    QVERIFY(error == 0);

    QVERIFY(name != 0);
    QVERIFY(connPath != 0);

    mConnName = QString::fromAscii(name);
    mConnPath = QString::fromAscii(connPath);

    g_free(name);
    g_free(connPath);

    mConn = Connection::create(mConnName, mConnPath);
    QCOMPARE(mConn->isReady(), false);

    mConn->requestConnect();

    QVERIFY(connect(mConn->requestConnect(),
                    SIGNAL(finished(Tp::PendingOperation*)),
                    SLOT(expectSuccessfulCall(Tp::PendingOperation*))));
    QCOMPARE(mLoop->exec(), 0);
    QCOMPARE(mConn->isReady(), true);
    QCOMPARE(static_cast<uint>(mConn->status()),
             static_cast<uint>(Connection::StatusConnected));

    // create a Channel by magic, rather than doing D-Bus round-trips for it

    mContactRepo = tp_base_connection_get_handles(mBaseConnService,
            TP_HANDLE_TYPE_CONTACT);
    guint handle = tp_handle_ensure(mContactRepo, "someone@localhost", 0, 0);

    mText1ChanPath = mConnPath + QLatin1String("/TextChannel1");
    QByteArray chanPath(mText1ChanPath.toAscii());
    mText1ChanService = EXAMPLE_ECHO_CHANNEL(g_object_new(
                EXAMPLE_TYPE_ECHO_CHANNEL,
                "connection", mConnService,
                "object-path", chanPath.data(),
                "handle", handle,
                NULL));

    mText2ChanPath = mConnPath + QLatin1String("/TextChannel2");
    chanPath = mText2ChanPath.toAscii();
    mText2ChanService = EXAMPLE_ECHO_CHANNEL(g_object_new(
                EXAMPLE_TYPE_ECHO_CHANNEL,
                "connection", mConnService,
                "object-path", chanPath.data(),
                "handle", handle,
                NULL));

    tp_handle_unref(mContactRepo, handle);

    mClientRegistrar = ClientRegistrar::create();

    QDBusConnection bus = mClientRegistrar->dbusConnection();
    mChannelRequestBusName = "org.freedesktop.Telepathy.ChannelDispatcher";
    mChannelRequestPath = "/org/freedesktop/Telepathy/ChannelRequest/Request1";
    QObject *request = new QObject(this);
    mUserActionTime = QDateTime::currentDateTime().toTime_t();
    new ChannelRequestAdaptor(QDBusObjectPath(mAccount->objectPath()),
            mUserActionTime,
            QString(),
            QualifiedPropertyValueMapList(),
            QStringList(),
            request);
    QVERIFY(bus.registerService(mChannelRequestBusName));
    QVERIFY(bus.registerObject(mChannelRequestPath, request));
}

void TestClient::init()
{
    initImpl();
}

void TestClient::testRegister()
{
    // invalid client
    QVERIFY(!mClientRegistrar->registerClient(AbstractClientPtr(), "foo"));

    ChannelClassList filters;
    QMap<QString, QDBusVariant> filter;
    filter.insert(QLatin1String(TELEPATHY_INTERFACE_CHANNEL ".ChannelType"),
                  QDBusVariant(TELEPATHY_INTERFACE_CHANNEL_TYPE_TEXT));
    filter.insert(QLatin1String(TELEPATHY_INTERFACE_CHANNEL ".TargetHandleType"),
                  QDBusVariant(Tp::HandleTypeContact));
    filters.append(filter);
    mClientObject1 = MyClient::create(filters, false, true);
    QVERIFY(mClientRegistrar->registerClient(mClientObject1, "foo"));
    QVERIFY(mClientRegistrar->registeredClients().contains(mClientObject1));

    // no op - client already registered
    QVERIFY(mClientRegistrar->registerClient(mClientObject1, "foo"));

    filters.clear();
    filter.clear();
    filter.insert(QLatin1String(TELEPATHY_INTERFACE_CHANNEL ".ChannelType"),
                  QDBusVariant(TELEPATHY_INTERFACE_CHANNEL_TYPE_STREAMED_MEDIA));
    filter.insert(QLatin1String(TELEPATHY_INTERFACE_CHANNEL ".TargetHandleType"),
                  QDBusVariant(Tp::HandleTypeContact));
    filters.append(filter);
    mClientObject2 = MyClient::create(filters, true, true);
    QVERIFY(mClientRegistrar->registerClient(mClientObject2, "foo", true));
    QVERIFY(mClientRegistrar->registeredClients().contains(mClientObject2));

    // no op - client already registered
    QVERIFY(mClientRegistrar->registerClient(mClientObject2, "foo", true));

    QDBusConnection bus = mClientRegistrar->dbusConnection();
    QDBusConnectionInterface *busIface = bus.interface();
    QStringList registeredServicesNames = busIface->registeredServiceNames();
    QVERIFY(registeredServicesNames.filter(
                QRegExp("^" "org.freedesktop.Telepathy.Client.foo"
                        ".([_A-Za-z][_A-Za-z0-9]*)")).size() == 1);

    mClientObject1BusName = "org.freedesktop.Telepathy.Client.foo";
    mClientObject1Path = "/org/freedesktop/Telepathy/Client/foo";

    mClientObject2BusName = registeredServicesNames.filter(
            QRegExp("org.freedesktop.Telepathy.Client.foo._*")).first();
    mClientObject2Path = QString("/%1").arg(mClientObject2BusName);
    mClientObject2Path.replace('.', '/');
}

void TestClient::testRequests()
{
    QDBusConnection bus = mClientRegistrar->dbusConnection();
    ClientInterfaceRequestsInterface *handlerRequestsIface = new ClientInterfaceRequestsInterface(bus,
            mClientObject1BusName, mClientObject1Path, this);

    MyClient *client = dynamic_cast<MyClient*>(mClientObject1.data());
    connect(client,
            SIGNAL(requestAdded(const Tp::ChannelRequestPtr &)),
            SLOT(expectSignalEmission()));
    handlerRequestsIface->AddRequest(QDBusObjectPath(mChannelRequestPath), QVariantMap());
    if (!client->mAddRequestRequest) {
        QCOMPARE(mLoop->exec(), 0);
    }
    QCOMPARE(client->mAddRequestRequest->objectPath(),
             mChannelRequestPath);

    connect(client,
            SIGNAL(requestRemoved(const Tp::ChannelRequestPtr &,
                                  const QString &,
                                  const QString &)),
            SLOT(expectSignalEmission()));
    handlerRequestsIface->RemoveRequest(QDBusObjectPath(mChannelRequestPath),
            TELEPATHY_ERROR_NOT_AVAILABLE, "Not available");
    if (!client->mRemoveRequestRequest) {
        QCOMPARE(mLoop->exec(), 0);
    }
    QCOMPARE(client->mRemoveRequestRequest->objectPath(),
             mChannelRequestPath);
    QCOMPARE(client->mRemoveRequestErrorName,
             QString(TELEPATHY_ERROR_NOT_AVAILABLE));
    QCOMPARE(client->mRemoveRequestErrorMessage,
             QString("Not available"));
}

void TestClient::testObserveChannelsCommon(const AbstractClientPtr &clientObject,
        const QString &clientBusName, const QString &clientObjectPath)
{
    QDBusConnection bus = mClientRegistrar->dbusConnection();

    ClientObserverInterface *observeIface = new ClientObserverInterface(bus,
            clientBusName, clientObjectPath, this);
    MyClient *client = dynamic_cast<MyClient*>(clientObject.data());
    connect(client,
            SIGNAL(observeChannelsFinished()),
            SLOT(expectSignalEmission()));
    ChannelDetailsList channelDetailsList;
    ChannelDetails channelDetails = { QDBusObjectPath(mText1ChanPath), QVariantMap() };
    channelDetailsList.append(channelDetails);
    observeIface->ObserveChannels(QDBusObjectPath(mAccount->objectPath()),
            QDBusObjectPath(mConn->objectPath()),
            channelDetailsList,
            QDBusObjectPath("/"),
            ObjectPathList() << QDBusObjectPath(mChannelRequestPath),
            QVariantMap());
    QCOMPARE(mLoop->exec(), 0);

    QCOMPARE(client->mObserveChannelsAccount->objectPath(), mAccount->objectPath());
    QCOMPARE(client->mObserveChannelsConnection->objectPath(), mConn->objectPath());
    QCOMPARE(client->mObserveChannelsChannels.first()->objectPath(), mText1ChanPath);
    QCOMPARE(client->mObserveChannelsDispatchOperation->objectPath(), QString("/"));
    QCOMPARE(client->mObserveChannelsRequestsSatisfied.first()->objectPath(), mChannelRequestPath);
}

void TestClient::testObserveChannels()
{
    testObserveChannelsCommon(mClientObject1,
            mClientObject1BusName, mClientObject1Path);
    testObserveChannelsCommon(mClientObject2,
            mClientObject2BusName, mClientObject2Path);
}

void TestClient::testAddDispatchOperation()
{
    QDBusConnection bus = mClientRegistrar->dbusConnection();

    ClientApproverInterface *approverIface = new ClientApproverInterface(bus,
            mClientObject1BusName, mClientObject1Path, this);
    MyClient *client = dynamic_cast<MyClient*>(mClientObject1.data());
    connect(client,
            SIGNAL(addDispatchOperationFinished()),
            SLOT(expectSignalEmission()));
    ChannelDetailsList channelDetailsList;
    ChannelDetails channelDetails = { QDBusObjectPath(mText1ChanPath), QVariantMap() };
    channelDetailsList.append(channelDetails);
    QVariantMap dispatchOperationProperties;
    dispatchOperationProperties.insert(TELEPATHY_INTERFACE_CHANNEL_DISPATCH_OPERATION ".Connection",
            QVariant::fromValue(QDBusObjectPath(mConn->objectPath())));
    dispatchOperationProperties.insert(TELEPATHY_INTERFACE_CHANNEL_DISPATCH_OPERATION ".Account",
            QVariant::fromValue(QDBusObjectPath(mAccount->objectPath())));
    approverIface->AddDispatchOperation(channelDetailsList,
            QDBusObjectPath("/"),
            dispatchOperationProperties);
    QCOMPARE(mLoop->exec(), 0);

    QCOMPARE(client->mAddDispatchOperationChannels.first()->objectPath(), mText1ChanPath);
    QCOMPARE(client->mAddDispatchOperationDispatchOperation->objectPath(), QString("/"));
}

void TestClient::testHandleChannels()
{
    QDBusConnection bus = mClientRegistrar->dbusConnection();

    // object 1
    ClientHandlerInterface *handler1Iface = new ClientHandlerInterface(bus,
            mClientObject1BusName, mClientObject1Path, this);
    MyClient *client1 = dynamic_cast<MyClient*>(mClientObject1.data());
    connect(client1,
            SIGNAL(handleChannelsFinished()),
            SLOT(expectSignalEmission()));
    ChannelDetailsList channelDetailsList;
    ChannelDetails channelDetails = { QDBusObjectPath(mText1ChanPath), QVariantMap() };
    channelDetailsList.append(channelDetails);
    handler1Iface->HandleChannels(QDBusObjectPath(mAccount->objectPath()),
            QDBusObjectPath(mConn->objectPath()),
            channelDetailsList,
            ObjectPathList() << QDBusObjectPath(mChannelRequestPath),
            mUserActionTime,
            QVariantMap());
    QCOMPARE(mLoop->exec(), 0);

    QCOMPARE(client1->mHandleChannelsAccount->objectPath(), mAccount->objectPath());
    QCOMPARE(client1->mHandleChannelsConnection->objectPath(), mConn->objectPath());
    QCOMPARE(client1->mHandleChannelsChannels.first()->objectPath(), mText1ChanPath);
    QCOMPARE(client1->mHandleChannelsRequestsSatisfied.first()->objectPath(), mChannelRequestPath);
    QCOMPARE(client1->mHandleChannelsUserActionTime.toTime_t(), mUserActionTime);

    Tp::ObjectPathList handledChannels = handler1Iface->HandledChannels();
    QVERIFY(handledChannels.contains(QDBusObjectPath(mText1ChanPath)));

    // object 2
    ClientHandlerInterface *handler2Iface = new ClientHandlerInterface(bus,
            mClientObject2BusName, mClientObject2Path, this);
    MyClient *client2 = dynamic_cast<MyClient*>(mClientObject2.data());
    connect(client2,
            SIGNAL(handleChannelsFinished()),
            SLOT(expectSignalEmission()));
    channelDetailsList.clear();
    channelDetails.channel = QDBusObjectPath(mText2ChanPath);
    channelDetailsList.append(channelDetails);
    handler2Iface->HandleChannels(QDBusObjectPath(mAccount->objectPath()),
            QDBusObjectPath(mConn->objectPath()),
            channelDetailsList,
            ObjectPathList() << QDBusObjectPath(mChannelRequestPath),
            mUserActionTime,
            QVariantMap());
    QCOMPARE(mLoop->exec(), 0);

    QCOMPARE(client2->mHandleChannelsAccount->objectPath(), mAccount->objectPath());
    QCOMPARE(client2->mHandleChannelsConnection->objectPath(), mConn->objectPath());
    QCOMPARE(client2->mHandleChannelsChannels.first()->objectPath(), mText2ChanPath);
    QCOMPARE(client2->mHandleChannelsRequestsSatisfied.first()->objectPath(), mChannelRequestPath);
    QCOMPARE(client2->mHandleChannelsUserActionTime.toTime_t(), mUserActionTime);

    handledChannels = handler1Iface->HandledChannels();
    QVERIFY(handledChannels.contains(QDBusObjectPath(mText1ChanPath)));
    QVERIFY(handledChannels.contains(QDBusObjectPath(mText2ChanPath)));
    handledChannels = handler2Iface->HandledChannels();
    QVERIFY(handledChannels.contains(QDBusObjectPath(mText1ChanPath)));
    QVERIFY(handledChannels.contains(QDBusObjectPath(mText2ChanPath)));

    mClientRegistrar->unregisterClient(mClientObject1);
    handledChannels = handler2Iface->HandledChannels();
    QVERIFY(handledChannels.contains(QDBusObjectPath(mText2ChanPath)));

    g_object_unref(mText2ChanService);
    connect(client2,
            SIGNAL(channelClosed()),
            SLOT(expectSignalEmission()));
    QCOMPARE(mLoop->exec(), 0);
    handledChannels = handler2Iface->HandledChannels();
    QVERIFY(handledChannels.isEmpty());
}

void TestClient::cleanup()
{
    cleanupImpl();
}

void TestClient::cleanupTestCase()
{
    cleanupTestCaseImpl();
}

QTEST_MAIN(TestClient)
#include "_gen/client.cpp.moc.hpp"
