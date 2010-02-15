#ifndef PYTHONQTWRAPPER_QGRAPHICSROTATION_H
#define PYTHONQTWRAPPER_QGRAPHICSROTATION_H

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

class PythonQtShell_QGraphicsRotation : public QGraphicsRotation
{
public:
    PythonQtShell_QGraphicsRotation(QObject*  parent = 0):QGraphicsRotation(parent),_wrapper(NULL) {};

virtual void applyTo(QMatrix4x4*  matrix) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsRotation : public QGraphicsRotation
{ public:
inline void promoted_applyTo(QMatrix4x4*  matrix) const { QGraphicsRotation::applyTo(matrix); }
};

class PythonQtWrapper_QGraphicsRotation : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsRotation* new_QGraphicsRotation(QObject*  parent = 0);
void delete_QGraphicsRotation(QGraphicsRotation* obj) { delete obj; } 
   void setAngle(QGraphicsRotation* theWrappedObject, qreal  arg__1);
   qreal  angle(QGraphicsRotation* theWrappedObject) const;
   QVector3D  origin(QGraphicsRotation* theWrappedObject) const;
   void setAxis(QGraphicsRotation* theWrappedObject, const QVector3D&  axis);
   QVector3D  axis(QGraphicsRotation* theWrappedObject) const;
   void setAxis(QGraphicsRotation* theWrappedObject, Qt::Axis  axis);
   void applyTo(QGraphicsRotation* theWrappedObject, QMatrix4x4*  matrix) const;
   void setOrigin(QGraphicsRotation* theWrappedObject, const QVector3D&  point);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSROTATION_H
