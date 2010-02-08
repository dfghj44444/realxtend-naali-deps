#define IN_TELEPATHY_QT4_HEADER
#include "TelepathyQt4/dbus.h"

namespace Tp
{
namespace Client
{
namespace DBus
{

DBusDaemonInterface::DBusDaemonInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

DBusDaemonInterface::DBusDaemonInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

DBusDaemonInterface::DBusDaemonInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

DBusDaemonInterface::DBusDaemonInterface(const Tp::AbstractInterface& mainInterface)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), mainInterface.parent())
{
}

DBusDaemonInterface::DBusDaemonInterface(const Tp::AbstractInterface& mainInterface, QObject *parent)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), parent)
{
}

void DBusDaemonInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{
    disconnect(this, SIGNAL(NameOwnerChanged(const QString&, const QString&, const QString&)), NULL, NULL);
    disconnect(this, SIGNAL(NameLost(const QString&)), NULL, NULL);
    disconnect(this, SIGNAL(NameAcquired(const QString&)), NULL, NULL);

    Tp::AbstractInterface::invalidate(proxy, error, message);
}

IntrospectableInterface::IntrospectableInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

IntrospectableInterface::IntrospectableInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

IntrospectableInterface::IntrospectableInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

IntrospectableInterface::IntrospectableInterface(const Tp::AbstractInterface& mainInterface)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), mainInterface.parent())
{
}

IntrospectableInterface::IntrospectableInterface(const Tp::AbstractInterface& mainInterface, QObject *parent)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), parent)
{
}

void IntrospectableInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{

    Tp::AbstractInterface::invalidate(proxy, error, message);
}

PeerInterface::PeerInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

PeerInterface::PeerInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

PeerInterface::PeerInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

PeerInterface::PeerInterface(const Tp::AbstractInterface& mainInterface)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), mainInterface.parent())
{
}

PeerInterface::PeerInterface(const Tp::AbstractInterface& mainInterface, QObject *parent)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), parent)
{
}

void PeerInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{

    Tp::AbstractInterface::invalidate(proxy, error, message);
}

PropertiesInterface::PropertiesInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

PropertiesInterface::PropertiesInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

PropertiesInterface::PropertiesInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

PropertiesInterface::PropertiesInterface(const Tp::AbstractInterface& mainInterface)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), mainInterface.parent())
{
}

PropertiesInterface::PropertiesInterface(const Tp::AbstractInterface& mainInterface, QObject *parent)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), parent)
{
}

void PropertiesInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{

    Tp::AbstractInterface::invalidate(proxy, error, message);
}
}
}
}
