#include "PythonQtWrapper_QStateMachine_WrappedEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qcoreevent.h>
#include <qobject.h>

QStateMachine::WrappedEvent* PythonQtWrapper_QStateMachine_WrappedEvent::new_QStateMachine_WrappedEvent(QObject*  object, QEvent*  event)
{ 
return new QStateMachine::WrappedEvent(object, event); }

QEvent*  PythonQtWrapper_QStateMachine_WrappedEvent::event(QStateMachine::WrappedEvent* theWrappedObject) const
{
  return ( theWrappedObject->event());
}

QObject*  PythonQtWrapper_QStateMachine_WrappedEvent::object(QStateMachine::WrappedEvent* theWrappedObject) const
{
  return ( theWrappedObject->object());
}

