/*
 * This file contains D-Bus client proxy classes generated by qt4-client-gen.py.
 *
 * This file can be distributed under the same terms as the specification from
 * which it was generated.
 */

#ifndef IN_TELEPATHY_QT4_HEADER
#error IN_TELEPATHY_QT4_HEADER
#endif

#include <TelepathyQt4/Types>

#include <QtGlobal>

#include <QString>
#include <QObject>
#include <QVariant>

#include <QDBusPendingReply>

#include <TelepathyQt4/AbstractInterface>
#include <TelepathyQt4/DBusProxy>

// basically the same as GLib's G_GNUC_DEPRECATED
#ifndef TELEPATHY_GNUC_DEPRECATED
#   if defined(Q_CC_GNUC) && __GNUC__ >= 4
#       define TELEPATHY_GNUC_DEPRECATED __attribute__((__deprecated__))
#   else
#       define TELEPATHY_GNUC_DEPRECATED
#   endif
#endif
namespace Tp
{
namespace Client
{

/**
 * \class MediaSessionHandlerInterface
 * \headerfile TelepathyQt4/media-session-handler.h <TelepathyQt4/MediaSessionHandler>
 * \ingroup clientmsesh
 *
 * Proxy class providing a 1:1 mapping of the D-Bus interface "org.freedesktop.Telepathy.Media.SessionHandler."
 */
class MediaSessionHandlerInterface : public Tp::AbstractInterface
{
    Q_OBJECT

public:
    /**
     * Returns the name of the interface "org.freedesktop.Telepathy.Media.SessionHandler", which this class
     * represents.
     *
     * \return The D-Bus interface name.
     */
    static inline const char *staticInterfaceName()
    {
        return "org.freedesktop.Telepathy.Media.SessionHandler";
    }

    /**
     * Creates a MediaSessionHandlerInterface associated with the given object on the session bus.
     *
     * \param busName Name of the service the object is on.
     * \param objectPath Path to the object on the service.
     * \param parent Passed to the parent class constructor.
     */
    MediaSessionHandlerInterface(
        const QString& busName,
        const QString& objectPath,
        QObject* parent = 0
    );

    /**
     * Creates a MediaSessionHandlerInterface associated with the given object on the given bus.
     *
     * \param connection The bus via which the object can be reached.
     * \param busName Name of the service the object is on.
     * \param objectPath Path to the object on the service.
     * \param parent Passed to the parent class constructor.
     */
    MediaSessionHandlerInterface(
        const QDBusConnection& connection,
        const QString& busName,
        const QString& objectPath,
        QObject* parent = 0
    );

    /**
     * Creates a MediaSessionHandlerInterface associated with the same object as the given proxy.
     *
     * \param proxy The proxy to use. It will also be the QObject::parent()
     *               for this object.
     */
    MediaSessionHandlerInterface(Tp::DBusProxy *proxy);

public Q_SLOTS:
    /**
     * Begins a call to the D-Bus method "Error" on the remote object.
     * 
     * Informs the connection manager that an error occured in this session. 
     * If used, the connection manager must terminate the session and all of 
     * the streams within it, and may also emit a StreamError signal on the 
     * channel for each stream within the session.
     */
    inline QDBusPendingReply<> Error(uint errorCode, const QString& message)
    {
        if (!invalidationReason().isEmpty()) {
            return QDBusPendingReply<>(QDBusMessage::createError(
                invalidationReason(),
                invalidationMessage()
            ));
        }


        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(errorCode) << QVariant::fromValue(message);
        return asyncCallWithArgumentList(QLatin1String("Error"), argumentList);
    }

    /**
     * Begins a call to the D-Bus method "Ready" on the remote object.
     * 
     * Inform the connection manager that a client is ready to handle this 
     * session handler (i.e. that it has connected to the NewStreamHandler 
     * signal and done any other necessary setup).
     */
    inline QDBusPendingReply<> Ready()
    {
        if (!invalidationReason().isEmpty()) {
            return QDBusPendingReply<>(QDBusMessage::createError(
                invalidationReason(),
                invalidationMessage()
            ));
        }


        return asyncCall(QLatin1String("Ready"));
    }

Q_SIGNALS:
    /**
     * Represents the signal "NewStreamHandler" on the remote object.
     * 
     * Emitted when a new stream handler has been created for this session.
     *
     * \param streamHandler
     *     
     *     The path of a new object implementing the StreamHandler interface.
     *
     * \param ID
     *     
     *     The unique ID of the new stream
     *
     * \param mediaType
     *     
     *     Type of media that this stream should handle
     *
     * \param direction
     *     
     *     Direction of this stream
     */
    void NewStreamHandler(const QDBusObjectPath& streamHandler, uint ID, uint mediaType, uint direction);

protected:
    virtual void invalidate(Tp::DBusProxy *, const QString &, const QString &);
};
}
}
