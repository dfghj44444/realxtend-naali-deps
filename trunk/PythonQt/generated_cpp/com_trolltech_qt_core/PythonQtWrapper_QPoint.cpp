#include "PythonQtWrapper_QPoint.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qpoint.h>

QPoint* PythonQtWrapper_QPoint::new_QPoint()
{ 
return new QPoint(); }

QPoint* PythonQtWrapper_QPoint::new_QPoint(int  xpos, int  ypos)
{ 
return new QPoint(xpos, ypos); }

bool  PythonQtWrapper_QPoint::operator_equal(QPoint* theWrappedObject, const QPoint&  p2)
{
  return ( (*theWrappedObject)== p2);
}

void PythonQtWrapper_QPoint::setY(QPoint* theWrappedObject, int  y)
{
  ( theWrappedObject->setY(y));
}

QPoint*  PythonQtWrapper_QPoint::operator_add_assign(QPoint* theWrappedObject, const QPoint&  p)
{
  return &( (*theWrappedObject)+= p);
}

QPoint*  PythonQtWrapper_QPoint::operator_multiply_assign(QPoint* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)*= c);
}

bool  PythonQtWrapper_QPoint::isNull(QPoint* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

void PythonQtWrapper_QPoint::writeTo(QPoint* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

int  PythonQtWrapper_QPoint::y(QPoint* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

int  PythonQtWrapper_QPoint::manhattanLength(QPoint* theWrappedObject) const
{
  return ( theWrappedObject->manhattanLength());
}

QPoint*  PythonQtWrapper_QPoint::operator_subtract_assign(QPoint* theWrappedObject, const QPoint&  p)
{
  return &( (*theWrappedObject)-= p);
}

void PythonQtWrapper_QPoint::setX(QPoint* theWrappedObject, int  x)
{
  ( theWrappedObject->setX(x));
}

QPoint*  PythonQtWrapper_QPoint::operator_divide_assign(QPoint* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)/= c);
}

int  PythonQtWrapper_QPoint::x(QPoint* theWrappedObject) const
{
  return ( theWrappedObject->x());
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

