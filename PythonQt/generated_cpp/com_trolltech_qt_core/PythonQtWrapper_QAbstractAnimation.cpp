#include "PythonQtWrapper_QAbstractAnimation.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractanimation.h>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

void PythonQtShell_QAbstractAnimation::childEvent(QChildEvent*  arg__1)
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
  QAbstractAnimation::childEvent(arg__1);
}
void PythonQtShell_QAbstractAnimation::customEvent(QEvent*  arg__1)
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
  QAbstractAnimation::customEvent(arg__1);
}
int  PythonQtShell_QAbstractAnimation::duration() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "duration");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
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
  int result;
return result;
}
bool  PythonQtShell_QAbstractAnimation::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
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
  return QAbstractAnimation::event(event);
}
bool  PythonQtShell_QAbstractAnimation::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QAbstractAnimation::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QAbstractAnimation::timerEvent(QTimerEvent*  arg__1)
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
  QAbstractAnimation::timerEvent(arg__1);
}
void PythonQtShell_QAbstractAnimation::updateCurrentTime(int  currentTime)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateCurrentTime");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&currentTime};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
void PythonQtShell_QAbstractAnimation::updateDirection(QAbstractAnimation::Direction  direction)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateDirection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&direction};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractAnimation::updateDirection(direction);
}
void PythonQtShell_QAbstractAnimation::updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateState");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&newState, (void*)&oldState};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractAnimation::updateState(newState, oldState);
}
QAbstractAnimation* PythonQtWrapper_QAbstractAnimation::new_QAbstractAnimation(QObject*  parent)
{ 
return new PythonQtShell_QAbstractAnimation(parent); }

int  PythonQtWrapper_QAbstractAnimation::currentLoopTime(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->currentLoopTime());
}

int  PythonQtWrapper_QAbstractAnimation::currentLoop(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->currentLoop());
}

void PythonQtWrapper_QAbstractAnimation::updateState(QAbstractAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
{
  ( ((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->promoted_updateState(newState, oldState));
}

int  PythonQtWrapper_QAbstractAnimation::loopCount(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->loopCount());
}

int  PythonQtWrapper_QAbstractAnimation::totalDuration(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->totalDuration());
}

QAbstractAnimation::Direction  PythonQtWrapper_QAbstractAnimation::direction(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->direction());
}

void PythonQtWrapper_QAbstractAnimation::setLoopCount(QAbstractAnimation* theWrappedObject, int  loopCount)
{
  ( theWrappedObject->setLoopCount(loopCount));
}

QAbstractAnimation::State  PythonQtWrapper_QAbstractAnimation::state(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

int  PythonQtWrapper_QAbstractAnimation::currentTime(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->currentTime());
}

void PythonQtWrapper_QAbstractAnimation::setDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction)
{
  ( theWrappedObject->setDirection(direction));
}

void PythonQtWrapper_QAbstractAnimation::updateDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction)
{
  ( ((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->promoted_updateDirection(direction));
}

QAnimationGroup*  PythonQtWrapper_QAbstractAnimation::group(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->group());
}

bool  PythonQtWrapper_QAbstractAnimation::event(QAbstractAnimation* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->promoted_event(event));
}

