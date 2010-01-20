/*
 * This file is part of TelepathyQt4
 *
 * Copyright (C) 2009 Collabora Ltd. <http://www.collabora.co.uk/>
 * Copyright (C) 2009 Nokia Corporation
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <TelepathyQt4/ChannelDispatchOperation>

#include "TelepathyQt4/_gen/cli-channel-dispatch-operation-body.hpp"
#include "TelepathyQt4/_gen/cli-channel-dispatch-operation.moc.hpp"
#include "TelepathyQt4/_gen/channel-dispatch-operation.moc.hpp"

#include "TelepathyQt4/channel-factory.h"
#include "TelepathyQt4/debug-internal.h"

#include <TelepathyQt4/Account>
#include <TelepathyQt4/Channel>
#include <TelepathyQt4/Connection>
#include <TelepathyQt4/PendingReady>
#include <TelepathyQt4/PendingVoidMethodCall>

/**
 * \addtogroup clientsideproxies Client-side proxies
 *
 * Proxy objects representing remote service objects accessed via D-Bus.
 *
 * In addition to providing direct access to methods, signals and properties
 * exported by the remote objects, some of these proxies offer features like
 * automatic inspection of remote object capabilities, property tracking,
 * backwards compatibility helpers for older services and other utilities.
 */

/**
 * \defgroup clientchanneldispatchoperation ChannelDispatchOperation proxies
 * \ingroup clientsideproxies
 *
 * Proxy objects representing remote Telepathy Channel Dispatch Operations and
 * their optional interfaces.
 */

namespace Tp
{

struct ChannelDispatchOperation::Private
{
    Private(ChannelDispatchOperation *parent);
    ~Private();

    static void introspectMain(Private *self);

    void extractMainProps(const QVariantMap &props,
            bool immutableProperties);
    void checkReady();

    // Public object
    ChannelDispatchOperation *parent;

    // Instance of generated interface class
    Client::ChannelDispatchOperationInterface *baseInterface;

    // Optional interface proxies
    Client::DBus::PropertiesInterface *properties;

    ReadinessHelper *readinessHelper;

    // Introspection
    ConnectionPtr connection;
    AccountPtr account;
    QList<ChannelPtr> channels;
    QStringList possibleHandlers;
};

ChannelDispatchOperation::Private::Private(ChannelDispatchOperation *parent)
    : parent(parent),
      baseInterface(new Client::ChannelDispatchOperationInterface(
                    parent->dbusConnection(), parent->busName(),
                    parent->objectPath(), parent)),
      properties(0),
      readinessHelper(parent->readinessHelper())
{
    debug() << "Creating new ChannelDispatchOperation:" << parent->objectPath();

    parent->connect(baseInterface,
            SIGNAL(Finished()),
            SLOT(onFinished()));

    ReadinessHelper::Introspectables introspectables;

    // As ChannelDispatchOperation does not have predefined statuses let's simulate one (0)
    ReadinessHelper::Introspectable introspectableCore(
        QSet<uint>() << 0,                                           // makesSenseForStatuses
        Features(),                                                  // dependsOnFeatures
        QStringList(),                                               // dependsOnInterfaces
        (ReadinessHelper::IntrospectFunc) &Private::introspectMain,
        this);
    introspectables[FeatureCore] = introspectableCore;

    readinessHelper->addIntrospectables(introspectables);
}

ChannelDispatchOperation::Private::~Private()
{
}

void ChannelDispatchOperation::Private::introspectMain(ChannelDispatchOperation::Private *self)
{
    if (!self->properties) {
        self->properties = self->parent->propertiesInterface();
        Q_ASSERT(self->properties != 0);
    }

    self->parent->connect(self->baseInterface,
            SIGNAL(ChannelLost(const QDBusObjectPath &, const QString &, const QString &)),
            SLOT(onChannelLost(const QDBusObjectPath &, const QString &, const QString &)));

    debug() << "Calling Properties::GetAll(ChannelDispatchOperation)";
    QDBusPendingCallWatcher *watcher =
        new QDBusPendingCallWatcher(
                self->properties->GetAll(TELEPATHY_INTERFACE_CHANNEL_DISPATCH_OPERATION),
                self->parent);
    self->parent->connect(watcher,
            SIGNAL(finished(QDBusPendingCallWatcher*)),
            SLOT(gotMainProperties(QDBusPendingCallWatcher*)));
}

void ChannelDispatchOperation::Private::extractMainProps(const QVariantMap &props,
        bool immutableProperties)
{
    parent->setInterfaces(qdbus_cast<QStringList>(props.value("Interfaces")));

    if (!connection && props.contains("Connection")) {
        QDBusObjectPath connectionObjectPath =
            qdbus_cast<QDBusObjectPath>(props.value("Connection"));
        QString connectionBusName =
            connectionObjectPath.path().mid(1).replace('/', '.');
        connection = Connection::create(
                connectionBusName,
                connectionObjectPath.path());
    }

    if (!account && props.contains("Account")) {
        QDBusObjectPath accountObjectPath =
            qdbus_cast<QDBusObjectPath>(props.value("Account"));
        account = Account::create(
                TELEPATHY_ACCOUNT_MANAGER_BUS_NAME,
                accountObjectPath.path());
    }

    if (!immutableProperties) {
        ChannelDetailsList channelDetailsList =
            qdbus_cast<ChannelDetailsList>(props.value("Channels"));
        ChannelPtr channel;
        foreach (const ChannelDetails &channelDetails, channelDetailsList) {
            channel = ChannelFactory::create(connection,
                    channelDetails.channel.path(),
                    channelDetails.properties);
            channels.append(channel);
        }
    }

    possibleHandlers = qdbus_cast<QStringList>(props.value("PossibleHandlers"));
}

void ChannelDispatchOperation::Private::checkReady()
{
    if ((connection && !connection->isReady()) ||
        (account && !account->isReady())) {
        return;
    }

    foreach (const ChannelPtr &channel, channels) {
        if (!channel->isReady()) {
            return;
        }
    }

    readinessHelper->setIntrospectCompleted(FeatureCore, true);
}

/**
 * \class ChannelDispatchOperation
 * \ingroup clientchanneldispatchoperation
 * \headerfile <TelepathyQt4/channel-dispatch-operation.h> <TelepathyQt4/ChannelDispatchOperation>
 *
 * High-level proxy object for accessing remote Telepathy
 * ChannelDispatchOperation objects.
 *
 * One of the channel dispatcher's functions is to offer incoming channels to
 * Approver clients for approval. An approver should generally ask the user
 * whether they want to participate in the requested communication channels
 * (join the chat or chatroom, answer the call, accept the file transfer, or
 * whatever is appropriate). A collection of channels offered in this way
 * is represented by a ChannelDispatchOperation object.
 *
 * If the user wishes to accept the communication channels, the approver
 * should call handleWith() to indicate the user's or approver's preferred
 * handler for the channels (the empty string indicates no particular
 * preference, and will cause any suitable handler to be used).
 *
 * If the user wishes to reject the communication channels, or if the user
 * accepts the channels and the approver will handle them itself, the approver
 * should call claim(). If the resulting PendingOperation succeeds, the approver
 * immediately has control over the channels as their primary handler,
 * and may do anything with them (in particular, it may close them in whatever
 * way seems most appropriate).
 *
 * There are various situations in which the channel dispatch operation will
 * be closed, causing the DBusProxy::invalidated() signal to be emitted. If this
 * happens, the approver should stop prompting the user.
 *
 * Because all approvers are launched simultaneously, the user might respond
 * to another approver; if this happens, the invalidated signal will be
 * emitted with the error code %TELEPATHY_QT4_ERROR_OBJECT_REMOVED.
 *
 * If a channel closes, the signal channelLost() is emitted. If all channels
 * close, there is nothing more to dispatch, so the invalidated signal will be
 * emitted with the error code %TELEPATHY_QT4_ERROR_OBJECT_REMOVED.
 *
 * If the channel dispatcher crashes or exits, the invalidated
 * signal will be emitted with the error code
 * %TELEPATHY_DBUS_ERROR_NAME_HAS_NO_OWNER. In a high-quality implementation,
 * the dispatcher should be restarted, at which point it will create new
 * channel dispatch operations for any undispatched channels, and the approver
 * will be notified again.
 */

const Feature ChannelDispatchOperation::FeatureCore = Feature(ChannelDispatchOperation::staticMetaObject.className(), 0, true);

ChannelDispatchOperationPtr ChannelDispatchOperation::create(const QString &objectPath,
        const QVariantMap &immutableProperties)
{
    return ChannelDispatchOperationPtr(new ChannelDispatchOperation(
                QDBusConnection::sessionBus(), objectPath,
                immutableProperties));
}

ChannelDispatchOperationPtr ChannelDispatchOperation::create(const QDBusConnection &bus,
        const QString &objectPath, const QVariantMap &immutableProperties)
{
    return ChannelDispatchOperationPtr(new ChannelDispatchOperation(
                bus, objectPath, immutableProperties));
}

ChannelDispatchOperation::ChannelDispatchOperation(const QDBusConnection &bus,
        const QString &objectPath, const QVariantMap &immutableProperties)
    : StatefulDBusProxy(bus,
            "org.freedesktop.Telepathy.ChannelDispatcher",
            objectPath),
      OptionalInterfaceFactory<ChannelDispatchOperation>(this),
      ReadyObject(this, FeatureCore),
      mPriv(new Private(this))
{
    mPriv->extractMainProps(immutableProperties, true);
}

/**
 * Class destructor.
 */
ChannelDispatchOperation::~ChannelDispatchOperation()
{
    delete mPriv;
}

ConnectionPtr ChannelDispatchOperation::connection() const
{
    return mPriv->connection;
}

AccountPtr ChannelDispatchOperation::account() const
{
    return mPriv->account;
}

QList<ChannelPtr> ChannelDispatchOperation::channels() const
{
    if (!isReady()) {
        warning() << "ChannelDispatchOperation::channels called with channel "
            "not ready";
    }
    return mPriv->channels;
}

QStringList ChannelDispatchOperation::possibleHandlers() const
{
    return mPriv->possibleHandlers;
}

PendingOperation *ChannelDispatchOperation::handleWith(const QString &handler)
{
    return new PendingVoidMethodCall(this,
            mPriv->baseInterface->HandleWith(handler));
}

PendingOperation *ChannelDispatchOperation::claim()
{
    return new PendingVoidMethodCall(this,
            mPriv->baseInterface->Claim());
}

/**
 * Get the ChannelDispatchOperationInterface for this ChannelDispatchOperation
 * class. This method is protected since the convenience methods provided by
 * this class should always be used instead of the interface by users of the
 * class.
 *
 * \return A pointer to the existing ChannelDispatchOperationInterface for this
 *         ChannelDispatchOperation
 */
Client::ChannelDispatchOperationInterface *ChannelDispatchOperation::baseInterface() const
{
    return mPriv->baseInterface;
}

void ChannelDispatchOperation::onFinished()
{
    debug() << "ChannelDispatchOperation finished and was removed";
    invalidate(TELEPATHY_QT4_ERROR_OBJECT_REMOVED,
               "ChannelDispatchOperation finished and was removed");
}

void ChannelDispatchOperation::gotMainProperties(QDBusPendingCallWatcher *watcher)
{
    QDBusPendingReply<QVariantMap> reply = *watcher;
    QVariantMap props;

    if (!reply.isError()) {
        debug() << "Got reply to Properties::GetAll(ChannelDispatchOperation)";
        props = reply.value();

        mPriv->extractMainProps(props, false);

        if (mPriv->connection) {
            connect(mPriv->connection->becomeReady(),
                    SIGNAL(finished(Tp::PendingOperation *)),
                    SLOT(onConnectionReady(Tp::PendingOperation *)));
        } else {
            warning() << "Properties.GetAll(ChannelDispatchOperation) is missing "
                "connection property, ignoring";
        }

        if (mPriv->account) {
            connect(mPriv->account->becomeReady(),
                    SIGNAL(finished(Tp::PendingOperation *)),
                    SLOT(onAccountReady(Tp::PendingOperation *)));
        } else {
            warning() << "Properties.GetAll(ChannelDispatchOperation) is missing "
                "account property, ignoring";
        }

        foreach (const ChannelPtr &channel, mPriv->channels) {
            connect(channel->becomeReady(),
                    SIGNAL(finished(Tp::PendingOperation *)),
                    SLOT(onChannelReady(Tp::PendingOperation *)));
        }

        mPriv->checkReady();
    }
    else {
        mPriv->readinessHelper->setIntrospectCompleted(FeatureCore,
                false, reply.error());
        warning().nospace() << "Properties::GetAll(ChannelDispatchOperation) failed with "
            << reply.error().name() << ": " << reply.error().message();
    }
}

void ChannelDispatchOperation::onConnectionReady(PendingOperation *op)
{
    if (op->isError()) {
        warning() << "ChannelDispatchOperation: Unable to make connection ready";
        mPriv->readinessHelper->setIntrospectCompleted(FeatureCore, false,
                op->errorName(), op->errorMessage());
        return;
    }
    mPriv->checkReady();
}

void ChannelDispatchOperation::onAccountReady(PendingOperation *op)
{
    if (op->isError()) {
        warning() << "ChannelDispatchOperation: Unable to make account ready";
        mPriv->readinessHelper->setIntrospectCompleted(FeatureCore, false,
                op->errorName(), op->errorMessage());
        return;
    }
    mPriv->checkReady();
}

void ChannelDispatchOperation::onChannelReady(PendingOperation *op)
{
    if (op->isError()) {
        PendingReady *pr = qobject_cast<PendingReady*>(op);
        ChannelPtr channel(qobject_cast<Channel*>(pr->object()));
        // only fail if channel still exists (channelLost was not emitted)
        if (mPriv->channels.contains(channel)) {
            warning() << "ChannelDispatchOperation: Unable to make channel ready";
            mPriv->readinessHelper->setIntrospectCompleted(FeatureCore, false,
                    op->errorName(), op->errorMessage());
        }
        return;
    }
    mPriv->checkReady();
}

void ChannelDispatchOperation::onChannelLost(
        const QDBusObjectPath &channelObjectPath,
        const QString &errorName, const QString &errorMessage)
{
    foreach (const ChannelPtr &channel, mPriv->channels) {
        if (channel->objectPath() == channelObjectPath.path()) {
            emit channelLost(channel, errorName, errorMessage);
            mPriv->channels.removeOne(channel);
            return;
        }
    }
}

} // Tp
