#ifndef PYTHONQTWRAPPER_QRECTF_H
#define PYTHONQTWRAPPER_QRECTF_H

#include <qrect.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtWrapper_QRectF : public QObject
{ Q_OBJECT
public:
public slots:
QRectF* new_QRectF();
QRectF* new_QRectF(const QPointF&  topleft, const QPointF&  bottomRight);
QRectF* new_QRectF(const QPointF&  topleft, const QSizeF&  size);
QRectF* new_QRectF(const QRect&  rect);
QRectF* new_QRectF(qreal  left, qreal  top, qreal  width, qreal  height);
QRectF* new_QRectF(const QRectF& other) {
QRectF* a = new QRectF();
*((QRectF*)a) = other;
return a; }
void delete_QRectF(QRectF* obj) { delete obj; } 
   QPointF  center(QRectF* theWrappedObject) const;
   bool  intersects(QRectF* theWrappedObject, const QRectF&  r) const;
   void moveTo(QRectF* theWrappedObject, qreal  x, qreal  t);
   void moveTopLeft(QRectF* theWrappedObject, const QPointF&  p);
   QRect  toAlignedRect(QRectF* theWrappedObject) const;
   bool  contains(QRectF* theWrappedObject, const QPointF&  p) const;
   QRectF  adjusted(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2) const;
   void setCoords(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   QPointF  bottomRight(QRectF* theWrappedObject) const;
   QPointF  bottomLeft(QRectF* theWrappedObject) const;
   void setWidth(QRectF* theWrappedObject, qreal  w);
   void moveRight(QRectF* theWrappedObject, qreal  pos);
   QPointF  topRight(QRectF* theWrappedObject) const;
   void setTopRight(QRectF* theWrappedObject, const QPointF&  p);
   bool  contains(QRectF* theWrappedObject, qreal  x, qreal  y) const;
   QRectF  translated(QRectF* theWrappedObject, qreal  dx, qreal  dy) const;
   bool  isNull(QRectF* theWrappedObject) const;
   void setTopLeft(QRectF* theWrappedObject, const QPointF&  p);
   QRectF  translated(QRectF* theWrappedObject, const QPointF&  p) const;
   void moveBottom(QRectF* theWrappedObject, qreal  pos);
   QRectF  normalized(QRectF* theWrappedObject) const;
   bool  isValid(QRectF* theWrappedObject) const;
   void setLeft(QRectF* theWrappedObject, qreal  pos);
   qreal  y(QRectF* theWrappedObject) const;
   void moveTop(QRectF* theWrappedObject, qreal  pos);
   void setSize(QRectF* theWrappedObject, const QSizeF&  s);
   void moveBottomRight(QRectF* theWrappedObject, const QPointF&  p);
   void setHeight(QRectF* theWrappedObject, qreal  h);
   qreal  x(QRectF* theWrappedObject) const;
   qreal  right(QRectF* theWrappedObject) const;
   QRectF  intersected(QRectF* theWrappedObject, const QRectF&  other) const;
   void writeTo(QRectF* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QRectF* theWrappedObject, QDataStream&  arg__1);
   void setTop(QRectF* theWrappedObject, qreal  pos);
   qreal  width(QRectF* theWrappedObject) const;
   void moveCenter(QRectF* theWrappedObject, const QPointF&  p);
   void moveLeft(QRectF* theWrappedObject, qreal  pos);
   qreal  bottom(QRectF* theWrappedObject) const;
   void setBottomRight(QRectF* theWrappedObject, const QPointF&  p);
   qreal  height(QRectF* theWrappedObject) const;
   qreal  top(QRectF* theWrappedObject) const;
   void setY(QRectF* theWrappedObject, qreal  pos);
   qreal  left(QRectF* theWrappedObject) const;
   void adjust(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void moveTopRight(QRectF* theWrappedObject, const QPointF&  p);
   QRect  toRect(QRectF* theWrappedObject) const;
   void setX(QRectF* theWrappedObject, qreal  pos);
   QSizeF  size(QRectF* theWrappedObject) const;
   QPointF  topLeft(QRectF* theWrappedObject) const;
   void translate(QRectF* theWrappedObject, const QPointF&  p);
   void translate(QRectF* theWrappedObject, qreal  dx, qreal  dy);
   void moveBottomLeft(QRectF* theWrappedObject, const QPointF&  p);
   QRectF  united(QRectF* theWrappedObject, const QRectF&  other) const;
   void setBottom(QRectF* theWrappedObject, qreal  pos);
   void setRect(QRectF* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setBottomLeft(QRectF* theWrappedObject, const QPointF&  p);
   bool  isEmpty(QRectF* theWrappedObject) const;
   void moveTo(QRectF* theWrappedObject, const QPointF&  p);
   bool  operator_equal(QRectF* theWrappedObject, const QRectF&  arg__2);
   bool  contains(QRectF* theWrappedObject, const QRectF&  r) const;
   void setRight(QRectF* theWrappedObject, qreal  pos);
    QString toString(QRectF*);
};

#endif // PYTHONQTWRAPPER_QRECTF_H
