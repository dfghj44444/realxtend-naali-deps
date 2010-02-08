#define IN_TELEPATHY_QT4_HEADER
#include "TelepathyQt4/client.h"

namespace Tp
{
namespace Client
{

ClientInterface::ClientInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

ClientInterface::ClientInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

ClientInterface::ClientInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

void ClientInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{

    Tp::AbstractInterface::invalidate(proxy, error, message);
}

ClientApproverInterface::ClientApproverInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

ClientApproverInterface::ClientApproverInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

ClientApproverInterface::ClientApproverInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

ClientApproverInterface::ClientApproverInterface(const Tp::Client::ClientInterface& mainInterface)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), mainInterface.parent())
{
}

ClientApproverInterface::ClientApproverInterface(const Tp::Client::ClientInterface& mainInterface, QObject *parent)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), parent)
{
}

void ClientApproverInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{

    Tp::AbstractInterface::invalidate(proxy, error, message);
}

ClientHandlerInterface::ClientHandlerInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

ClientHandlerInterface::ClientHandlerInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

ClientHandlerInterface::ClientHandlerInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

ClientHandlerInterface::ClientHandlerInterface(const Tp::Client::ClientInterface& mainInterface)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), mainInterface.parent())
{
}

ClientHandlerInterface::ClientHandlerInterface(const Tp::Client::ClientInterface& mainInterface, QObject *parent)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), parent)
{
}

void ClientHandlerInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{

    Tp::AbstractInterface::invalidate(proxy, error, message);
}

ClientInterfaceRequestsInterface::ClientInterfaceRequestsInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

ClientInterfaceRequestsInterface::ClientInterfaceRequestsInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

ClientInterfaceRequestsInterface::ClientInterfaceRequestsInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

ClientInterfaceRequestsInterface::ClientInterfaceRequestsInterface(const Tp::Client::ClientInterface& mainInterface)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), mainInterface.parent())
{
}

ClientInterfaceRequestsInterface::ClientInterfaceRequestsInterface(const Tp::Client::ClientInterface& mainInterface, QObject *parent)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), parent)
{
}

void ClientInterfaceRequestsInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{

    Tp::AbstractInterface::invalidate(proxy, error, message);
}

ClientObserverInterface::ClientObserverInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

ClientObserverInterface::ClientObserverInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

ClientObserverInterface::ClientObserverInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

ClientObserverInterface::ClientObserverInterface(const Tp::Client::ClientInterface& mainInterface)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), mainInterface.parent())
{
}

ClientObserverInterface::ClientObserverInterface(const Tp::Client::ClientInterface& mainInterface, QObject *parent)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), parent)
{
}

void ClientObserverInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{

    Tp::AbstractInterface::invalidate(proxy, error, message);
}
}
}
