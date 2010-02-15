#ifndef PYTHONQTWRAPPER_QDOMELEMENT_H
#define PYTHONQTWRAPPER_QDOMELEMENT_H

#include <qdom.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

class PythonQtWrapper_QDomElement : public QObject
{ Q_OBJECT
public:
public slots:
QDomElement* new_QDomElement();
QDomElement* new_QDomElement(const QDomElement&  x);
void delete_QDomElement(QDomElement* obj) { delete obj; } 
   QString  text(QDomElement* theWrappedObject) const;
   QDomAttr  attributeNode(QDomElement* theWrappedObject, const QString&  name);
   QDomNodeList  elementsByTagNameNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName) const;
   bool  hasAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName) const;
   void removeAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName);
   QString  tagName(QDomElement* theWrappedObject) const;
   QDomAttr  removeAttributeNode(QDomElement* theWrappedObject, const QDomAttr&  oldAttr);
   QDomAttr  setAttributeNode(QDomElement* theWrappedObject, const QDomAttr&  newAttr);
   QDomNamedNodeMap  attributes(QDomElement* theWrappedObject) const;
   void removeAttribute(QDomElement* theWrappedObject, const QString&  name);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, float  value);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, double  value);
   QString  attributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  localName, const QString&  defValue = QString()) const;
   QDomAttr  attributeNodeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName);
   void setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, qlonglong  value);
   void setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, int  value);
   QDomAttr  setAttributeNodeNS(QDomElement* theWrappedObject, const QDomAttr&  newAttr);
   void setTagName(QDomElement* theWrappedObject, const QString&  name);
   void setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, double  value);
   QDomNodeList  elementsByTagName(QDomElement* theWrappedObject, const QString&  tagname) const;
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, qlonglong  value);
   QString  attribute(QDomElement* theWrappedObject, const QString&  name, const QString&  defValue = QString()) const;
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, int  value);
   void setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, const QString&  value);
   bool  hasAttribute(QDomElement* theWrappedObject, const QString&  name) const;
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, const QString&  value);
};

#endif // PYTHONQTWRAPPER_QDOMELEMENT_H
