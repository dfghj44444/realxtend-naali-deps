#include "PythonQtWrapper_QUrlInfo.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatetime.h>
#include <qurl.h>
#include <qurlinfo.h>

void PythonQtShell_QUrlInfo::setDir(bool  b)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setDir");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&b};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setDir(b);
}
void PythonQtShell_QUrlInfo::setFile(bool  b)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setFile");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&b};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setFile(b);
}
void PythonQtShell_QUrlInfo::setGroup(const QString&  s)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setGroup");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&s};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setGroup(s);
}
void PythonQtShell_QUrlInfo::setLastModified(const QDateTime&  dt)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setLastModified");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QDateTime&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&dt};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setLastModified(dt);
}
void PythonQtShell_QUrlInfo::setName(const QString&  name)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setName");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&name};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setName(name);
}
void PythonQtShell_QUrlInfo::setOwner(const QString&  s)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setOwner");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&s};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setOwner(s);
}
void PythonQtShell_QUrlInfo::setPermissions(int  p)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setPermissions");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&p};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setPermissions(p);
}
void PythonQtShell_QUrlInfo::setReadable(bool  b)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setReadable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&b};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setReadable(b);
}
void PythonQtShell_QUrlInfo::setSize(qint64  size)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&size};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setSize(size);
}
void PythonQtShell_QUrlInfo::setSymLink(bool  b)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSymLink");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&b};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setSymLink(b);
}
void PythonQtShell_QUrlInfo::setWritable(bool  b)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setWritable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&b};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setWritable(b);
}
QUrlInfo* PythonQtWrapper_QUrlInfo::new_QUrlInfo()
{ 
return new PythonQtShell_QUrlInfo(); }

QUrlInfo* PythonQtWrapper_QUrlInfo::new_QUrlInfo(const QString&  name, int  permissions, const QString&  owner, const QString&  group, qint64  size, const QDateTime&  lastModified, const QDateTime&  lastRead, bool  isDir, bool  isFile, bool  isSymLink, bool  isWritable, bool  isReadable, bool  isExecutable)
{ 
return new PythonQtShell_QUrlInfo(name, permissions, owner, group, size, lastModified, lastRead, isDir, isFile, isSymLink, isWritable, isReadable, isExecutable); }

QUrlInfo* PythonQtWrapper_QUrlInfo::new_QUrlInfo(const QUrl&  url, int  permissions, const QString&  owner, const QString&  group, qint64  size, const QDateTime&  lastModified, const QDateTime&  lastRead, bool  isDir, bool  isFile, bool  isSymLink, bool  isWritable, bool  isReadable, bool  isExecutable)
{ 
return new PythonQtShell_QUrlInfo(url, permissions, owner, group, size, lastModified, lastRead, isDir, isFile, isSymLink, isWritable, isReadable, isExecutable); }

QUrlInfo* PythonQtWrapper_QUrlInfo::new_QUrlInfo(const QUrlInfo&  ui)
{ 
return new PythonQtShell_QUrlInfo(ui); }

bool  PythonQtWrapper_QUrlInfo::static_QUrlInfo_greaterThan(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy)
{
  return (QUrlInfo::greaterThan(i1, i2, sortBy));
}

bool  PythonQtWrapper_QUrlInfo::static_QUrlInfo_lessThan(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy)
{
  return (QUrlInfo::lessThan(i1, i2, sortBy));
}

bool  PythonQtWrapper_QUrlInfo::isSymLink(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->isSymLink());
}

bool  PythonQtWrapper_QUrlInfo::isValid(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QUrlInfo::group(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->group());
}

bool  PythonQtWrapper_QUrlInfo::isReadable(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

void PythonQtWrapper_QUrlInfo::setSize(QUrlInfo* theWrappedObject, qint64  size)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setSize(size));
}

QDateTime  PythonQtWrapper_QUrlInfo::lastModified(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->lastModified());
}

void PythonQtWrapper_QUrlInfo::setSymLink(QUrlInfo* theWrappedObject, bool  b)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setSymLink(b));
}

bool  PythonQtWrapper_QUrlInfo::isDir(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->isDir());
}

bool  PythonQtWrapper_QUrlInfo::isFile(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->isFile());
}

bool  PythonQtWrapper_QUrlInfo::static_QUrlInfo_equal(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy)
{
  return (QUrlInfo::equal(i1, i2, sortBy));
}

QDateTime  PythonQtWrapper_QUrlInfo::lastRead(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->lastRead());
}

void PythonQtWrapper_QUrlInfo::setDir(QUrlInfo* theWrappedObject, bool  b)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setDir(b));
}

void PythonQtWrapper_QUrlInfo::setLastModified(QUrlInfo* theWrappedObject, const QDateTime&  dt)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setLastModified(dt));
}

void PythonQtWrapper_QUrlInfo::setName(QUrlInfo* theWrappedObject, const QString&  name)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setName(name));
}

void PythonQtWrapper_QUrlInfo::setReadable(QUrlInfo* theWrappedObject, bool  b)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setReadable(b));
}

QString  PythonQtWrapper_QUrlInfo::name(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

void PythonQtWrapper_QUrlInfo::setWritable(QUrlInfo* theWrappedObject, bool  b)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setWritable(b));
}

bool  PythonQtWrapper_QUrlInfo::isWritable(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

void PythonQtWrapper_QUrlInfo::setLastRead(QUrlInfo* theWrappedObject, const QDateTime&  dt)
{
  ( theWrappedObject->setLastRead(dt));
}

void PythonQtWrapper_QUrlInfo::setPermissions(QUrlInfo* theWrappedObject, int  p)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setPermissions(p));
}

bool  PythonQtWrapper_QUrlInfo::isExecutable(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->isExecutable());
}

void PythonQtWrapper_QUrlInfo::setFile(QUrlInfo* theWrappedObject, bool  b)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setFile(b));
}

qint64  PythonQtWrapper_QUrlInfo::size(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QString  PythonQtWrapper_QUrlInfo::owner(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->owner());
}

int  PythonQtWrapper_QUrlInfo::permissions(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->permissions());
}

void PythonQtWrapper_QUrlInfo::setGroup(QUrlInfo* theWrappedObject, const QString&  s)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setGroup(s));
}

bool  PythonQtWrapper_QUrlInfo::operator_equal(QUrlInfo* theWrappedObject, const QUrlInfo&  i) const
{
  return ( (*theWrappedObject)== i);
}

void PythonQtWrapper_QUrlInfo::setOwner(QUrlInfo* theWrappedObject, const QString&  s)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setOwner(s));
}

