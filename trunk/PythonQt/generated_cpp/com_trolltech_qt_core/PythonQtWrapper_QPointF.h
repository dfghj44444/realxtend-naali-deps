#ifndef PYTHONQTWRAPPER_QPOINTF_H
#define PYTHONQTWRAPPER_QPOINTF_H

#include <qpoint.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qmatrix.h>
#include <qmatrix4x4.h>
#include <qpoint.h>
#include <qtransform.h>

class PythonQtWrapper_QPointF : public QObject
{ Q_OBJECT
public:
public slots:
QPointF* new_QPointF();
QPointF* new_QPointF(const QPoint&  p);
QPointF* new_QPointF(qreal  xpos, qreal  ypos);
QPointF* new_QPointF(const QPointF& other) {
QPointF* a = new QPointF();
*((QPointF*)a) = other;
return a; }
void delete_QPointF(QPointF* obj) { delete obj; } 
   qreal  x(QPointF* theWrappedObject) const;
   const QPointF  __sub__(QPointF* theWrappedObject, const QPointF&  p2);
   void setX(QPointF* theWrappedObject, qreal  x);
   void setY(QPointF* theWrappedObject, qreal  y);
   QPoint  toPoint(QPointF* theWrappedObject) const;
   const QPointF  __div__(QPointF* theWrappedObject, qreal  c);
   const QPointF  __mul__(QPointF* theWrappedObject, qreal  c);
   bool  isNull(QPointF* theWrappedObject) const;
   void writeTo(QPointF* theWrappedObject, QDataStream&  arg__1);
   qreal  y(QPointF* theWrappedObject) const;
   QPointF  __mul__(QPointF* theWrappedObject, const QMatrix4x4&  matrix);
   QPointF*  __iadd__(QPointF* theWrappedObject, const QPointF&  p);
   QPointF*  __imul__(QPointF* theWrappedObject, qreal  c);
   const QPointF  __add__(QPointF* theWrappedObject, const QPointF&  p2);
   QPointF*  __idiv__(QPointF* theWrappedObject, qreal  c);
   QPointF  __mul__(QPointF* theWrappedObject, const QTransform&  m);
   bool  operator_equal(QPointF* theWrappedObject, const QPointF&  p2);
   QPointF*  __isub__(QPointF* theWrappedObject, const QPointF&  p);
   QPointF  __mul__(QPointF* theWrappedObject, const QMatrix&  m);
   void readFrom(QPointF* theWrappedObject, QDataStream&  arg__1);
   qreal  manhattanLength(QPointF* theWrappedObject) const;
    QString toString(QPointF*);
};

#endif // PYTHONQTWRAPPER_QPOINTF_H
