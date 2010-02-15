#include "PythonQtWrapper_QTouchEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qevent.h>
#include <qlist.h>
#include <qwidget.h>

QTouchEvent* PythonQtWrapper_QTouchEvent::new_QTouchEvent(QEvent::Type  eventType, QTouchEvent::DeviceType  deviceType, Qt::KeyboardModifiers  modifiers, Qt::TouchPointStates  touchPointStates, const QList<QTouchEvent::TouchPoint >&  touchPoints)
{ 
return new PythonQtShell_QTouchEvent(eventType, deviceType, modifiers, touchPointStates, touchPoints); }

QTouchEvent::DeviceType  PythonQtWrapper_QTouchEvent::deviceType(QTouchEvent* theWrappedObject) const
{
  return ( theWrappedObject->deviceType());
}

void PythonQtWrapper_QTouchEvent::setDeviceType(QTouchEvent* theWrappedObject, QTouchEvent::DeviceType  adeviceType)
{
  ( theWrappedObject->setDeviceType(adeviceType));
}

void PythonQtWrapper_QTouchEvent::setTouchPoints(QTouchEvent* theWrappedObject, const QList<QTouchEvent::TouchPoint >&  atouchPoints)
{
  ( theWrappedObject->setTouchPoints(atouchPoints));
}

void PythonQtWrapper_QTouchEvent::setWidget(QTouchEvent* theWrappedObject, QWidget*  awidget)
{
  ( theWrappedObject->setWidget(awidget));
}

const QList<QTouchEvent::TouchPoint >*  PythonQtWrapper_QTouchEvent::touchPoints(QTouchEvent* theWrappedObject) const
{
  return &( theWrappedObject->touchPoints());
}

void PythonQtWrapper_QTouchEvent::setTouchPointStates(QTouchEvent* theWrappedObject, Qt::TouchPointStates  aTouchPointStates)
{
  ( theWrappedObject->setTouchPointStates(aTouchPointStates));
}

Qt::TouchPointStates  PythonQtWrapper_QTouchEvent::touchPointStates(QTouchEvent* theWrappedObject) const
{
  return ( theWrappedObject->touchPointStates());
}

QWidget*  PythonQtWrapper_QTouchEvent::widget(QTouchEvent* theWrappedObject) const
{
  return ( theWrappedObject->widget());
}

