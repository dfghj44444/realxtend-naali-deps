#include "PythonQtWrapper_QGLContext.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qcolor.h>
#include <qgl.h>
#include <qpaintdevice.h>

bool  PythonQtShell_QGLContext::chooseContext(const QGLContext*  shareContext)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "chooseContext");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGLContext*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&shareContext};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("chooseContext", methodInfo, result);
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
  return QGLContext::chooseContext(shareContext);
}
bool  PythonQtShell_QGLContext::create(const QGLContext*  shareContext)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "create");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGLContext*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&shareContext};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("create", methodInfo, result);
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
  return QGLContext::create(shareContext);
}
void PythonQtShell_QGLContext::doneCurrent()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "doneCurrent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLContext::doneCurrent();
}
void PythonQtShell_QGLContext::makeCurrent()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "makeCurrent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLContext::makeCurrent();
}
void PythonQtShell_QGLContext::swapBuffers() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "swapBuffers");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLContext::swapBuffers();
}
QGLContext* PythonQtWrapper_QGLContext::new_QGLContext(const QGLFormat&  format)
{ 
return new PythonQtShell_QGLContext(format); }

QGLContext* PythonQtWrapper_QGLContext::new_QGLContext(const QGLFormat&  format, QPaintDevice*  device)
{ 
return new PythonQtShell_QGLContext(format, device); }

QGLFormat  PythonQtWrapper_QGLContext::requestedFormat(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->requestedFormat());
}

QGLFormat  PythonQtWrapper_QGLContext::format(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

bool  PythonQtWrapper_QGLContext::isValid(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QGLContext::makeCurrent(QGLContext* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_makeCurrent());
}

bool  PythonQtWrapper_QGLContext::static_QGLContext_areSharing(const QGLContext*  context1, const QGLContext*  context2)
{
  return (QGLContext::areSharing(context1, context2));
}

void PythonQtWrapper_QGLContext::swapBuffers(QGLContext* theWrappedObject) const
{
  ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_swapBuffers());
}

bool  PythonQtWrapper_QGLContext::create(QGLContext* theWrappedObject, const QGLContext*  shareContext)
{
  return ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_create(shareContext));
}

const QGLContext*  PythonQtWrapper_QGLContext::static_QGLContext_currentContext()
{
  return (QGLContext::currentContext());
}

void PythonQtWrapper_QGLContext::doneCurrent(QGLContext* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_doneCurrent());
}

QPaintDevice*  PythonQtWrapper_QGLContext::device(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

void PythonQtWrapper_QGLContext::reset(QGLContext* theWrappedObject)
{
  ( theWrappedObject->reset());
}

bool  PythonQtWrapper_QGLContext::isSharing(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->isSharing());
}

void PythonQtWrapper_QGLContext::static_QGLContext_setTextureCacheLimit(int  size)
{
  (QGLContext::setTextureCacheLimit(size));
}

void PythonQtWrapper_QGLContext::setFormat(QGLContext* theWrappedObject, const QGLFormat&  format)
{
  ( theWrappedObject->setFormat(format));
}

int  PythonQtWrapper_QGLContext::static_QGLContext_textureCacheLimit()
{
  return (QGLContext::textureCacheLimit());
}

bool  PythonQtWrapper_QGLContext::chooseContext(QGLContext* theWrappedObject, const QGLContext*  shareContext)
{
  return ( ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_chooseContext(shareContext));
}

QColor  PythonQtWrapper_QGLContext::overlayTransparentColor(QGLContext* theWrappedObject) const
{
  return ( theWrappedObject->overlayTransparentColor());
}

