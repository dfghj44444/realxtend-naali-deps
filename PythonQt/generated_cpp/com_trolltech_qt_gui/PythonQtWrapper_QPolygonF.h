#ifndef PYTHONQTWRAPPER_QPOLYGONF_H
#define PYTHONQTWRAPPER_QPOLYGONF_H

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

class PythonQtWrapper_QPolygonF : public QObject
{ Q_OBJECT
public:
public slots:
QPolygonF* new_QPolygonF();
QPolygonF* new_QPolygonF(const QPolygon&  a);
QPolygonF* new_QPolygonF(const QPolygonF&  a);
QPolygonF* new_QPolygonF(const QRectF&  r);
QPolygonF* new_QPolygonF(const QVector<QPointF >&  v);
QPolygonF* new_QPolygonF(int  size);
void delete_QPolygonF(QPolygonF* obj) { delete obj; } 
   const QPointF*  last(QPolygonF* theWrappedObject) const;
   QVector<QPointF >*  fill(QPolygonF* theWrappedObject, const QPointF&  t, int  size);
   void clear(QPolygonF* theWrappedObject);
   bool  empty(QPolygonF* theWrappedObject) const;
   void replace(QPolygonF* theWrappedObject, int  i, const QPointF&  t);
   int  count(QPolygonF* theWrappedObject, const QPointF&  t) const;
   QRectF  boundingRect(QPolygonF* theWrappedObject) const;
   QPointF  value(QPolygonF* theWrappedObject, int  i) const;
   QPolygonF  __mul__(QPolygonF* theWrappedObject, const QMatrix&  m);
   bool  isEmpty(QPolygonF* theWrappedObject) const;
   void squeeze(QPolygonF* theWrappedObject);
   QList<QPointF >  toList(QPolygonF* theWrappedObject) const;
   int  capacity(QPolygonF* theWrappedObject) const;
   QPolygonF  translated(QPolygonF* theWrappedObject, qreal  dx, qreal  dy) const;
   bool  contains(QPolygonF* theWrappedObject, const QPointF&  t) const;
   int  count(QPolygonF* theWrappedObject) const;
   void push_back(QPolygonF* theWrappedObject, const QPointF&  t);
   QPolygon  toPolygon(QPolygonF* theWrappedObject) const;
   void remove(QPolygonF* theWrappedObject, int  i, int  n);
   void resize(QPolygonF* theWrappedObject, int  size);
   void translate(QPolygonF* theWrappedObject, qreal  dx, qreal  dy);
   void readFrom(QPolygonF* theWrappedObject, QDataStream&  stream);
   bool  endsWith(QPolygonF* theWrappedObject, const QPointF&  t) const;
   QVector<QPointF >  static_QPolygonF_fromList(const QList<QPointF >&  list);
   bool  containsPoint(QPolygonF* theWrappedObject, const QPointF&  pt, Qt::FillRule  fillRule) const;
   const QPointF*  first(QPolygonF* theWrappedObject) const;
   bool  isClosed(QPolygonF* theWrappedObject) const;
   void prepend(QPolygonF* theWrappedObject, const QPointF&  t);
   void append(QPolygonF* theWrappedObject, const QPointF&  t);
   int  size(QPolygonF* theWrappedObject) const;
   QPolygonF  __mul__(QPolygonF* theWrappedObject, const QTransform&  m);
   const QPointF*  at(QPolygonF* theWrappedObject, int  i) const;
   void writeTo(QPolygonF* theWrappedObject, QDataStream&  stream);
   QPolygonF  intersected(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   void remove(QPolygonF* theWrappedObject, int  i);
   bool  startsWith(QPolygonF* theWrappedObject, const QPointF&  t) const;
   void pop_front(QPolygonF* theWrappedObject);
   void reserve(QPolygonF* theWrappedObject, int  size);
   int  indexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const;
   void push_front(QPolygonF* theWrappedObject, const QPointF&  t);
   void setSharable(QPolygonF* theWrappedObject, bool  sharable);
   int  lastIndexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const;
   QPointF  value(QPolygonF* theWrappedObject, int  i, const QPointF&  defaultValue) const;
   void pop_back(QPolygonF* theWrappedObject);
   QPolygonF  united(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   bool  operator_equal(QPolygonF* theWrappedObject, const QVector<QPointF >&  v) const;
   QPolygonF  translated(QPolygonF* theWrappedObject, const QPointF&  offset) const;
   QVector<QPointF >  mid(QPolygonF* theWrappedObject, int  pos, int  length) const;
   void translate(QPolygonF* theWrappedObject, const QPointF&  offset);
   QPolygonF  subtracted(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
    QString toString(QPolygonF*);
};

#endif // PYTHONQTWRAPPER_QPOLYGONF_H
