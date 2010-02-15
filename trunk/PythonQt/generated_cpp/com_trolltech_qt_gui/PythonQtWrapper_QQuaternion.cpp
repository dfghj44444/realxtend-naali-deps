#include "PythonQtWrapper_QQuaternion.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qquaternion.h>
#include <qvector3d.h>
#include <qvector4d.h>

QQuaternion* PythonQtWrapper_QQuaternion::new_QQuaternion()
{ 
return new QQuaternion(); }

QQuaternion* PythonQtWrapper_QQuaternion::new_QQuaternion(const QVector4D&  vector)
{ 
return new QQuaternion(vector); }

QQuaternion* PythonQtWrapper_QQuaternion::new_QQuaternion(qreal  scalar, const QVector3D&  vector)
{ 
return new QQuaternion(scalar, vector); }

QQuaternion* PythonQtWrapper_QQuaternion::new_QQuaternion(qreal  scalar, qreal  xpos, qreal  ypos, qreal  zpos)
{ 
return new QQuaternion(scalar, xpos, ypos, zpos); }

bool  PythonQtWrapper_QQuaternion::isNull(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QQuaternion*  PythonQtWrapper_QQuaternion::__isub__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion)
{
  return &( (*theWrappedObject)-= quaternion);
}

bool  PythonQtWrapper_QQuaternion::isIdentity(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->isIdentity());
}

qreal  PythonQtWrapper_QQuaternion::length(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QQuaternion*  PythonQtWrapper_QQuaternion::__imul__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion)
{
  return &( (*theWrappedObject)*= quaternion);
}

void PythonQtWrapper_QQuaternion::setVector(QQuaternion* theWrappedObject, const QVector3D&  vector)
{
  ( theWrappedObject->setVector(vector));
}

const QQuaternion  PythonQtWrapper_QQuaternion::__add__(QQuaternion* theWrappedObject, const QQuaternion&  q2)
{
  return ( (*theWrappedObject)+ q2);
}

void PythonQtWrapper_QQuaternion::setZ(QQuaternion* theWrappedObject, qreal  z)
{
  ( theWrappedObject->setZ(z));
}

QVector4D  PythonQtWrapper_QQuaternion::toVector4D(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->toVector4D());
}

void PythonQtWrapper_QQuaternion::setX(QQuaternion* theWrappedObject, qreal  x)
{
  ( theWrappedObject->setX(x));
}

QQuaternion  PythonQtWrapper_QQuaternion::normalized(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->normalized());
}

const QQuaternion  PythonQtWrapper_QQuaternion::__sub__(QQuaternion* theWrappedObject, const QQuaternion&  q2)
{
  return ( (*theWrappedObject)- q2);
}

QQuaternion  PythonQtWrapper_QQuaternion::static_QQuaternion_fromAxisAndAngle(const QVector3D&  axis, qreal  angle)
{
  return (QQuaternion::fromAxisAndAngle(axis, angle));
}

const QQuaternion  PythonQtWrapper_QQuaternion::__mul__(QQuaternion* theWrappedObject, const QQuaternion&  q2)
{
  return ( (*theWrappedObject)* q2);
}

QQuaternion  PythonQtWrapper_QQuaternion::static_QQuaternion_slerp(const QQuaternion&  q1, const QQuaternion&  q2, qreal  t)
{
  return (QQuaternion::slerp(q1, q2, t));
}

qreal  PythonQtWrapper_QQuaternion::lengthSquared(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->lengthSquared());
}

qreal  PythonQtWrapper_QQuaternion::x(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

QQuaternion*  PythonQtWrapper_QQuaternion::__iadd__(QQuaternion* theWrappedObject, const QQuaternion&  quaternion)
{
  return &( (*theWrappedObject)+= quaternion);
}

QQuaternion*  PythonQtWrapper_QQuaternion::__imul__(QQuaternion* theWrappedObject, qreal  factor)
{
  return &( (*theWrappedObject)*= factor);
}

void PythonQtWrapper_QQuaternion::writeTo(QQuaternion* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

qreal  PythonQtWrapper_QQuaternion::scalar(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->scalar());
}

void PythonQtWrapper_QQuaternion::normalize(QQuaternion* theWrappedObject)
{
  ( theWrappedObject->normalize());
}

QVector3D  PythonQtWrapper_QQuaternion::rotatedVector(QQuaternion* theWrappedObject, const QVector3D&  vector) const
{
  return ( theWrappedObject->rotatedVector(vector));
}

qreal  PythonQtWrapper_QQuaternion::y(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

const QQuaternion  PythonQtWrapper_QQuaternion::__div__(QQuaternion* theWrappedObject, qreal  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

void PythonQtWrapper_QQuaternion::setScalar(QQuaternion* theWrappedObject, qreal  scalar)
{
  ( theWrappedObject->setScalar(scalar));
}

void PythonQtWrapper_QQuaternion::readFrom(QQuaternion* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QQuaternion  PythonQtWrapper_QQuaternion::static_QQuaternion_fromAxisAndAngle(qreal  x, qreal  y, qreal  z, qreal  angle)
{
  return (QQuaternion::fromAxisAndAngle(x, y, z, angle));
}

QQuaternion*  PythonQtWrapper_QQuaternion::__idiv__(QQuaternion* theWrappedObject, qreal  divisor)
{
  return &( (*theWrappedObject)/= divisor);
}

bool  PythonQtWrapper_QQuaternion::operator_equal(QQuaternion* theWrappedObject, const QQuaternion&  q2)
{
  return ( (*theWrappedObject)== q2);
}

qreal  PythonQtWrapper_QQuaternion::z(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->z());
}

QQuaternion  PythonQtWrapper_QQuaternion::static_QQuaternion_nlerp(const QQuaternion&  q1, const QQuaternion&  q2, qreal  t)
{
  return (QQuaternion::nlerp(q1, q2, t));
}

const QQuaternion  PythonQtWrapper_QQuaternion::__mul__(QQuaternion* theWrappedObject, qreal  factor)
{
  return ( (*theWrappedObject)* factor);
}

void PythonQtWrapper_QQuaternion::setVector(QQuaternion* theWrappedObject, qreal  x, qreal  y, qreal  z)
{
  ( theWrappedObject->setVector(x, y, z));
}

QVector3D  PythonQtWrapper_QQuaternion::vector(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->vector());
}

QQuaternion  PythonQtWrapper_QQuaternion::conjugate(QQuaternion* theWrappedObject) const
{
  return ( theWrappedObject->conjugate());
}

void PythonQtWrapper_QQuaternion::setY(QQuaternion* theWrappedObject, qreal  y)
{
  ( theWrappedObject->setY(y));
}

QString PythonQtWrapper_QQuaternion::toString(QQuaternion* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

