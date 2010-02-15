#include "PythonQtWrapper_QSequentialAnimationGroup.h"

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
#include <qpauseanimation.h>
#include <qsequentialanimationgroup.h>

void PythonQtShell_QSequentialAnimationGroup::childEvent(QChildEvent*  arg__1)
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
  QSequentialAnimationGroup::childEvent(arg__1);
}
void PythonQtShell_QSequentialAnimationGroup::customEvent(QEvent*  arg__1)
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
  QSequentialAnimationGroup::customEvent(arg__1);
}
int  PythonQtShell_QSequentialAnimationGroup::duration() const
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
  return QSequentialAnimationGroup::duration();
}
bool  PythonQtShell_QSequentialAnimationGroup::event(QEvent*  event)
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
  return QSequentialAnimationGroup::event(event);
}
bool  PythonQtShell_QSequentialAnimationGroup::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QSequentialAnimationGroup::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSequentialAnimationGroup::timerEvent(QTimerEvent*  arg__1)
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
  QSequentialAnimationGroup::timerEvent(arg__1);
}
void PythonQtShell_QSequentialAnimationGroup::updateCurrentTime(int  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateCurrentTime");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSequentialAnimationGroup::updateCurrentTime(arg__1);
}
void PythonQtShell_QSequentialAnimationGroup::updateDirection(QAbstractAnimation::Direction  direction)
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
  QSequentialAnimationGroup::updateDirection(direction);
}
void PythonQtShell_QSequentialAnimationGroup::updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
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
  QSequentialAnimationGroup::updateState(newState, oldState);
}
QSequentialAnimationGroup* PythonQtWrapper_QSequentialAnimationGroup::new_QSequentialAnimationGroup(QObject*  parent)
{ 
return new PythonQtShell_QSequentialAnimationGroup(parent); }

QAbstractAnimation*  PythonQtWrapper_QSequentialAnimationGroup::currentAnimation(QSequentialAnimationGroup* theWrappedObject) const
{
  return ( theWrappedObject->currentAnimation());
}

bool  PythonQtWrapper_QSequentialAnimationGroup::event(QSequentialAnimationGroup* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->promoted_event(event));
}

QPauseAnimation*  PythonQtWrapper_QSequentialAnimationGroup::insertPause(QSequentialAnimationGroup* theWrappedObject, int  index, int  msecs)
{
  return ( theWrappedObject->insertPause(index, msecs));
}

int  PythonQtWrapper_QSequentialAnimationGroup::duration(QSequentialAnimationGroup* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->promoted_duration());
}

void PythonQtWrapper_QSequentialAnimationGroup::updateState(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
{
  ( ((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->promoted_updateState(newState, oldState));
}

QPauseAnimation*  PythonQtWrapper_QSequentialAnimationGroup::addPause(QSequentialAnimationGroup* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->addPause(msecs));
}

void PythonQtWrapper_QSequentialAnimationGroup::updateDirection(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction)
{
  ( ((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->promoted_updateDirection(direction));
}

void PythonQtWrapper_QSequentialAnimationGroup::updateCurrentTime(QSequentialAnimationGroup* theWrappedObject, int  arg__1)
{
  ( ((PythonQtPublicPromoter_QSequentialAnimationGroup*)theWrappedObject)->promoted_updateCurrentTime(arg__1));
}

