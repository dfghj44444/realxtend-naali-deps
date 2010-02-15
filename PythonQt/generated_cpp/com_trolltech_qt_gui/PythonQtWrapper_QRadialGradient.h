#ifndef PYTHONQTWRAPPER_QRADIALGRADIENT_H
#define PYTHONQTWRAPPER_QRADIALGRADIENT_H

#include <qbrush.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpair.h>
#include <qpoint.h>
#include <qvector.h>

class PythonQtWrapper_QRadialGradient : public QObject
{ Q_OBJECT
public:
public slots:
QRadialGradient* new_QRadialGradient();
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  radius);
QRadialGradient* new_QRadialGradient(const QPointF&  center, qreal  radius, const QPointF&  focalPoint);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius);
QRadialGradient* new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius, qreal  fx, qreal  fy);
QRadialGradient* new_QRadialGradient(const QRadialGradient& other) {
QRadialGradient* a = new QRadialGradient();
*((QRadialGradient*)a) = other;
return a; }
void delete_QRadialGradient(QRadialGradient* obj) { delete obj; } 
   QPointF  focalPoint(QRadialGradient* theWrappedObject) const;
   QPointF  center(QRadialGradient* theWrappedObject) const;
   void setCenter(QRadialGradient* theWrappedObject, qreal  x, qreal  y);
   void setCenter(QRadialGradient* theWrappedObject, const QPointF&  center);
   void setFocalPoint(QRadialGradient* theWrappedObject, const QPointF&  focalPoint);
   qreal  radius(QRadialGradient* theWrappedObject) const;
   void setRadius(QRadialGradient* theWrappedObject, qreal  radius);
   void setFocalPoint(QRadialGradient* theWrappedObject, qreal  x, qreal  y);
};

#endif // PYTHONQTWRAPPER_QRADIALGRADIENT_H
