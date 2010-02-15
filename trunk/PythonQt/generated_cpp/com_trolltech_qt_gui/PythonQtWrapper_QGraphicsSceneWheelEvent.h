#ifndef PYTHONQTWRAPPER_QGRAPHICSSCENEWHEELEVENT_H
#define PYTHONQTWRAPPER_QGRAPHICSSCENEWHEELEVENT_H

#include <qgraphicssceneevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qpoint.h>
#include <qwidget.h>

class PythonQtWrapper_QGraphicsSceneWheelEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneWheelEvent* new_QGraphicsSceneWheelEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneWheelEvent(QGraphicsSceneWheelEvent* obj) { delete obj; } 
   QPointF  scenePos(QGraphicsSceneWheelEvent* theWrappedObject) const;
   int  delta(QGraphicsSceneWheelEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QGraphicsSceneWheelEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneWheelEvent* theWrappedObject) const;
   void setOrientation(QGraphicsSceneWheelEvent* theWrappedObject, Qt::Orientation  orientation);
   Qt::Orientation  orientation(QGraphicsSceneWheelEvent* theWrappedObject) const;
   void setDelta(QGraphicsSceneWheelEvent* theWrappedObject, int  delta);
   QPointF  pos(QGraphicsSceneWheelEvent* theWrappedObject) const;
   QPoint  screenPos(QGraphicsSceneWheelEvent* theWrappedObject) const;
   void setButtons(QGraphicsSceneWheelEvent* theWrappedObject, Qt::MouseButtons  buttons);
   void setScreenPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPoint&  pos);
   void setScenePos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos);
   void setModifiers(QGraphicsSceneWheelEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setPos(QGraphicsSceneWheelEvent* theWrappedObject, const QPointF&  pos);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSSCENEWHEELEVENT_H
