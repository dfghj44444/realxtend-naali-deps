#ifndef PYTHONQTWRAPPER_QPAINTERPATHSTROKER_H
#define PYTHONQTWRAPPER_QPAINTERPATHSTROKER_H

#include <qpainterpath.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qpainterpath.h>
#include <qvector.h>

class PythonQtWrapper_QPainterPathStroker : public QObject
{ Q_OBJECT
public:
public slots:
QPainterPathStroker* new_QPainterPathStroker();
void delete_QPainterPathStroker(QPainterPathStroker* obj) { delete obj; } 
   QVector<qreal >  dashPattern(QPainterPathStroker* theWrappedObject) const;
   qreal  curveThreshold(QPainterPathStroker* theWrappedObject) const;
   void setCapStyle(QPainterPathStroker* theWrappedObject, Qt::PenCapStyle  style);
   void setCurveThreshold(QPainterPathStroker* theWrappedObject, qreal  threshold);
   void setDashOffset(QPainterPathStroker* theWrappedObject, qreal  offset);
   void setWidth(QPainterPathStroker* theWrappedObject, qreal  width);
   Qt::PenCapStyle  capStyle(QPainterPathStroker* theWrappedObject) const;
   void setDashPattern(QPainterPathStroker* theWrappedObject, const QVector<qreal >&  dashPattern);
   void setDashPattern(QPainterPathStroker* theWrappedObject, Qt::PenStyle  arg__1);
   void setMiterLimit(QPainterPathStroker* theWrappedObject, qreal  length);
   qreal  width(QPainterPathStroker* theWrappedObject) const;
   QPainterPath  createStroke(QPainterPathStroker* theWrappedObject, const QPainterPath&  path) const;
   void setJoinStyle(QPainterPathStroker* theWrappedObject, Qt::PenJoinStyle  style);
   qreal  dashOffset(QPainterPathStroker* theWrappedObject) const;
   Qt::PenJoinStyle  joinStyle(QPainterPathStroker* theWrappedObject) const;
   qreal  miterLimit(QPainterPathStroker* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPAINTERPATHSTROKER_H
