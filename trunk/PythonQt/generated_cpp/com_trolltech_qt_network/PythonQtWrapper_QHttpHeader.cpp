#include "PythonQtWrapper_QHttpHeader.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

int  PythonQtShell_QHttpHeader::majorVersion() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "majorVersion");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("majorVersion", methodInfo, result);
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
int  PythonQtShell_QHttpHeader::minorVersion() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "minorVersion");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("minorVersion", methodInfo, result);
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
bool  PythonQtShell_QHttpHeader::parseLine(const QString&  line, int  number)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "parseLine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QString&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&line, (void*)&number};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("parseLine", methodInfo, result);
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
  return QHttpHeader::parseLine(line, number);
}
QString  PythonQtShell_QHttpHeader::toString() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "toString");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("toString", methodInfo, result);
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
  return QHttpHeader::toString();
}
QHttpHeader* PythonQtWrapper_QHttpHeader::new_QHttpHeader()
{ 
return new PythonQtShell_QHttpHeader(); }

QHttpHeader* PythonQtWrapper_QHttpHeader::new_QHttpHeader(const QString&  str)
{ 
return new PythonQtShell_QHttpHeader(str); }

void PythonQtWrapper_QHttpHeader::setValues(QHttpHeader* theWrappedObject, const QList<QPair<QString , QString >  >&  values)
{
  ( theWrappedObject->setValues(values));
}

QString  PythonQtWrapper_QHttpHeader::toString(QHttpHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpHeader*)theWrappedObject)->promoted_toString());
}

void PythonQtWrapper_QHttpHeader::removeValue(QHttpHeader* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->removeValue(key));
}

QString  PythonQtWrapper_QHttpHeader::value(QHttpHeader* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->value(key));
}

bool  PythonQtWrapper_QHttpHeader::isValid(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QHttpHeader::hasContentType(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->hasContentType());
}

bool  PythonQtWrapper_QHttpHeader::parseLine(QHttpHeader* theWrappedObject, const QString&  line, int  number)
{
  return ( ((PythonQtPublicPromoter_QHttpHeader*)theWrappedObject)->promoted_parseLine(line, number));
}

void PythonQtWrapper_QHttpHeader::addValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value)
{
  ( theWrappedObject->addValue(key, value));
}

void PythonQtWrapper_QHttpHeader::removeAllValues(QHttpHeader* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->removeAllValues(key));
}

bool  PythonQtWrapper_QHttpHeader::hasContentLength(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->hasContentLength());
}

QString  PythonQtWrapper_QHttpHeader::contentType(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->contentType());
}

QStringList  PythonQtWrapper_QHttpHeader::allValues(QHttpHeader* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->allValues(key));
}

void PythonQtWrapper_QHttpHeader::setContentLength(QHttpHeader* theWrappedObject, int  len)
{
  ( theWrappedObject->setContentLength(len));
}

QStringList  PythonQtWrapper_QHttpHeader::keys(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->keys());
}

QList<QPair<QString , QString >  >  PythonQtWrapper_QHttpHeader::values(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->values());
}

uint  PythonQtWrapper_QHttpHeader::contentLength(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->contentLength());
}

bool  PythonQtWrapper_QHttpHeader::hasKey(QHttpHeader* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->hasKey(key));
}

void PythonQtWrapper_QHttpHeader::setContentType(QHttpHeader* theWrappedObject, const QString&  type)
{
  ( theWrappedObject->setContentType(type));
}

void PythonQtWrapper_QHttpHeader::setValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value)
{
  ( theWrappedObject->setValue(key, value));
}

