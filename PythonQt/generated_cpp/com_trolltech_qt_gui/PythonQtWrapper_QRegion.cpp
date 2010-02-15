#include "PythonQtWrapper_QRegion.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbitmap.h>
#include <qdatastream.h>
#include <qmatrix.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qtransform.h>
#include <qvector.h>

QRegion* PythonQtWrapper_QRegion::new_QRegion()
{ 
return new QRegion(); }

QRegion* PythonQtWrapper_QRegion::new_QRegion(const QBitmap&  bitmap)
{ 
return new QRegion(bitmap); }

QRegion* PythonQtWrapper_QRegion::new_QRegion(const QPolygon&  pa, Qt::FillRule  fillRule)
{ 
return new QRegion(pa, fillRule); }

QRegion* PythonQtWrapper_QRegion::new_QRegion(const QRect&  r, QRegion::RegionType  t)
{ 
return new QRegion(r, t); }

QRegion* PythonQtWrapper_QRegion::new_QRegion(const QRegion&  region)
{ 
return new QRegion(region); }

QRegion* PythonQtWrapper_QRegion::new_QRegion(int  x, int  y, int  w, int  h, QRegion::RegionType  t)
{ 
return new QRegion(x, y, w, h, t); }

void PythonQtWrapper_QRegion::translate(QRegion* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->translate(p));
}

bool  PythonQtWrapper_QRegion::contains(QRegion* theWrappedObject, const QRect&  r) const
{
  return ( theWrappedObject->contains(r));
}

QRegion  PythonQtWrapper_QRegion::united(QRegion* theWrappedObject, const QRect&  r) const
{
  return ( theWrappedObject->united(r));
}

QRegion  PythonQtWrapper_QRegion::__mul__(QRegion* theWrappedObject, const QMatrix&  m)
{
  return ( (*theWrappedObject)* m);
}

void PythonQtWrapper_QRegion::translate(QRegion* theWrappedObject, int  dx, int  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

QRect  PythonQtWrapper_QRegion::boundingRect(QRegion* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QRegion::intersects(QRegion* theWrappedObject, const QRect&  r) const
{
  return ( theWrappedObject->intersects(r));
}

bool  PythonQtWrapper_QRegion::contains(QRegion* theWrappedObject, const QPoint&  p) const
{
  return ( theWrappedObject->contains(p));
}

QRegion  PythonQtWrapper_QRegion::subtracted(QRegion* theWrappedObject, const QRegion&  r) const
{
  return ( theWrappedObject->subtracted(r));
}

int  PythonQtWrapper_QRegion::numRects(QRegion* theWrappedObject) const
{
  return ( theWrappedObject->numRects());
}

void PythonQtWrapper_QRegion::setRects(QRegion* theWrappedObject, const QRect*  rect, int  num)
{
  ( theWrappedObject->setRects(rect, num));
}

QRegion  PythonQtWrapper_QRegion::__mul__(QRegion* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

QRegion  PythonQtWrapper_QRegion::intersect(QRegion* theWrappedObject, const QRect&  r) const
{
  return ( theWrappedObject->intersect(r));
}

QRegion  PythonQtWrapper_QRegion::intersected(QRegion* theWrappedObject, const QRect&  r) const
{
  return ( theWrappedObject->intersected(r));
}

QVector<QRect >  PythonQtWrapper_QRegion::rects(QRegion* theWrappedObject) const
{
  return ( theWrappedObject->rects());
}

const QRegion  PythonQtWrapper_QRegion::__and__(QRegion* theWrappedObject, const QRect&  r) const
{
  return ( (*theWrappedObject)& r);
}

int  PythonQtWrapper_QRegion::rectCount(QRegion* theWrappedObject) const
{
  return ( theWrappedObject->rectCount());
}

bool  PythonQtWrapper_QRegion::intersects(QRegion* theWrappedObject, const QRegion&  r) const
{
  return ( theWrappedObject->intersects(r));
}

const QRegion  PythonQtWrapper_QRegion::__add__(QRegion* theWrappedObject, const QRect&  r) const
{
  return ( (*theWrappedObject)+ r);
}

void PythonQtWrapper_QRegion::writeTo(QRegion* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QRegion  PythonQtWrapper_QRegion::unite(QRegion* theWrappedObject, const QRect&  r) const
{
  return ( theWrappedObject->unite(r));
}

void PythonQtWrapper_QRegion::readFrom(QRegion* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QRegion  PythonQtWrapper_QRegion::intersected(QRegion* theWrappedObject, const QRegion&  r) const
{
  return ( theWrappedObject->intersected(r));
}

bool  PythonQtWrapper_QRegion::isEmpty(QRegion* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QRegion::operator_equal(QRegion* theWrappedObject, const QRegion&  r) const
{
  return ( (*theWrappedObject)== r);
}

QRegion  PythonQtWrapper_QRegion::translated(QRegion* theWrappedObject, const QPoint&  p) const
{
  return ( theWrappedObject->translated(p));
}

QRegion  PythonQtWrapper_QRegion::united(QRegion* theWrappedObject, const QRegion&  r) const
{
  return ( theWrappedObject->united(r));
}

QRegion  PythonQtWrapper_QRegion::translated(QRegion* theWrappedObject, int  dx, int  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

QRegion  PythonQtWrapper_QRegion::xored(QRegion* theWrappedObject, const QRegion&  r) const
{
  return ( theWrappedObject->xored(r));
}

QString PythonQtWrapper_QRegion::toString(QRegion* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

