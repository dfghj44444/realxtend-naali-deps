#ifndef PYTHONQTWRAPPER_QBYTEARRAY_H
#define PYTHONQTWRAPPER_QBYTEARRAY_H

#include <qbytearray.h>
#include <QObject>

#include <PythonQt.h>

#include <QNoImplicitBoolCast>
#include <QVariant>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qlist.h>

class PythonQtWrapper_QByteArray : public QObject
{ Q_OBJECT
public:
public slots:
QByteArray* new_QByteArray();
QByteArray* new_QByteArray(const QByteArray&  arg__1);
QByteArray* new_QByteArray(const char*  arg__1);
QByteArray* new_QByteArray(int  size, char  c);
void delete_QByteArray(QByteArray* obj) { delete obj; } 
   QByteArray*  setNum(QByteArray* theWrappedObject, short  arg__1, int  base = 10);
   QByteArray  toPercentEncoding(QByteArray* theWrappedObject, const QByteArray&  exclude = QByteArray(), const QByteArray&  include = QByteArray(), char  percent = '%') const;
   const QString  __add__(QByteArray* theWrappedObject, const QString&  s);
   double  toDouble(QByteArray* theWrappedObject, bool*  ok = 0) const;
   bool  endsWith(QByteArray* theWrappedObject, const QByteArray&  a) const;
   int  lastIndexOf(QByteArray* theWrappedObject, char  c, int  from = -1) const;
   const QByteArray  __add__(QByteArray* theWrappedObject, const QByteArray&  a2);
   QByteArray  mid(QByteArray* theWrappedObject, int  index, int  len = -1) const;
   QByteArray*  setNum(QByteArray* theWrappedObject, float  arg__1, char  f = 'g', int  prec = 6);
   QByteArray  leftJustified(QByteArray* theWrappedObject, int  width, char  fill = ' ', bool  truncate = false) const;
   const QByteArray  __add__(QByteArray* theWrappedObject, char  a2);
   int  count(QByteArray* theWrappedObject, const QByteArray&  a) const;
   QByteArray*  setNum(QByteArray* theWrappedObject, int  arg__1, int  base = 10);
   QByteArray  static_QByteArray_fromHex(const QByteArray&  hexEncoded);
   int  length(QByteArray* theWrappedObject) const;
   QByteArray  rightJustified(QByteArray* theWrappedObject, int  width, char  fill = ' ', bool  truncate = false) const;
   char  at(QByteArray* theWrappedObject, int  i) const;
   QByteArray*  insert(QByteArray* theWrappedObject, int  i, char  c);
   QByteArray*  prepend(QByteArray* theWrappedObject, char  c);
   QByteArray  trimmed(QByteArray* theWrappedObject) const;
   void reserve(QByteArray* theWrappedObject, int  size);
   void resize(QByteArray* theWrappedObject, int  size);
   QByteArray*  setNum(QByteArray* theWrappedObject, double  arg__1, char  f = 'g', int  prec = 6);
   QByteArray  toHex(QByteArray* theWrappedObject) const;
   void truncate(QByteArray* theWrappedObject, int  pos);
   QByteArray  static_QByteArray_fromBase64(const QByteArray&  base64);
   int  indexOf(QByteArray* theWrappedObject, const QString&  s, int  from = 0) const;
   QByteArray  static_QByteArray_number(double  arg__1, char  f = 'g', int  prec = 6);
   QByteArray*  replace(QByteArray* theWrappedObject, char  before, const QByteArray&  after);
   QByteArray*  replace(QByteArray* theWrappedObject, int  index, int  len, const QByteArray&  s);
   QByteArray*  fill(QByteArray* theWrappedObject, char  c, int  size = -1);
   int  toInt(QByteArray* theWrappedObject, bool*  ok = 0, int  base = 10) const;
   void writeTo(QByteArray* theWrappedObject, QDataStream&  arg__1);
   QByteArray  static_QByteArray_number(qlonglong  arg__1, int  base = 10);
   bool  isEmpty(QByteArray* theWrappedObject) const;
   QByteArray*  append(QByteArray* theWrappedObject, const QByteArray&  a);
   int  capacity(QByteArray* theWrappedObject) const;
   QByteArray  toLower(QByteArray* theWrappedObject) const;
   const QByteArray  __add__(QByteArray* theWrappedObject, const char*  a2);
   bool  startsWith(QByteArray* theWrappedObject, const QByteArray&  a) const;
   QByteArray*  append(QByteArray* theWrappedObject, const QString&  s);
   int  count(QByteArray* theWrappedObject, char  c) const;
   QByteArray  left(QByteArray* theWrappedObject, int  len) const;
   bool  startsWith(QByteArray* theWrappedObject, char  c) const;
   QByteArray*  insert(QByteArray* theWrappedObject, int  i, const QString&  s);
   bool  operator_equal(QByteArray* theWrappedObject, const QString&  s2) const;
   bool  operator_less(QByteArray* theWrappedObject, const QByteArray&  a2);
   int  lastIndexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from = -1) const;
   void chop(QByteArray* theWrappedObject, int  n);
   QByteArray  static_QByteArray_number(int  arg__1, int  base = 10);
   void clear(QByteArray* theWrappedObject);
   int  lastIndexOf(QByteArray* theWrappedObject, const QString&  s, int  from = -1) const;
   void squeeze(QByteArray* theWrappedObject);
   QByteArray  right(QByteArray* theWrappedObject, int  len) const;
   QByteArray*  replace(QByteArray* theWrappedObject, char  before, char  after);
   QByteArray  static_QByteArray_fromPercentEncoding(const QByteArray&  pctEncoded, char  percent = '%');
   int  indexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from = 0) const;
   QByteArray*  operator_assign(QByteArray* theWrappedObject, const QByteArray&  arg__1);
   QByteArray*  replace(QByteArray* theWrappedObject, const QByteArray&  before, const QByteArray&  after);
   void readFrom(QByteArray* theWrappedObject, QDataStream&  arg__1);
   QByteArray*  replace(QByteArray* theWrappedObject, char  c, const QString&  after);
   QByteArray*  append(QByteArray* theWrappedObject, char  c);
   QByteArray*  prepend(QByteArray* theWrappedObject, const QByteArray&  a);
   QByteArray*  setNum(QByteArray* theWrappedObject, qlonglong  arg__1, int  base = 10);
   QByteArray*  append(QByteArray* theWrappedObject, const char*  s, int  len);
   bool  endsWith(QByteArray* theWrappedObject, char  c) const;
   int  size(QByteArray* theWrappedObject) const;
   QByteArray*  replace(QByteArray* theWrappedObject, const QString&  before, const QByteArray&  after);
   bool  operator_equal(QByteArray* theWrappedObject, const QByteArray&  a2);
   float  toFloat(QByteArray* theWrappedObject, bool*  ok = 0) const;
   int  indexOf(QByteArray* theWrappedObject, char  c, int  from = 0) const;
   QByteArray  repeated(QByteArray* theWrappedObject, int  times) const;
   QByteArray*  insert(QByteArray* theWrappedObject, int  i, const QByteArray&  a);
   QByteArray  simplified(QByteArray* theWrappedObject) const;
   ushort  toUShort(QByteArray* theWrappedObject, bool*  ok = 0, int  base = 10) const;
   QByteArray  toUpper(QByteArray* theWrappedObject) const;
   QByteArray*  prepend(QByteArray* theWrappedObject, const char*  s, int  len);
   QList<QByteArray >  split(QByteArray* theWrappedObject, char  sep) const;
   bool  isNull(QByteArray* theWrappedObject) const;
   QByteArray*  insert(QByteArray* theWrappedObject, int  i, const char*  s, int  len);
   QByteArray  toBase64(QByteArray* theWrappedObject) const;
   bool  operator_less(QByteArray* theWrappedObject, const QString&  s2) const;
   QByteArray*  remove(QByteArray* theWrappedObject, int  index, int  len);
   QByteArray*  replace(QByteArray* theWrappedObject, const char*  before, int  bsize, const char*  after, int  asize);
};

#endif // PYTHONQTWRAPPER_QBYTEARRAY_H
