#ifndef PYTHONQTWRAPPER_QVECTOR4D_H
#define PYTHONQTWRAPPER_QVECTOR4D_H

#include <qvector4d.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qmatrix4x4.h>
#include <qpoint.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>

class PythonQtWrapper_QVector4D : public QObject
{ Q_OBJECT
public:
public slots:
QVector4D* new_QVector4D();
QVector4D* new_QVector4D(const QPoint&  point);
QVector4D* new_QVector4D(const QPointF&  point);
QVector4D* new_QVector4D(const QVector2D&  vector);
QVector4D* new_QVector4D(const QVector2D&  vector, qreal  zpos, qreal  wpos);
QVector4D* new_QVector4D(const QVector3D&  vector);
QVector4D* new_QVector4D(const QVector3D&  vector, qreal  wpos);
QVector4D* new_QVector4D(qreal  xpos, qreal  ypos, qreal  zpos, qreal  wpos);
QVector4D* new_QVector4D(const QVector4D& other) {
QVector4D* a = new QVector4D();
*((QVector4D*)a) = other;
return a; }
void delete_QVector4D(QVector4D* obj) { delete obj; } 
   const QVector4D  __mul__(QVector4D* theWrappedObject, const QVector4D&  v2);
   bool  isNull(QVector4D* theWrappedObject) const;
   QVector3D  toVector3DAffine(QVector4D* theWrappedObject) const;
   void setY(QVector4D* theWrappedObject, qreal  y);
   const QVector4D  __add__(QVector4D* theWrappedObject, const QVector4D&  v2);
   qreal  length(QVector4D* theWrappedObject) const;
   QVector2D  toVector2D(QVector4D* theWrappedObject) const;
   QVector4D*  __idiv__(QVector4D* theWrappedObject, qreal  divisor);
   QVector2D  toVector2DAffine(QVector4D* theWrappedObject) const;
   QVector4D  __mul__(QVector4D* theWrappedObject, const QMatrix4x4&  matrix);
   QVector4D*  __isub__(QVector4D* theWrappedObject, const QVector4D&  vector);
   void readFrom(QVector4D* theWrappedObject, QDataStream&  arg__1);
   QPoint  toPoint(QVector4D* theWrappedObject) const;
   QVector4D*  __imul__(QVector4D* theWrappedObject, const QVector4D&  vector);
   QVector4D*  __iadd__(QVector4D* theWrappedObject, const QVector4D&  vector);
   void writeTo(QVector4D* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QVector4D* theWrappedObject, const QVector4D&  v2);
   qreal  z(QVector4D* theWrappedObject) const;
   qreal  static_QVector4D_dotProduct(const QVector4D&  v1, const QVector4D&  v2);
   const QVector4D  __mul__(QVector4D* theWrappedObject, qreal  factor);
   qreal  lengthSquared(QVector4D* theWrappedObject) const;
   const QVector4D  __sub__(QVector4D* theWrappedObject, const QVector4D&  v2);
   void setX(QVector4D* theWrappedObject, qreal  x);
   qreal  y(QVector4D* theWrappedObject) const;
   QVector4D  normalized(QVector4D* theWrappedObject) const;
   QVector4D*  __imul__(QVector4D* theWrappedObject, qreal  factor);
   const QVector4D  __div__(QVector4D* theWrappedObject, qreal  divisor);
   qreal  w(QVector4D* theWrappedObject) const;
   qreal  x(QVector4D* theWrappedObject) const;
   void normalize(QVector4D* theWrappedObject);
   void setW(QVector4D* theWrappedObject, qreal  w);
   void setZ(QVector4D* theWrappedObject, qreal  z);
   QPointF  toPointF(QVector4D* theWrappedObject) const;
   QVector3D  toVector3D(QVector4D* theWrappedObject) const;
    QString toString(QVector4D*);
};

#endif // PYTHONQTWRAPPER_QVECTOR4D_H
