#ifndef PYTHONQTWRAPPER_QTOUCHEVENT_TOUCHPOINT_H
#define PYTHONQTWRAPPER_QTOUCHEVENT_TOUCHPOINT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qevent.h>
#include <qpoint.h>
#include <qrect.h>

class PythonQtWrapper_QTouchEvent_TouchPoint : public QObject
{ Q_OBJECT
public:
public slots:
QTouchEvent::TouchPoint* new_QTouchEvent_TouchPoint(const QTouchEvent::TouchPoint&  other);
QTouchEvent::TouchPoint* new_QTouchEvent_TouchPoint(int  id = -1);
void delete_QTouchEvent_TouchPoint(QTouchEvent::TouchPoint* obj) { delete obj; } 
   void setState(QTouchEvent::TouchPoint* theWrappedObject, Qt::TouchPointStates  state);
   void setStartScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScenePos);
   QPointF  startScenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastScenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QRectF  rect(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  pos(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  pos);
   QPointF  lastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QTouchEvent::TouchPoint*  operator_assign(QTouchEvent::TouchPoint* theWrappedObject, const QTouchEvent::TouchPoint&  other);
   void setScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  screenPos);
   void setLastScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScreenPos);
   void setLastScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScenePos);
   Qt::TouchPointState  state(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setLastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastNormalizedPos);
   QPointF  scenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   qreal  pressure(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  normalizedPos);
   QPointF  startScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  startPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setStartScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScreenPos);
   void setSceneRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  sceneRect);
   QPointF  lastScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setScreenRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  screenRect);
   int  id(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setLastPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastPos);
   void setScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  scenePos);
   void setId(QTouchEvent::TouchPoint* theWrappedObject, int  id);
   QRectF  sceneRect(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setPressure(QTouchEvent::TouchPoint* theWrappedObject, qreal  pressure);
   void setRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  rect);
   void setStartPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startPos);
   QPointF  normalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  screenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setStartNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startNormalizedPos);
   QRectF  screenRect(QTouchEvent::TouchPoint* theWrappedObject) const;
   bool  isPrimary(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  startNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTOUCHEVENT_TOUCHPOINT_H
