#include "PythonQtWrapper_QNetworkAccessManager.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkcookie.h>
#include <qnetworkproxy.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>

void PythonQtShell_QNetworkAccessManager::childEvent(QChildEvent*  arg__1)
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
  QNetworkAccessManager::childEvent(arg__1);
}
QNetworkReply*  PythonQtShell_QNetworkAccessManager::createRequest(QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createRequest");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QNetworkReply*" , "QNetworkAccessManager::Operation" , "const QNetworkRequest&" , "QIODevice*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QNetworkReply* returnValue;
    void* args[4] = {NULL, (void*)&op, (void*)&request, (void*)&outgoingData};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createRequest", methodInfo, result);
        } else {
          returnValue = *((QNetworkReply**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QNetworkAccessManager::createRequest(op, request, outgoingData);
}
void PythonQtShell_QNetworkAccessManager::customEvent(QEvent*  arg__1)
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
  QNetworkAccessManager::customEvent(arg__1);
}
bool  PythonQtShell_QNetworkAccessManager::event(QEvent*  arg__1)
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
  return QNetworkAccessManager::event(arg__1);
}
bool  PythonQtShell_QNetworkAccessManager::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QNetworkAccessManager::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QNetworkAccessManager::timerEvent(QTimerEvent*  arg__1)
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
  QNetworkAccessManager::timerEvent(arg__1);
}
QNetworkAccessManager* PythonQtWrapper_QNetworkAccessManager::new_QNetworkAccessManager(QObject*  parent)
{ 
return new PythonQtShell_QNetworkAccessManager(parent); }

void PythonQtWrapper_QNetworkAccessManager::setProxy(QNetworkAccessManager* theWrappedObject, const QNetworkProxy&  proxy)
{
  ( theWrappedObject->setProxy(proxy));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::head(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request)
{
  return ( theWrappedObject->head(request));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data)
{
  return ( theWrappedObject->post(request, data));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::get(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request)
{
  return ( theWrappedObject->get(request));
}

QNetworkProxy  PythonQtWrapper_QNetworkAccessManager::proxy(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->proxy());
}

void PythonQtWrapper_QNetworkAccessManager::setCookieJar(QNetworkAccessManager* theWrappedObject, QNetworkCookieJar*  cookieJar)
{
  ( theWrappedObject->setCookieJar(cookieJar));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data)
{
  return ( theWrappedObject->put(request, data));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data)
{
  return ( theWrappedObject->put(request, data));
}

QNetworkCookieJar*  PythonQtWrapper_QNetworkAccessManager::cookieJar(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->cookieJar());
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data)
{
  return ( theWrappedObject->post(request, data));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::createRequest(QNetworkAccessManager* theWrappedObject, QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData)
{
  return ( ((PythonQtPublicPromoter_QNetworkAccessManager*)theWrappedObject)->promoted_createRequest(op, request, outgoingData));
}

