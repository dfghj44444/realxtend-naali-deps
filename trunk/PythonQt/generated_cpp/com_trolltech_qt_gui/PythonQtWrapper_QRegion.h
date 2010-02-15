#ifndef PYTHONQTWRAPPER_QREGION_H
#define PYTHONQTWRAPPER_QREGION_H

#include <qregion.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtWrapper_QRegion : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RegionType )
enum RegionType{
  Rectangle = QRegion::Rectangle,   Ellipse = QRegion::Ellipse};
public slots:
QRegion* new_QRegion();
QRegion* new_QRegion(const QBitmap&  bitmap);
QRegion* new_QRegion(const QPolygon&  pa, Qt::FillRule  fillRule = Qt::OddEvenFill);
QRegion* new_QRegion(const QRect&  r, QRegion::RegionType  t = QRegion::Rectangle);
QRegion* new_QRegion(const QRegion&  region);
QRegion* new_QRegion(int  x, int  y, int  w, int  h, QRegion::RegionType  t = QRegion::Rectangle);
void delete_QRegion(QRegion* obj) { delete obj; } 
   void translate(QRegion* theWrappedObject, const QPoint&  p);
   bool  contains(QRegion* theWrappedObject, const QRect&  r) const;
   QRegion  united(QRegion* theWrappedObject, const QRect&  r) const;
   QRegion  __mul__(QRegion* theWrappedObject, const QMatrix&  m);
   void translate(QRegion* theWrappedObject, int  dx, int  dy);
   QRect  boundingRect(QRegion* theWrappedObject) const;
   bool  intersects(QRegion* theWrappedObject, const QRect&  r) const;
   bool  contains(QRegion* theWrappedObject, const QPoint&  p) const;
   QRegion  subtracted(QRegion* theWrappedObject, const QRegion&  r) const;
   int  numRects(QRegion* theWrappedObject) const;
   void setRects(QRegion* theWrappedObject, const QRect*  rect, int  num);
   QRegion  __mul__(QRegion* theWrappedObject, const QTransform&  m);
   QRegion  intersect(QRegion* theWrappedObject, const QRect&  r) const;
   QRegion  intersected(QRegion* theWrappedObject, const QRect&  r) const;
   QVector<QRect >  rects(QRegion* theWrappedObject) const;
   const QRegion  __and__(QRegion* theWrappedObject, const QRect&  r) const;
   int  rectCount(QRegion* theWrappedObject) const;
   bool  intersects(QRegion* theWrappedObject, const QRegion&  r) const;
   const QRegion  __add__(QRegion* theWrappedObject, const QRect&  r) const;
   void writeTo(QRegion* theWrappedObject, QDataStream&  arg__1);
   QRegion  unite(QRegion* theWrappedObject, const QRect&  r) const;
   void readFrom(QRegion* theWrappedObject, QDataStream&  arg__1);
   QRegion  intersected(QRegion* theWrappedObject, const QRegion&  r) const;
   bool  isEmpty(QRegion* theWrappedObject) const;
   bool  operator_equal(QRegion* theWrappedObject, const QRegion&  r) const;
   QRegion  translated(QRegion* theWrappedObject, const QPoint&  p) const;
   QRegion  united(QRegion* theWrappedObject, const QRegion&  r) const;
   QRegion  translated(QRegion* theWrappedObject, int  dx, int  dy) const;
   QRegion  xored(QRegion* theWrappedObject, const QRegion&  r) const;
    QString toString(QRegion*);
};

#endif // PYTHONQTWRAPPER_QREGION_H
