#ifndef PYTHONQTWRAPPER_QXMLSCHEMA_H
#define PYTHONQTWRAPPER_QXMLSCHEMA_H

#include <qxmlschema.h>
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

class PythonQtWrapper_QXmlSchema : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSchema* new_QXmlSchema();
QXmlSchema* new_QXmlSchema(const QXmlSchema&  other);
void delete_QXmlSchema(QXmlSchema* obj) { delete obj; } 
   void setUriResolver(QXmlSchema* theWrappedObject, const QAbstractUriResolver*  resolver);
   void setMessageHandler(QXmlSchema* theWrappedObject, QAbstractMessageHandler*  handler);
   void setNetworkAccessManager(QXmlSchema* theWrappedObject, QNetworkAccessManager*  networkmanager);
   QXmlNamePool  namePool(QXmlSchema* theWrappedObject) const;
   QNetworkAccessManager*  networkAccessManager(QXmlSchema* theWrappedObject) const;
   QAbstractMessageHandler*  messageHandler(QXmlSchema* theWrappedObject) const;
   bool  load(QXmlSchema* theWrappedObject, const QUrl&  source);
   bool  isValid(QXmlSchema* theWrappedObject) const;
   QUrl  documentUri(QXmlSchema* theWrappedObject) const;
   bool  load(QXmlSchema* theWrappedObject, QIODevice*  source, const QUrl&  documentUri = QUrl());
   bool  load(QXmlSchema* theWrappedObject, const QByteArray&  data, const QUrl&  documentUri = QUrl());
   const QAbstractUriResolver*  uriResolver(QXmlSchema* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QXMLSCHEMA_H
