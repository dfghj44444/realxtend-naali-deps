#include "PythonQtWrapper_QXmlSchema.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractmessagehandler.h>
#include <qabstracturiresolver.h>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qnetworkaccessmanager.h>
#include <qurl.h>
#include <qxmlnamepool.h>
#include <qxmlschema.h>

QXmlSchema* PythonQtWrapper_QXmlSchema::new_QXmlSchema()
{ 
return new QXmlSchema(); }

QXmlSchema* PythonQtWrapper_QXmlSchema::new_QXmlSchema(const QXmlSchema&  other)
{ 
return new QXmlSchema(other); }

void PythonQtWrapper_QXmlSchema::setUriResolver(QXmlSchema* theWrappedObject, const QAbstractUriResolver*  resolver)
{
  ( theWrappedObject->setUriResolver(resolver));
}

void PythonQtWrapper_QXmlSchema::setMessageHandler(QXmlSchema* theWrappedObject, QAbstractMessageHandler*  handler)
{
  ( theWrappedObject->setMessageHandler(handler));
}

void PythonQtWrapper_QXmlSchema::setNetworkAccessManager(QXmlSchema* theWrappedObject, QNetworkAccessManager*  networkmanager)
{
  ( theWrappedObject->setNetworkAccessManager(networkmanager));
}

QXmlNamePool  PythonQtWrapper_QXmlSchema::namePool(QXmlSchema* theWrappedObject) const
{
  return ( theWrappedObject->namePool());
}

QNetworkAccessManager*  PythonQtWrapper_QXmlSchema::networkAccessManager(QXmlSchema* theWrappedObject) const
{
  return ( theWrappedObject->networkAccessManager());
}

QAbstractMessageHandler*  PythonQtWrapper_QXmlSchema::messageHandler(QXmlSchema* theWrappedObject) const
{
  return ( theWrappedObject->messageHandler());
}

bool  PythonQtWrapper_QXmlSchema::load(QXmlSchema* theWrappedObject, const QUrl&  source)
{
  return ( theWrappedObject->load(source));
}

bool  PythonQtWrapper_QXmlSchema::isValid(QXmlSchema* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QUrl  PythonQtWrapper_QXmlSchema::documentUri(QXmlSchema* theWrappedObject) const
{
  return ( theWrappedObject->documentUri());
}

bool  PythonQtWrapper_QXmlSchema::load(QXmlSchema* theWrappedObject, QIODevice*  source, const QUrl&  documentUri)
{
  return ( theWrappedObject->load(source, documentUri));
}

bool  PythonQtWrapper_QXmlSchema::load(QXmlSchema* theWrappedObject, const QByteArray&  data, const QUrl&  documentUri)
{
  return ( theWrappedObject->load(data, documentUri));
}

const QAbstractUriResolver*  PythonQtWrapper_QXmlSchema::uriResolver(QXmlSchema* theWrappedObject) const
{
  return ( theWrappedObject->uriResolver());
}

