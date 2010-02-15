#include "PythonQtWrapper_QUndoStack.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qundostack.h>

void PythonQtShell_QUndoStack::childEvent(QChildEvent*  arg__1)
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
  QUndoStack::childEvent(arg__1);
}
void PythonQtShell_QUndoStack::customEvent(QEvent*  arg__1)
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
  QUndoStack::customEvent(arg__1);
}
bool  PythonQtShell_QUndoStack::event(QEvent*  arg__1)
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
  return QUndoStack::event(arg__1);
}
bool  PythonQtShell_QUndoStack::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QUndoStack::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QUndoStack::timerEvent(QTimerEvent*  arg__1)
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
  QUndoStack::timerEvent(arg__1);
}
QUndoStack* PythonQtWrapper_QUndoStack::new_QUndoStack(QObject*  parent)
{ 
return new PythonQtShell_QUndoStack(parent); }

int  PythonQtWrapper_QUndoStack::undoLimit(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->undoLimit());
}

void PythonQtWrapper_QUndoStack::clear(QUndoStack* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QString  PythonQtWrapper_QUndoStack::redoText(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->redoText());
}

int  PythonQtWrapper_QUndoStack::index(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->index());
}

bool  PythonQtWrapper_QUndoStack::isActive(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QUndoStack::isClean(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->isClean());
}

QAction*  PythonQtWrapper_QUndoStack::createRedoAction(QUndoStack* theWrappedObject, QObject*  parent, const QString&  prefix) const
{
  return ( theWrappedObject->createRedoAction(parent, prefix));
}

void PythonQtWrapper_QUndoStack::endMacro(QUndoStack* theWrappedObject)
{
  ( theWrappedObject->endMacro());
}

int  PythonQtWrapper_QUndoStack::cleanIndex(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->cleanIndex());
}

QString  PythonQtWrapper_QUndoStack::text(QUndoStack* theWrappedObject, int  idx) const
{
  return ( theWrappedObject->text(idx));
}

bool  PythonQtWrapper_QUndoStack::canRedo(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->canRedo());
}

QString  PythonQtWrapper_QUndoStack::undoText(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->undoText());
}

void PythonQtWrapper_QUndoStack::push(QUndoStack* theWrappedObject, QUndoCommand*  cmd)
{
  ( theWrappedObject->push(cmd));
}

void PythonQtWrapper_QUndoStack::beginMacro(QUndoStack* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->beginMacro(text));
}

void PythonQtWrapper_QUndoStack::setUndoLimit(QUndoStack* theWrappedObject, int  limit)
{
  ( theWrappedObject->setUndoLimit(limit));
}

const QUndoCommand*  PythonQtWrapper_QUndoStack::command(QUndoStack* theWrappedObject, int  index) const
{
  return ( theWrappedObject->command(index));
}

QAction*  PythonQtWrapper_QUndoStack::createUndoAction(QUndoStack* theWrappedObject, QObject*  parent, const QString&  prefix) const
{
  return ( theWrappedObject->createUndoAction(parent, prefix));
}

bool  PythonQtWrapper_QUndoStack::canUndo(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->canUndo());
}

int  PythonQtWrapper_QUndoStack::count(QUndoStack* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

