#include "PythonQtWrapper_QGLFramebufferObject.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qglframebufferobject.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qsize.h>

int  PythonQtShell_QGLFramebufferObject::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGLFramebufferObject::devType();
}
int  PythonQtShell_QGLFramebufferObject::metric(QPaintDevice::PaintDeviceMetric  metric) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&metric};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGLFramebufferObject::metric(metric);
}
QPaintEngine*  PythonQtShell_QGLFramebufferObject::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPaintEngine*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
        } else {
          returnValue = *((QPaintEngine**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGLFramebufferObject::paintEngine();
}
QGLFramebufferObject* PythonQtWrapper_QGLFramebufferObject::new_QGLFramebufferObject(const QSize&  size, const QGLFramebufferObjectFormat&  format)
{ 
return new PythonQtShell_QGLFramebufferObject(size, format); }

QGLFramebufferObject* PythonQtWrapper_QGLFramebufferObject::new_QGLFramebufferObject(int  width, int  height, const QGLFramebufferObjectFormat&  format)
{ 
return new PythonQtShell_QGLFramebufferObject(width, height, format); }

QGLFramebufferObject::Attachment  PythonQtWrapper_QGLFramebufferObject::attachment(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->attachment());
}

bool  PythonQtWrapper_QGLFramebufferObject::release(QGLFramebufferObject* theWrappedObject)
{
  return ( theWrappedObject->release());
}

bool  PythonQtWrapper_QGLFramebufferObject::static_QGLFramebufferObject_hasOpenGLFramebufferBlit()
{
  return (QGLFramebufferObject::hasOpenGLFramebufferBlit());
}

QImage  PythonQtWrapper_QGLFramebufferObject::toImage(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->toImage());
}

bool  PythonQtWrapper_QGLFramebufferObject::isValid(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QGLFramebufferObject::bind(QGLFramebufferObject* theWrappedObject)
{
  return ( theWrappedObject->bind());
}

int  PythonQtWrapper_QGLFramebufferObject::devType(QGLFramebufferObject* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGLFramebufferObject*)theWrappedObject)->promoted_devType());
}

bool  PythonQtWrapper_QGLFramebufferObject::static_QGLFramebufferObject_hasOpenGLFramebufferObjects()
{
  return (QGLFramebufferObject::hasOpenGLFramebufferObjects());
}

bool  PythonQtWrapper_QGLFramebufferObject::isBound(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->isBound());
}

QGLFramebufferObjectFormat  PythonQtWrapper_QGLFramebufferObject::format(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

QPaintEngine*  PythonQtWrapper_QGLFramebufferObject::paintEngine(QGLFramebufferObject* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGLFramebufferObject*)theWrappedObject)->promoted_paintEngine());
}

QSize  PythonQtWrapper_QGLFramebufferObject::size(QGLFramebufferObject* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

int  PythonQtWrapper_QGLFramebufferObject::metric(QGLFramebufferObject* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const
{
  return ( ((PythonQtPublicPromoter_QGLFramebufferObject*)theWrappedObject)->promoted_metric(metric));
}

