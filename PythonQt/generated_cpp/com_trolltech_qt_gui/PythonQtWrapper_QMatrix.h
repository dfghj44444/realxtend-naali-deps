#ifndef PYTHONQTWRAPPER_QMATRIX_H
#define PYTHONQTWRAPPER_QMATRIX_H

#include <qmatrix.h>
#include <QObject>

#include <PythonQt.h>

#include <QPainterPath>
#include <QVariant>
#include <qdatastream.h>
#include <qline.h>
#include <qmatrix.h>
#include <qpainterpath.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>

class PythonQtWrapper_QMatrix : public QObject
{ Q_OBJECT
public:
public slots:
QMatrix* new_QMatrix();
QMatrix* new_QMatrix(const QMatrix&  matrix);
QMatrix* new_QMatrix(qreal  m11, qreal  m12, qreal  m21, qreal  m22, qreal  dx, qreal  dy);
void delete_QMatrix(QMatrix* obj) { delete obj; } 
   QMatrix  inverted(QMatrix* theWrappedObject, bool*  invertible = 0) const;
   qreal  m11(QMatrix* theWrappedObject) const;
   QRegion  map(QMatrix* theWrappedObject, const QRegion&  r) const;
   QMatrix*  scale(QMatrix* theWrappedObject, qreal  sx, qreal  sy);
   qreal  det(QMatrix* theWrappedObject) const;
   QPointF  map(QMatrix* theWrappedObject, const QPointF&  p) const;
   void writeTo(QMatrix* theWrappedObject, QDataStream&  arg__1);
   qreal  dy(QMatrix* theWrappedObject) const;
   qreal  m22(QMatrix* theWrappedObject) const;
   qreal  m21(QMatrix* theWrappedObject) const;
   QMatrix*  __imul__(QMatrix* theWrappedObject, const QMatrix&  arg__1);
   bool  operator_equal(QMatrix* theWrappedObject, const QMatrix&  arg__1) const;
   QRectF  mapRect(QMatrix* theWrappedObject, const QRectF&  arg__1) const;
   QMatrix*  translate(QMatrix* theWrappedObject, qreal  dx, qreal  dy);
   qreal  determinant(QMatrix* theWrappedObject) const;
   qreal  dx(QMatrix* theWrappedObject) const;
   QMatrix  __mul__(QMatrix* theWrappedObject, const QMatrix&  o) const;
   void setMatrix(QMatrix* theWrappedObject, qreal  m11, qreal  m12, qreal  m21, qreal  m22, qreal  dx, qreal  dy);
   QLine  map(QMatrix* theWrappedObject, const QLine&  l) const;
   QPoint  map(QMatrix* theWrappedObject, const QPoint&  p) const;
   QPolygon  map(QMatrix* theWrappedObject, const QPolygon&  a) const;
   void readFrom(QMatrix* theWrappedObject, QDataStream&  arg__1);
   bool  isIdentity(QMatrix* theWrappedObject) const;
   QMatrix*  rotate(QMatrix* theWrappedObject, qreal  a);
   QMatrix*  shear(QMatrix* theWrappedObject, qreal  sh, qreal  sv);
   QLineF  map(QMatrix* theWrappedObject, const QLineF&  l) const;
   qreal  m12(QMatrix* theWrappedObject) const;
   bool  isInvertible(QMatrix* theWrappedObject) const;
   QRect  mapRect(QMatrix* theWrappedObject, const QRect&  arg__1) const;
   void reset(QMatrix* theWrappedObject);
   QPainterPath  map(QMatrix* theWrappedObject, const QPainterPath&  p) const;
   QPolygonF  map(QMatrix* theWrappedObject, const QPolygonF&  a) const;
   QPolygon  mapToPolygon(QMatrix* theWrappedObject, const QRect&  r) const;
    QString toString(QMatrix*);
};

#endif // PYTHONQTWRAPPER_QMATRIX_H
