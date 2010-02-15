#ifndef PYTHONQTWRAPPER_QQUATERNION_H
#define PYTHONQTWRAPPER_QQUATERNION_H

#include <qquaternion.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qquaternion.h>
#include <qvector3d.h>
#include <qvector4d.h>

class PythonQtWrapper_QQuaternion : public QObject
{ Q_OBJECT
public:
public slots:
QQuaternion* new_QQuaternion();
QQuaternion* new_QQuaternion(const QVector4D&  vector);
QQuaternion* new_QQuaternion(qreal  scalar, const QVector3D&  vector);
QQuaternion* new_QQuaternion(qreal  scalar, qreal  xpos, qreal  ypos, qreal  zpos);
QQuaternion* new_QQuaternion(const QQuaternion& other) {
QQuaternion* a = new QQuaternion();
*((QQuaternion*)a) = other;
return a; }
void delete_QQuaternion(QQuaternion* obj) { delete obj; } 
   bool  isNull(QQuaternion* theWrappedObject) const;
   QQuaternion*  __isub__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion);
   bool  isIdentity(QQuaternion* theWrappedObject) const;
   qreal  length(QQuaternion* theWrappedObject) const;
   QQuaternion*  __imul__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion);
   void setVector(QQuaternion* theWrappedObject, const QVector3D&  vector);
   const QQuaternion  __add__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
   void setZ(QQuaternion* theWrappedObject, qreal  z);
   QVector4D  toVector4D(QQuaternion* theWrappedObject) const;
   void setX(QQuaternion* theWrappedObject, qreal  x);
   QQuaternion  normalized(QQuaternion* theWrappedObject) const;
   const QQuaternion  __sub__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
   QQuaternion  static_QQuaternion_fromAxisAndAngle(const QVector3D&  axis, qreal  angle);
   const QQuaternion  __mul__(QQuaternion* theWrappedObject, const QQuaternion&  q2);
   QQuaternion  static_QQuaternion_slerp(const QQuaternion&  q1, const QQuaternion&  q2, qreal  t);
   qreal  lengthSquared(QQuaternion* theWrappedObject) const;
   qreal  x(QQuaternion* theWrappedObject) const;
   QQuaternion*  __iadd__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion);
   QQuaternion*  __imul__(QQuaternion* theWrappedObject, qreal  factor);
   void writeTo(QQuaternion* theWrappedObject, QDataStream&  arg__1);
   qreal  scalar(QQuaternion* theWrappedObject) const;
   void normalize(QQuaternion* theWrappedObject);
   QVector3D  rotatedVector(QQuaternion* theWrappedObject, const QVector3D&  vector) const;
   qreal  y(QQuaternion* theWrappedObject) const;
   const QQuaternion  __div__(QQuaternion* theWrappedObject, qreal  divisor);
   void setScalar(QQuaternion* theWrappedObject, qreal  scalar);
   void readFrom(QQuaternion* theWrappedObject, QDataStream&  arg__1);
   QQuaternion  static_QQuaternion_fromAxisAndAngle(qreal  x, qreal  y, qreal  z, qreal  angle);
   QQuaternion*  __idiv__(QQuaternion* theWrappedObject, qreal  divisor);
   bool  operator_equal(QQuaternion* theWrappedObject, const QQuaternion&  q2);
   qreal  z(QQuaternion* theWrappedObject) const;
   QQuaternion  static_QQuaternion_nlerp(const QQuaternion&  q1, const QQuaternion&  q2, qreal  t);
   const QQuaternion  __mul__(QQuaternion* theWrappedObject, qreal  factor);
   void setVector(QQuaternion* theWrappedObject, qreal  x, qreal  y, qreal  z);
   QVector3D  vector(QQuaternion* theWrappedObject) const;
   QQuaternion  conjugate(QQuaternion* theWrappedObject) const;
   void setY(QQuaternion* theWrappedObject, qreal  y);
    QString toString(QQuaternion*);
};

#endif // PYTHONQTWRAPPER_QQUATERNION_H
