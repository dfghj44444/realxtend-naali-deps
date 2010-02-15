#ifndef PYTHONQTWRAPPER_QGRAPHICSSCENEMOVEEVENT_H
#define PYTHONQTWRAPPER_QGRAPHICSSCENEMOVEEVENT_H

#include <qgraphicssceneevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qpoint.h>
#include <qwidget.h>

class PythonQtWrapper_QGraphicsSceneMoveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneMoveEvent* new_QGraphicsSceneMoveEvent();
void delete_QGraphicsSceneMoveEvent(QGraphicsSceneMoveEvent* obj) { delete obj; } 
   void setNewPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos);
   void setOldPos(QGraphicsSceneMoveEvent* theWrappedObject, const QPointF&  pos);
   QPointF  oldPos(QGraphicsSceneMoveEvent* theWrappedObject) const;
   QPointF  newPos(QGraphicsSceneMoveEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSSCENEMOVEEVENT_H
