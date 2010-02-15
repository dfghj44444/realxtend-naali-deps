#include "PythonQtWrapper_QNetworkDiskCache.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractnetworkcache.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkdiskcache.h>
#include <qobject.h>
#include <qurl.h>

qint64  PythonQtShell_QNetworkDiskCache::cacheSize() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "cacheSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("cacheSize", methodInfo, result);
        } else {
          returnValue = *((qint64*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QNetworkDiskCache::cacheSize();
}
void PythonQtShell_QNetworkDiskCache::childEvent(QChildEvent*  arg__1)
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
  QNetworkDiskCache::childEvent(arg__1);
}
void PythonQtShell_QNetworkDiskCache::clear()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "clear");
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
  QNetworkDiskCache::clear();
}
void PythonQtShell_QNetworkDiskCache::customEvent(QEvent*  arg__1)
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
  QNetworkDiskCache::customEvent(arg__1);
}
QIODevice*  PythonQtShell_QNetworkDiskCache::data(const QUrl&  url)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "data");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QIODevice*" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QIODevice* returnValue;
    void* args[2] = {NULL, (void*)&url};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("data", methodInfo, result);
        } else {
          returnValue = *((QIODevice**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QNetworkDiskCache::data(url);
}
bool  PythonQtShell_QNetworkDiskCache::event(QEvent*  arg__1)
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
  return QNetworkDiskCache::event(arg__1);
}
bool  PythonQtShell_QNetworkDiskCache::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QNetworkDiskCache::eventFilter(arg__1, arg__2);
}
qint64  PythonQtShell_QNetworkDiskCache::expire()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "expire");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("expire", methodInfo, result);
        } else {
          returnValue = *((qint64*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QNetworkDiskCache::expire();
}
void PythonQtShell_QNetworkDiskCache::insert(QIODevice*  device)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insert");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QIODevice*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&device};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QNetworkDiskCache::insert(device);
}
QNetworkCacheMetaData  PythonQtShell_QNetworkDiskCache::metaData(const QUrl&  url)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metaData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QNetworkCacheMetaData" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QNetworkCacheMetaData returnValue;
    void* args[2] = {NULL, (void*)&url};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("metaData", methodInfo, result);
        } else {
          returnValue = *((QNetworkCacheMetaData*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QNetworkDiskCache::metaData(url);
}
QIODevice*  PythonQtShell_QNetworkDiskCache::prepare(const QNetworkCacheMetaData&  metaData)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "prepare");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QIODevice*" , "const QNetworkCacheMetaData&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QIODevice* returnValue;
    void* args[2] = {NULL, (void*)&metaData};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("prepare", methodInfo, result);
        } else {
          returnValue = *((QIODevice**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QNetworkDiskCache::prepare(metaData);
}
bool  PythonQtShell_QNetworkDiskCache::remove(const QUrl&  url)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "remove");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&url};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("remove", methodInfo, result);
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
  return QNetworkDiskCache::remove(url);
}
void PythonQtShell_QNetworkDiskCache::timerEvent(QTimerEvent*  arg__1)
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
  QNetworkDiskCache::timerEvent(arg__1);
}
void PythonQtShell_QNetworkDiskCache::updateMetaData(const QNetworkCacheMetaData&  metaData)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateMetaData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QNetworkCacheMetaData&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&metaData};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QNetworkDiskCache::updateMetaData(metaData);
}
QNetworkDiskCache* PythonQtWrapper_QNetworkDiskCache::new_QNetworkDiskCache(QObject*  parent)
{ 
return new PythonQtShell_QNetworkDiskCache(parent); }

QString  PythonQtWrapper_QNetworkDiskCache::cacheDirectory(QNetworkDiskCache* theWrappedObject) const
{
  return ( theWrappedObject->cacheDirectory());
}

void PythonQtWrapper_QNetworkDiskCache::updateMetaData(QNetworkDiskCache* theWrappedObject, const QNetworkCacheMetaData&  metaData)
{
  ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_updateMetaData(metaData));
}

qint64  PythonQtWrapper_QNetworkDiskCache::maximumCacheSize(QNetworkDiskCache* theWrappedObject) const
{
  return ( theWrappedObject->maximumCacheSize());
}

QIODevice*  PythonQtWrapper_QNetworkDiskCache::data(QNetworkDiskCache* theWrappedObject, const QUrl&  url)
{
  return ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_data(url));
}

QIODevice*  PythonQtWrapper_QNetworkDiskCache::prepare(QNetworkDiskCache* theWrappedObject, const QNetworkCacheMetaData&  metaData)
{
  return ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_prepare(metaData));
}

qint64  PythonQtWrapper_QNetworkDiskCache::cacheSize(QNetworkDiskCache* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_cacheSize());
}

void PythonQtWrapper_QNetworkDiskCache::insert(QNetworkDiskCache* theWrappedObject, QIODevice*  device)
{
  ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_insert(device));
}

bool  PythonQtWrapper_QNetworkDiskCache::remove(QNetworkDiskCache* theWrappedObject, const QUrl&  url)
{
  return ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_remove(url));
}

qint64  PythonQtWrapper_QNetworkDiskCache::expire(QNetworkDiskCache* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_expire());
}

void PythonQtWrapper_QNetworkDiskCache::setCacheDirectory(QNetworkDiskCache* theWrappedObject, const QString&  cacheDir)
{
  ( theWrappedObject->setCacheDirectory(cacheDir));
}

QNetworkCacheMetaData  PythonQtWrapper_QNetworkDiskCache::fileMetaData(QNetworkDiskCache* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->fileMetaData(fileName));
}

QNetworkCacheMetaData  PythonQtWrapper_QNetworkDiskCache::metaData(QNetworkDiskCache* theWrappedObject, const QUrl&  url)
{
  return ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_metaData(url));
}

void PythonQtWrapper_QNetworkDiskCache::setMaximumCacheSize(QNetworkDiskCache* theWrappedObject, qint64  size)
{
  ( theWrappedObject->setMaximumCacheSize(size));
}

