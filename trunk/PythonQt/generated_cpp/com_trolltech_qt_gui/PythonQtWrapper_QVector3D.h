#ifndef PYTHONQTWRAPPER_QVECTOR3D_H
#define PYTHONQTWRAPPER_QVECTOR3D_H

#include <qvector3d.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qmatrix4x4.h>
#include <qpoint.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>

class PythonQtWrapper_QVector3D : public QObject
{ Q_OBJECT
public:
public slots:
QVector3D* new_QVector3D();
QVector3D* new_QVector3D(const QPoint&  point);
QVector3D* new_QVector3D(const QPointF&  point);
QVector3D* new_QVector3D(const QVector2D&  vector);
QVector3D* new_QVector3D(const QVector2D&  vector, qreal  zpos);
QVector3D* new_QVector3D(const QVector4D&  vector);
QVector3D* new_QVector3D(qreal  xpos, qreal  ypos, qreal  zpos);
QVector3D* new_QVector3D(const QVector3D& other) {
QVector3D* a = new QVector3D();
*((QVector3D*)a) = other;
return a; }
void delete_QVector3D(QVector3D* obj) { delete obj; } 
   qreal  distanceToPlane(QVector3D* theWrappedObject, const QVector3D&  plane1, const QVector3D&  plane2, const QVector3D&  plane3) const;
   bool  operator_equal(QVector3D* theWrappedObject, const QVector3D&  v2);
   void normalize(QVector3D* theWrappedObject);
   QVector3D  __mul__(QVector3D* theWrappedObject, const QMatrix4x4&  matrix);
   const QVector3D  __div__(QVector3D* theWrappedObject, qreal  divisor);
   void setY(QVector3D* theWrappedObject, qreal  y);
   qreal  static_QVector3D_dotProduct(const QVector3D&  v1, const QVector3D&  v2);
   const QVector3D  __mul__(QVector3D* theWrappedObject, qreal  factor);
   qreal  z(QVector3D* theWrappedObject) const;
   QVector3D  static_QVector3D_crossProduct(const QVector3D&  v1, const QVector3D&  v2);
   void readFrom(QVector3D* theWrappedObject, QDataStream&  arg__1);
   const QVector3D  __mul__(QVector3D* theWrappedObject, const QVector3D&  v2);
   QVector3D  normalized(QVector3D* theWrappedObject) const;
   const QVector3D  __sub__(QVector3D* theWrappedObject, const QVector3D&  v2);
   QVector3D*  __isub__(QVector3D* theWrappedObject, const QVector3D&  vector);
   void writeTo(QVector3D* theWrappedObject, QDataStream&  arg__1);
   QVector3D*  __imul__(QVector3D* theWrappedObject, const QVector3D&  vector);
   qreal  x(QVector3D* theWrappedObject) const;
   QPointF  toPointF(QVector3D* theWrappedObject) const;
   QVector3D*  __iadd__(QVector3D* theWrappedObject, const QVector3D&  vector);
   void setX(QVector3D* theWrappedObject, qreal  x);
   qreal  y(QVector3D* theWrappedObject) const;
   QPoint  toPoint(QVector3D* theWrappedObject) const;
   bool  isNull(QVector3D* theWrappedObject) const;
   qreal  lengthSquared(QVector3D* theWrappedObject) const;
   qreal  distanceToLine(QVector3D* theWrappedObject, const QVector3D&  point, const QVector3D&  direction) const;
   qreal  distanceToPlane(QVector3D* theWrappedObject, const QVector3D&  plane, const QVector3D&  normal) const;
   QVector3D  static_QVector3D_normal(const QVector3D&  v1, const QVector3D&  v2, const QVector3D&  v3);
   QVector3D*  __idiv__(QVector3D* theWrappedObject, qreal  divisor);
   QVector4D  toVector4D(QVector3D* theWrappedObject) const;
   QVector3D*  __imul__(QVector3D* theWrappedObject, qreal  factor);
   qreal  length(QVector3D* theWrappedObject) const;
   QVector3D  static_QVector3D_normal(const QVector3D&  v1, const QVector3D&  v2);
   void setZ(QVector3D* theWrappedObject, qreal  z);
   const QVector3D  __add__(QVector3D* theWrappedObject, const QVector3D&  v2);
   QVector2D  toVector2D(QVector3D* theWrappedObject) const;
    QString toString(QVector3D*);
};

#endif // PYTHONQTWRAPPER_QVECTOR3D_H
