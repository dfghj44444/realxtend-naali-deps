#ifndef PYTHONQTWRAPPER_QGRAPHICSSCENEDRAGDROPEVENT_H
#define PYTHONQTWRAPPER_QGRAPHICSSCENEDRAGDROPEVENT_H

#include <qgraphicssceneevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qmimedata.h>
#include <qpoint.h>
#include <qwidget.h>

class PythonQtWrapper_QGraphicsSceneDragDropEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneDragDropEvent* new_QGraphicsSceneDragDropEvent(QEvent::Type  type = QEvent::None);
void delete_QGraphicsSceneDragDropEvent(QGraphicsSceneDragDropEvent* obj) { delete obj; } 
   void acceptProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject);
   void setProposedAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action);
   void setScreenPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPoint&  pos);
   void setScenePos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos);
   QPointF  scenePos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   Qt::DropActions  possibleActions(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   void setPossibleActions(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropActions  actions);
   QPointF  pos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   void setModifiers(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   void setButtons(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::MouseButtons  buttons);
   Qt::DropAction  dropAction(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  modifiers(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   QPoint  screenPos(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   void setPos(QGraphicsSceneDragDropEvent* theWrappedObject, const QPointF&  pos);
   Qt::DropAction  proposedAction(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   QWidget*  source(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   const QMimeData*  mimeData(QGraphicsSceneDragDropEvent* theWrappedObject) const;
   void setDropAction(QGraphicsSceneDragDropEvent* theWrappedObject, Qt::DropAction  action);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSSCENEDRAGDROPEVENT_H
