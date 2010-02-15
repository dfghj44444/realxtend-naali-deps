#include "PythonQtWrapper_QStateMachine.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractstate.h>
#include <qabstracttransition.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsignaltransition.h>
#include <qstate.h>
#include <qstatemachine.h>

void PythonQtShell_QStateMachine::beginMicrostep(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "beginMicrostep");
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
  QStateMachine::beginMicrostep(event);
}
void PythonQtShell_QStateMachine::beginSelectTransitions(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "beginSelectTransitions");
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
  QStateMachine::beginSelectTransitions(event);
}
void PythonQtShell_QStateMachine::childEvent(QChildEvent*  arg__1)
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
  QStateMachine::childEvent(arg__1);
}
void PythonQtShell_QStateMachine::customEvent(QEvent*  arg__1)
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
  QStateMachine::customEvent(arg__1);
}
void PythonQtShell_QStateMachine::endMicrostep(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "endMicrostep");
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
  QStateMachine::endMicrostep(event);
}
void PythonQtShell_QStateMachine::endSelectTransitions(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "endSelectTransitions");
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
  QStateMachine::endSelectTransitions(event);
}
bool  PythonQtShell_QStateMachine::event(QEvent*  e)
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
  return QStateMachine::event(e);
}
bool  PythonQtShell_QStateMachine::eventFilter(QObject*  watched, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&watched, (void*)&event};
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
  return QStateMachine::eventFilter(watched, event);
}
void PythonQtShell_QStateMachine::onEntry(QEvent*  event)
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
  QStateMachine::onEntry(event);
}
void PythonQtShell_QStateMachine::onExit(QEvent*  event)
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
  QStateMachine::onExit(event);
}
void PythonQtShell_QStateMachine::timerEvent(QTimerEvent*  arg__1)
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
  QStateMachine::timerEvent(arg__1);
}
QStateMachine* PythonQtWrapper_QStateMachine::new_QStateMachine(QObject*  parent)
{ 
return new PythonQtShell_QStateMachine(parent); }

void PythonQtWrapper_QStateMachine::postEvent(QStateMachine* theWrappedObject, QEvent*  event, QStateMachine::EventPriority  priority)
{
  ( theWrappedObject->postEvent(event, priority));
}

void PythonQtWrapper_QStateMachine::beginMicrostep(QStateMachine* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_beginMicrostep(event));
}

QStateMachine::RestorePolicy  PythonQtWrapper_QStateMachine::globalRestorePolicy(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->globalRestorePolicy());
}

QString  PythonQtWrapper_QStateMachine::errorString(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

void PythonQtWrapper_QStateMachine::endMicrostep(QStateMachine* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_endMicrostep(event));
}

void PythonQtWrapper_QStateMachine::removeDefaultAnimation(QStateMachine* theWrappedObject, QAbstractAnimation*  animation)
{
  ( theWrappedObject->removeDefaultAnimation(animation));
}

void PythonQtWrapper_QStateMachine::setGlobalRestorePolicy(QStateMachine* theWrappedObject, QStateMachine::RestorePolicy  restorePolicy)
{
  ( theWrappedObject->setGlobalRestorePolicy(restorePolicy));
}

void PythonQtWrapper_QStateMachine::clearError(QStateMachine* theWrappedObject)
{
  ( theWrappedObject->clearError());
}

void PythonQtWrapper_QStateMachine::endSelectTransitions(QStateMachine* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_endSelectTransitions(event));
}

bool  PythonQtWrapper_QStateMachine::isAnimated(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->isAnimated());
}

void PythonQtWrapper_QStateMachine::removeState(QStateMachine* theWrappedObject, QAbstractState*  state)
{
  ( theWrappedObject->removeState(state));
}

void PythonQtWrapper_QStateMachine::addState(QStateMachine* theWrappedObject, QAbstractState*  state)
{
  ( theWrappedObject->addState(state));
}

void PythonQtWrapper_QStateMachine::onExit(QStateMachine* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_onExit(event));
}

bool  PythonQtWrapper_QStateMachine::event(QStateMachine* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_event(e));
}

bool  PythonQtWrapper_QStateMachine::eventFilter(QStateMachine* theWrappedObject, QObject*  watched, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_eventFilter(watched, event));
}

int  PythonQtWrapper_QStateMachine::postDelayedEvent(QStateMachine* theWrappedObject, QEvent*  event, int  delay)
{
  return ( theWrappedObject->postDelayedEvent(event, delay));
}

void PythonQtWrapper_QStateMachine::setAnimated(QStateMachine* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAnimated(enabled));
}

QSet<QAbstractState* >  PythonQtWrapper_QStateMachine::configuration(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->configuration());
}

void PythonQtWrapper_QStateMachine::onEntry(QStateMachine* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_onEntry(event));
}

void PythonQtWrapper_QStateMachine::addDefaultAnimation(QStateMachine* theWrappedObject, QAbstractAnimation*  animation)
{
  ( theWrappedObject->addDefaultAnimation(animation));
}

QList<QAbstractAnimation* >  PythonQtWrapper_QStateMachine::defaultAnimations(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->defaultAnimations());
}

bool  PythonQtWrapper_QStateMachine::isRunning(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->isRunning());
}

QStateMachine::Error  PythonQtWrapper_QStateMachine::error(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

bool  PythonQtWrapper_QStateMachine::cancelDelayedEvent(QStateMachine* theWrappedObject, int  id)
{
  return ( theWrappedObject->cancelDelayedEvent(id));
}

void PythonQtWrapper_QStateMachine::beginSelectTransitions(QStateMachine* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_beginSelectTransitions(event));
}

