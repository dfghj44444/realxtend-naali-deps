#ifndef PYTHONQTWRAPPER_QNETWORKPROXYQUERY_H
#define PYTHONQTWRAPPER_QNETWORKPROXYQUERY_H

#include <qnetworkproxy.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qnetworkproxy.h>
#include <qurl.h>

class PythonQtWrapper_QNetworkProxyQuery : public QObject
{ Q_OBJECT
public:
Q_ENUMS(QueryType )
enum QueryType{
  TcpSocket = QNetworkProxyQuery::TcpSocket,   UdpSocket = QNetworkProxyQuery::UdpSocket,   TcpServer = QNetworkProxyQuery::TcpServer,   UrlRequest = QNetworkProxyQuery::UrlRequest};
public slots:
QNetworkProxyQuery* new_QNetworkProxyQuery();
QNetworkProxyQuery* new_QNetworkProxyQuery(const QNetworkProxyQuery&  other);
QNetworkProxyQuery* new_QNetworkProxyQuery(const QString&  hostname, int  port, const QString&  protocolTag = QString(), QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::TcpSocket);
QNetworkProxyQuery* new_QNetworkProxyQuery(const QUrl&  requestUrl, QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::UrlRequest);
QNetworkProxyQuery* new_QNetworkProxyQuery(unsigned short  bindPort, const QString&  protocolTag = QString(), QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::TcpServer);
void delete_QNetworkProxyQuery(QNetworkProxyQuery* obj) { delete obj; } 
   QUrl  url(QNetworkProxyQuery* theWrappedObject) const;
   QNetworkProxyQuery::QueryType  queryType(QNetworkProxyQuery* theWrappedObject) const;
   void setProtocolTag(QNetworkProxyQuery* theWrappedObject, const QString&  protocolTag);
   int  localPort(QNetworkProxyQuery* theWrappedObject) const;
   void setPeerHostName(QNetworkProxyQuery* theWrappedObject, const QString&  hostname);
   void setUrl(QNetworkProxyQuery* theWrappedObject, const QUrl&  url);
   QString  protocolTag(QNetworkProxyQuery* theWrappedObject) const;
   void setLocalPort(QNetworkProxyQuery* theWrappedObject, int  port);
   bool  operator_equal(QNetworkProxyQuery* theWrappedObject, const QNetworkProxyQuery&  other) const;
   int  peerPort(QNetworkProxyQuery* theWrappedObject) const;
   void setQueryType(QNetworkProxyQuery* theWrappedObject, QNetworkProxyQuery::QueryType  type);
   QString  peerHostName(QNetworkProxyQuery* theWrappedObject) const;
   void setPeerPort(QNetworkProxyQuery* theWrappedObject, int  port);
};

#endif // PYTHONQTWRAPPER_QNETWORKPROXYQUERY_H
