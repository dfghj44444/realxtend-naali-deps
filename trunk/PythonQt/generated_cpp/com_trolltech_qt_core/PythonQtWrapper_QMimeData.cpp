#include "PythonQtWrapper_QMimeData.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QStringList>
#include <QUrl>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qurl.h>

void PythonQtShell_QMimeData::childEvent(QChildEvent*  arg__1)
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
  QMimeData::childEvent(arg__1);
}
void PythonQtShell_QMimeData::customEvent(QEvent*  arg__1)
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
  QMimeData::customEvent(arg__1);
}
bool  PythonQtShell_QMimeData::event(QEvent*  arg__1)
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
  return QMimeData::event(arg__1);
}
bool  PythonQtShell_QMimeData::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QMimeData::eventFilter(arg__1, arg__2);
}
QStringList  PythonQtShell_QMimeData::formats() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "formats");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QStringList"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("formats", methodInfo, result);
        } else {
          returnValue = *((QStringList*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QMimeData::formats();
}
bool  PythonQtShell_QMimeData::hasFormat(const QString&  mimetype) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hasFormat");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&mimetype};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hasFormat", methodInfo, result);
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
  return QMimeData::hasFormat(mimetype);
}
QVariant  PythonQtShell_QMimeData::retrieveData(const QString&  mimetype, QVariant::Type  preferredType) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "retrieveData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QString&" , "QVariant::Type"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&mimetype, (void*)&preferredType};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("retrieveData", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QMimeData::retrieveData(mimetype, preferredType);
}
void PythonQtShell_QMimeData::timerEvent(QTimerEvent*  arg__1)
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
  QMimeData::timerEvent(arg__1);
}
QMimeData* PythonQtWrapper_QMimeData::new_QMimeData()
{ 
return new PythonQtShell_QMimeData(); }

void PythonQtWrapper_QMimeData::setColorData(QMimeData* theWrappedObject, const QVariant&  color)
{
  ( theWrappedObject->setColorData(color));
}

bool  PythonQtWrapper_QMimeData::hasImage(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasImage());
}

QString  PythonQtWrapper_QMimeData::text(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

void PythonQtWrapper_QMimeData::setData(QMimeData* theWrappedObject, const QString&  mimetype, const QByteArray&  data)
{
  ( theWrappedObject->setData(mimetype, data));
}

void PythonQtWrapper_QMimeData::removeFormat(QMimeData* theWrappedObject, const QString&  mimetype)
{
  ( theWrappedObject->removeFormat(mimetype));
}

QVariant  PythonQtWrapper_QMimeData::colorData(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->colorData());
}

bool  PythonQtWrapper_QMimeData::hasColor(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasColor());
}

void PythonQtWrapper_QMimeData::setImageData(QMimeData* theWrappedObject, const QVariant&  image)
{
  ( theWrappedObject->setImageData(image));
}

QStringList  PythonQtWrapper_QMimeData::formats(QMimeData* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->promoted_formats());
}

bool  PythonQtWrapper_QMimeData::hasText(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasText());
}

void PythonQtWrapper_QMimeData::setText(QMimeData* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setText(text));
}

QList<QUrl >  PythonQtWrapper_QMimeData::urls(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->urls());
}

QByteArray  PythonQtWrapper_QMimeData::data(QMimeData* theWrappedObject, const QString&  mimetype) const
{
  return ( theWrappedObject->data(mimetype));
}

bool  PythonQtWrapper_QMimeData::hasHtml(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasHtml());
}

void PythonQtWrapper_QMimeData::clear(QMimeData* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QMimeData::hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const
{
  return ( ((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->promoted_hasFormat(mimetype));
}

bool  PythonQtWrapper_QMimeData::hasUrls(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasUrls());
}

QVariant  PythonQtWrapper_QMimeData::imageData(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->imageData());
}

void PythonQtWrapper_QMimeData::setHtml(QMimeData* theWrappedObject, const QString&  html)
{
  ( theWrappedObject->setHtml(html));
}

void PythonQtWrapper_QMimeData::setUrls(QMimeData* theWrappedObject, const QList<QUrl >&  urls)
{
  ( theWrappedObject->setUrls(urls));
}

QVariant  PythonQtWrapper_QMimeData::retrieveData(QMimeData* theWrappedObject, const QString&  mimetype, QVariant::Type  preferredType) const
{
  return ( ((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->promoted_retrieveData(mimetype, preferredType));
}

QString  PythonQtWrapper_QMimeData::html(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->html());
}

