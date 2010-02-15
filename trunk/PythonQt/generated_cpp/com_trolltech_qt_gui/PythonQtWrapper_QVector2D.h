#ifndef PYTHONQTWRAPPER_QVECTOR2D_H
#define PYTHONQTWRAPPER_QVECTOR2D_H

#include <qvector2d.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qpoint.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>

class PythonQtWrapper_QVector2D : public QObject
{ Q_OBJECT
public:
public slots:
QVector2D* new_QVector2D();
QVector2D* new_QVector2D(const QPoint&  point);
QVector2D* new_QVector2D(const QPointF&  point);
QVector2D* new_QVector2D(const QVector3D&  vector);
QVector2D* new_QVector2D(const QVector4D&  vector);
QVector2D* new_QVector2D(qreal  xpos, qreal  ypos);
QVector2D* new_QVector2D(const QVector2D& other) {
QVector2D* a = new QVector2D();
*((QVector2D*)a) = other;
return a; }
void delete_QVector2D(QVector2D* obj) { delete obj; } 
   QVector2D*  __imul__(QVector2D* theWrappedObject, const QVector2D&  vector);
   QVector4D  toVector4D(QVector2D* theWrappedObject) const;
   QPointF  toPointF(QVector2D* theWrappedObject) const;
   QVector2D*  __iadd__(QVector2D* theWrappedObject, const QVector2D&  vector);
   void normalize(QVector2D* theWrappedObject);
   const QVector2D  __mul__(QVector2D* theWrappedObject, const QVector2D&  v2);
   const QVector2D  __add__(QVector2D* theWrappedObject, const QVector2D&  v2);
   QVector2D*  __isub__(QVector2D* theWrappedObject, const QVector2D&  vector);
   QVector3D  toVector3D(QVector2D* theWrappedObject) const;
   const QVector2D  __div__(QVector2D* theWrappedObject, qreal  divisor);
   void setX(QVector2D* theWrappedObject, qreal  x);
   qreal  y(QVector2D* theWrappedObject) const;
   const QVector2D  __mul__(QVector2D* theWrappedObject, qreal  factor);
   QVector2D*  __imul__(QVector2D* theWrappedObject, qreal  factor);
   void writeTo(QVector2D* theWrappedObject, QDataStream&  arg__1);
   qreal  static_QVector2D_dotProduct(const QVector2D&  v1, const QVector2D&  v2);
   const QVector2D  __sub__(QVector2D* theWrappedObject, const QVector2D&  v2);
   void readFrom(QVector2D* theWrappedObject, QDataStream&  arg__1);
   qreal  x(QVector2D* theWrappedObject) const;
   QPoint  toPoint(QVector2D* theWrappedObject) const;
   void setY(QVector2D* theWrappedObject, qreal  y);
   bool  isNull(QVector2D* theWrappedObject) const;
   bool  operator_equal(QVector2D* theWrappedObject, const QVector2D&  v2);
   QVector2D*  __idiv__(QVector2D* theWrappedObject, qreal  divisor);
   qreal  length(QVector2D* theWrappedObject) const;
   qreal  lengthSquared(QVector2D* theWrappedObject) const;
   QVector2D  normalized(QVector2D* theWrappedObject) const;
    QString toString(QVector2D*);
};

#endif // PYTHONQTWRAPPER_QVECTOR2D_H
