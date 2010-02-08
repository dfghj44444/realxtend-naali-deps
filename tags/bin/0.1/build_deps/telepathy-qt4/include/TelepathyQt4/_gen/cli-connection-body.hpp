#define IN_TELEPATHY_QT4_HEADER
#include "TelepathyQt4/connection.h"

namespace Tp
{
namespace Client
{

ConnectionInterface::ConnectionInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

ConnectionInterface::ConnectionInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

ConnectionInterface::ConnectionInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

void ConnectionInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{
    disconnect(this, SIGNAL(SelfHandleChanged(uint)), NULL, NULL);
    disconnect(this, SIGNAL(NewChannel(const QDBusObjectPath&, const QString&, uint, uint, bool)), NULL, NULL);
    disconnect(this, SIGNAL(ConnectionError(const QString&, const QVariantMap&)), NULL, NULL);
    disconnect(this, SIGNAL(StatusChanged(uint, uint)), NULL, NULL);

    Tp::AbstractInterface::invalidate(proxy, error, message);
}

ConnectionInterfaceAliasingInterface::ConnectionInterfaceAliasingInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

ConnectionInterfaceAliasingInterface::ConnectionInterfaceAliasingInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

ConnectionInterfaceAliasingInterface::ConnectionInterfaceAliasingInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

ConnectionInterfaceAliasingInterface::ConnectionInterfaceAliasingInterface(const Tp::Client::ConnectionInterface& mainInterface)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), mainInterface.parent())
{
}

ConnectionInterfaceAliasingInterface::ConnectionInterfaceAliasingInterface(const Tp::Client::ConnectionInterface& mainInterface, QObject *parent)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), parent)
{
}

void ConnectionInterfaceAliasingInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{
    disconnect(this, SIGNAL(AliasesChanged(const Tp::AliasPairList&)), NULL, NULL);

    Tp::AbstractInterface::invalidate(proxy, error, message);
}

ConnectionInterfaceAvatarsInterface::ConnectionInterfaceAvatarsInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

ConnectionInterfaceAvatarsInterface::ConnectionInterfaceAvatarsInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

ConnectionInterfaceAvatarsInterface::ConnectionInterfaceAvatarsInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

ConnectionInterfaceAvatarsInterface::ConnectionInterfaceAvatarsInterface(const Tp::Client::ConnectionInterface& mainInterface)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), mainInterface.parent())
{
}

ConnectionInterfaceAvatarsInterface::ConnectionInterfaceAvatarsInterface(const Tp::Client::ConnectionInterface& mainInterface, QObject *parent)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), parent)
{
}

void ConnectionInterfaceAvatarsInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{
    disconnect(this, SIGNAL(AvatarUpdated(uint, const QString&)), NULL, NULL);
    disconnect(this, SIGNAL(AvatarRetrieved(uint, const QString&, const QByteArray&, const QString&)), NULL, NULL);

    Tp::AbstractInterface::invalidate(proxy, error, message);
}

ConnectionInterfaceCapabilitiesInterface::ConnectionInterfaceCapabilitiesInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

ConnectionInterfaceCapabilitiesInterface::ConnectionInterfaceCapabilitiesInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

ConnectionInterfaceCapabilitiesInterface::ConnectionInterfaceCapabilitiesInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

ConnectionInterfaceCapabilitiesInterface::ConnectionInterfaceCapabilitiesInterface(const Tp::Client::ConnectionInterface& mainInterface)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), mainInterface.parent())
{
}

ConnectionInterfaceCapabilitiesInterface::ConnectionInterfaceCapabilitiesInterface(const Tp::Client::ConnectionInterface& mainInterface, QObject *parent)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), parent)
{
}

void ConnectionInterfaceCapabilitiesInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{
    disconnect(this, SIGNAL(CapabilitiesChanged(const Tp::CapabilityChangeList&)), NULL, NULL);

    Tp::AbstractInterface::invalidate(proxy, error, message);
}

ConnectionInterfaceContactsInterface::ConnectionInterfaceContactsInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

ConnectionInterfaceContactsInterface::ConnectionInterfaceContactsInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

ConnectionInterfaceContactsInterface::ConnectionInterfaceContactsInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

ConnectionInterfaceContactsInterface::ConnectionInterfaceContactsInterface(const Tp::Client::ConnectionInterface& mainInterface)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), mainInterface.parent())
{
}

ConnectionInterfaceContactsInterface::ConnectionInterfaceContactsInterface(const Tp::Client::ConnectionInterface& mainInterface, QObject *parent)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), parent)
{
}

void ConnectionInterfaceContactsInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{

    Tp::AbstractInterface::invalidate(proxy, error, message);
}

ConnectionInterfacePresenceInterface::ConnectionInterfacePresenceInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

ConnectionInterfacePresenceInterface::ConnectionInterfacePresenceInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

ConnectionInterfacePresenceInterface::ConnectionInterfacePresenceInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

ConnectionInterfacePresenceInterface::ConnectionInterfacePresenceInterface(const Tp::Client::ConnectionInterface& mainInterface)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), mainInterface.parent())
{
}

ConnectionInterfacePresenceInterface::ConnectionInterfacePresenceInterface(const Tp::Client::ConnectionInterface& mainInterface, QObject *parent)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), parent)
{
}

void ConnectionInterfacePresenceInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{
    disconnect(this, SIGNAL(PresenceUpdate(const Tp::ContactPresences&)), NULL, NULL);

    Tp::AbstractInterface::invalidate(proxy, error, message);
}

ConnectionInterfaceRequestsInterface::ConnectionInterfaceRequestsInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

ConnectionInterfaceRequestsInterface::ConnectionInterfaceRequestsInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

ConnectionInterfaceRequestsInterface::ConnectionInterfaceRequestsInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

ConnectionInterfaceRequestsInterface::ConnectionInterfaceRequestsInterface(const Tp::Client::ConnectionInterface& mainInterface)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), mainInterface.parent())
{
}

ConnectionInterfaceRequestsInterface::ConnectionInterfaceRequestsInterface(const Tp::Client::ConnectionInterface& mainInterface, QObject *parent)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), parent)
{
}

void ConnectionInterfaceRequestsInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{
    disconnect(this, SIGNAL(NewChannels(const Tp::ChannelDetailsList&)), NULL, NULL);
    disconnect(this, SIGNAL(ChannelClosed(const QDBusObjectPath&)), NULL, NULL);

    Tp::AbstractInterface::invalidate(proxy, error, message);
}

ConnectionInterfaceSimplePresenceInterface::ConnectionInterfaceSimplePresenceInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

ConnectionInterfaceSimplePresenceInterface::ConnectionInterfaceSimplePresenceInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

ConnectionInterfaceSimplePresenceInterface::ConnectionInterfaceSimplePresenceInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

ConnectionInterfaceSimplePresenceInterface::ConnectionInterfaceSimplePresenceInterface(const Tp::Client::ConnectionInterface& mainInterface)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), mainInterface.parent())
{
}

ConnectionInterfaceSimplePresenceInterface::ConnectionInterfaceSimplePresenceInterface(const Tp::Client::ConnectionInterface& mainInterface, QObject *parent)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), parent)
{
}

void ConnectionInterfaceSimplePresenceInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{
    disconnect(this, SIGNAL(PresencesChanged(const Tp::SimpleContactPresences&)), NULL, NULL);

    Tp::AbstractInterface::invalidate(proxy, error, message);
}
}
}
