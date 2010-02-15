#include "PythonQtWrapper_QHistoryState.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractstate.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhistorystate.h>
#include <qlist.h>
#include <qobject.h>
#include <qstate.h>
#include <qstatemachine.h>

void PythonQtShell_QHistoryState::childEvent(QChildEvent*  arg__1)
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
  QHistoryState::childEvent(arg__1);
}
void PythonQtShell_QHistoryState::customEvent(QEvent*  arg__1)
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
  QHistoryState::customEvent(arg__1);
}
bool  PythonQtShell_QHistoryState::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&e};
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
  return QHistoryState::event(e);
}
bool  PythonQtShell_QHistoryState::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QHistoryState::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QHistoryState::onEntry(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "onEntry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHistoryState::onEntry(event);
}
void PythonQtShell_QHistoryState::onExit(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "onExit");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHistoryState::onExit(event);
}
void PythonQtShell_QHistoryState::timerEvent(QTimerEvent*  arg__1)
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
  QHistoryState::timerEvent(arg__1);
}
QHistoryState* PythonQtWrapper_QHistoryState::new_QHistoryState(QHistoryState::HistoryType  type, QState*  parent)
{ 
return new PythonQtShell_QHistoryState(type, parent); }

QHistoryState* PythonQtWrapper_QHistoryState::new_QHistoryState(QState*  parent)
{ 
return new PythonQtShell_QHistoryState(parent); }

bool  PythonQtWrapper_QHistoryState::event(QHistoryState* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QHistoryState*)theWrappedObject)->promoted_event(e));
}

void PythonQtWrapper_QHistoryState::onEntry(QHistoryState* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QHistoryState*)theWrappedObject)->promoted_onEntry(event));
}

void PythonQtWrapper_QHistoryState::onExit(QHistoryState* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QHistoryState*)theWrappedObject)->promoted_onExit(event));
}

void PythonQtWrapper_QHistoryState::setHistoryType(QHistoryState* theWrappedObject, QHistoryState::HistoryType  type)
{
  ( theWrappedObject->setHistoryType(type));
}

QAbstractState*  PythonQtWrapper_QHistoryState::defaultState(QHistoryState* theWrappedObject) const
{
  return ( theWrappedObject->defaultState());
}

QHistoryState::HistoryType  PythonQtWrapper_QHistoryState::historyType(QHistoryState* theWrappedObject) const
{
  return ( theWrappedObject->historyType());
}

void PythonQtWrapper_QHistoryState::setDefaultState(QHistoryState* theWrappedObject, QAbstractState*  state)
{
  ( theWrappedObject->setDefaultState(state));
}

