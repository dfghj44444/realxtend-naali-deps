#include "PythonQtWrapper_QWebElement.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qpainter.h>
#include <qrect.h>
#include <qstringlist.h>
#include <qwebelement.h>
#include <qwebframe.h>

QWebElement* PythonQtWrapper_QWebElement::new_QWebElement()
{ 
return new QWebElement(); }

QWebElement* PythonQtWrapper_QWebElement::new_QWebElement(const QWebElement&  arg__1)
{ 
return new QWebElement(arg__1); }

bool  PythonQtWrapper_QWebElement::operator_equal(QWebElement* theWrappedObject, const QWebElement&  o) const
{
  return ( (*theWrappedObject)== o);
}

QWebElement  PythonQtWrapper_QWebElement::nextSibling(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->nextSibling());
}

QWebElement  PythonQtWrapper_QWebElement::findFirst(QWebElement* theWrappedObject, const QString&  selectorQuery) const
{
  return ( theWrappedObject->findFirst(selectorQuery));
}

QString  PythonQtWrapper_QWebElement::toPlainText(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}

void PythonQtWrapper_QWebElement::prependOutside(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->prependOutside(markup));
}

void PythonQtWrapper_QWebElement::replace(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->replace(markup));
}

void PythonQtWrapper_QWebElement::setAttribute(QWebElement* theWrappedObject, const QString&  name, const QString&  value)
{
  ( theWrappedObject->setAttribute(name, value));
}

void PythonQtWrapper_QWebElement::setPlainText(QWebElement* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setPlainText(text));
}

void PythonQtWrapper_QWebElement::appendOutside(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->appendOutside(markup));
}

void PythonQtWrapper_QWebElement::prependInside(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->prependInside(markup));
}

QString  PythonQtWrapper_QWebElement::styleProperty(QWebElement* theWrappedObject, const QString&  name, QWebElement::StyleResolveStrategy  strategy) const
{
  return ( theWrappedObject->styleProperty(name, strategy));
}

void PythonQtWrapper_QWebElement::setStyleProperty(QWebElement* theWrappedObject, const QString&  name, const QString&  value)
{
  ( theWrappedObject->setStyleProperty(name, value));
}

bool  PythonQtWrapper_QWebElement::hasClass(QWebElement* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->hasClass(name));
}

void PythonQtWrapper_QWebElement::encloseContentsWith(QWebElement* theWrappedObject, const QWebElement&  element)
{
  ( theWrappedObject->encloseContentsWith(element));
}

QWebElement  PythonQtWrapper_QWebElement::clone(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QVariant  PythonQtWrapper_QWebElement::evaluateJavaScript(QWebElement* theWrappedObject, const QString&  scriptSource)
{
  return ( theWrappedObject->evaluateJavaScript(scriptSource));
}

QWebElement*  PythonQtWrapper_QWebElement::operator_assign(QWebElement* theWrappedObject, const QWebElement&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QString  PythonQtWrapper_QWebElement::tagName(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->tagName());
}

QWebElement  PythonQtWrapper_QWebElement::previousSibling(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->previousSibling());
}

void PythonQtWrapper_QWebElement::render(QWebElement* theWrappedObject, QPainter*  painter)
{
  ( theWrappedObject->render(painter));
}

QWebFrame*  PythonQtWrapper_QWebElement::webFrame(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->webFrame());
}

void PythonQtWrapper_QWebElement::setAttributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value)
{
  ( theWrappedObject->setAttributeNS(namespaceUri, name, value));
}

QRect  PythonQtWrapper_QWebElement::geometry(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->geometry());
}

void PythonQtWrapper_QWebElement::removeAllChildren(QWebElement* theWrappedObject)
{
  ( theWrappedObject->removeAllChildren());
}

void PythonQtWrapper_QWebElement::prependInside(QWebElement* theWrappedObject, const QWebElement&  element)
{
  ( theWrappedObject->prependInside(element));
}

bool  PythonQtWrapper_QWebElement::hasAttribute(QWebElement* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->hasAttribute(name));
}

QString  PythonQtWrapper_QWebElement::attribute(QWebElement* theWrappedObject, const QString&  name, const QString&  defaultValue) const
{
  return ( theWrappedObject->attribute(name, defaultValue));
}

void PythonQtWrapper_QWebElement::removeAttribute(QWebElement* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->removeAttribute(name));
}

void PythonQtWrapper_QWebElement::removeFromDocument(QWebElement* theWrappedObject)
{
  ( theWrappedObject->removeFromDocument());
}

void PythonQtWrapper_QWebElement::toggleClass(QWebElement* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->toggleClass(name));
}

QStringList  PythonQtWrapper_QWebElement::classes(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->classes());
}

QString  PythonQtWrapper_QWebElement::toInnerXml(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->toInnerXml());
}

void PythonQtWrapper_QWebElement::addClass(QWebElement* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->addClass(name));
}

void PythonQtWrapper_QWebElement::appendInside(QWebElement* theWrappedObject, const QWebElement&  element)
{
  ( theWrappedObject->appendInside(element));
}

QString  PythonQtWrapper_QWebElement::localName(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->localName());
}

bool  PythonQtWrapper_QWebElement::hasAttributes(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->hasAttributes());
}

QWebElement  PythonQtWrapper_QWebElement::document(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

QWebElement  PythonQtWrapper_QWebElement::parent(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->parent());
}

void PythonQtWrapper_QWebElement::appendOutside(QWebElement* theWrappedObject, const QWebElement&  element)
{
  ( theWrappedObject->appendOutside(element));
}

QWebElement  PythonQtWrapper_QWebElement::firstChild(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->firstChild());
}

QWebElement*  PythonQtWrapper_QWebElement::takeFromDocument(QWebElement* theWrappedObject)
{
  return &( theWrappedObject->takeFromDocument());
}

void PythonQtWrapper_QWebElement::removeAttributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name)
{
  ( theWrappedObject->removeAttributeNS(namespaceUri, name));
}

QString  PythonQtWrapper_QWebElement::prefix(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->prefix());
}

QStringList  PythonQtWrapper_QWebElement::attributeNames(QWebElement* theWrappedObject, const QString&  namespaceUri) const
{
  return ( theWrappedObject->attributeNames(namespaceUri));
}

QWebElement  PythonQtWrapper_QWebElement::lastChild(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->lastChild());
}

void PythonQtWrapper_QWebElement::encloseWith(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->encloseWith(markup));
}

void PythonQtWrapper_QWebElement::prependOutside(QWebElement* theWrappedObject, const QWebElement&  element)
{
  ( theWrappedObject->prependOutside(element));
}

void PythonQtWrapper_QWebElement::appendInside(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->appendInside(markup));
}

void PythonQtWrapper_QWebElement::setFocus(QWebElement* theWrappedObject)
{
  ( theWrappedObject->setFocus());
}

QString  PythonQtWrapper_QWebElement::namespaceUri(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->namespaceUri());
}

bool  PythonQtWrapper_QWebElement::hasAttributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name) const
{
  return ( theWrappedObject->hasAttributeNS(namespaceUri, name));
}

QString  PythonQtWrapper_QWebElement::attributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  defaultValue) const
{
  return ( theWrappedObject->attributeNS(namespaceUri, name, defaultValue));
}

bool  PythonQtWrapper_QWebElement::isNull(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QString  PythonQtWrapper_QWebElement::toOuterXml(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->toOuterXml());
}

void PythonQtWrapper_QWebElement::removeClass(QWebElement* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->removeClass(name));
}

void PythonQtWrapper_QWebElement::replace(QWebElement* theWrappedObject, const QWebElement&  element)
{
  ( theWrappedObject->replace(element));
}

void PythonQtWrapper_QWebElement::setInnerXml(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->setInnerXml(markup));
}

void PythonQtWrapper_QWebElement::encloseWith(QWebElement* theWrappedObject, const QWebElement&  element)
{
  ( theWrappedObject->encloseWith(element));
}

bool  PythonQtWrapper_QWebElement::hasFocus(QWebElement* theWrappedObject) const
{
  return ( theWrappedObject->hasFocus());
}

void PythonQtWrapper_QWebElement::encloseContentsWith(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->encloseContentsWith(markup));
}

void PythonQtWrapper_QWebElement::setOuterXml(QWebElement* theWrappedObject, const QString&  markup)
{
  ( theWrappedObject->setOuterXml(markup));
}

