#include "PythonQtWrapper_QMatrix.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QPainterPath>
#include <QVariant>
#include <qdatastream.h>
#include <qline.h>
#include <qmatrix.h>
#include <qpainterpath.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>

QMatrix* PythonQtWrapper_QMatrix::new_QMatrix()
{ 
return new QMatrix(); }

QMatrix* PythonQtWrapper_QMatrix::new_QMatrix(const QMatrix&  matrix)
{ 
return new QMatrix(matrix); }

QMatrix* PythonQtWrapper_QMatrix::new_QMatrix(qreal  m11, qreal  m12, qreal  m21, qreal  m22, qreal  dx, qreal  dy)
{ 
return new QMatrix(m11, m12, m21, m22, dx, dy); }

QMatrix  PythonQtWrapper_QMatrix::inverted(QMatrix* theWrappedObject, bool*  invertible) const
{
  return ( theWrappedObject->inverted(invertible));
}

qreal  PythonQtWrapper_QMatrix::m11(QMatrix* theWrappedObject) const
{
  return ( theWrappedObject->m11());
}

QRegion  PythonQtWrapper_QMatrix::map(QMatrix* theWrappedObject, const QRegion&  r) const
{
  return ( theWrappedObject->map(r));
}

QMatrix*  PythonQtWrapper_QMatrix::scale(QMatrix* theWrappedObject, qreal  sx, qreal  sy)
{
  return &( theWrappedObject->scale(sx, sy));
}

qreal  PythonQtWrapper_QMatrix::det(QMatrix* theWrappedObject) const
{
  return ( theWrappedObject->det());
}

QPointF  PythonQtWrapper_QMatrix::map(QMatrix* theWrappedObject, const QPointF&  p) const
{
  return ( theWrappedObject->map(p));
}

void PythonQtWrapper_QMatrix::writeTo(QMatrix* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

qreal  PythonQtWrapper_QMatrix::dy(QMatrix* theWrappedObject) const
{
  return ( theWrappedObject->dy());
}

qreal  PythonQtWrapper_QMatrix::m22(QMatrix* theWrappedObject) const
{
  return ( theWrappedObject->m22());
}

qreal  PythonQtWrapper_QMatrix::m21(QMatrix* theWrappedObject) const
{
  return ( theWrappedObject->m21());
}

QMatrix*  PythonQtWrapper_QMatrix::__imul__(QMatrix* theWrappedObject, const QMatrix&  arg__1)
{
  return &( (*theWrappedObject)*= arg__1);
}

bool  PythonQtWrapper_QMatrix::operator_equal(QMatrix* theWrappedObject, const QMatrix&  arg__1) const
{
  return ( (*theWrappedObject)== arg__1);
}

QRectF  PythonQtWrapper_QMatrix::mapRect(QMatrix* theWrappedObject, const QRectF&  arg__1) const
{
  return ( theWrappedObject->mapRect(arg__1));
}

QMatrix*  PythonQtWrapper_QMatrix::translate(QMatrix* theWrappedObject, qreal  dx, qreal  dy)
{
  return &( theWrappedObject->translate(dx, dy));
}

qreal  PythonQtWrapper_QMatrix::determinant(QMatrix* theWrappedObject) const
{
  return ( theWrappedObject->determinant());
}

qreal  PythonQtWrapper_QMatrix::dx(QMatrix* theWrappedObject) const
{
  return ( theWrappedObject->dx());
}

QMatrix  PythonQtWrapper_QMatrix::__mul__(QMatrix* theWrappedObject, const QMatrix&  o) const
{
  return ( (*theWrappedObject)* o);
}

void PythonQtWrapper_QMatrix::setMatrix(QMatrix* theWrappedObject, qreal  m11, qreal  m12, qreal  m21, qreal  m22, qreal  dx, qreal  dy)
{
  ( theWrappedObject->setMatrix(m11, m12, m21, m22, dx, dy));
}

QLine  PythonQtWrapper_QMatrix::map(QMatrix* theWrappedObject, const QLine&  l) const
{
  return ( theWrappedObject->map(l));
}

QPoint  PythonQtWrapper_QMatrix::map(QMatrix* theWrappedObject, const QPoint&  p) const
{
  return ( theWrappedObject->map(p));
}

QPolygon  PythonQtWrapper_QMatrix::map(QMatrix* theWrappedObject, const QPolygon&  a) const
{
  return ( theWrappedObject->map(a));
}

void PythonQtWrapper_QMatrix::readFrom(QMatrix* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

bool  PythonQtWrapper_QMatrix::isIdentity(QMatrix* theWrappedObject) const
{
  return ( theWrappedObject->isIdentity());
}

QMatrix*  PythonQtWrapper_QMatrix::rotate(QMatrix* theWrappedObject, qreal  a)
{
  return &( theWrappedObject->rotate(a));
}

QMatrix*  PythonQtWrapper_QMatrix::shear(QMatrix* theWrappedObject, qreal  sh, qreal  sv)
{
  return &( theWrappedObject->shear(sh, sv));
}

QLineF  PythonQtWrapper_QMatrix::map(QMatrix* theWrappedObject, const QLineF&  l) const
{
  return ( theWrappedObject->map(l));
}

qreal  PythonQtWrapper_QMatrix::m12(QMatrix* theWrappedObject) const
{
  return ( theWrappedObject->m12());
}

bool  PythonQtWrapper_QMatrix::isInvertible(QMatrix* theWrappedObject) const
{
  return ( theWrappedObject->isInvertible());
}

QRect  PythonQtWrapper_QMatrix::mapRect(QMatrix* theWrappedObject, const QRect&  arg__1) const
{
  return ( theWrappedObject->mapRect(arg__1));
}

void PythonQtWrapper_QMatrix::reset(QMatrix* theWrappedObject)
{
  ( theWrappedObject->reset());
}

QPainterPath  PythonQtWrapper_QMatrix::map(QMatrix* theWrappedObject, const QPainterPath&  p) const
{
  return ( theWrappedObject->map(p));
}

QPolygonF  PythonQtWrapper_QMatrix::map(QMatrix* theWrappedObject, const QPolygonF&  a) const
{
  return ( theWrappedObject->map(a));
}

QPolygon  PythonQtWrapper_QMatrix::mapToPolygon(QMatrix* theWrappedObject, const QRect&  r) const
{
  return ( theWrappedObject->mapToPolygon(r));
}

QString PythonQtWrapper_QMatrix::toString(QMatrix* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

