#include "PythonQtWrapper_QXmlQuery.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractmessagehandler.h>
#include <qabstracturiresolver.h>
#include <qabstractxmlnodemodel.h>
#include <qiodevice.h>
#include <qnetworkaccessmanager.h>
#include <qurl.h>
#include <qxmlname.h>
#include <qxmlnamepool.h>
#include <qxmlquery.h>
#include <qxmlresultitems.h>

QXmlQuery* PythonQtWrapper_QXmlQuery::new_QXmlQuery()
{ 
return new QXmlQuery(); }

QXmlQuery* PythonQtWrapper_QXmlQuery::new_QXmlQuery(QXmlQuery::QueryLanguage  queryLanguage, const QXmlNamePool&  np)
{ 
return new QXmlQuery(queryLanguage, np); }

QXmlQuery* PythonQtWrapper_QXmlQuery::new_QXmlQuery(const QXmlNamePool&  np)
{ 
return new QXmlQuery(np); }

QXmlQuery* PythonQtWrapper_QXmlQuery::new_QXmlQuery(const QXmlQuery&  other)
{ 
return new QXmlQuery(other); }

void PythonQtWrapper_QXmlQuery::setMessageHandler(QXmlQuery* theWrappedObject, QAbstractMessageHandler*  messageHandler)
{
  ( theWrappedObject->setMessageHandler(messageHandler));
}

void PythonQtWrapper_QXmlQuery::bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, QIODevice*  arg__2)
{
  ( theWrappedObject->bindVariable(localName, arg__2));
}

QNetworkAccessManager*  PythonQtWrapper_QXmlQuery::networkAccessManager(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->networkAccessManager());
}

void PythonQtWrapper_QXmlQuery::evaluateTo(QXmlQuery* theWrappedObject, QXmlResultItems*  result) const
{
  ( theWrappedObject->evaluateTo(result));
}

void PythonQtWrapper_QXmlQuery::bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, const QXmlItem&  value)
{
  ( theWrappedObject->bindVariable(name, value));
}

void PythonQtWrapper_QXmlQuery::setNetworkAccessManager(QXmlQuery* theWrappedObject, QNetworkAccessManager*  newManager)
{
  ( theWrappedObject->setNetworkAccessManager(newManager));
}

void PythonQtWrapper_QXmlQuery::setInitialTemplateName(QXmlQuery* theWrappedObject, const QXmlName&  name)
{
  ( theWrappedObject->setInitialTemplateName(name));
}

void PythonQtWrapper_QXmlQuery::setQuery(QXmlQuery* theWrappedObject, QIODevice*  sourceCode, const QUrl&  documentURI)
{
  ( theWrappedObject->setQuery(sourceCode, documentURI));
}

const QAbstractUriResolver*  PythonQtWrapper_QXmlQuery::uriResolver(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->uriResolver());
}

QXmlQuery*  PythonQtWrapper_QXmlQuery::operator_assign(QXmlQuery* theWrappedObject, const QXmlQuery&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QXmlQuery::bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, const QXmlQuery&  query)
{
  ( theWrappedObject->bindVariable(name, query));
}

bool  PythonQtWrapper_QXmlQuery::evaluateTo(QXmlQuery* theWrappedObject, QIODevice*  target) const
{
  return ( theWrappedObject->evaluateTo(target));
}

bool  PythonQtWrapper_QXmlQuery::isValid(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QXmlQuery::setFocus(QXmlQuery* theWrappedObject, const QXmlItem&  item)
{
  ( theWrappedObject->setFocus(item));
}

void PythonQtWrapper_QXmlQuery::bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, const QXmlQuery&  query)
{
  ( theWrappedObject->bindVariable(localName, query));
}

QAbstractMessageHandler*  PythonQtWrapper_QXmlQuery::messageHandler(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->messageHandler());
}

QXmlNamePool  PythonQtWrapper_QXmlQuery::namePool(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->namePool());
}

bool  PythonQtWrapper_QXmlQuery::setFocus(QXmlQuery* theWrappedObject, const QUrl&  documentURI)
{
  return ( theWrappedObject->setFocus(documentURI));
}

void PythonQtWrapper_QXmlQuery::setQuery(QXmlQuery* theWrappedObject, const QUrl&  queryURI, const QUrl&  baseURI)
{
  ( theWrappedObject->setQuery(queryURI, baseURI));
}

QXmlQuery::QueryLanguage  PythonQtWrapper_QXmlQuery::queryLanguage(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->queryLanguage());
}

QXmlName  PythonQtWrapper_QXmlQuery::initialTemplateName(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->initialTemplateName());
}

bool  PythonQtWrapper_QXmlQuery::setFocus(QXmlQuery* theWrappedObject, QIODevice*  document)
{
  return ( theWrappedObject->setFocus(document));
}

void PythonQtWrapper_QXmlQuery::setInitialTemplateName(QXmlQuery* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setInitialTemplateName(name));
}

void PythonQtWrapper_QXmlQuery::setQuery(QXmlQuery* theWrappedObject, const QString&  sourceCode, const QUrl&  documentURI)
{
  ( theWrappedObject->setQuery(sourceCode, documentURI));
}

void PythonQtWrapper_QXmlQuery::bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, const QXmlItem&  value)
{
  ( theWrappedObject->bindVariable(localName, value));
}

bool  PythonQtWrapper_QXmlQuery::setFocus(QXmlQuery* theWrappedObject, const QString&  focus)
{
  return ( theWrappedObject->setFocus(focus));
}

void PythonQtWrapper_QXmlQuery::setUriResolver(QXmlQuery* theWrappedObject, const QAbstractUriResolver*  resolver)
{
  ( theWrappedObject->setUriResolver(resolver));
}

void PythonQtWrapper_QXmlQuery::bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, QIODevice*  arg__2)
{
  ( theWrappedObject->bindVariable(name, arg__2));
}

bool  PythonQtWrapper_QXmlQuery::evaluateTo(QXmlQuery* theWrappedObject, QString*  output) const
{
  return ( theWrappedObject->evaluateTo(output));
}

