#include "PythonQtWrapper_QMatrix4x4.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
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

QMatrix4x4* PythonQtWrapper_QMatrix4x4::new_QMatrix4x4()
{ 
return new QMatrix4x4(); }

QMatrix4x4* PythonQtWrapper_QMatrix4x4::new_QMatrix4x4(const QMatrix&  matrix)
{ 
return new QMatrix4x4(matrix); }

QMatrix4x4* PythonQtWrapper_QMatrix4x4::new_QMatrix4x4(const QTransform&  transform)
{ 
return new QMatrix4x4(transform); }

QMatrix4x4* PythonQtWrapper_QMatrix4x4::new_QMatrix4x4(const qreal*  values)
{ 
return new QMatrix4x4(values); }

QMatrix4x4* PythonQtWrapper_QMatrix4x4::new_QMatrix4x4(const qreal*  values, int  cols, int  rows)
{ 
return new QMatrix4x4(values, cols, rows); }

QMatrix4x4* PythonQtWrapper_QMatrix4x4::new_QMatrix4x4(qreal  m11, qreal  m12, qreal  m13, qreal  m14, qreal  m21, qreal  m22, qreal  m23, qreal  m24, qreal  m31, qreal  m32, qreal  m33, qreal  m34, qreal  m41, qreal  m42, qreal  m43, qreal  m44)
{ 
return new QMatrix4x4(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44); }

void PythonQtWrapper_QMatrix4x4::lookAt(QMatrix4x4* theWrappedObject, const QVector3D&  eye, const QVector3D&  center, const QVector3D&  up)
{
  ( theWrappedObject->lookAt(eye, center, up));
}

QPointF  PythonQtWrapper_QMatrix4x4::map(QMatrix4x4* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->map(point));
}

qreal*  PythonQtWrapper_QMatrix4x4::operator_cast_(QMatrix4x4* theWrappedObject, int  row, int  column)
{
  return &( theWrappedObject->operator()(row, column));
}

QMatrix4x4  PythonQtWrapper_QMatrix4x4::__add__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2)
{
  return ( (*theWrappedObject)+ m2);
}

QTransform  PythonQtWrapper_QMatrix4x4::toTransform(QMatrix4x4* theWrappedObject) const
{
  return ( theWrappedObject->toTransform());
}

QVector3D  PythonQtWrapper_QMatrix4x4::__mul__(QMatrix4x4* theWrappedObject, const QVector3D&  vector)
{
  return ( (*theWrappedObject)* vector);
}

void PythonQtWrapper_QMatrix4x4::scale(QMatrix4x4* theWrappedObject, const QVector3D&  vector)
{
  ( theWrappedObject->scale(vector));
}

QVector4D  PythonQtWrapper_QMatrix4x4::map(QMatrix4x4* theWrappedObject, const QVector4D&  point) const
{
  return ( theWrappedObject->map(point));
}

QMatrix4x4  PythonQtWrapper_QMatrix4x4::__div__(QMatrix4x4* theWrappedObject, qreal  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

QPoint  PythonQtWrapper_QMatrix4x4::map(QMatrix4x4* theWrappedObject, const QPoint&  point) const
{
  return ( theWrappedObject->map(point));
}

QMatrix4x4*  PythonQtWrapper_QMatrix4x4::__imul__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other)
{
  return &( (*theWrappedObject)*= other);
}

bool  PythonQtWrapper_QMatrix4x4::isIdentity(QMatrix4x4* theWrappedObject) const
{
  return ( theWrappedObject->isIdentity());
}

void PythonQtWrapper_QMatrix4x4::ortho(QMatrix4x4* theWrappedObject, const QRect&  rect)
{
  ( theWrappedObject->ortho(rect));
}

void PythonQtWrapper_QMatrix4x4::translate(QMatrix4x4* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->translate(x, y));
}

void PythonQtWrapper_QMatrix4x4::optimize(QMatrix4x4* theWrappedObject)
{
  ( theWrappedObject->optimize());
}

QRect  PythonQtWrapper_QMatrix4x4::mapRect(QMatrix4x4* theWrappedObject, const QRect&  rect) const
{
  return ( theWrappedObject->mapRect(rect));
}

void PythonQtWrapper_QMatrix4x4::ortho(QMatrix4x4* theWrappedObject, qreal  left, qreal  right, qreal  bottom, qreal  top, qreal  nearPlane, qreal  farPlane)
{
  ( theWrappedObject->ortho(left, right, bottom, top, nearPlane, farPlane));
}

QMatrix4x4  PythonQtWrapper_QMatrix4x4::__mul__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2)
{
  return ( (*theWrappedObject)* m2);
}

QMatrix4x4  PythonQtWrapper_QMatrix4x4::transposed(QMatrix4x4* theWrappedObject) const
{
  return ( theWrappedObject->transposed());
}

QMatrix4x4  PythonQtWrapper_QMatrix4x4::inverted(QMatrix4x4* theWrappedObject, bool*  invertible) const
{
  return ( theWrappedObject->inverted(invertible));
}

void PythonQtWrapper_QMatrix4x4::scale(QMatrix4x4* theWrappedObject, qreal  x, qreal  y, qreal  z)
{
  ( theWrappedObject->scale(x, y, z));
}

QMatrix4x4  PythonQtWrapper_QMatrix4x4::__mul__(QMatrix4x4* theWrappedObject, qreal  factor)
{
  return ( (*theWrappedObject)* factor);
}

QVector4D  PythonQtWrapper_QMatrix4x4::row(QMatrix4x4* theWrappedObject, int  index) const
{
  return ( theWrappedObject->row(index));
}

QMatrix  PythonQtWrapper_QMatrix4x4::toAffine(QMatrix4x4* theWrappedObject) const
{
  return ( theWrappedObject->toAffine());
}

QMatrix3x3  PythonQtWrapper_QMatrix4x4::normalMatrix(QMatrix4x4* theWrappedObject) const
{
  return ( theWrappedObject->normalMatrix());
}

QRectF  PythonQtWrapper_QMatrix4x4::mapRect(QMatrix4x4* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRect(rect));
}

void PythonQtWrapper_QMatrix4x4::readFrom(QMatrix4x4* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

void PythonQtWrapper_QMatrix4x4::translate(QMatrix4x4* theWrappedObject, qreal  x, qreal  y, qreal  z)
{
  ( theWrappedObject->translate(x, y, z));
}

QVector3D  PythonQtWrapper_QMatrix4x4::map(QMatrix4x4* theWrappedObject, const QVector3D&  point) const
{
  return ( theWrappedObject->map(point));
}

void PythonQtWrapper_QMatrix4x4::translate(QMatrix4x4* theWrappedObject, const QVector3D&  vector)
{
  ( theWrappedObject->translate(vector));
}

void PythonQtWrapper_QMatrix4x4::fill(QMatrix4x4* theWrappedObject, qreal  value)
{
  ( theWrappedObject->fill(value));
}

void PythonQtWrapper_QMatrix4x4::writeTo(QMatrix4x4* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QMatrix4x4*  PythonQtWrapper_QMatrix4x4::__iadd__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other)
{
  return &( (*theWrappedObject)+= other);
}

void PythonQtWrapper_QMatrix4x4::setToIdentity(QMatrix4x4* theWrappedObject)
{
  ( theWrappedObject->setToIdentity());
}

QTransform  PythonQtWrapper_QMatrix4x4::toTransform(QMatrix4x4* theWrappedObject, qreal  distanceToPlane) const
{
  return ( theWrappedObject->toTransform(distanceToPlane));
}

void PythonQtWrapper_QMatrix4x4::frustum(QMatrix4x4* theWrappedObject, qreal  left, qreal  right, qreal  bottom, qreal  top, qreal  nearPlane, qreal  farPlane)
{
  ( theWrappedObject->frustum(left, right, bottom, top, nearPlane, farPlane));
}

QMatrix4x4*  PythonQtWrapper_QMatrix4x4::__imul__(QMatrix4x4* theWrappedObject, qreal  factor)
{
  return &( (*theWrappedObject)*= factor);
}

QMatrix4x4*  PythonQtWrapper_QMatrix4x4::__isub__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other)
{
  return &( (*theWrappedObject)-= other);
}

QVector4D  PythonQtWrapper_QMatrix4x4::column(QMatrix4x4* theWrappedObject, int  index) const
{
  return ( theWrappedObject->column(index));
}

QPoint  PythonQtWrapper_QMatrix4x4::__mul__(QMatrix4x4* theWrappedObject, const QPoint&  point)
{
  return ( (*theWrappedObject)* point);
}

void PythonQtWrapper_QMatrix4x4::setColumn(QMatrix4x4* theWrappedObject, int  index, const QVector4D&  value)
{
  ( theWrappedObject->setColumn(index, value));
}

QPointF  PythonQtWrapper_QMatrix4x4::__mul__(QMatrix4x4* theWrappedObject, const QPointF&  point)
{
  return ( (*theWrappedObject)* point);
}

void PythonQtWrapper_QMatrix4x4::scale(QMatrix4x4* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->scale(x, y));
}

void PythonQtWrapper_QMatrix4x4::setRow(QMatrix4x4* theWrappedObject, int  index, const QVector4D&  value)
{
  ( theWrappedObject->setRow(index, value));
}

void PythonQtWrapper_QMatrix4x4::ortho(QMatrix4x4* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->ortho(rect));
}

void PythonQtWrapper_QMatrix4x4::flipCoordinates(QMatrix4x4* theWrappedObject)
{
  ( theWrappedObject->flipCoordinates());
}

void PythonQtWrapper_QMatrix4x4::copyDataTo(QMatrix4x4* theWrappedObject, qreal*  values) const
{
  ( theWrappedObject->copyDataTo(values));
}

void PythonQtWrapper_QMatrix4x4::scale(QMatrix4x4* theWrappedObject, qreal  factor)
{
  ( theWrappedObject->scale(factor));
}

qreal*  PythonQtWrapper_QMatrix4x4::data(QMatrix4x4* theWrappedObject)
{
  return ( theWrappedObject->data());
}

QVector3D  PythonQtWrapper_QMatrix4x4::mapVector(QMatrix4x4* theWrappedObject, const QVector3D&  vector) const
{
  return ( theWrappedObject->mapVector(vector));
}

void PythonQtWrapper_QMatrix4x4::rotate(QMatrix4x4* theWrappedObject, qreal  angle, const QVector3D&  vector)
{
  ( theWrappedObject->rotate(angle, vector));
}

QMatrix4x4  PythonQtWrapper_QMatrix4x4::__sub__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2)
{
  return ( (*theWrappedObject)- m2);
}

bool  PythonQtWrapper_QMatrix4x4::operator_equal(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QMatrix4x4::perspective(QMatrix4x4* theWrappedObject, qreal  angle, qreal  aspect, qreal  nearPlane, qreal  farPlane)
{
  ( theWrappedObject->perspective(angle, aspect, nearPlane, farPlane));
}

const qreal*  PythonQtWrapper_QMatrix4x4::constData(QMatrix4x4* theWrappedObject) const
{
  return ( theWrappedObject->constData());
}

QVector4D  PythonQtWrapper_QMatrix4x4::__mul__(QMatrix4x4* theWrappedObject, const QVector4D&  vector)
{
  return ( (*theWrappedObject)* vector);
}

void PythonQtWrapper_QMatrix4x4::rotate(QMatrix4x4* theWrappedObject, qreal  angle, qreal  x, qreal  y, qreal  z)
{
  ( theWrappedObject->rotate(angle, x, y, z));
}

QMatrix4x4*  PythonQtWrapper_QMatrix4x4::__idiv__(QMatrix4x4* theWrappedObject, qreal  divisor)
{
  return &( (*theWrappedObject)/= divisor);
}

void PythonQtWrapper_QMatrix4x4::rotate(QMatrix4x4* theWrappedObject, const QQuaternion&  quaternion)
{
  ( theWrappedObject->rotate(quaternion));
}

qreal  PythonQtWrapper_QMatrix4x4::determinant(QMatrix4x4* theWrappedObject) const
{
  return ( theWrappedObject->determinant());
}

QString PythonQtWrapper_QMatrix4x4::toString(QMatrix4x4* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

