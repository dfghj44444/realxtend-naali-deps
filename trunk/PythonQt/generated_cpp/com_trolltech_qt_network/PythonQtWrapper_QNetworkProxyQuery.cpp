#include "PythonQtWrapper_QNetworkProxyQuery.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qnetworkproxy.h>
#include <qurl.h>

QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery()
{ 
return new QNetworkProxyQuery(); }

QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery(const QNetworkProxyQuery&  other)
{ 
return new QNetworkProxyQuery(other); }

QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery(const QString&  hostname, int  port, const QString&  protocolTag, QNetworkProxyQuery::QueryType  queryType)
{ 
return new QNetworkProxyQuery(hostname, port, protocolTag, queryType); }

QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery(const QUrl&  requestUrl, QNetworkProxyQuery::QueryType  queryType)
{ 
return new QNetworkProxyQuery(requestUrl, queryType); }

QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery(unsigned short  bindPort, const QString&  protocolTag, QNetworkProxyQuery::QueryType  queryType)
{ 
return new QNetworkProxyQuery(bindPort, protocolTag, queryType); }

QUrl  PythonQtWrapper_QNetworkProxyQuery::url(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

QNetworkProxyQuery::QueryType  PythonQtWrapper_QNetworkProxyQuery::queryType(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->queryType());
}

void PythonQtWrapper_QNetworkProxyQuery::setProtocolTag(QNetworkProxyQuery* theWrappedObject, const QString&  protocolTag)
{
  ( theWrappedObject->setProtocolTag(protocolTag));
}

int  PythonQtWrapper_QNetworkProxyQuery::localPort(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->localPort());
}

void PythonQtWrapper_QNetworkProxyQuery::setPeerHostName(QNetworkProxyQuery* theWrappedObject, const QString&  hostname)
{
  ( theWrappedObject->setPeerHostName(hostname));
}

void PythonQtWrapper_QNetworkProxyQuery::setUrl(QNetworkProxyQuery* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

QString  PythonQtWrapper_QNetworkProxyQuery::protocolTag(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->protocolTag());
}

void PythonQtWrapper_QNetworkProxyQuery::setLocalPort(QNetworkProxyQuery* theWrappedObject, int  port)
{
  ( theWrappedObject->setLocalPort(port));
}

bool  PythonQtWrapper_QNetworkProxyQuery::operator_equal(QNetworkProxyQuery* theWrappedObject, const QNetworkProxyQuery&  other) const
{
  return ( (*theWrappedObject)== other);
}

int  PythonQtWrapper_QNetworkProxyQuery::peerPort(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->peerPort());
}

void PythonQtWrapper_QNetworkProxyQuery::setQueryType(QNetworkProxyQuery* theWrappedObject, QNetworkProxyQuery::QueryType  type)
{
  ( theWrappedObject->setQueryType(type));
}

QString  PythonQtWrapper_QNetworkProxyQuery::peerHostName(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->peerHostName());
}

void PythonQtWrapper_QNetworkProxyQuery::setPeerPort(QNetworkProxyQuery* theWrappedObject, int  port)
{
  ( theWrappedObject->setPeerPort(port));
}

