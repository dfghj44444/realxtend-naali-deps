#include "PythonQtWrapper_QXmlSchemaValidator.h"

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
#include <qxmlschemavalidator.h>

QXmlSchemaValidator* PythonQtWrapper_QXmlSchemaValidator::new_QXmlSchemaValidator()
{ 
return new QXmlSchemaValidator(); }

QXmlSchemaValidator* PythonQtWrapper_QXmlSchemaValidator::new_QXmlSchemaValidator(const QXmlSchema&  schema)
{ 
return new QXmlSchemaValidator(schema); }

bool  PythonQtWrapper_QXmlSchemaValidator::validate(QXmlSchemaValidator* theWrappedObject, const QUrl&  source) const
{
  return ( theWrappedObject->validate(source));
}

bool  PythonQtWrapper_QXmlSchemaValidator::validate(QXmlSchemaValidator* theWrappedObject, const QByteArray&  data, const QUrl&  documentUri) const
{
  return ( theWrappedObject->validate(data, documentUri));
}

QAbstractMessageHandler*  PythonQtWrapper_QXmlSchemaValidator::messageHandler(QXmlSchemaValidator* theWrappedObject) const
{
  return ( theWrappedObject->messageHandler());
}

QXmlNamePool  PythonQtWrapper_QXmlSchemaValidator::namePool(QXmlSchemaValidator* theWrappedObject) const
{
  return ( theWrappedObject->namePool());
}

void PythonQtWrapper_QXmlSchemaValidator::setUriResolver(QXmlSchemaValidator* theWrappedObject, const QAbstractUriResolver*  resolver)
{
  ( theWrappedObject->setUriResolver(resolver));
}

QNetworkAccessManager*  PythonQtWrapper_QXmlSchemaValidator::networkAccessManager(QXmlSchemaValidator* theWrappedObject) const
{
  return ( theWrappedObject->networkAccessManager());
}

void PythonQtWrapper_QXmlSchemaValidator::setMessageHandler(QXmlSchemaValidator* theWrappedObject, QAbstractMessageHandler*  handler)
{
  ( theWrappedObject->setMessageHandler(handler));
}

QXmlSchema  PythonQtWrapper_QXmlSchemaValidator::schema(QXmlSchemaValidator* theWrappedObject) const
{
  return ( theWrappedObject->schema());
}

bool  PythonQtWrapper_QXmlSchemaValidator::validate(QXmlSchemaValidator* theWrappedObject, QIODevice*  source, const QUrl&  documentUri) const
{
  return ( theWrappedObject->validate(source, documentUri));
}

void PythonQtWrapper_QXmlSchemaValidator::setSchema(QXmlSchemaValidator* theWrappedObject, const QXmlSchema&  schema)
{
  ( theWrappedObject->setSchema(schema));
}

void PythonQtWrapper_QXmlSchemaValidator::setNetworkAccessManager(QXmlSchemaValidator* theWrappedObject, QNetworkAccessManager*  networkmanager)
{
  ( theWrappedObject->setNetworkAccessManager(networkmanager));
}

const QAbstractUriResolver*  PythonQtWrapper_QXmlSchemaValidator::uriResolver(QXmlSchemaValidator* theWrappedObject) const
{
  return ( theWrappedObject->uriResolver());
}

