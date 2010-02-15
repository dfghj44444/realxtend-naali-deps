#include "PythonQtWrapper_QSvgGenerator.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qiodevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qrect.h>
#include <qsize.h>

int  PythonQtShell_QSvgGenerator::devType() const
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
  return QSvgGenerator::devType();
}
int  PythonQtShell_QSvgGenerator::metric(QPaintDevice::PaintDeviceMetric  metric) const
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
  return QSvgGenerator::metric(metric);
}
QPaintEngine*  PythonQtShell_QSvgGenerator::paintEngine() const
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
  return QSvgGenerator::paintEngine();
}
QSvgGenerator* PythonQtWrapper_QSvgGenerator::new_QSvgGenerator()
{ 
return new PythonQtShell_QSvgGenerator(); }

void PythonQtWrapper_QSvgGenerator::setTitle(QSvgGenerator* theWrappedObject, const QString&  title)
{
  ( theWrappedObject->setTitle(title));
}

void PythonQtWrapper_QSvgGenerator::setResolution(QSvgGenerator* theWrappedObject, int  dpi)
{
  ( theWrappedObject->setResolution(dpi));
}

QRect  PythonQtWrapper_QSvgGenerator::viewBox(QSvgGenerator* theWrappedObject) const
{
  return ( theWrappedObject->viewBox());
}

void PythonQtWrapper_QSvgGenerator::setFileName(QSvgGenerator* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setFileName(fileName));
}

int  PythonQtWrapper_QSvgGenerator::metric(QSvgGenerator* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const
{
  return ( ((PythonQtPublicPromoter_QSvgGenerator*)theWrappedObject)->promoted_metric(metric));
}

void PythonQtWrapper_QSvgGenerator::setViewBox(QSvgGenerator* theWrappedObject, const QRectF&  viewBox)
{
  ( theWrappedObject->setViewBox(viewBox));
}

void PythonQtWrapper_QSvgGenerator::setOutputDevice(QSvgGenerator* theWrappedObject, QIODevice*  outputDevice)
{
  ( theWrappedObject->setOutputDevice(outputDevice));
}

void PythonQtWrapper_QSvgGenerator::setViewBox(QSvgGenerator* theWrappedObject, const QRect&  viewBox)
{
  ( theWrappedObject->setViewBox(viewBox));
}

QRectF  PythonQtWrapper_QSvgGenerator::viewBoxF(QSvgGenerator* theWrappedObject) const
{
  return ( theWrappedObject->viewBoxF());
}

QIODevice*  PythonQtWrapper_QSvgGenerator::outputDevice(QSvgGenerator* theWrappedObject) const
{
  return ( theWrappedObject->outputDevice());
}

QString  PythonQtWrapper_QSvgGenerator::fileName(QSvgGenerator* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QString  PythonQtWrapper_QSvgGenerator::description(QSvgGenerator* theWrappedObject) const
{
  return ( theWrappedObject->description());
}

QPaintEngine*  PythonQtWrapper_QSvgGenerator::paintEngine(QSvgGenerator* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSvgGenerator*)theWrappedObject)->promoted_paintEngine());
}

void PythonQtWrapper_QSvgGenerator::setDescription(QSvgGenerator* theWrappedObject, const QString&  description)
{
  ( theWrappedObject->setDescription(description));
}

QString  PythonQtWrapper_QSvgGenerator::title(QSvgGenerator* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

int  PythonQtWrapper_QSvgGenerator::resolution(QSvgGenerator* theWrappedObject) const
{
  return ( theWrappedObject->resolution());
}

QSize  PythonQtWrapper_QSvgGenerator::size(QSvgGenerator* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QSvgGenerator::setSize(QSvgGenerator* theWrappedObject, const QSize&  size)
{
  ( theWrappedObject->setSize(size));
}

