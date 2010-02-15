#ifndef PYTHONQTWRAPPER_QPOLYGON_H
#define PYTHONQTWRAPPER_QPOLYGON_H

#include <qpolygon.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qlist.h>
#include <qmatrix.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qtransform.h>
#include <qvector.h>

class PythonQtWrapper_QPolygon : public QObject
{ Q_OBJECT
public:
public slots:
QPolygon* new_QPolygon();
QPolygon* new_QPolygon(const QPolygon&  a);
QPolygon* new_QPolygon(const QRect&  r, bool  closed = false);
QPolygon* new_QPolygon(const QVector<QPoint >&  v);
QPolygon* new_QPolygon(int  size);
void delete_QPolygon(QPolygon* obj) { delete obj; } 
   void remove(QPolygon* theWrappedObject, int  i);
   QPolygon  subtracted(QPolygon* theWrappedObject, const QPolygon&  r) const;
   void append(QPolygon* theWrappedObject, const QPoint&  t);
   QPoint  value(QPolygon* theWrappedObject, int  i) const;
   void setSharable(QPolygon* theWrappedObject, bool  sharable);
   QPolygon  translated(QPolygon* theWrappedObject, int  dx, int  dy) const;
   const QPoint*  last(QPolygon* theWrappedObject) const;
   void readFrom(QPolygon* theWrappedObject, QDataStream&  stream);
   int  indexOf(QPolygon* theWrappedObject, const QPoint&  t, int  from) const;
   QPolygon  __mul__(QPolygon* theWrappedObject, const QTransform&  m);
   void push_front(QPolygon* theWrappedObject, const QPoint&  t);
   void writeTo(QPolygon* theWrappedObject, QDataStream&  stream);
   int  lastIndexOf(QPolygon* theWrappedObject, const QPoint&  t, int  from) const;
   bool  operator_equal(QPolygon* theWrappedObject, const QVector<QPoint >&  v) const;
   void remove(QPolygon* theWrappedObject, int  i, int  n);
   void reserve(QPolygon* theWrappedObject, int  size);
   QPolygon  intersected(QPolygon* theWrappedObject, const QPolygon&  r) const;
   QVector<QPoint >  static_QPolygon_fromList(const QList<QPoint >&  list);
   void push_back(QPolygon* theWrappedObject, const QPoint&  t);
   void resize(QPolygon* theWrappedObject, int  size);
   bool  contains(QPolygon* theWrappedObject, const QPoint&  t) const;
   QPolygon  united(QPolygon* theWrappedObject, const QPolygon&  r) const;
   void squeeze(QPolygon* theWrappedObject);
   bool  endsWith(QPolygon* theWrappedObject, const QPoint&  t) const;
   QRect  boundingRect(QPolygon* theWrappedObject) const;
   int  capacity(QPolygon* theWrappedObject) const;
   int  count(QPolygon* theWrappedObject, const QPoint&  t) const;
   void pop_back(QPolygon* theWrappedObject);
   QPoint  value(QPolygon* theWrappedObject, int  i, const QPoint&  defaultValue) const;
   void pop_front(QPolygon* theWrappedObject);
   void prepend(QPolygon* theWrappedObject, const QPoint&  t);
   int  size(QPolygon* theWrappedObject) const;
   bool  startsWith(QPolygon* theWrappedObject, const QPoint&  t) const;
   QPolygon  __mul__(QPolygon* theWrappedObject, const QMatrix&  m);
   void clear(QPolygon* theWrappedObject);
   void replace(QPolygon* theWrappedObject, int  i, const QPoint&  t);
   void translate(QPolygon* theWrappedObject, const QPoint&  offset);
   QPolygon  translated(QPolygon* theWrappedObject, const QPoint&  offset) const;
   QList<QPoint >  toList(QPolygon* theWrappedObject) const;
   void translate(QPolygon* theWrappedObject, int  dx, int  dy);
   bool  containsPoint(QPolygon* theWrappedObject, const QPoint&  pt, Qt::FillRule  fillRule) const;
   QVector<QPoint >  mid(QPolygon* theWrappedObject, int  pos, int  length) const;
   const QPoint*  first(QPolygon* theWrappedObject) const;
   bool  isEmpty(QPolygon* theWrappedObject) const;
   QVector<QPoint >*  fill(QPolygon* theWrappedObject, const QPoint&  t, int  size);
   int  count(QPolygon* theWrappedObject) const;
   const QPoint*  at(QPolygon* theWrappedObject, int  i) const;
   bool  empty(QPolygon* theWrappedObject) const;
    QString toString(QPolygon*);
};

#endif // PYTHONQTWRAPPER_QPOLYGON_H
