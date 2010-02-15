#ifndef PYTHONQTWRAPPER_QRECT_H
#define PYTHONQTWRAPPER_QRECT_H

#include <qrect.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtWrapper_QRect : public QObject
{ Q_OBJECT
public:
public slots:
QRect* new_QRect();
QRect* new_QRect(const QPoint&  topleft, const QPoint&  bottomright);
QRect* new_QRect(const QPoint&  topleft, const QSize&  size);
QRect* new_QRect(int  left, int  top, int  width, int  height);
QRect* new_QRect(const QRect& other) {
QRect* a = new QRect();
*((QRect*)a) = other;
return a; }
void delete_QRect(QRect* obj) { delete obj; } 
   void adjust(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   bool  isValid(QRect* theWrappedObject) const;
   void setRight(QRect* theWrappedObject, int  pos);
   bool  isEmpty(QRect* theWrappedObject) const;
   int  x(QRect* theWrappedObject) const;
   void moveLeft(QRect* theWrappedObject, int  pos);
   int  right(QRect* theWrappedObject) const;
   void setTopRight(QRect* theWrappedObject, const QPoint&  p);
   void setWidth(QRect* theWrappedObject, int  w);
   QPoint  topRight(QRect* theWrappedObject) const;
   bool  contains(QRect* theWrappedObject, int  x, int  y, bool  proper) const;
   int  height(QRect* theWrappedObject) const;
   void setLeft(QRect* theWrappedObject, int  pos);
   void moveBottomRight(QRect* theWrappedObject, const QPoint&  p);
   void moveBottomLeft(QRect* theWrappedObject, const QPoint&  p);
   void moveRight(QRect* theWrappedObject, int  pos);
   void moveTopLeft(QRect* theWrappedObject, const QPoint&  p);
   void translate(QRect* theWrappedObject, const QPoint&  p);
   QRect  united(QRect* theWrappedObject, const QRect&  other) const;
   bool  contains(QRect* theWrappedObject, const QPoint&  p, bool  proper = false) const;
   void moveTo(QRect* theWrappedObject, int  x, int  t);
   QPoint  bottomLeft(QRect* theWrappedObject) const;
   void setBottomRight(QRect* theWrappedObject, const QPoint&  p);
   void setY(QRect* theWrappedObject, int  y);
   void setSize(QRect* theWrappedObject, const QSize&  s);
   bool  isNull(QRect* theWrappedObject) const;
   void moveCenter(QRect* theWrappedObject, const QPoint&  p);
   bool  operator_equal(QRect* theWrappedObject, const QRect&  arg__2);
   void moveTo(QRect* theWrappedObject, const QPoint&  p);
   void setHeight(QRect* theWrappedObject, int  h);
   void setTopLeft(QRect* theWrappedObject, const QPoint&  p);
   QRect  adjusted(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2) const;
   void setBottomLeft(QRect* theWrappedObject, const QPoint&  p);
   void translate(QRect* theWrappedObject, int  dx, int  dy);
   QPoint  center(QRect* theWrappedObject) const;
   void setTop(QRect* theWrappedObject, int  pos);
   void setCoords(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   int  width(QRect* theWrappedObject) const;
   void setBottom(QRect* theWrappedObject, int  pos);
   QPoint  topLeft(QRect* theWrappedObject) const;
   QRect  intersected(QRect* theWrappedObject, const QRect&  other) const;
   QRect  normalized(QRect* theWrappedObject) const;
   void writeTo(QRect* theWrappedObject, QDataStream&  arg__1);
   void setRect(QRect* theWrappedObject, int  x, int  y, int  w, int  h);
   void moveTop(QRect* theWrappedObject, int  pos);
   bool  contains(QRect* theWrappedObject, const QRect&  r, bool  proper = false) const;
   int  left(QRect* theWrappedObject) const;
   QSize  size(QRect* theWrappedObject) const;
   bool  contains(QRect* theWrappedObject, int  x, int  y) const;
   void moveTopRight(QRect* theWrappedObject, const QPoint&  p);
   void moveBottom(QRect* theWrappedObject, int  pos);
   int  bottom(QRect* theWrappedObject) const;
   int  y(QRect* theWrappedObject) const;
   void setX(QRect* theWrappedObject, int  x);
   QRect  translated(QRect* theWrappedObject, int  dx, int  dy) const;
   int  top(QRect* theWrappedObject) const;
   QPoint  bottomRight(QRect* theWrappedObject) const;
   bool  intersects(QRect* theWrappedObject, const QRect&  r) const;
   void readFrom(QRect* theWrappedObject, QDataStream&  arg__1);
   QRect  translated(QRect* theWrappedObject, const QPoint&  p) const;
    QString toString(QRect*);
};

#endif // PYTHONQTWRAPPER_QRECT_H
