#define IN_TELEPATHY_QT4_HEADER
#include "TelepathyQt4/media-session-handler.h"

namespace Tp
{
namespace Client
{

MediaSessionHandlerInterface::MediaSessionHandlerInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

MediaSessionHandlerInterface::MediaSessionHandlerInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

MediaSessionHandlerInterface::MediaSessionHandlerInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

void MediaSessionHandlerInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{
    disconnect(this, SIGNAL(NewStreamHandler(const QDBusObjectPath&, uint, uint, uint)), NULL, NULL);

    Tp::AbstractInterface::invalidate(proxy, error, message);
}
}
}
