#include "PythonQtWrapper_QByteArray.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QNoImplicitBoolCast>
#include <QVariant>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qlist.h>

QByteArray* PythonQtWrapper_QByteArray::new_QByteArray()
{ 
return new QByteArray(); }

QByteArray* PythonQtWrapper_QByteArray::new_QByteArray(const QByteArray&  arg__1)
{ 
return new QByteArray(arg__1); }

QByteArray* PythonQtWrapper_QByteArray::new_QByteArray(const char*  arg__1)
{ 
return new QByteArray(arg__1); }

QByteArray* PythonQtWrapper_QByteArray::new_QByteArray(int  size, char  c)
{ 
return new QByteArray(size, c); }

QByteArray*  PythonQtWrapper_QByteArray::setNum(QByteArray* theWrappedObject, short  arg__1, int  base)
{
  return &( theWrappedObject->setNum(arg__1, base));
}

QByteArray  PythonQtWrapper_QByteArray::toPercentEncoding(QByteArray* theWrappedObject, const QByteArray&  exclude, const QByteArray&  include, char  percent) const
{
  return ( theWrappedObject->toPercentEncoding(exclude, include, percent));
}

const QString  PythonQtWrapper_QByteArray::__add__(QByteArray* theWrappedObject, const QString&  s)
{
  return ( (*theWrappedObject)+ s);
}

double  PythonQtWrapper_QByteArray::toDouble(QByteArray* theWrappedObject, bool*  ok) const
{
  return ( theWrappedObject->toDouble(ok));
}

bool  PythonQtWrapper_QByteArray::endsWith(QByteArray* theWrappedObject, const QByteArray&  a) const
{
  return ( theWrappedObject->endsWith(a));
}

int  PythonQtWrapper_QByteArray::lastIndexOf(QByteArray* theWrappedObject, char  c, int  from) const
{
  return ( theWrappedObject->lastIndexOf(c, from));
}

const QByteArray  PythonQtWrapper_QByteArray::__add__(QByteArray* theWrappedObject, const QByteArray&  a2)
{
  return ( (*theWrappedObject)+ a2);
}

QByteArray  PythonQtWrapper_QByteArray::mid(QByteArray* theWrappedObject, int  index, int  len) const
{
  return ( theWrappedObject->mid(index, len));
}

QByteArray*  PythonQtWrapper_QByteArray::setNum(QByteArray* theWrappedObject, float  arg__1, char  f, int  prec)
{
  return &( theWrappedObject->setNum(arg__1, f, prec));
}

QByteArray  PythonQtWrapper_QByteArray::leftJustified(QByteArray* theWrappedObject, int  width, char  fill, bool  truncate) const
{
  return ( theWrappedObject->leftJustified(width, fill, truncate));
}

const QByteArray  PythonQtWrapper_QByteArray::__add__(QByteArray* theWrappedObject, char  a2)
{
  return ( (*theWrappedObject)+ a2);
}

int  PythonQtWrapper_QByteArray::count(QByteArray* theWrappedObject, const QByteArray&  a) const
{
  return ( theWrappedObject->count(a));
}

QByteArray*  PythonQtWrapper_QByteArray::setNum(QByteArray* theWrappedObject, int  arg__1, int  base)
{
  return &( theWrappedObject->setNum(arg__1, base));
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_fromHex(const QByteArray&  hexEncoded)
{
  return (QByteArray::fromHex(hexEncoded));
}

int  PythonQtWrapper_QByteArray::length(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QByteArray  PythonQtWrapper_QByteArray::rightJustified(QByteArray* theWrappedObject, int  width, char  fill, bool  truncate) const
{
  return ( theWrappedObject->rightJustified(width, fill, truncate));
}

char  PythonQtWrapper_QByteArray::at(QByteArray* theWrappedObject, int  i) const
{
  return ( theWrappedObject->at(i));
}

QByteArray*  PythonQtWrapper_QByteArray::insert(QByteArray* theWrappedObject, int  i, char  c)
{
  return &( theWrappedObject->insert(i, c));
}

QByteArray*  PythonQtWrapper_QByteArray::prepend(QByteArray* theWrappedObject, char  c)
{
  return &( theWrappedObject->prepend(c));
}

QByteArray  PythonQtWrapper_QByteArray::trimmed(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->trimmed());
}

void PythonQtWrapper_QByteArray::reserve(QByteArray* theWrappedObject, int  size)
{
  ( theWrappedObject->reserve(size));
}

void PythonQtWrapper_QByteArray::resize(QByteArray* theWrappedObject, int  size)
{
  ( theWrappedObject->resize(size));
}

QByteArray*  PythonQtWrapper_QByteArray::setNum(QByteArray* theWrappedObject, double  arg__1, char  f, int  prec)
{
  return &( theWrappedObject->setNum(arg__1, f, prec));
}

QByteArray  PythonQtWrapper_QByteArray::toHex(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->toHex());
}

void PythonQtWrapper_QByteArray::truncate(QByteArray* theWrappedObject, int  pos)
{
  ( theWrappedObject->truncate(pos));
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_fromBase64(const QByteArray&  base64)
{
  return (QByteArray::fromBase64(base64));
}

int  PythonQtWrapper_QByteArray::indexOf(QByteArray* theWrappedObject, const QString&  s, int  from) const
{
  return ( theWrappedObject->indexOf(s, from));
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_number(double  arg__1, char  f, int  prec)
{
  return (QByteArray::number(arg__1, f, prec));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, char  before, const QByteArray&  after)
{
  return &( theWrappedObject->replace(before, after));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, int  index, int  len, const QByteArray&  s)
{
  return &( theWrappedObject->replace(index, len, s));
}

QByteArray*  PythonQtWrapper_QByteArray::fill(QByteArray* theWrappedObject, char  c, int  size)
{
  return &( theWrappedObject->fill(c, size));
}

int  PythonQtWrapper_QByteArray::toInt(QByteArray* theWrappedObject, bool*  ok, int  base) const
{
  return ( theWrappedObject->toInt(ok, base));
}

void PythonQtWrapper_QByteArray::writeTo(QByteArray* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_number(qlonglong  arg__1, int  base)
{
  return (QByteArray::number(arg__1, base));
}

bool  PythonQtWrapper_QByteArray::isEmpty(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QByteArray*  PythonQtWrapper_QByteArray::append(QByteArray* theWrappedObject, const QByteArray&  a)
{
  return &( theWrappedObject->append(a));
}

int  PythonQtWrapper_QByteArray::capacity(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->capacity());
}

QByteArray  PythonQtWrapper_QByteArray::toLower(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->toLower());
}

const QByteArray  PythonQtWrapper_QByteArray::__add__(QByteArray* theWrappedObject, const char*  a2)
{
  return ( (*theWrappedObject)+ a2);
}

bool  PythonQtWrapper_QByteArray::startsWith(QByteArray* theWrappedObject, const QByteArray&  a) const
{
  return ( theWrappedObject->startsWith(a));
}

QByteArray*  PythonQtWrapper_QByteArray::append(QByteArray* theWrappedObject, const QString&  s)
{
  return &( theWrappedObject->append(s));
}

int  PythonQtWrapper_QByteArray::count(QByteArray* theWrappedObject, char  c) const
{
  return ( theWrappedObject->count(c));
}

QByteArray  PythonQtWrapper_QByteArray::left(QByteArray* theWrappedObject, int  len) const
{
  return ( theWrappedObject->left(len));
}

bool  PythonQtWrapper_QByteArray::startsWith(QByteArray* theWrappedObject, char  c) const
{
  return ( theWrappedObject->startsWith(c));
}

QByteArray*  PythonQtWrapper_QByteArray::insert(QByteArray* theWrappedObject, int  i, const QString&  s)
{
  return &( theWrappedObject->insert(i, s));
}

bool  PythonQtWrapper_QByteArray::operator_equal(QByteArray* theWrappedObject, const QString&  s2) const
{
  return ( (*theWrappedObject)== s2);
}

bool  PythonQtWrapper_QByteArray::operator_less(QByteArray* theWrappedObject, const QByteArray&  a2)
{
  return ( (*theWrappedObject)< a2);
}

int  PythonQtWrapper_QByteArray::lastIndexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from) const
{
  return ( theWrappedObject->lastIndexOf(a, from));
}

void PythonQtWrapper_QByteArray::chop(QByteArray* theWrappedObject, int  n)
{
  ( theWrappedObject->chop(n));
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_number(int  arg__1, int  base)
{
  return (QByteArray::number(arg__1, base));
}

void PythonQtWrapper_QByteArray::clear(QByteArray* theWrappedObject)
{
  ( theWrappedObject->clear());
}

int  PythonQtWrapper_QByteArray::lastIndexOf(QByteArray* theWrappedObject, const QString&  s, int  from) const
{
  return ( theWrappedObject->lastIndexOf(s, from));
}

void PythonQtWrapper_QByteArray::squeeze(QByteArray* theWrappedObject)
{
  ( theWrappedObject->squeeze());
}

QByteArray  PythonQtWrapper_QByteArray::right(QByteArray* theWrappedObject, int  len) const
{
  return ( theWrappedObject->right(len));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, char  before, char  after)
{
  return &( theWrappedObject->replace(before, after));
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_fromPercentEncoding(const QByteArray&  pctEncoded, char  percent)
{
  return (QByteArray::fromPercentEncoding(pctEncoded, percent));
}

int  PythonQtWrapper_QByteArray::indexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from) const
{
  return ( theWrappedObject->indexOf(a, from));
}

QByteArray*  PythonQtWrapper_QByteArray::operator_assign(QByteArray* theWrappedObject, const QByteArray&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, const QByteArray&  before, const QByteArray&  after)
{
  return &( theWrappedObject->replace(before, after));
}

void PythonQtWrapper_QByteArray::readFrom(QByteArray* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, char  c, const QString&  after)
{
  return &( theWrappedObject->replace(c, after));
}

QByteArray*  PythonQtWrapper_QByteArray::append(QByteArray* theWrappedObject, char  c)
{
  return &( theWrappedObject->append(c));
}

QByteArray*  PythonQtWrapper_QByteArray::prepend(QByteArray* theWrappedObject, const QByteArray&  a)
{
  return &( theWrappedObject->prepend(a));
}

QByteArray*  PythonQtWrapper_QByteArray::setNum(QByteArray* theWrappedObject, qlonglong  arg__1, int  base)
{
  return &( theWrappedObject->setNum(arg__1, base));
}

QByteArray*  PythonQtWrapper_QByteArray::append(QByteArray* theWrappedObject, const char*  s, int  len)
{
  return &( theWrappedObject->append(s, len));
}

bool  PythonQtWrapper_QByteArray::endsWith(QByteArray* theWrappedObject, char  c) const
{
  return ( theWrappedObject->endsWith(c));
}

int  PythonQtWrapper_QByteArray::size(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, const QString&  before, const QByteArray&  after)
{
  return &( theWrappedObject->replace(before, after));
}

bool  PythonQtWrapper_QByteArray::operator_equal(QByteArray* theWrappedObject, const QByteArray&  a2)
{
  return ( (*theWrappedObject)== a2);
}

float  PythonQtWrapper_QByteArray::toFloat(QByteArray* theWrappedObject, bool*  ok) const
{
  return ( theWrappedObject->toFloat(ok));
}

int  PythonQtWrapper_QByteArray::indexOf(QByteArray* theWrappedObject, char  c, int  from) const
{
  return ( theWrappedObject->indexOf(c, from));
}

QByteArray  PythonQtWrapper_QByteArray::repeated(QByteArray* theWrappedObject, int  times) const
{
  return ( theWrappedObject->repeated(times));
}

QByteArray*  PythonQtWrapper_QByteArray::insert(QByteArray* theWrappedObject, int  i, const QByteArray&  a)
{
  return &( theWrappedObject->insert(i, a));
}

QByteArray  PythonQtWrapper_QByteArray::simplified(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->simplified());
}

ushort  PythonQtWrapper_QByteArray::toUShort(QByteArray* theWrappedObject, bool*  ok, int  base) const
{
  return ( theWrappedObject->toUShort(ok, base));
}

QByteArray  PythonQtWrapper_QByteArray::toUpper(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->toUpper());
}

QByteArray*  PythonQtWrapper_QByteArray::prepend(QByteArray* theWrappedObject, const char*  s, int  len)
{
  return &( theWrappedObject->prepend(s, len));
}

QList<QByteArray >  PythonQtWrapper_QByteArray::split(QByteArray* theWrappedObject, char  sep) const
{
  return ( theWrappedObject->split(sep));
}

bool  PythonQtWrapper_QByteArray::isNull(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QByteArray*  PythonQtWrapper_QByteArray::insert(QByteArray* theWrappedObject, int  i, const char*  s, int  len)
{
  return &( theWrappedObject->insert(i, s, len));
}

QByteArray  PythonQtWrapper_QByteArray::toBase64(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->toBase64());
}

bool  PythonQtWrapper_QByteArray::operator_less(QByteArray* theWrappedObject, const QString&  s2) const
{
  return ( (*theWrappedObject)< s2);
}

QByteArray*  PythonQtWrapper_QByteArray::remove(QByteArray* theWrappedObject, int  index, int  len)
{
  return &( theWrappedObject->remove(index, len));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, const char*  before, int  bsize, const char*  after, int  asize)
{
  return &( theWrappedObject->replace(before, bsize, after, asize));
}

