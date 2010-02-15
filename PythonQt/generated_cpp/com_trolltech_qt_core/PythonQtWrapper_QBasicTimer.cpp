#include "PythonQtWrapper_QBasicTimer.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qobject.h>

QBasicTimer* PythonQtWrapper_QBasicTimer::new_QBasicTimer()
{ 
return new QBasicTimer(); }

bool  PythonQtWrapper_QBasicTimer::isActive(QBasicTimer* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

void PythonQtWrapper_QBasicTimer::stop(QBasicTimer* theWrappedObject)
{
  ( theWrappedObject->stop());
}

void PythonQtWrapper_QBasicTimer::start(QBasicTimer* theWrappedObject, int  msec, QObject*  obj)
{
  ( theWrappedObject->start(msec, obj));
}

int  PythonQtWrapper_QBasicTimer::timerId(QBasicTimer* theWrappedObject) const
{
  return ( theWrappedObject->timerId());
}

