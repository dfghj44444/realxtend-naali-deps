#ifndef PYTHONQTWRAPPER_QGRAPHICSSCENERESIZEEVENT_H
#define PYTHONQTWRAPPER_QGRAPHICSSCENERESIZEEVENT_H

#include <qgraphicssceneevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qsize.h>
#include <qwidget.h>

class PythonQtWrapper_QGraphicsSceneResizeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsSceneResizeEvent* new_QGraphicsSceneResizeEvent();
void delete_QGraphicsSceneResizeEvent(QGraphicsSceneResizeEvent* obj) { delete obj; } 
   void setOldSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size);
   void setNewSize(QGraphicsSceneResizeEvent* theWrappedObject, const QSizeF&  size);
   QSizeF  newSize(QGraphicsSceneResizeEvent* theWrappedObject) const;
   QSizeF  oldSize(QGraphicsSceneResizeEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSSCENERESIZEEVENT_H
