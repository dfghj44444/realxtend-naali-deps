#ifndef PYTHONQTWRAPPER_QMATRIX4X4_H
#define PYTHONQTWRAPPER_QMATRIX4X4_H

#include <qmatrix4x4.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qgenericmatrix.h>
#include <qmatrix.h>
#include <qmatrix4x4.h>
#include <qpoint.h>
#include <qquaternion.h>
#include <qrect.h>
#include <qtransform.h>
#include <qvector3d.h>
#include <qvector4d.h>

class PythonQtWrapper_QMatrix4x4 : public QObject
{ Q_OBJECT
public:
public slots:
QMatrix4x4* new_QMatrix4x4();
QMatrix4x4* new_QMatrix4x4(const QMatrix&  matrix);
QMatrix4x4* new_QMatrix4x4(const QTransform&  transform);
QMatrix4x4* new_QMatrix4x4(const qreal*  values);
QMatrix4x4* new_QMatrix4x4(const qreal*  values, int  cols, int  rows);
QMatrix4x4* new_QMatrix4x4(qreal  m11, qreal  m12, qreal  m13, qreal  m14, qreal  m21, qreal  m22, qreal  m23, qreal  m24, qreal  m31, qreal  m32, qreal  m33, qreal  m34, qreal  m41, qreal  m42, qreal  m43, qreal  m44);
QMatrix4x4* new_QMatrix4x4(const QMatrix4x4& other) {
QMatrix4x4* a = new QMatrix4x4();
*((QMatrix4x4*)a) = other;
return a; }
void delete_QMatrix4x4(QMatrix4x4* obj) { delete obj; } 
   void lookAt(QMatrix4x4* theWrappedObject, const QVector3D&  eye, const QVector3D&  center, const QVector3D&  up);
   QPointF  map(QMatrix4x4* theWrappedObject, const QPointF&  point) const;
   qreal*  operator_cast_(QMatrix4x4* theWrappedObject, int  row, int  column);
   QMatrix4x4  __add__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   QTransform  toTransform(QMatrix4x4* theWrappedObject) const;
   QVector3D  __mul__(QMatrix4x4* theWrappedObject, const QVector3D&  vector);
   void scale(QMatrix4x4* theWrappedObject, const QVector3D&  vector);
   QVector4D  map(QMatrix4x4* theWrappedObject, const QVector4D&  point) const;
   QMatrix4x4  __div__(QMatrix4x4* theWrappedObject, qreal  divisor);
   QPoint  map(QMatrix4x4* theWrappedObject, const QPoint&  point) const;
   QMatrix4x4*  __imul__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   bool  isIdentity(QMatrix4x4* theWrappedObject) const;
   void ortho(QMatrix4x4* theWrappedObject, const QRect&  rect);
   void translate(QMatrix4x4* theWrappedObject, qreal  x, qreal  y);
   void optimize(QMatrix4x4* theWrappedObject);
   QRect  mapRect(QMatrix4x4* theWrappedObject, const QRect&  rect) const;
   void ortho(QMatrix4x4* theWrappedObject, qreal  left, qreal  right, qreal  bottom, qreal  top, qreal  nearPlane, qreal  farPlane);
   QMatrix4x4  __mul__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   QMatrix4x4  transposed(QMatrix4x4* theWrappedObject) const;
   QMatrix4x4  inverted(QMatrix4x4* theWrappedObject, bool*  invertible = 0) const;
   void scale(QMatrix4x4* theWrappedObject, qreal  x, qreal  y, qreal  z);
   QMatrix4x4  __mul__(QMatrix4x4* theWrappedObject, qreal  factor);
   QVector4D  row(QMatrix4x4* theWrappedObject, int  index) const;
   QMatrix  toAffine(QMatrix4x4* theWrappedObject) const;
   QMatrix3x3  normalMatrix(QMatrix4x4* theWrappedObject) const;
   QRectF  mapRect(QMatrix4x4* theWrappedObject, const QRectF&  rect) const;
   void readFrom(QMatrix4x4* theWrappedObject, QDataStream&  arg__1);
   void translate(QMatrix4x4* theWrappedObject, qreal  x, qreal  y, qreal  z);
   QVector3D  map(QMatrix4x4* theWrappedObject, const QVector3D&  point) const;
   void translate(QMatrix4x4* theWrappedObject, const QVector3D&  vector);
   void fill(QMatrix4x4* theWrappedObject, qreal  value);
   void writeTo(QMatrix4x4* theWrappedObject, QDataStream&  arg__1);
   QMatrix4x4*  __iadd__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   void setToIdentity(QMatrix4x4* theWrappedObject);
   QTransform  toTransform(QMatrix4x4* theWrappedObject, qreal  distanceToPlane) const;
   void frustum(QMatrix4x4* theWrappedObject, qreal  left, qreal  right, qreal  bottom, qreal  top, qreal  nearPlane, qreal  farPlane);
   QMatrix4x4*  __imul__(QMatrix4x4* theWrappedObject, qreal  factor);
   QMatrix4x4*  __isub__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   QVector4D  column(QMatrix4x4* theWrappedObject, int  index) const;
   QPoint  __mul__(QMatrix4x4* theWrappedObject, const QPoint&  point);
   void setColumn(QMatrix4x4* theWrappedObject, int  index, const QVector4D&  value);
   QPointF  __mul__(QMatrix4x4* theWrappedObject, const QPointF&  point);
   void scale(QMatrix4x4* theWrappedObject, qreal  x, qreal  y);
   void setRow(QMatrix4x4* theWrappedObject, int  index, const QVector4D&  value);
   void ortho(QMatrix4x4* theWrappedObject, const QRectF&  rect);
   void flipCoordinates(QMatrix4x4* theWrappedObject);
   void copyDataTo(QMatrix4x4* theWrappedObject, qreal*  values) const;
   void scale(QMatrix4x4* theWrappedObject, qreal  factor);
   qreal*  data(QMatrix4x4* theWrappedObject);
   QVector3D  mapVector(QMatrix4x4* theWrappedObject, const QVector3D&  vector) const;
   void rotate(QMatrix4x4* theWrappedObject, qreal  angle, const QVector3D&  vector);
   QMatrix4x4  __sub__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   bool  operator_equal(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other) const;
   void perspective(QMatrix4x4* theWrappedObject, qreal  angle, qreal  aspect, qreal  nearPlane, qreal  farPlane);
   const qreal*  constData(QMatrix4x4* theWrappedObject) const;
   QVector4D  __mul__(QMatrix4x4* theWrappedObject, const QVector4D&  vector);
   void rotate(QMatrix4x4* theWrappedObject, qreal  angle, qreal  x, qreal  y, qreal  z = 0.0f);
   QMatrix4x4*  __idiv__(QMatrix4x4* theWrappedObject, qreal  divisor);
   void rotate(QMatrix4x4* theWrappedObject, const QQuaternion&  quaternion);
   qreal  determinant(QMatrix4x4* theWrappedObject) const;
    QString toString(QMatrix4x4*);
};

#endif // PYTHONQTWRAPPER_QMATRIX4X4_H
