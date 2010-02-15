#include "PythonQtWrapper_QVector2D.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qpoint.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>

QVector2D* PythonQtWrapper_QVector2D::new_QVector2D()
{ 
return new QVector2D(); }

QVector2D* PythonQtWrapper_QVector2D::new_QVector2D(const QPoint&  point)
{ 
return new QVector2D(point); }

QVector2D* PythonQtWrapper_QVector2D::new_QVector2D(const QPointF&  point)
{ 
return new QVector2D(point); }

QVector2D* PythonQtWrapper_QVector2D::new_QVector2D(const QVector3D&  vector)
{ 
return new QVector2D(vector); }

QVector2D* PythonQtWrapper_QVector2D::new_QVector2D(const QVector4D&  vector)
{ 
return new QVector2D(vector); }

QVector2D* PythonQtWrapper_QVector2D::new_QVector2D(qreal  xpos, qreal  ypos)
{ 
return new QVector2D(xpos, ypos); }

QVector2D*  PythonQtWrapper_QVector2D::__imul__(QVector2D* theWrappedObject, const QVector2D&  vector)
{
  return &( (*theWrappedObject)*= vector);
}

QVector4D  PythonQtWrapper_QVector2D::toVector4D(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->toVector4D());
}

QPointF  PythonQtWrapper_QVector2D::toPointF(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->toPointF());
}

QVector2D*  PythonQtWrapper_QVector2D::__iadd__(QVector2D* theWrappedObject, const QVector2D&  vector)
{
  return &( (*theWrappedObject)+= vector);
}

void PythonQtWrapper_QVector2D::normalize(QVector2D* theWrappedObject)
{
  ( theWrappedObject->normalize());
}

const QVector2D  PythonQtWrapper_QVector2D::__mul__(QVector2D* theWrappedObject, const QVector2D&  v2)
{
  return ( (*theWrappedObject)* v2);
}

const QVector2D  PythonQtWrapper_QVector2D::__add__(QVector2D* theWrappedObject, const QVector2D&  v2)
{
  return ( (*theWrappedObject)+ v2);
}

QVector2D*  PythonQtWrapper_QVector2D::__isub__(QVector2D* theWrappedObject, const QVector2D&  vector)
{
  return &( (*theWrappedObject)-= vector);
}

QVector3D  PythonQtWrapper_QVector2D::toVector3D(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->toVector3D());
}

const QVector2D  PythonQtWrapper_QVector2D::__div__(QVector2D* theWrappedObject, qreal  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

void PythonQtWrapper_QVector2D::setX(QVector2D* theWrappedObject, qreal  x)
{
  ( theWrappedObject->setX(x));
}

qreal  PythonQtWrapper_QVector2D::y(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

const QVector2D  PythonQtWrapper_QVector2D::__mul__(QVector2D* theWrappedObject, qreal  factor)
{
  return ( (*theWrappedObject)* factor);
}

QVector2D*  PythonQtWrapper_QVector2D::__imul__(QVector2D* theWrappedObject, qreal  factor)
{
  return &( (*theWrappedObject)*= factor);
}

void PythonQtWrapper_QVector2D::writeTo(QVector2D* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

qreal  PythonQtWrapper_QVector2D::static_QVector2D_dotProduct(const QVector2D&  v1, const QVector2D&  v2)
{
  return (QVector2D::dotProduct(v1, v2));
}

const QVector2D  PythonQtWrapper_QVector2D::__sub__(QVector2D* theWrappedObject, const QVector2D&  v2)
{
  return ( (*theWrappedObject)- v2);
}

void PythonQtWrapper_QVector2D::readFrom(QVector2D* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

qreal  PythonQtWrapper_QVector2D::x(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

QPoint  PythonQtWrapper_QVector2D::toPoint(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->toPoint());
}

void PythonQtWrapper_QVector2D::setY(QVector2D* theWrappedObject, qreal  y)
{
  ( theWrappedObject->setY(y));
}

bool  PythonQtWrapper_QVector2D::isNull(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QVector2D::operator_equal(QVector2D* theWrappedObject, const QVector2D&  v2)
{
  return ( (*theWrappedObject)== v2);
}

QVector2D*  PythonQtWrapper_QVector2D::__idiv__(QVector2D* theWrappedObject, qreal  divisor)
{
  return &( (*theWrappedObject)/= divisor);
}

qreal  PythonQtWrapper_QVector2D::length(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

qreal  PythonQtWrapper_QVector2D::lengthSquared(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->lengthSquared());
}

QVector2D  PythonQtWrapper_QVector2D::normalized(QVector2D* theWrappedObject) const
{
  return ( theWrappedObject->normalized());
}

QString PythonQtWrapper_QVector2D::toString(QVector2D* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

