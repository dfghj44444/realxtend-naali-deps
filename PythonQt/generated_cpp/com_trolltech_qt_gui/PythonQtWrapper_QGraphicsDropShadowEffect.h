#ifndef PYTHONQTWRAPPER_QGRAPHICSDROPSHADOWEFFECT_H
#define PYTHONQTWRAPPER_QGRAPHICSDROPSHADOWEFFECT_H

#include <qgraphicseffect.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qgraphicseffect.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>

class PythonQtShell_QGraphicsDropShadowEffect : public QGraphicsDropShadowEffect
{
public:
    PythonQtShell_QGraphicsDropShadowEffect(QObject*  parent = 0):QGraphicsDropShadowEffect(parent),_wrapper(NULL) {};

virtual QRectF  boundingRectFor(const QRectF&  rect) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void draw(QPainter*  painter);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void sourceChanged(QGraphicsEffect::ChangeFlags  flags);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsDropShadowEffect : public QGraphicsDropShadowEffect
{ public:
inline QRectF  promoted_boundingRectFor(const QRectF&  rect) const { return QGraphicsDropShadowEffect::boundingRectFor(rect); }
inline void promoted_draw(QPainter*  painter) { QGraphicsDropShadowEffect::draw(painter); }
};

class PythonQtWrapper_QGraphicsDropShadowEffect : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsDropShadowEffect* new_QGraphicsDropShadowEffect(QObject*  parent = 0);
void delete_QGraphicsDropShadowEffect(QGraphicsDropShadowEffect* obj) { delete obj; } 
   qreal  yOffset(QGraphicsDropShadowEffect* theWrappedObject) const;
   QRectF  boundingRectFor(QGraphicsDropShadowEffect* theWrappedObject, const QRectF&  rect) const;
   void draw(QGraphicsDropShadowEffect* theWrappedObject, QPainter*  painter);
   qreal  xOffset(QGraphicsDropShadowEffect* theWrappedObject) const;
   QColor  color(QGraphicsDropShadowEffect* theWrappedObject) const;
   qreal  blurRadius(QGraphicsDropShadowEffect* theWrappedObject) const;
   QPointF  offset(QGraphicsDropShadowEffect* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSDROPSHADOWEFFECT_H
