#include "PythonQtWrapper_QState.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractstate.h>
#include <qabstracttransition.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsignaltransition.h>
#include <qstate.h>
#include <qstatemachine.h>

void PythonQtShell_QState::childEvent(QChildEvent*  arg__1)
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
  QState::childEvent(arg__1);
}
void PythonQtShell_QState::customEvent(QEvent*  arg__1)
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
  QState::customEvent(arg__1);
}
bool  PythonQtShell_QState::event(QEvent*  e)
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
  return QState::event(e);
}
bool  PythonQtShell_QState::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QState::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QState::onEntry(QEvent*  event)
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
  QState::onEntry(event);
}
void PythonQtShell_QState::onExit(QEvent*  event)
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
  QState::onExit(event);
}
void PythonQtShell_QState::timerEvent(QTimerEvent*  arg__1)
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
  QState::timerEvent(arg__1);
}
QState* PythonQtWrapper_QState::new_QState(QState*  parent)
{ 
return new PythonQtShell_QState(parent); }

QState* PythonQtWrapper_QState::new_QState(QState::ChildMode  childMode, QState*  parent)
{ 
return new PythonQtShell_QState(childMode, parent); }

void PythonQtWrapper_QState::setInitialState(QState* theWrappedObject, QAbstractState*  state)
{
  ( theWrappedObject->setInitialState(state));
}

QAbstractTransition*  PythonQtWrapper_QState::addTransition(QState* theWrappedObject, QAbstractState*  target)
{
  return ( theWrappedObject->addTransition(target));
}

void PythonQtWrapper_QState::setChildMode(QState* theWrappedObject, QState::ChildMode  mode)
{
  ( theWrappedObject->setChildMode(mode));
}

void PythonQtWrapper_QState::addTransition(QState* theWrappedObject, QAbstractTransition*  transition)
{
  ( theWrappedObject->addTransition(transition));
}

void PythonQtWrapper_QState::assignProperty(QState* theWrappedObject, QObject*  object, const char*  name, const QVariant&  value)
{
  ( theWrappedObject->assignProperty(object, name, value));
}

QAbstractState*  PythonQtWrapper_QState::errorState(QState* theWrappedObject) const
{
  return ( theWrappedObject->errorState());
}

void PythonQtWrapper_QState::removeTransition(QState* theWrappedObject, QAbstractTransition*  transition)
{
  ( theWrappedObject->removeTransition(transition));
}

void PythonQtWrapper_QState::onExit(QState* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QState*)theWrappedObject)->promoted_onExit(event));
}

QAbstractState*  PythonQtWrapper_QState::initialState(QState* theWrappedObject) const
{
  return ( theWrappedObject->initialState());
}

QSignalTransition*  PythonQtWrapper_QState::addTransition(QState* theWrappedObject, QObject*  sender, const char*  signal, QAbstractState*  target)
{
  return ( theWrappedObject->addTransition(sender, signal, target));
}

bool  PythonQtWrapper_QState::event(QState* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QState*)theWrappedObject)->promoted_event(e));
}

void PythonQtWrapper_QState::setErrorState(QState* theWrappedObject, QAbstractState*  state)
{
  ( theWrappedObject->setErrorState(state));
}

void PythonQtWrapper_QState::onEntry(QState* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QState*)theWrappedObject)->promoted_onEntry(event));
}

QState::ChildMode  PythonQtWrapper_QState::childMode(QState* theWrappedObject) const
{
  return ( theWrappedObject->childMode());
}

