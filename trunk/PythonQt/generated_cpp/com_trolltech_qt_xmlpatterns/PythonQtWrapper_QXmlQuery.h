#ifndef PYTHONQTWRAPPER_QXMLQUERY_H
#define PYTHONQTWRAPPER_QXMLQUERY_H

#include <qxmlquery.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtWrapper_QXmlQuery : public QObject
{ Q_OBJECT
public:
Q_ENUMS(QueryLanguage )
enum QueryLanguage{
  XQuery10 = QXmlQuery::XQuery10,   XSLT20 = QXmlQuery::XSLT20,   XmlSchema11IdentityConstraintSelector = QXmlQuery::XmlSchema11IdentityConstraintSelector,   XmlSchema11IdentityConstraintField = QXmlQuery::XmlSchema11IdentityConstraintField,   XPath20 = QXmlQuery::XPath20};
public slots:
QXmlQuery* new_QXmlQuery();
QXmlQuery* new_QXmlQuery(QXmlQuery::QueryLanguage  queryLanguage, const QXmlNamePool&  np = QXmlNamePool());
QXmlQuery* new_QXmlQuery(const QXmlNamePool&  np);
QXmlQuery* new_QXmlQuery(const QXmlQuery&  other);
void delete_QXmlQuery(QXmlQuery* obj) { delete obj; } 
   void setMessageHandler(QXmlQuery* theWrappedObject, QAbstractMessageHandler*  messageHandler);
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, QIODevice*  arg__2);
   QNetworkAccessManager*  networkAccessManager(QXmlQuery* theWrappedObject) const;
   void evaluateTo(QXmlQuery* theWrappedObject, QXmlResultItems*  result) const;
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, const QXmlItem&  value);
   void setNetworkAccessManager(QXmlQuery* theWrappedObject, QNetworkAccessManager*  newManager);
   void setInitialTemplateName(QXmlQuery* theWrappedObject, const QXmlName&  name);
   void setQuery(QXmlQuery* theWrappedObject, QIODevice*  sourceCode, const QUrl&  documentURI = QUrl());
   const QAbstractUriResolver*  uriResolver(QXmlQuery* theWrappedObject) const;
   QXmlQuery*  operator_assign(QXmlQuery* theWrappedObject, const QXmlQuery&  other);
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, const QXmlQuery&  query);
   bool  evaluateTo(QXmlQuery* theWrappedObject, QIODevice*  target) const;
   bool  isValid(QXmlQuery* theWrappedObject) const;
   void setFocus(QXmlQuery* theWrappedObject, const QXmlItem&  item);
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, const QXmlQuery&  query);
   QAbstractMessageHandler*  messageHandler(QXmlQuery* theWrappedObject) const;
   QXmlNamePool  namePool(QXmlQuery* theWrappedObject) const;
   bool  setFocus(QXmlQuery* theWrappedObject, const QUrl&  documentURI);
   void setQuery(QXmlQuery* theWrappedObject, const QUrl&  queryURI, const QUrl&  baseURI = QUrl());
   QXmlQuery::QueryLanguage  queryLanguage(QXmlQuery* theWrappedObject) const;
   QXmlName  initialTemplateName(QXmlQuery* theWrappedObject) const;
   bool  setFocus(QXmlQuery* theWrappedObject, QIODevice*  document);
   void setInitialTemplateName(QXmlQuery* theWrappedObject, const QString&  name);
   void setQuery(QXmlQuery* theWrappedObject, const QString&  sourceCode, const QUrl&  documentURI = QUrl());
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, const QXmlItem&  value);
   bool  setFocus(QXmlQuery* theWrappedObject, const QString&  focus);
   void setUriResolver(QXmlQuery* theWrappedObject, const QAbstractUriResolver*  resolver);
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, QIODevice*  arg__2);
   bool  evaluateTo(QXmlQuery* theWrappedObject, QString*  output) const;
};

#endif // PYTHONQTWRAPPER_QXMLQUERY_H
