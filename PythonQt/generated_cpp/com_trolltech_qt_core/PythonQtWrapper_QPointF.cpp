#include "PythonQtWrapper_QPointF.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qmatrix.h>
#include <qmatrix4x4.h>
#include <qpoint.h>
#include <qtransform.h>

QPointF* PythonQtWrapper_QPointF::new_QPointF()
{ 
return new QPointF(); }

QPointF* PythonQtWrapper_QPointF::new_QPointF(const QPoint&  p)
{ 
return new QPointF(p); }

QPointF* PythonQtWrapper_QPointF::new_QPointF(qreal  xpos, qreal  ypos)
{ 
return new QPointF(xpos, ypos); }

qreal  PythonQtWrapper_QPointF::x(QPointF* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

const QPointF  PythonQtWrapper_QPointF::__sub__(QPointF* theWrappedObject, const QPointF&  p2)
{
  return ( (*theWrappedObject)- p2);
}

void PythonQtWrapper_QPointF::setX(QPointF* theWrappedObject, qreal  x)
{
  ( theWrappedObject->setX(x));
}

void PythonQtWrapper_QPointF::setY(QPointF* theWrappedObject, qreal  y)
{
  ( theWrappedObject->setY(y));
}

QPoint  PythonQtWrapper_QPointF::toPoint(QPointF* theWrappedObject) const
{
  return ( theWrappedObject->toPoint());
}

const QPointF  PythonQtWrapper_QPointF::__div__(QPointF* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)/ c);
}

const QPointF  PythonQtWrapper_QPointF::__mul__(QPointF* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)* c);
}

bool  PythonQtWrapper_QPointF::isNull(QPointF* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

void PythonQtWrapper_QPointF::writeTo(QPointF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

qreal  PythonQtWrapper_QPointF::y(QPointF* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

QPointF  PythonQtWrapper_QPointF::__mul__(QPointF* theWrappedObject, const QMatrix4x4&  matrix)
{
  return ( (*theWrappedObject)* matrix);
}

QPointF*  PythonQtWrapper_QPointF::__iadd__(QPointF* theWrappedObject, const QPointF&  p)
{
  return &( (*theWrappedObject)+= p);
}

QPointF*  PythonQtWrapper_QPointF::__imul__(QPointF* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)*= c);
}

const QPointF  PythonQtWrapper_QPointF::__add__(QPointF* theWrappedObject, const QPointF&  p2)
{
  return ( (*theWrappedObject)+ p2);
}

QPointF*  PythonQtWrapper_QPointF::__idiv__(QPointF* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)/= c);
}

QPointF  PythonQtWrapper_QPointF::__mul__(QPointF* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

bool  PythonQtWrapper_QPointF::operator_equal(QPointF* theWrappedObject, const QPointF&  p2)
{
  return ( (*theWrappedObject)== p2);
}

QPointF*  PythonQtWrapper_QPointF::__isub__(QPointF* theWrappedObject, const QPointF&  p)
{
  return &( (*theWrappedObject)-= p);
}

QPointF  PythonQtWrapper_QPointF::__mul__(QPointF* theWrappedObject, const QMatrix&  m)
{
  return ( (*theWrappedObject)* m);
}

void PythonQtWrapper_QPointF::readFrom(QPointF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

qreal  PythonQtWrapper_QPointF::manhattanLength(QPointF* theWrappedObject) const
{
  return ( theWrappedObject->manhattanLength());
}

QString PythonQtWrapper_QPointF::toString(QPointF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

