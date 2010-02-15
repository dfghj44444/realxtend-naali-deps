#include "PythonQtWrapper_QGLPixelBuffer.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QImage>
#include <QVariant>
#include <qgl.h>
#include <qglpixelbuffer.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qsize.h>

int  PythonQtShell_QGLPixelBuffer::devType() const
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
  return QGLPixelBuffer::devType();
}
int  PythonQtShell_QGLPixelBuffer::metric(QPaintDevice::PaintDeviceMetric  metric) const
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
  return QGLPixelBuffer::metric(metric);
}
QPaintEngine*  PythonQtShell_QGLPixelBuffer::paintEngine() const
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
  return QGLPixelBuffer::paintEngine();
}
QGLPixelBuffer* PythonQtWrapper_QGLPixelBuffer::new_QGLPixelBuffer(const QSize&  size, const QGLFormat&  format, QGLWidget*  shareWidget)
{ 
return new PythonQtShell_QGLPixelBuffer(size, format, shareWidget); }

QGLPixelBuffer* PythonQtWrapper_QGLPixelBuffer::new_QGLPixelBuffer(int  width, int  height, const QGLFormat&  format, QGLWidget*  shareWidget)
{ 
return new PythonQtShell_QGLPixelBuffer(width, height, format, shareWidget); }

int  PythonQtWrapper_QGLPixelBuffer::devType(QGLPixelBuffer* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGLPixelBuffer*)theWrappedObject)->promoted_devType());
}

QGLFormat  PythonQtWrapper_QGLPixelBuffer::format(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

QPaintEngine*  PythonQtWrapper_QGLPixelBuffer::paintEngine(QGLPixelBuffer* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGLPixelBuffer*)theWrappedObject)->promoted_paintEngine());
}

void PythonQtWrapper_QGLPixelBuffer::releaseFromDynamicTexture(QGLPixelBuffer* theWrappedObject)
{
  ( theWrappedObject->releaseFromDynamicTexture());
}

QSize  PythonQtWrapper_QGLPixelBuffer::size(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

Qt::HANDLE  PythonQtWrapper_QGLPixelBuffer::handle(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->handle());
}

QImage  PythonQtWrapper_QGLPixelBuffer::toImage(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->toImage());
}

int  PythonQtWrapper_QGLPixelBuffer::metric(QGLPixelBuffer* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const
{
  return ( ((PythonQtPublicPromoter_QGLPixelBuffer*)theWrappedObject)->promoted_metric(metric));
}

bool  PythonQtWrapper_QGLPixelBuffer::static_QGLPixelBuffer_hasOpenGLPbuffers()
{
  return (QGLPixelBuffer::hasOpenGLPbuffers());
}

bool  PythonQtWrapper_QGLPixelBuffer::makeCurrent(QGLPixelBuffer* theWrappedObject)
{
  return ( theWrappedObject->makeCurrent());
}

bool  PythonQtWrapper_QGLPixelBuffer::doneCurrent(QGLPixelBuffer* theWrappedObject)
{
  return ( theWrappedObject->doneCurrent());
}

bool  PythonQtWrapper_QGLPixelBuffer::isValid(QGLPixelBuffer* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

