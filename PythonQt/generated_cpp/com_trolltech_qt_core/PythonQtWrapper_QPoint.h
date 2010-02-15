#ifndef PYTHONQTWRAPPER_QPOINT_H
#define PYTHONQTWRAPPER_QPOINT_H

#include <qpoint.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qmatrix.h>
#include <qmatrix4x4.h>
#include <qpoint.h>
#include <qtransform.h>

class PythonQtWrapper_QPoint : public QObject
{ Q_OBJECT
public:
public slots:
QPoint* new_QPoint();
QPoint* new_QPoint(int  xpos, int  ypos);
QPoint* new_QPoint(const QPoint& other) {
QPoint* a = new QPoint();
*((QPoint*)a) = other;
return a; }
void delete_QPoint(QPoint* obj) { delete obj; } 
   const QPoint  __add__(QPoint* theWrappedObject, const QPoint&  p2);
   QPoint  __mul__(QPoint* theWrappedObject, const QMatrix4x4&  matrix);
   int  manhattanLength(QPoint* theWrappedObject) const;
   QPoint*  __idiv__(QPoint* theWrappedObject, qreal  c);
   QPoint*  __isub__(QPoint* theWrappedObject, const QPoint&  p);
   QPoint  __mul__(QPoint* theWrappedObject, const QMatrix&  m);
   const QPoint  __mul__(QPoint* theWrappedObject, qreal  c);
   bool  operator_equal(QPoint* theWrappedObject, const QPoint&  p2);
   int  y(QPoint* theWrappedObject) const;
   void setX(QPoint* theWrappedObject, int  x);
   int  x(QPoint* theWrappedObject) const;
   const QPoint  __div__(QPoint* theWrappedObject, qreal  c);
   void writeTo(QPoint* theWrappedObject, QDataStream&  arg__1);
   QPoint  __mul__(QPoint* theWrappedObject, const QTransform&  m);
   void setY(QPoint* theWrappedObject, int  y);
   bool  isNull(QPoint* theWrappedObject) const;
   QPoint*  __imul__(QPoint* theWrappedObject, qreal  c);
   const QPoint  __sub__(QPoint* theWrappedObject, const QPoint&  p2);
   QPoint*  __iadd__(QPoint* theWrappedObject, const QPoint&  p);
   void readFrom(QPoint* theWrappedObject, QDataStream&  arg__1);
    QString toString(QPoint*);
};

#endif // PYTHONQTWRAPPER_QPOINT_H
