#include "PythonQtWrapper_QGraphicsSceneDragDropEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qmimedata.h>
#include <qpoint.h>
#include <qwidget.h>

QGraphicsSceneDragDropEvent* PythonQtWrapper_QGraphicsSceneDragDropEvent::new_QGraphicsSceneDragDropEvent(QEvent::Type  type)
{ 
return new QGraphicsSceneDragDropEvent(type); }

void PythonQtWrapper_QGraphicsSceneDragDropEvent::acceptProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject)
{
  ( theWrappedObject->acceptProposedAction());
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action)
{
  ( theWrappedObject->setProposedAction(action));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setScreenPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScreenPos(pos));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setScenePos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setScenePos(pos));
}

QPointF  PythonQtWrapper_QGraphicsSceneDragDropEvent::scenePos(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

Qt::DropActions  PythonQtWrapper_QGraphicsSceneDragDropEvent::possibleActions(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->possibleActions());
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setPossibleActions(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropActions  actions)
{
  ( theWrappedObject->setPossibleActions(actions));
}

QPointF  PythonQtWrapper_QGraphicsSceneDragDropEvent::pos(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setModifiers(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers)
{
  ( theWrappedObject->setModifiers(modifiers));
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setButtons(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::MouseButtons  buttons)
{
  ( theWrappedObject->setButtons(buttons));
}

Qt::DropAction  PythonQtWrapper_QGraphicsSceneDragDropEvent::dropAction(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->dropAction());
}

Qt::MouseButtons  PythonQtWrapper_QGraphicsSceneDragDropEvent::buttons(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->buttons());
}

Qt::KeyboardModifiers  PythonQtWrapper_QGraphicsSceneDragDropEvent::modifiers(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

QPoint  PythonQtWrapper_QGraphicsSceneDragDropEvent::screenPos(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

Qt::DropAction  PythonQtWrapper_QGraphicsSceneDragDropEvent::proposedAction(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->proposedAction());
}

QWidget*  PythonQtWrapper_QGraphicsSceneDragDropEvent::source(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->source());
}

const QMimeData*  PythonQtWrapper_QGraphicsSceneDragDropEvent::mimeData(QGraphicsSceneDragDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->mimeData());
}

void PythonQtWrapper_QGraphicsSceneDragDropEvent::setDropAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action)
{
  ( theWrappedObject->setDropAction(action));
}

