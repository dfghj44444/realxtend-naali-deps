#ifndef PYTHONQTWRAPPER_QBITARRAY_H
#define PYTHONQTWRAPPER_QBITARRAY_H

#include <qbitarray.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbitarray.h>
#include <qdatastream.h>

class PythonQtWrapper_QBitArray : public QObject
{ Q_OBJECT
public:
public slots:
QBitArray* new_QBitArray();
QBitArray* new_QBitArray(const QBitArray&  other);
QBitArray* new_QBitArray(int  size, bool  val = false);
void delete_QBitArray(QBitArray* obj) { delete obj; } 
   bool  at(QBitArray* theWrappedObject, int  i) const;
   void setBit(QBitArray* theWrappedObject, int  i, bool  val);
   void readFrom(QBitArray* theWrappedObject, QDataStream&  arg__1);
   void clearBit(QBitArray* theWrappedObject, int  i);
   void clear(QBitArray* theWrappedObject);
   QBitArray  __and__(QBitArray* theWrappedObject, const QBitArray&  arg__2);
   bool  operator_equal(QBitArray* theWrappedObject, const QBitArray&  a) const;
   QBitArray  __xor__(QBitArray* theWrappedObject, const QBitArray&  arg__2);
   void setBit(QBitArray* theWrappedObject, int  i);
   QBitArray*  __iand__(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   void fill(QBitArray* theWrappedObject, bool  val, int  first, int  last);
   void resize(QBitArray* theWrappedObject, int  size);
   QBitArray*  __ixor__(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   bool  testBit(QBitArray* theWrappedObject, int  i) const;
   bool  isEmpty(QBitArray* theWrappedObject) const;
   bool  toggleBit(QBitArray* theWrappedObject, int  i);
   int  count(QBitArray* theWrappedObject, bool  on) const;
   void writeTo(QBitArray* theWrappedObject, QDataStream&  arg__1);
   int  size(QBitArray* theWrappedObject) const;
   QBitArray*  __ior__(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   int  count(QBitArray* theWrappedObject) const;
   bool  isNull(QBitArray* theWrappedObject) const;
   QBitArray  __or__(QBitArray* theWrappedObject, const QBitArray&  arg__2);
   QBitArray  __negate__(QBitArray* theWrappedObject) const;
   bool  fill(QBitArray* theWrappedObject, bool  val, int  size = -1);
   void truncate(QBitArray* theWrappedObject, int  pos);
   QBitArray*  operator_assign(QBitArray* theWrappedObject, const QBitArray&  other);
};

#endif // PYTHONQTWRAPPER_QBITARRAY_H
