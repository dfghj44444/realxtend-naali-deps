#include "PythonQtWrapper_QCompleter.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qbytearray.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qstringlist.h>
#include <qwidget.h>

void PythonQtShell_QCompleter::childEvent(QChildEvent*  arg__1)
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
  QCompleter::childEvent(arg__1);
}
void PythonQtShell_QCompleter::customEvent(QEvent*  arg__1)
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
  QCompleter::customEvent(arg__1);
}
bool  PythonQtShell_QCompleter::event(QEvent*  arg__1)
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
  return QCompleter::event(arg__1);
}
bool  PythonQtShell_QCompleter::eventFilter(QObject*  o, QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&o, (void*)&e};
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
  return QCompleter::eventFilter(o, e);
}
QString  PythonQtShell_QCompleter::pathFromIndex(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "pathFromIndex");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("pathFromIndex", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QCompleter::pathFromIndex(index);
}
QStringList  PythonQtShell_QCompleter::splitPath(const QString&  path) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "splitPath");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QStringList" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QStringList returnValue;
    void* args[2] = {NULL, (void*)&path};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("splitPath", methodInfo, result);
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
  return QCompleter::splitPath(path);
}
void PythonQtShell_QCompleter::timerEvent(QTimerEvent*  arg__1)
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
  QCompleter::timerEvent(arg__1);
}
QCompleter* PythonQtWrapper_QCompleter::new_QCompleter(QAbstractItemModel*  model, QObject*  parent)
{ 
return new PythonQtShell_QCompleter(model, parent); }

QCompleter* PythonQtWrapper_QCompleter::new_QCompleter(QObject*  parent)
{ 
return new PythonQtShell_QCompleter(parent); }

QCompleter* PythonQtWrapper_QCompleter::new_QCompleter(const QStringList&  completions, QObject*  parent)
{ 
return new PythonQtShell_QCompleter(completions, parent); }

int  PythonQtWrapper_QCompleter::maxVisibleItems(QCompleter* theWrappedObject) const
{
  return ( theWrappedObject->maxVisibleItems());
}

QAbstractItemModel*  PythonQtWrapper_QCompleter::model(QCompleter* theWrappedObject) const
{
  return ( theWrappedObject->model());
}

QWidget*  PythonQtWrapper_QCompleter::widget(QCompleter* theWrappedObject) const
{
  return ( theWrappedObject->widget());
}

bool  PythonQtWrapper_QCompleter::wrapAround(QCompleter* theWrappedObject) const
{
  return ( theWrappedObject->wrapAround());
}

QString  PythonQtWrapper_QCompleter::completionPrefix(QCompleter* theWrappedObject) const
{
  return ( theWrappedObject->completionPrefix());
}

QString  PythonQtWrapper_QCompleter::pathFromIndex(QCompleter* theWrappedObject, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_QCompleter*)theWrappedObject)->promoted_pathFromIndex(index));
}

bool  PythonQtWrapper_QCompleter::setCurrentRow(QCompleter* theWrappedObject, int  row)
{
  return ( theWrappedObject->setCurrentRow(row));
}

void PythonQtWrapper_QCompleter::setCaseSensitivity(QCompleter* theWrappedObject, Qt::CaseSensitivity  caseSensitivity)
{
  ( theWrappedObject->setCaseSensitivity(caseSensitivity));
}

QAbstractItemView*  PythonQtWrapper_QCompleter::popup(QCompleter* theWrappedObject) const
{
  return ( theWrappedObject->popup());
}

int  PythonQtWrapper_QCompleter::completionColumn(QCompleter* theWrappedObject) const
{
  return ( theWrappedObject->completionColumn());
}

int  PythonQtWrapper_QCompleter::completionRole(QCompleter* theWrappedObject) const
{
  return ( theWrappedObject->completionRole());
}

bool  PythonQtWrapper_QCompleter::eventFilter(QCompleter* theWrappedObject, QObject*  o, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QCompleter*)theWrappedObject)->promoted_eventFilter(o, e));
}

void PythonQtWrapper_QCompleter::setModelSorting(QCompleter* theWrappedObject, QCompleter::ModelSorting  sorting)
{
  ( theWrappedObject->setModelSorting(sorting));
}

QCompleter::CompletionMode  PythonQtWrapper_QCompleter::completionMode(QCompleter* theWrappedObject) const
{
  return ( theWrappedObject->completionMode());
}

void PythonQtWrapper_QCompleter::setPopup(QCompleter* theWrappedObject, QAbstractItemView*  popup)
{
  ( theWrappedObject->setPopup(popup));
}

void PythonQtWrapper_QCompleter::setCompletionColumn(QCompleter* theWrappedObject, int  column)
{
  ( theWrappedObject->setCompletionColumn(column));
}

int  PythonQtWrapper_QCompleter::currentRow(QCompleter* theWrappedObject) const
{
  return ( theWrappedObject->currentRow());
}

void PythonQtWrapper_QCompleter::setCompletionMode(QCompleter* theWrappedObject, QCompleter::CompletionMode  mode)
{
  ( theWrappedObject->setCompletionMode(mode));
}

bool  PythonQtWrapper_QCompleter::event(QCompleter* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QCompleter*)theWrappedObject)->promoted_event(arg__1));
}

void PythonQtWrapper_QCompleter::setWidget(QCompleter* theWrappedObject, QWidget*  widget)
{
  ( theWrappedObject->setWidget(widget));
}

int  PythonQtWrapper_QCompleter::completionCount(QCompleter* theWrappedObject) const
{
  return ( theWrappedObject->completionCount());
}

QAbstractItemModel*  PythonQtWrapper_QCompleter::completionModel(QCompleter* theWrappedObject) const
{
  return ( theWrappedObject->completionModel());
}

void PythonQtWrapper_QCompleter::setMaxVisibleItems(QCompleter* theWrappedObject, int  maxItems)
{
  ( theWrappedObject->setMaxVisibleItems(maxItems));
}

QCompleter::ModelSorting  PythonQtWrapper_QCompleter::modelSorting(QCompleter* theWrappedObject) const
{
  return ( theWrappedObject->modelSorting());
}

Qt::CaseSensitivity  PythonQtWrapper_QCompleter::caseSensitivity(QCompleter* theWrappedObject) const
{
  return ( theWrappedObject->caseSensitivity());
}

QString  PythonQtWrapper_QCompleter::currentCompletion(QCompleter* theWrappedObject) const
{
  return ( theWrappedObject->currentCompletion());
}

void PythonQtWrapper_QCompleter::setModel(QCompleter* theWrappedObject, QAbstractItemModel*  c)
{
  ( theWrappedObject->setModel(c));
}

QStringList  PythonQtWrapper_QCompleter::splitPath(QCompleter* theWrappedObject, const QString&  path) const
{
  return ( ((PythonQtPublicPromoter_QCompleter*)theWrappedObject)->promoted_splitPath(path));
}

void PythonQtWrapper_QCompleter::setCompletionRole(QCompleter* theWrappedObject, int  role)
{
  ( theWrappedObject->setCompletionRole(role));
}

QModelIndex  PythonQtWrapper_QCompleter::currentIndex(QCompleter* theWrappedObject) const
{
  return ( theWrappedObject->currentIndex());
}

