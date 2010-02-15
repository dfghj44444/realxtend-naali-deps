#include "PythonQtWrapper_QSize.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qsize.h>

QSize* PythonQtWrapper_QSize::new_QSize()
{ 
return new QSize(); }

QSize* PythonQtWrapper_QSize::new_QSize(int  w, int  h)
{ 
return new QSize(w, h); }

void PythonQtWrapper_QSize::transpose(QSize* theWrappedObject)
{
  ( theWrappedObject->transpose());
}

const QSize  PythonQtWrapper_QSize::__sub__(QSize* theWrappedObject, const QSize&  s2)
{
  return ( (*theWrappedObject)- s2);
}

bool  PythonQtWrapper_QSize::operator_equal(QSize* theWrappedObject, const QSize&  s2)
{
  return ( (*theWrappedObject)== s2);
}

bool  PythonQtWrapper_QSize::isEmpty(QSize* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QSize  PythonQtWrapper_QSize::boundedTo(QSize* theWrappedObject, const QSize&  arg__1) const
{
  return ( theWrappedObject->boundedTo(arg__1));
}

QSize  PythonQtWrapper_QSize::expandedTo(QSize* theWrappedObject, const QSize&  arg__1) const
{
  return ( theWrappedObject->expandedTo(arg__1));
}

bool  PythonQtWrapper_QSize::isNull(QSize* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QSize*  PythonQtWrapper_QSize::__isub__(QSize* theWrappedObject, const QSize&  arg__1)
{
  return &( (*theWrappedObject)-= arg__1);
}

QSize*  PythonQtWrapper_QSize::__idiv__(QSize* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)/= c);
}

int  PythonQtWrapper_QSize::width(QSize* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

QSize*  PythonQtWrapper_QSize::__iadd__(QSize* theWrappedObject, const QSize&  arg__1)
{
  return &( (*theWrappedObject)+= arg__1);
}

bool  PythonQtWrapper_QSize::isValid(QSize* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QSize::height(QSize* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

QSize*  PythonQtWrapper_QSize::__imul__(QSize* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)*= c);
}

void PythonQtWrapper_QSize::scale(QSize* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  mode)
{
  ( theWrappedObject->scale(s, mode));
}

const QSize  PythonQtWrapper_QSize::__add__(QSize* theWrappedObject, const QSize&  s2)
{
  return ( (*theWrappedObject)+ s2);
}

void PythonQtWrapper_QSize::scale(QSize* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  mode)
{
  ( theWrappedObject->scale(w, h, mode));
}

void PythonQtWrapper_QSize::setHeight(QSize* theWrappedObject, int  h)
{
  ( theWrappedObject->setHeight(h));
}

const QSize  PythonQtWrapper_QSize::__div__(QSize* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)/ c);
}

void PythonQtWrapper_QSize::writeTo(QSize* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QSize::setWidth(QSize* theWrappedObject, int  w)
{
  ( theWrappedObject->setWidth(w));
}

const QSize  PythonQtWrapper_QSize::__mul__(QSize* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)* c);
}

void PythonQtWrapper_QSize::readFrom(QSize* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString PythonQtWrapper_QSize::toString(QSize* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

