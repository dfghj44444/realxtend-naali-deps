#include "PythonQtWrapper_QGraphicsDropShadowEffect.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qgraphicseffect.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>

QRectF  PythonQtShell_QGraphicsDropShadowEffect::boundingRectFor(const QRectF&  rect) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "boundingRectFor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRectF" , "const QRectF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QRectF returnValue;
    void* args[2] = {NULL, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("boundingRectFor", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsDropShadowEffect::boundingRectFor(rect);
}
void PythonQtShell_QGraphicsDropShadowEffect::childEvent(QChildEvent*  arg__1)
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
  QGraphicsDropShadowEffect::childEvent(arg__1);
}
void PythonQtShell_QGraphicsDropShadowEffect::customEvent(QEvent*  arg__1)
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
  QGraphicsDropShadowEffect::customEvent(arg__1);
}
void PythonQtShell_QGraphicsDropShadowEffect::draw(QPainter*  painter)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "draw");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&painter};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsDropShadowEffect::draw(painter);
}
bool  PythonQtShell_QGraphicsDropShadowEffect::event(QEvent*  arg__1)
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
  return QGraphicsDropShadowEffect::event(arg__1);
}
bool  PythonQtShell_QGraphicsDropShadowEffect::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QGraphicsDropShadowEffect::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsDropShadowEffect::sourceChanged(QGraphicsEffect::ChangeFlags  flags)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sourceChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsEffect::ChangeFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&flags};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsDropShadowEffect::sourceChanged(flags);
}
void PythonQtShell_QGraphicsDropShadowEffect::timerEvent(QTimerEvent*  arg__1)
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
  QGraphicsDropShadowEffect::timerEvent(arg__1);
}
QGraphicsDropShadowEffect* PythonQtWrapper_QGraphicsDropShadowEffect::new_QGraphicsDropShadowEffect(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsDropShadowEffect(parent); }

qreal  PythonQtWrapper_QGraphicsDropShadowEffect::yOffset(QGraphicsDropShadowEffect* theWrappedObject) const
{
  return ( theWrappedObject->yOffset());
}

QRectF  PythonQtWrapper_QGraphicsDropShadowEffect::boundingRectFor(QGraphicsDropShadowEffect* theWrappedObject, const QRectF&  rect) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsDropShadowEffect*)theWrappedObject)->promoted_boundingRectFor(rect));
}

void PythonQtWrapper_QGraphicsDropShadowEffect::draw(QGraphicsDropShadowEffect* theWrappedObject, QPainter*  painter)
{
  ( ((PythonQtPublicPromoter_QGraphicsDropShadowEffect*)theWrappedObject)->promoted_draw(painter));
}

qreal  PythonQtWrapper_QGraphicsDropShadowEffect::xOffset(QGraphicsDropShadowEffect* theWrappedObject) const
{
  return ( theWrappedObject->xOffset());
}

QColor  PythonQtWrapper_QGraphicsDropShadowEffect::color(QGraphicsDropShadowEffect* theWrappedObject) const
{
  return ( theWrappedObject->color());
}

qreal  PythonQtWrapper_QGraphicsDropShadowEffect::blurRadius(QGraphicsDropShadowEffect* theWrappedObject) const
{
  return ( theWrappedObject->blurRadius());
}

QPointF  PythonQtWrapper_QGraphicsDropShadowEffect::offset(QGraphicsDropShadowEffect* theWrappedObject) const
{
  return ( theWrappedObject->offset());
}

