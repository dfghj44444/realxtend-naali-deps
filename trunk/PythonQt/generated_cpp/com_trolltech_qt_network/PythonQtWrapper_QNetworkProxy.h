#ifndef PYTHONQTWRAPPER_QNETWORKPROXY_H
#define PYTHONQTWRAPPER_QNETWORKPROXY_H

#include <qnetworkproxy.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qnetworkproxy.h>

class PythonQtWrapper_QNetworkProxy : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ProxyType Capability )
Q_FLAGS(Capabilities )
enum ProxyType{
  DefaultProxy = QNetworkProxy::DefaultProxy,   Socks5Proxy = QNetworkProxy::Socks5Proxy,   NoProxy = QNetworkProxy::NoProxy,   HttpProxy = QNetworkProxy::HttpProxy,   HttpCachingProxy = QNetworkProxy::HttpCachingProxy,   FtpCachingProxy = QNetworkProxy::FtpCachingProxy};
enum Capability{
  TunnelingCapability = QNetworkProxy::TunnelingCapability,   ListeningCapability = QNetworkProxy::ListeningCapability,   UdpTunnelingCapability = QNetworkProxy::UdpTunnelingCapability,   CachingCapability = QNetworkProxy::CachingCapability,   HostNameLookupCapability = QNetworkProxy::HostNameLookupCapability};
Q_DECLARE_FLAGS(Capabilities, Capability)
public slots:
QNetworkProxy* new_QNetworkProxy();
QNetworkProxy* new_QNetworkProxy(QNetworkProxy::ProxyType  type, const QString&  hostName = QString(), unsigned short  port = 0, const QString&  user = QString(), const QString&  password = QString());
QNetworkProxy* new_QNetworkProxy(const QNetworkProxy&  other);
void delete_QNetworkProxy(QNetworkProxy* obj) { delete obj; } 
   QNetworkProxy::Capabilities  capabilities(QNetworkProxy* theWrappedObject) const;
   void setPassword(QNetworkProxy* theWrappedObject, const QString&  password);
   void setUser(QNetworkProxy* theWrappedObject, const QString&  userName);
   QNetworkProxy::ProxyType  type(QNetworkProxy* theWrappedObject) const;
   QString  password(QNetworkProxy* theWrappedObject) const;
   QNetworkProxy  static_QNetworkProxy_applicationProxy();
   bool  operator_equal(QNetworkProxy* theWrappedObject, const QNetworkProxy&  other) const;
   unsigned short  port(QNetworkProxy* theWrappedObject) const;
   void static_QNetworkProxy_setApplicationProxy(const QNetworkProxy&  proxy);
   void setCapabilities(QNetworkProxy* theWrappedObject, QNetworkProxy::Capabilities  capab);
   bool  isTransparentProxy(QNetworkProxy* theWrappedObject) const;
   bool  isCachingProxy(QNetworkProxy* theWrappedObject) const;
   void setPort(QNetworkProxy* theWrappedObject, unsigned short  port);
   QString  user(QNetworkProxy* theWrappedObject) const;
   QString  hostName(QNetworkProxy* theWrappedObject) const;
   void setHostName(QNetworkProxy* theWrappedObject, const QString&  hostName);
   void setType(QNetworkProxy* theWrappedObject, QNetworkProxy::ProxyType  type);
};

#endif // PYTHONQTWRAPPER_QNETWORKPROXY_H
