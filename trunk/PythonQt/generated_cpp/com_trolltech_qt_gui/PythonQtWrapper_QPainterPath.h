#ifndef PYTHONQTWRAPPER_QPAINTERPATH_H
#define PYTHONQTWRAPPER_QPAINTERPATH_H

#include <qpainterpath.h>
#include <QObject>

#include <PythonQt.h>

#include <QPainterPath>
#include <QVariant>
#include <qdatastream.h>
#include <qfont.h>
#include <qlist.h>
#include <qmatrix.h>
#include <qpainterpath.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qtransform.h>

class PythonQtWrapper_QPainterPath : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ElementType )
enum ElementType{
  MoveToElement = QPainterPath::MoveToElement,   LineToElement = QPainterPath::LineToElement,   CurveToElement = QPainterPath::CurveToElement,   CurveToDataElement = QPainterPath::CurveToDataElement};
public slots:
QPainterPath* new_QPainterPath();
QPainterPath* new_QPainterPath(const QPainterPath&  other);
QPainterPath* new_QPainterPath(const QPointF&  startPoint);
void delete_QPainterPath(QPainterPath* obj) { delete obj; } 
   QPointF  pointAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void connectPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   void addRegion(QPainterPath* theWrappedObject, const QRegion&  region);
   QRectF  controlPointRect(QPainterPath* theWrappedObject) const;
   bool  operator_equal(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   void quadTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt, const QPointF&  endPt);
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   void addEllipse(QPainterPath* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   bool  contains(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   void translate(QPainterPath* theWrappedObject, qreal  dx, qreal  dy);
   bool  contains(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   void arcTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  startAngle, qreal  arcLength);
   void readFrom(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   bool  intersects(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   QPainterPath  translated(QPainterPath* theWrappedObject, qreal  dx, qreal  dy) const;
   void lineTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   bool  contains(QPainterPath* theWrappedObject, const QPointF&  pt) const;
   void closeSubpath(QPainterPath* theWrappedObject);
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  xRnd, int  yRnd);
   void lineTo(QPainterPath* theWrappedObject, const QPointF&  p);
   QPainterPath  intersected(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   QPainterPath  __and__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QRectF  boundingRect(QPainterPath* theWrappedObject) const;
   qreal  slopeAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void translate(QPainterPath* theWrappedObject, const QPointF&  offset);
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   QPainterPath  __or__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   void addEllipse(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   QPointF  currentPosition(QPainterPath* theWrappedObject) const;
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   QPainterPath  __add__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   void setElementPositionAt(QPainterPath* theWrappedObject, int  i, qreal  x, qreal  y);
   qreal  angleAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   QPainterPath  translated(QPainterPath* theWrappedObject, const QPointF&  offset) const;
   void moveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   void addRect(QPainterPath* theWrappedObject, const QRectF&  rect);
   void arcTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  startAngle, qreal  arcLength);
   void addRoundedRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   Qt::FillRule  fillRule(QPainterPath* theWrappedObject) const;
   void addText(QPainterPath* theWrappedObject, const QPointF&  point, const QFont&  f, const QString&  text);
   void addEllipse(QPainterPath* theWrappedObject, const QRectF&  rect);
   void cubicTo(QPainterPath* theWrappedObject, qreal  ctrlPt1x, qreal  ctrlPt1y, qreal  ctrlPt2x, qreal  ctrlPt2y, qreal  endPtx, qreal  endPty);
   QPainterPath  simplified(QPainterPath* theWrappedObject) const;
   bool  isEmpty(QPainterPath* theWrappedObject) const;
   qreal  percentAtLength(QPainterPath* theWrappedObject, qreal  t) const;
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  roundness);
   QPainterPath*  __ior__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   void arcMoveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  angle);
   const QPainterPath::Element*  elementAt(QPainterPath* theWrappedObject, int  i) const;
   void setFillRule(QPainterPath* theWrappedObject, Qt::FillRule  fillRule);
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   QPainterPath  united(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   void quadTo(QPainterPath* theWrappedObject, qreal  ctrlPtx, qreal  ctrlPty, qreal  endPtx, qreal  endPty);
   void addPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   void addText(QPainterPath* theWrappedObject, qreal  x, qreal  y, const QFont&  f, const QString&  text);
   bool  intersects(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  roundness);
   QPainterPath  __mul__(QPainterPath* theWrappedObject, const QMatrix&  m);
   QPainterPath*  __isub__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   void arcMoveTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  angle);
   void addPolygon(QPainterPath* theWrappedObject, const QPolygonF&  polygon);
   QPainterPath*  __iadd__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   QPainterPath*  __iand__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   QPainterPath  __mul__(QPainterPath* theWrappedObject, const QTransform&  m);
   void writeTo(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   qreal  length(QPainterPath* theWrappedObject) const;
   void addRoundedRect(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   QPainterPath  toReversed(QPainterPath* theWrappedObject) const;
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xRnd, int  yRnd);
   QPainterPath  __sub__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   void addRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   int  elementCount(QPainterPath* theWrappedObject) const;
   void cubicTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt1, const QPointF&  ctrlPt2, const QPointF&  endPt);
   QPainterPath  subtracted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   QPainterPath  subtractedInverted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   void moveTo(QPainterPath* theWrappedObject, const QPointF&  p);
    QString toString(QPainterPath*);
};

#endif // PYTHONQTWRAPPER_QPAINTERPATH_H
