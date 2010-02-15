#include "PythonQtWrapper_QVector3D.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qmatrix4x4.h>
#include <qpoint.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>

QVector3D* PythonQtWrapper_QVector3D::new_QVector3D()
{ 
return new QVector3D(); }

QVector3D* PythonQtWrapper_QVector3D::new_QVector3D(const QPoint&  point)
{ 
return new QVector3D(point); }

QVector3D* PythonQtWrapper_QVector3D::new_QVector3D(const QPointF&  point)
{ 
return new QVector3D(point); }

QVector3D* PythonQtWrapper_QVector3D::new_QVector3D(const QVector2D&  vector)
{ 
return new QVector3D(vector); }

QVector3D* PythonQtWrapper_QVector3D::new_QVector3D(const QVector2D&  vector, qreal  zpos)
{ 
return new QVector3D(vector, zpos); }

QVector3D* PythonQtWrapper_QVector3D::new_QVector3D(const QVector4D&  vector)
{ 
return new QVector3D(vector); }

QVector3D* PythonQtWrapper_QVector3D::new_QVector3D(qreal  xpos, qreal  ypos, qreal  zpos)
{ 
return new QVector3D(xpos, ypos, zpos); }

qreal  PythonQtWrapper_QVector3D::distanceToPlane(QVector3D* theWrappedObject, const QVector3D&  plane1, const QVector3D&  plane2, const QVector3D&  plane3) const
{
  return ( theWrappedObject->distanceToPlane(plane1, plane2, plane3));
}

bool  PythonQtWrapper_QVector3D::operator_equal(QVector3D* theWrappedObject, const QVector3D&  v2)
{
  return ( (*theWrappedObject)== v2);
}

void PythonQtWrapper_QVector3D::normalize(QVector3D* theWrappedObject)
{
  ( theWrappedObject->normalize());
}

QVector3D  PythonQtWrapper_QVector3D::__mul__(QVector3D* theWrappedObject, const QMatrix4x4&  matrix)
{
  return ( (*theWrappedObject)* matrix);
}

const QVector3D  PythonQtWrapper_QVector3D::__div__(QVector3D* theWrappedObject, qreal  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

void PythonQtWrapper_QVector3D::setY(QVector3D* theWrappedObject, qreal  y)
{
  ( theWrappedObject->setY(y));
}

qreal  PythonQtWrapper_QVector3D::static_QVector3D_dotProduct(const QVector3D&  v1, const QVector3D&  v2)
{
  return (QVector3D::dotProduct(v1, v2));
}

const QVector3D  PythonQtWrapper_QVector3D::__mul__(QVector3D* theWrappedObject, qreal  factor)
{
  return ( (*theWrappedObject)* factor);
}

qreal  PythonQtWrapper_QVector3D::z(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->z());
}

QVector3D  PythonQtWrapper_QVector3D::static_QVector3D_crossProduct(const QVector3D&  v1, const QVector3D&  v2)
{
  return (QVector3D::crossProduct(v1, v2));
}

void PythonQtWrapper_QVector3D::readFrom(QVector3D* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

const QVector3D  PythonQtWrapper_QVector3D::__mul__(QVector3D* theWrappedObject, const QVector3D&  v2)
{
  return ( (*theWrappedObject)* v2);
}

QVector3D  PythonQtWrapper_QVector3D::normalized(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->normalized());
}

const QVector3D  PythonQtWrapper_QVector3D::__sub__(QVector3D* theWrappedObject, const QVector3D&  v2)
{
  return ( (*theWrappedObject)- v2);
}

QVector3D*  PythonQtWrapper_QVector3D::__isub__(QVector3D* theWrappedObject, const QVector3D&  vector)
{
  return &( (*theWrappedObject)-= vector);
}

void PythonQtWrapper_QVector3D::writeTo(QVector3D* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QVector3D*  PythonQtWrapper_QVector3D::__imul__(QVector3D* theWrappedObject, const QVector3D&  vector)
{
  return &( (*theWrappedObject)*= vector);
}

qreal  PythonQtWrapper_QVector3D::x(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

QPointF  PythonQtWrapper_QVector3D::toPointF(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->toPointF());
}

QVector3D*  PythonQtWrapper_QVector3D::__iadd__(QVector3D* theWrappedObject, const QVector3D&  vector)
{
  return &( (*theWrappedObject)+= vector);
}

void PythonQtWrapper_QVector3D::setX(QVector3D* theWrappedObject, qreal  x)
{
  ( theWrappedObject->setX(x));
}

qreal  PythonQtWrapper_QVector3D::y(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

QPoint  PythonQtWrapper_QVector3D::toPoint(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->toPoint());
}

bool  PythonQtWrapper_QVector3D::isNull(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

qreal  PythonQtWrapper_QVector3D::lengthSquared(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->lengthSquared());
}

qreal  PythonQtWrapper_QVector3D::distanceToLine(QVector3D* theWrappedObject, const QVector3D&  point, const QVector3D&  direction) const
{
  return ( theWrappedObject->distanceToLine(point, direction));
}

qreal  PythonQtWrapper_QVector3D::distanceToPlane(QVector3D* theWrappedObject, const QVector3D&  plane, const QVector3D&  normal) const
{
  return ( theWrappedObject->distanceToPlane(plane, normal));
}

QVector3D  PythonQtWrapper_QVector3D::static_QVector3D_normal(const QVector3D&  v1, const QVector3D&  v2, const QVector3D&  v3)
{
  return (QVector3D::normal(v1, v2, v3));
}

QVector3D*  PythonQtWrapper_QVector3D::__idiv__(QVector3D* theWrappedObject, qreal  divisor)
{
  return &( (*theWrappedObject)/= divisor);
}

QVector4D  PythonQtWrapper_QVector3D::toVector4D(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->toVector4D());
}

QVector3D*  PythonQtWrapper_QVector3D::__imul__(QVector3D* theWrappedObject, qreal  factor)
{
  return &( (*theWrappedObject)*= factor);
}

qreal  PythonQtWrapper_QVector3D::length(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QVector3D  PythonQtWrapper_QVector3D::static_QVector3D_normal(const QVector3D&  v1, const QVector3D&  v2)
{
  return (QVector3D::normal(v1, v2));
}

void PythonQtWrapper_QVector3D::setZ(QVector3D* theWrappedObject, qreal  z)
{
  ( theWrappedObject->setZ(z));
}

const QVector3D  PythonQtWrapper_QVector3D::__add__(QVector3D* theWrappedObject, const QVector3D&  v2)
{
  return ( (*theWrappedObject)+ v2);
}

QVector2D  PythonQtWrapper_QVector3D::toVector2D(QVector3D* theWrappedObject) const
{
  return ( theWrappedObject->toVector2D());
}

QString PythonQtWrapper_QVector3D::toString(QVector3D* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

