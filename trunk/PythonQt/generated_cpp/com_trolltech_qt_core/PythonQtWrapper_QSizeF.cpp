#include "PythonQtWrapper_QSizeF.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qsize.h>

QSizeF* PythonQtWrapper_QSizeF::new_QSizeF()
{ 
return new QSizeF(); }

QSizeF* PythonQtWrapper_QSizeF::new_QSizeF(const QSize&  sz)
{ 
return new QSizeF(sz); }

QSizeF* PythonQtWrapper_QSizeF::new_QSizeF(qreal  w, qreal  h)
{ 
return new QSizeF(w, h); }

QSizeF  PythonQtWrapper_QSizeF::boundedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const
{
  return ( theWrappedObject->boundedTo(arg__1));
}

QSizeF*  PythonQtWrapper_QSizeF::__imul__(QSizeF* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)*= c);
}

QSizeF  PythonQtWrapper_QSizeF::expandedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const
{
  return ( theWrappedObject->expandedTo(arg__1));
}

void PythonQtWrapper_QSizeF::readFrom(QSizeF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

void PythonQtWrapper_QSizeF::transpose(QSizeF* theWrappedObject)
{
  ( theWrappedObject->transpose());
}

bool  PythonQtWrapper_QSizeF::isValid(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QSizeF::operator_equal(QSizeF* theWrappedObject, const QSizeF&  s2)
{
  return ( (*theWrappedObject)== s2);
}

void PythonQtWrapper_QSizeF::setWidth(QSizeF* theWrappedObject, qreal  w)
{
  ( theWrappedObject->setWidth(w));
}

QSizeF*  PythonQtWrapper_QSizeF::__idiv__(QSizeF* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)/= c);
}

qreal  PythonQtWrapper_QSizeF::height(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

QSizeF*  PythonQtWrapper_QSizeF::__iadd__(QSizeF* theWrappedObject, const QSizeF&  arg__1)
{
  return &( (*theWrappedObject)+= arg__1);
}

QSize  PythonQtWrapper_QSizeF::toSize(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->toSize());
}

void PythonQtWrapper_QSizeF::scale(QSizeF* theWrappedObject, const QSizeF&  s, Qt::AspectRatioMode  mode)
{
  ( theWrappedObject->scale(s, mode));
}

void PythonQtWrapper_QSizeF::scale(QSizeF* theWrappedObject, qreal  w, qreal  h, Qt::AspectRatioMode  mode)
{
  ( theWrappedObject->scale(w, h, mode));
}

qreal  PythonQtWrapper_QSizeF::width(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

const QSizeF  PythonQtWrapper_QSizeF::__add__(QSizeF* theWrappedObject, const QSizeF&  s2)
{
  return ( (*theWrappedObject)+ s2);
}

QSizeF*  PythonQtWrapper_QSizeF::__isub__(QSizeF* theWrappedObject, const QSizeF&  arg__1)
{
  return &( (*theWrappedObject)-= arg__1);
}

bool  PythonQtWrapper_QSizeF::isEmpty(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

const QSizeF  PythonQtWrapper_QSizeF::__div__(QSizeF* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)/ c);
}

bool  PythonQtWrapper_QSizeF::isNull(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

const QSizeF  PythonQtWrapper_QSizeF::__mul__(QSizeF* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)* c);
}

void PythonQtWrapper_QSizeF::writeTo(QSizeF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QSizeF::setHeight(QSizeF* theWrappedObject, qreal  h)
{
  ( theWrappedObject->setHeight(h));
}

const QSizeF  PythonQtWrapper_QSizeF::__sub__(QSizeF* theWrappedObject, const QSizeF&  s2)
{
  return ( (*theWrappedObject)- s2);
}

QString PythonQtWrapper_QSizeF::toString(QSizeF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

