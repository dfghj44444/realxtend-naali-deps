#include "PythonQtWrapper_QTouchEvent_TouchPoint.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qevent.h>
#include <qpoint.h>
#include <qrect.h>

QTouchEvent::TouchPoint* PythonQtWrapper_QTouchEvent_TouchPoint::new_QTouchEvent_TouchPoint(const QTouchEvent::TouchPoint&  other)
{ 
return new QTouchEvent::TouchPoint(other); }

QTouchEvent::TouchPoint* PythonQtWrapper_QTouchEvent_TouchPoint::new_QTouchEvent_TouchPoint(int  id)
{ 
return new QTouchEvent::TouchPoint(id); }

void PythonQtWrapper_QTouchEvent_TouchPoint::setState(QTouchEvent::TouchPoint* theWrappedObject, Qt::TouchPointStates  state)
{
  ( theWrappedObject->setState(state));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setStartScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScenePos)
{
  ( theWrappedObject->setStartScenePos(startScenePos));
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::startScenePos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->startScenePos());
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::lastScenePos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->lastScenePos());
}

QRectF  PythonQtWrapper_QTouchEvent_TouchPoint::rect(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::lastPos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->lastPos());
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::pos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::lastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->lastNormalizedPos());
}

QTouchEvent::TouchPoint*  PythonQtWrapper_QTouchEvent_TouchPoint::operator_assign(QTouchEvent::TouchPoint* theWrappedObject, const QTouchEvent::TouchPoint&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  screenPos)
{
  ( theWrappedObject->setScreenPos(screenPos));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setLastScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScreenPos)
{
  ( theWrappedObject->setLastScreenPos(lastScreenPos));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setLastScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScenePos)
{
  ( theWrappedObject->setLastScenePos(lastScenePos));
}

Qt::TouchPointState  PythonQtWrapper_QTouchEvent_TouchPoint::state(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setLastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastNormalizedPos)
{
  ( theWrappedObject->setLastNormalizedPos(lastNormalizedPos));
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::scenePos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

qreal  PythonQtWrapper_QTouchEvent_TouchPoint::pressure(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->pressure());
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  normalizedPos)
{
  ( theWrappedObject->setNormalizedPos(normalizedPos));
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::startScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->startScreenPos());
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::startPos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->startPos());
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setStartScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScreenPos)
{
  ( theWrappedObject->setStartScreenPos(startScreenPos));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setSceneRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  sceneRect)
{
  ( theWrappedObject->setSceneRect(sceneRect));
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::lastScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->lastScreenPos());
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setScreenRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  screenRect)
{
  ( theWrappedObject->setScreenRect(screenRect));
}

int  PythonQtWrapper_QTouchEvent_TouchPoint::id(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->id());
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setLastPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastPos)
{
  ( theWrappedObject->setLastPos(lastPos));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  scenePos)
{
  ( theWrappedObject->setScenePos(scenePos));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setId(QTouchEvent::TouchPoint* theWrappedObject, int  id)
{
  ( theWrappedObject->setId(id));
}

QRectF  PythonQtWrapper_QTouchEvent_TouchPoint::sceneRect(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->sceneRect());
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setPressure(QTouchEvent::TouchPoint* theWrappedObject, qreal  pressure)
{
  ( theWrappedObject->setPressure(pressure));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setRect(rect));
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setStartPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startPos)
{
  ( theWrappedObject->setStartPos(startPos));
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::normalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->normalizedPos());
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::screenPos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

void PythonQtWrapper_QTouchEvent_TouchPoint::setStartNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startNormalizedPos)
{
  ( theWrappedObject->setStartNormalizedPos(startNormalizedPos));
}

QRectF  PythonQtWrapper_QTouchEvent_TouchPoint::screenRect(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->screenRect());
}

bool  PythonQtWrapper_QTouchEvent_TouchPoint::isPrimary(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->isPrimary());
}

QPointF  PythonQtWrapper_QTouchEvent_TouchPoint::startNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const
{
  return ( theWrappedObject->startNormalizedPos());
}

