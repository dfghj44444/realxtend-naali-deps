#ifndef PYTHONQTWRAPPER_QWEBELEMENT_H
#define PYTHONQTWRAPPER_QWEBELEMENT_H

#include <qwebelement.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qpainter.h>
#include <qrect.h>
#include <qstringlist.h>
#include <qwebelement.h>
#include <qwebframe.h>

class PythonQtWrapper_QWebElement : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleResolveStrategy )
enum StyleResolveStrategy{
  InlineStyle = QWebElement::InlineStyle,   CascadedStyle = QWebElement::CascadedStyle,   ComputedStyle = QWebElement::ComputedStyle};
public slots:
QWebElement* new_QWebElement();
QWebElement* new_QWebElement(const QWebElement&  arg__1);
void delete_QWebElement(QWebElement* obj) { delete obj; } 
   bool  operator_equal(QWebElement* theWrappedObject, const QWebElement&  o) const;
   QWebElement  nextSibling(QWebElement* theWrappedObject) const;
   QWebElement  findFirst(QWebElement* theWrappedObject, const QString&  selectorQuery) const;
   QString  toPlainText(QWebElement* theWrappedObject) const;
   void prependOutside(QWebElement* theWrappedObject, const QString&  markup);
   void replace(QWebElement* theWrappedObject, const QString&  markup);
   void setAttribute(QWebElement* theWrappedObject, const QString&  name, const QString&  value);
   void setPlainText(QWebElement* theWrappedObject, const QString&  text);
   void appendOutside(QWebElement* theWrappedObject, const QString&  markup);
   void prependInside(QWebElement* theWrappedObject, const QString&  markup);
   QString  styleProperty(QWebElement* theWrappedObject, const QString&  name, QWebElement::StyleResolveStrategy  strategy) const;
   void setStyleProperty(QWebElement* theWrappedObject, const QString&  name, const QString&  value);
   bool  hasClass(QWebElement* theWrappedObject, const QString&  name) const;
   void encloseContentsWith(QWebElement* theWrappedObject, const QWebElement&  element);
   QWebElement  clone(QWebElement* theWrappedObject) const;
   QVariant  evaluateJavaScript(QWebElement* theWrappedObject, const QString&  scriptSource);
   QWebElement*  operator_assign(QWebElement* theWrappedObject, const QWebElement&  arg__1);
   QString  tagName(QWebElement* theWrappedObject) const;
   QWebElement  previousSibling(QWebElement* theWrappedObject) const;
   void render(QWebElement* theWrappedObject, QPainter*  painter);
   QWebFrame*  webFrame(QWebElement* theWrappedObject) const;
   void setAttributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
   QRect  geometry(QWebElement* theWrappedObject) const;
   void removeAllChildren(QWebElement* theWrappedObject);
   void prependInside(QWebElement* theWrappedObject, const QWebElement&  element);
   bool  hasAttribute(QWebElement* theWrappedObject, const QString&  name) const;
   QString  attribute(QWebElement* theWrappedObject, const QString&  name, const QString&  defaultValue = QString()) const;
   void removeAttribute(QWebElement* theWrappedObject, const QString&  name);
   void removeFromDocument(QWebElement* theWrappedObject);
   void toggleClass(QWebElement* theWrappedObject, const QString&  name);
   QStringList  classes(QWebElement* theWrappedObject) const;
   QString  toInnerXml(QWebElement* theWrappedObject) const;
   void addClass(QWebElement* theWrappedObject, const QString&  name);
   void appendInside(QWebElement* theWrappedObject, const QWebElement&  element);
   QString  localName(QWebElement* theWrappedObject) const;
   bool  hasAttributes(QWebElement* theWrappedObject) const;
   QWebElement  document(QWebElement* theWrappedObject) const;
   QWebElement  parent(QWebElement* theWrappedObject) const;
   void appendOutside(QWebElement* theWrappedObject, const QWebElement&  element);
   QWebElement  firstChild(QWebElement* theWrappedObject) const;
   QWebElement*  takeFromDocument(QWebElement* theWrappedObject);
   void removeAttributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name);
   QString  prefix(QWebElement* theWrappedObject) const;
   QStringList  attributeNames(QWebElement* theWrappedObject, const QString&  namespaceUri = QString()) const;
   QWebElement  lastChild(QWebElement* theWrappedObject) const;
   void encloseWith(QWebElement* theWrappedObject, const QString&  markup);
   void prependOutside(QWebElement* theWrappedObject, const QWebElement&  element);
   void appendInside(QWebElement* theWrappedObject, const QString&  markup);
   void setFocus(QWebElement* theWrappedObject);
   QString  namespaceUri(QWebElement* theWrappedObject) const;
   bool  hasAttributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name) const;
   QString  attributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  defaultValue = QString()) const;
   bool  isNull(QWebElement* theWrappedObject) const;
   QString  toOuterXml(QWebElement* theWrappedObject) const;
   void removeClass(QWebElement* theWrappedObject, const QString&  name);
   void replace(QWebElement* theWrappedObject, const QWebElement&  element);
   void setInnerXml(QWebElement* theWrappedObject, const QString&  markup);
   void encloseWith(QWebElement* theWrappedObject, const QWebElement&  element);
   bool  hasFocus(QWebElement* theWrappedObject) const;
   void encloseContentsWith(QWebElement* theWrappedObject, const QString&  markup);
   void setOuterXml(QWebElement* theWrappedObject, const QString&  markup);
};

#endif // PYTHONQTWRAPPER_QWEBELEMENT_H
