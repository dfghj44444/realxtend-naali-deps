#include "PythonQtWrapper_QGraphicsTextItem.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QTextCursor>
#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpoint.h>
#include <qrect.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qwidget.h>

void PythonQtShell_QGraphicsTextItem::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::childEvent(arg__1);
}
void PythonQtShell_QGraphicsTextItem::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::customEvent(arg__1);
}
bool  PythonQtShell_QGraphicsTextItem::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsTextItem::event(arg__1);
}
bool  PythonQtShell_QGraphicsTextItem::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsTextItem::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsTextItem::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::timerEvent(arg__1);
}
QGraphicsTextItem* PythonQtWrapper_QGraphicsTextItem::new_QGraphicsTextItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsTextItem(parent, scene); }

QGraphicsTextItem* PythonQtWrapper_QGraphicsTextItem::new_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsTextItem(text, parent, scene); }

void PythonQtWrapper_QGraphicsTextItem::setDocument(QGraphicsTextItem* theWrappedObject, QTextDocument*  document)
{
  ( theWrappedObject->setDocument(document));
}

void PythonQtWrapper_QGraphicsTextItem::setPlainText(QGraphicsTextItem* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setPlainText(text));
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::shape(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

QString  PythonQtWrapper_QGraphicsTextItem::toHtml(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->toHtml());
}

bool  PythonQtWrapper_QGraphicsTextItem::openExternalLinks(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->openExternalLinks());
}

QColor  PythonQtWrapper_QGraphicsTextItem::defaultTextColor(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->defaultTextColor());
}

QFont  PythonQtWrapper_QGraphicsTextItem::font(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QTextDocument*  PythonQtWrapper_QGraphicsTextItem::document(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

void PythonQtWrapper_QGraphicsTextItem::paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

void PythonQtWrapper_QGraphicsTextItem::adjustSize(QGraphicsTextItem* theWrappedObject)
{
  ( theWrappedObject->adjustSize());
}

void PythonQtWrapper_QGraphicsTextItem::setTabChangesFocus(QGraphicsTextItem* theWrappedObject, bool  b)
{
  ( theWrappedObject->setTabChangesFocus(b));
}

QTextCursor  PythonQtWrapper_QGraphicsTextItem::textCursor(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textCursor());
}

QRectF  PythonQtWrapper_QGraphicsTextItem::boundingRect(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

int  PythonQtWrapper_QGraphicsTextItem::type(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

void PythonQtWrapper_QGraphicsTextItem::setFont(QGraphicsTextItem* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QGraphicsTextItem::setDefaultTextColor(QGraphicsTextItem* theWrappedObject, const QColor&  c)
{
  ( theWrappedObject->setDefaultTextColor(c));
}

bool  PythonQtWrapper_QGraphicsTextItem::contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::opaqueArea(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->opaqueArea());
}

void PythonQtWrapper_QGraphicsTextItem::setTextCursor(QGraphicsTextItem* theWrappedObject, const QTextCursor&  cursor)
{
  ( theWrappedObject->setTextCursor(cursor));
}

void PythonQtWrapper_QGraphicsTextItem::setHtml(QGraphicsTextItem* theWrappedObject, const QString&  html)
{
  ( theWrappedObject->setHtml(html));
}

void PythonQtWrapper_QGraphicsTextItem::setTextWidth(QGraphicsTextItem* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setTextWidth(width));
}

qreal  PythonQtWrapper_QGraphicsTextItem::textWidth(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textWidth());
}

QString  PythonQtWrapper_QGraphicsTextItem::toPlainText(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}

void PythonQtWrapper_QGraphicsTextItem::setOpenExternalLinks(QGraphicsTextItem* theWrappedObject, bool  open)
{
  ( theWrappedObject->setOpenExternalLinks(open));
}

void PythonQtWrapper_QGraphicsTextItem::setTextInteractionFlags(QGraphicsTextItem* theWrappedObject, Qt::TextInteractionFlags  flags)
{
  ( theWrappedObject->setTextInteractionFlags(flags));
}

bool  PythonQtWrapper_QGraphicsTextItem::isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( theWrappedObject->isObscuredBy(item));
}

bool  PythonQtWrapper_QGraphicsTextItem::tabChangesFocus(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->tabChangesFocus());
}

Qt::TextInteractionFlags  PythonQtWrapper_QGraphicsTextItem::textInteractionFlags(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textInteractionFlags());
}

