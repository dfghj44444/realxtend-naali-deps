#include "PythonQtWrapper_QSystemSemaphore.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qsystemsemaphore.h>

QSystemSemaphore* PythonQtWrapper_QSystemSemaphore::new_QSystemSemaphore(const QString&  key, int  initialValue, QSystemSemaphore::AccessMode  mode)
{ 
return new QSystemSemaphore(key, initialValue, mode); }

QString  PythonQtWrapper_QSystemSemaphore::errorString(QSystemSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

void PythonQtWrapper_QSystemSemaphore::setKey(QSystemSemaphore* theWrappedObject, const QString&  key, int  initialValue, QSystemSemaphore::AccessMode  mode)
{
  ( theWrappedObject->setKey(key, initialValue, mode));
}

QSystemSemaphore::SystemSemaphoreError  PythonQtWrapper_QSystemSemaphore::error(QSystemSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

bool  PythonQtWrapper_QSystemSemaphore::acquire(QSystemSemaphore* theWrappedObject)
{
  return ( theWrappedObject->acquire());
}

QString  PythonQtWrapper_QSystemSemaphore::key(QSystemSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->key());
}

bool  PythonQtWrapper_QSystemSemaphore::release(QSystemSemaphore* theWrappedObject, int  n)
{
  return ( theWrappedObject->release(n));
}

