#include "PythonQtWrapper_QMouseEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qevent.h>
#include <qpoint.h>

QMouseEvent* PythonQtWrapper_QMouseEvent::new_QMouseEvent(QEvent::Type  type, const QPoint&  pos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers)
{ 
return new PythonQtShell_QMouseEvent(type, pos, button, buttons, modifiers); }

QMouseEvent* PythonQtWrapper_QMouseEvent::new_QMouseEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers)
{ 
return new PythonQtShell_QMouseEvent(type, pos, globalPos, button, buttons, modifiers); }

int  PythonQtWrapper_QMouseEvent::globalX(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalX());
}

const QPoint*  PythonQtWrapper_QMouseEvent::globalPos(QMouseEvent* theWrappedObject) const
{
  return &( theWrappedObject->globalPos());
}

int  PythonQtWrapper_QMouseEvent::globalY(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalY());
}

QMouseEvent*  PythonQtWrapper_QMouseEvent::static_QMouseEvent_createExtendedMouseEvent(QEvent::Type  type, const QPointF&  pos, const QPoint&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers)
{
  return (QMouseEvent::createExtendedMouseEvent(type, pos, globalPos, button, buttons, modifiers));
}

QPointF  PythonQtWrapper_QMouseEvent::posF(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->posF());
}

Qt::MouseButtons  PythonQtWrapper_QMouseEvent::buttons(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->buttons());
}

bool  PythonQtWrapper_QMouseEvent::hasExtendedInfo(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->hasExtendedInfo());
}

int  PythonQtWrapper_QMouseEvent::x(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

Qt::MouseButton  PythonQtWrapper_QMouseEvent::button(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->button());
}

const QPoint*  PythonQtWrapper_QMouseEvent::pos(QMouseEvent* theWrappedObject) const
{
  return &( theWrappedObject->pos());
}

int  PythonQtWrapper_QMouseEvent::y(QMouseEvent* theWrappedObject) const
{
  return ( theWrappedObject->y());
}
