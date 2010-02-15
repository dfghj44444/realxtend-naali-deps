#include "PythonQtWrapper_QPoint.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qmatrix.h>
#include <qmatrix4x4.h>
#include <qpoint.h>
#include <qtransform.h>

QPoint* PythonQtWrapper_QPoint::new_QPoint()
{ 
return new QPoint(); }

QPoint* PythonQtWrapper_QPoint::new_QPoint(int  xpos, int  ypos)
{ 
return new QPoint(xpos, ypos); }

const QPoint  PythonQtWrapper_QPoint::__add__(QPoint* theWrappedObject, const QPoint&  p2)
{
  return ( (*theWrappedObject)+ p2);
}

QPoint  PythonQtWrapper_QPoint::__mul__(QPoint* theWrappedObject, const QMatrix4x4&  matrix)
{
  return ( (*theWrappedObject)* matrix);
}

int  PythonQtWrapper_QPoint::manhattanLength(QPoint* theWrappedObject) const
{
  return ( theWrappedObject->manhattanLength());
}

QPoint*  PythonQtWrapper_QPoint::__idiv__(QPoint* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)/= c);
}

QPoint*  PythonQtWrapper_QPoint::__isub__(QPoint* theWrappedObject, const QPoint&  p)
{
  return &( (*theWrappedObject)-= p);
}

QPoint  PythonQtWrapper_QPoint::__mul__(QPoint* theWrappedObject, const QMatrix&  m)
{
  return ( (*theWrappedObject)* m);
}

const QPoint  PythonQtWrapper_QPoint::__mul__(QPoint* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)* c);
}

bool  PythonQtWrapper_QPoint::operator_equal(QPoint* theWrappedObject, const QPoint&  p2)
{
  return ( (*theWrappedObject)== p2);
}

int  PythonQtWrapper_QPoint::y(QPoint* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

void PythonQtWrapper_QPoint::setX(QPoint* theWrappedObject, int  x)
{
  ( theWrappedObject->setX(x));
}

int  PythonQtWrapper_QPoint::x(QPoint* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

const QPoint  PythonQtWrapper_QPoint::__div__(QPoint* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)/ c);
}

void PythonQtWrapper_QPoint::writeTo(QPoint* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QPoint  PythonQtWrapper_QPoint::__mul__(QPoint* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

void PythonQtWrapper_QPoint::setY(QPoint* theWrappedObject, int  y)
{
  ( theWrappedObject->setY(y));
}

bool  PythonQtWrapper_QPoint::isNull(QPoint* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QPoint*  PythonQtWrapper_QPoint::__imul__(QPoint* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)*= c);
}

const QPoint  PythonQtWrapper_QPoint::__sub__(QPoint* theWrappedObject, const QPoint&  p2)
{
  return ( (*theWrappedObject)- p2);
}

QPoint*  PythonQtWrapper_QPoint::__iadd__(QPoint* theWrappedObject, const QPoint&  p)
{
  return &( (*theWrappedObject)+= p);
}

void PythonQtWrapper_QPoint::readFrom(QPoint* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString PythonQtWrapper_QPoint::toString(QPoint* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

