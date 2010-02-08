#define IN_TELEPATHY_QT4_HEADER
#include "TelepathyQt4/properties.h"

namespace Tp
{
namespace Client
{

PropertiesInterfaceInterface::PropertiesInterfaceInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

PropertiesInterfaceInterface::PropertiesInterfaceInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

PropertiesInterfaceInterface::PropertiesInterfaceInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

PropertiesInterfaceInterface::PropertiesInterfaceInterface(const Tp::AbstractInterface& mainInterface)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), mainInterface.parent())
{
}

PropertiesInterfaceInterface::PropertiesInterfaceInterface(const Tp::AbstractInterface& mainInterface, QObject *parent)
    : Tp::AbstractInterface(mainInterface.service(), mainInterface.path(), staticInterfaceName(), mainInterface.connection(), parent)
{
}

void PropertiesInterfaceInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{
    disconnect(this, SIGNAL(PropertiesChanged(const Tp::PropertyValueList&)), NULL, NULL);
    disconnect(this, SIGNAL(PropertyFlagsChanged(const Tp::PropertyFlagsChangeList&)), NULL, NULL);

    Tp::AbstractInterface::invalidate(proxy, error, message);
}
}
}
