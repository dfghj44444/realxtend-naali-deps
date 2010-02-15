#ifndef PYTHONQTWRAPPER_QGRAPHICSSCALE_H
#define PYTHONQTWRAPPER_QGRAPHICSSCALE_H

#include <qgraphicstransform.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qmatrix4x4.h>
#include <qobject.h>
#include <qvector3d.h>

class PythonQtShell_QGraphicsScale : public QGraphicsScale
{
public:
    PythonQtShell_QGraphicsScale(QObject*  parent = 0):QGraphicsScale(parent),_wrapper(NULL) {};

virtual void applyTo(QMatrix4x4*  matrix) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsScale : public QGraphicsScale
{ public:
inline void promoted_applyTo(QMatrix4x4*  matrix) const { QGraphicsScale::applyTo(matrix); }
};

class PythonQtWrapper_QGraphicsScale : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsScale* new_QGraphicsScale(QObject*  parent = 0);
void delete_QGraphicsScale(QGraphicsScale* obj) { delete obj; } 
   void setYScale(QGraphicsScale* theWrappedObject, qreal  arg__1);
   void setZScale(QGraphicsScale* theWrappedObject, qreal  arg__1);
   qreal  xScale(QGraphicsScale* theWrappedObject) const;
   void applyTo(QGraphicsScale* theWrappedObject, QMatrix4x4*  matrix) const;
   QVector3D  origin(QGraphicsScale* theWrappedObject) const;
   qreal  yScale(QGraphicsScale* theWrappedObject) const;
   void setXScale(QGraphicsScale* theWrappedObject, qreal  arg__1);
   void setOrigin(QGraphicsScale* theWrappedObject, const QVector3D&  point);
   qreal  zScale(QGraphicsScale* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSSCALE_H
