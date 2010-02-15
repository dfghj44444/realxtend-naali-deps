#ifndef PYTHONQTWRAPPER_QXMLSCHEMAVALIDATOR_H
#define PYTHONQTWRAPPER_QXMLSCHEMAVALIDATOR_H

#include <qxmlschemavalidator.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtWrapper_QXmlSchemaValidator : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSchemaValidator* new_QXmlSchemaValidator();
QXmlSchemaValidator* new_QXmlSchemaValidator(const QXmlSchema&  schema);
void delete_QXmlSchemaValidator(QXmlSchemaValidator* obj) { delete obj; } 
   bool  validate(QXmlSchemaValidator* theWrappedObject, const QUrl&  source) const;
   bool  validate(QXmlSchemaValidator* theWrappedObject, const QByteArray&  data, const QUrl&  documentUri = QUrl()) const;
   QAbstractMessageHandler*  messageHandler(QXmlSchemaValidator* theWrappedObject) const;
   QXmlNamePool  namePool(QXmlSchemaValidator* theWrappedObject) const;
   void setUriResolver(QXmlSchemaValidator* theWrappedObject, const QAbstractUriResolver*  resolver);
   QNetworkAccessManager*  networkAccessManager(QXmlSchemaValidator* theWrappedObject) const;
   void setMessageHandler(QXmlSchemaValidator* theWrappedObject, QAbstractMessageHandler*  handler);
   QXmlSchema  schema(QXmlSchemaValidator* theWrappedObject) const;
   bool  validate(QXmlSchemaValidator* theWrappedObject, QIODevice*  source, const QUrl&  documentUri = QUrl()) const;
   void setSchema(QXmlSchemaValidator* theWrappedObject, const QXmlSchema&  schema);
   void setNetworkAccessManager(QXmlSchemaValidator* theWrappedObject, QNetworkAccessManager*  networkmanager);
   const QAbstractUriResolver*  uriResolver(QXmlSchemaValidator* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QXMLSCHEMAVALIDATOR_H
