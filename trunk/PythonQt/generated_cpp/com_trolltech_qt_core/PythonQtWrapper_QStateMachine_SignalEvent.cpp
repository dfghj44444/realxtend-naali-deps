#include "PythonQtWrapper_QStateMachine_SignalEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qlist.h>
#include <qobject.h>

QStateMachine::SignalEvent* PythonQtWrapper_QStateMachine_SignalEvent::new_QStateMachine_SignalEvent(QObject*  sender, int  signalIndex, const QList<QVariant >&  arguments)
{ 
return new QStateMachine::SignalEvent(sender, signalIndex, arguments); }

int  PythonQtWrapper_QStateMachine_SignalEvent::signalIndex(QStateMachine::SignalEvent* theWrappedObject) const
{
  return ( theWrappedObject->signalIndex());
}

QList<QVariant >  PythonQtWrapper_QStateMachine_SignalEvent::arguments(QStateMachine::SignalEvent* theWrappedObject) const
{
  return ( theWrappedObject->arguments());
}

QObject*  PythonQtWrapper_QStateMachine_SignalEvent::sender(QStateMachine::SignalEvent* theWrappedObject) const
{
  return ( theWrappedObject->sender());
}

