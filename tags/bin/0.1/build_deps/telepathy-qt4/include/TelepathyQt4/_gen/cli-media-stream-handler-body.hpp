#define IN_TELEPATHY_QT4_HEADER
#include "TelepathyQt4/media-stream-handler.h"

namespace Tp
{
namespace Client
{

MediaStreamHandlerInterface::MediaStreamHandlerInterface(const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), QDBusConnection::sessionBus(), parent)
{
}

MediaStreamHandlerInterface::MediaStreamHandlerInterface(const QDBusConnection& connection, const QString& busName, const QString& objectPath, QObject *parent)
    : Tp::AbstractInterface(busName, objectPath, staticInterfaceName(), connection, parent)
{
}

MediaStreamHandlerInterface::MediaStreamHandlerInterface(Tp::DBusProxy *proxy)
    : Tp::AbstractInterface(proxy, staticInterfaceName())
{
}

void MediaStreamHandlerInterface::invalidate(Tp::DBusProxy *proxy,
        const QString &error, const QString &message)
{
    disconnect(this, SIGNAL(AddRemoteCandidate(const QString&, const Tp::MediaStreamHandlerTransportList&)), NULL, NULL);
    disconnect(this, SIGNAL(Close()), NULL, NULL);
    disconnect(this, SIGNAL(RemoveRemoteCandidate(const QString&)), NULL, NULL);
    disconnect(this, SIGNAL(SetActiveCandidatePair(const QString&, const QString&)), NULL, NULL);
    disconnect(this, SIGNAL(SetRemoteCandidateList(const Tp::MediaStreamHandlerCandidateList&)), NULL, NULL);
    disconnect(this, SIGNAL(SetRemoteCodecs(const Tp::MediaStreamHandlerCodecList&)), NULL, NULL);
    disconnect(this, SIGNAL(SetStreamPlaying(bool)), NULL, NULL);
    disconnect(this, SIGNAL(SetStreamSending(bool)), NULL, NULL);
    disconnect(this, SIGNAL(StartTelephonyEvent(uchar)), NULL, NULL);
    disconnect(this, SIGNAL(StopTelephonyEvent()), NULL, NULL);
    disconnect(this, SIGNAL(SetStreamHeld(bool)), NULL, NULL);

    Tp::AbstractInterface::invalidate(proxy, error, message);
}
}
}
