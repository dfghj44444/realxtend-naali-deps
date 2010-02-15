#include "PythonQtWrapper_QVector4D.h"

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

QVector4D* PythonQtWrapper_QVector4D::new_QVector4D()
{ 
return new QVector4D(); }

QVector4D* PythonQtWrapper_QVector4D::new_QVector4D(const QPoint&  point)
{ 
return new QVector4D(point); }

QVector4D* PythonQtWrapper_QVector4D::new_QVector4D(const QPointF&  point)
{ 
return new QVector4D(point); }

QVector4D* PythonQtWrapper_QVector4D::new_QVector4D(const QVector2D&  vector)
{ 
return new QVector4D(vector); }

QVector4D* PythonQtWrapper_QVector4D::new_QVector4D(const QVector2D&  vector, qreal  zpos, qreal  wpos)
{ 
return new QVector4D(vector, zpos, wpos); }

QVector4D* PythonQtWrapper_QVector4D::new_QVector4D(const QVector3D&  vector)
{ 
return new QVector4D(vector); }

QVector4D* PythonQtWrapper_QVector4D::new_QVector4D(const QVector3D&  vector, qreal  wpos)
{ 
return new QVector4D(vector, wpos); }

QVector4D* PythonQtWrapper_QVector4D::new_QVector4D(qreal  xpos, qreal  ypos, qreal  zpos, qreal  wpos)
{ 
return new QVector4D(xpos, ypos, zpos, wpos); }

const QVector4D  PythonQtWrapper_QVector4D::__mul__(QVector4D* theWrappedObject, const QVector4D&  v2)
{
  return ( (*theWrappedObject)* v2);
}

bool  PythonQtWrapper_QVector4D::isNull(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QVector3D  PythonQtWrapper_QVector4D::toVector3DAffine(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->toVector3DAffine());
}

void PythonQtWrapper_QVector4D::setY(QVector4D* theWrappedObject, qreal  y)
{
  ( theWrappedObject->setY(y));
}

const QVector4D  PythonQtWrapper_QVector4D::__add__(QVector4D* theWrappedObject, const QVector4D&  v2)
{
  return ( (*theWrappedObject)+ v2);
}

qreal  PythonQtWrapper_QVector4D::length(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QVector2D  PythonQtWrapper_QVector4D::toVector2D(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->toVector2D());
}

QVector4D*  PythonQtWrapper_QVector4D::__idiv__(QVector4D* theWrappedObject, qreal  divisor)
{
  return &( (*theWrappedObject)/= divisor);
}

QVector2D  PythonQtWrapper_QVector4D::toVector2DAffine(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->toVector2DAffine());
}

QVector4D  PythonQtWrapper_QVector4D::__mul__(QVector4D* theWrappedObject, const QMatrix4x4&  matrix)
{
  return ( (*theWrappedObject)* matrix);
}

QVector4D*  PythonQtWrapper_QVector4D::__isub__(QVector4D* theWrappedObject, const QVector4D&  vector)
{
  return &( (*theWrappedObject)-= vector);
}

void PythonQtWrapper_QVector4D::readFrom(QVector4D* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QPoint  PythonQtWrapper_QVector4D::toPoint(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->toPoint());
}

QVector4D*  PythonQtWrapper_QVector4D::__imul__(QVector4D* theWrappedObject, const QVector4D&  vector)
{
  return &( (*theWrappedObject)*= vector);
}

QVector4D*  PythonQtWrapper_QVector4D::__iadd__(QVector4D* theWrappedObject, const QVector4D&  vector)
{
  return &( (*theWrappedObject)+= vector);
}

void PythonQtWrapper_QVector4D::writeTo(QVector4D* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QVector4D::operator_equal(QVector4D* theWrappedObject, const QVector4D&  v2)
{
  return ( (*theWrappedObject)== v2);
}

qreal  PythonQtWrapper_QVector4D::z(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->z());
}

qreal  PythonQtWrapper_QVector4D::static_QVector4D_dotProduct(const QVector4D&  v1, const QVector4D&  v2)
{
  return (QVector4D::dotProduct(v1, v2));
}

const QVector4D  PythonQtWrapper_QVector4D::__mul__(QVector4D* theWrappedObject, qreal  factor)
{
  return ( (*theWrappedObject)* factor);
}

qreal  PythonQtWrapper_QVector4D::lengthSquared(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->lengthSquared());
}

const QVector4D  PythonQtWrapper_QVector4D::__sub__(QVector4D* theWrappedObject, const QVector4D&  v2)
{
  return ( (*theWrappedObject)- v2);
}

void PythonQtWrapper_QVector4D::setX(QVector4D* theWrappedObject, qreal  x)
{
  ( theWrappedObject->setX(x));
}

qreal  PythonQtWrapper_QVector4D::y(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

QVector4D  PythonQtWrapper_QVector4D::normalized(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->normalized());
}

QVector4D*  PythonQtWrapper_QVector4D::__imul__(QVector4D* theWrappedObject, qreal  factor)
{
  return &( (*theWrappedObject)*= factor);
}

const QVector4D  PythonQtWrapper_QVector4D::__div__(QVector4D* theWrappedObject, qreal  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

qreal  PythonQtWrapper_QVector4D::w(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->w());
}

qreal  PythonQtWrapper_QVector4D::x(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

void PythonQtWrapper_QVector4D::normalize(QVector4D* theWrappedObject)
{
  ( theWrappedObject->normalize());
}

void PythonQtWrapper_QVector4D::setW(QVector4D* theWrappedObject, qreal  w)
{
  ( theWrappedObject->setW(w));
}

void PythonQtWrapper_QVector4D::setZ(QVector4D* theWrappedObject, qreal  z)
{
  ( theWrappedObject->setZ(z));
}

QPointF  PythonQtWrapper_QVector4D::toPointF(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->toPointF());
}

QVector3D  PythonQtWrapper_QVector4D::toVector3D(QVector4D* theWrappedObject) const
{
  return ( theWrappedObject->toVector3D());
}

QString PythonQtWrapper_QVector4D::toString(QVector4D* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

