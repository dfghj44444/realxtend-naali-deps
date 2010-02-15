#ifndef PYTHONQTWRAPPER_QGRAPHICSSCENECONTEXTMENUEVENT_H
#define PYTHONQTWRAPPER_QGRAPHICSSCENECONTEXTMENUEVENT_H

#include <qgraphicssceneevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qpoint.h>
#include <qwidget.h>

class PythonQtWrapper_QGraphicsSceneContextMenuEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Reason )
enum Reason{
  Mouse = QGraphicsSceneContextMenuEvent::Mouse,   Keyboard = QGraphicsSceneContextMenuEvent::Keyboard,   Other = QGraphicsSceneContextMenuEvent::Other};
public slots:
QGraphicsSceneContextMenuEvent* new_QGraphicsSceneContextMenuEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneContextMenuEvent(QGraphicsSceneContextMenuEvent* obj) { delete obj; } 
   void setModifiers(QGraphicsSceneContextMenuEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setReason(QGraphicsSceneContextMenuEvent* theWrappedObject, QGraphicsSceneContextMenuEvent::Reason  reason);
   QGraphicsSceneContextMenuEvent::Reason  reason(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   QPointF  pos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   void setPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos);
   void setScreenPos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPoint&  pos);
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   void setScenePos(QGraphicsSceneContextMenuEvent* theWrappedObject, const QPointF&  pos);
   QPoint  screenPos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
   QPointF  scenePos(QGraphicsSceneContextMenuEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSSCENECONTEXTMENUEVENT_H
