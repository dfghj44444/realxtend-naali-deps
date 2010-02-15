#ifndef PYTHONQTWRAPPER_QGRAPHICSBLUREFFECT_H
#define PYTHONQTWRAPPER_QGRAPHICSBLUREFFECT_H

#include <qgraphicseffect.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qgraphicseffect.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>

class PythonQtShell_QGraphicsBlurEffect : public QGraphicsBlurEffect
{
public:
    PythonQtShell_QGraphicsBlurEffect(QObject*  parent = 0):QGraphicsBlurEffect(parent),_wrapper(NULL) {};

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

class PythonQtPublicPromoter_QGraphicsBlurEffect : public QGraphicsBlurEffect
{ public:
inline void promoted_draw(QPainter*  painter) { QGraphicsBlurEffect::draw(painter); }
inline QRectF  promoted_boundingRectFor(const QRectF&  rect) const { return QGraphicsBlurEffect::boundingRectFor(rect); }
};

class PythonQtWrapper_QGraphicsBlurEffect : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BlurHint )
Q_FLAGS(BlurHints )
enum BlurHint{
  PerformanceHint = QGraphicsBlurEffect::PerformanceHint,   QualityHint = QGraphicsBlurEffect::QualityHint,   AnimationHint = QGraphicsBlurEffect::AnimationHint};
Q_DECLARE_FLAGS(BlurHints, BlurHint)
public slots:
QGraphicsBlurEffect* new_QGraphicsBlurEffect(QObject*  parent = 0);
void delete_QGraphicsBlurEffect(QGraphicsBlurEffect* obj) { delete obj; } 
   qreal  blurRadius(QGraphicsBlurEffect* theWrappedObject) const;
   QGraphicsBlurEffect::BlurHints  blurHints(QGraphicsBlurEffect* theWrappedObject) const;
   void draw(QGraphicsBlurEffect* theWrappedObject, QPainter*  painter);
   QRectF  boundingRectFor(QGraphicsBlurEffect* theWrappedObject, const QRectF&  rect) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSBLUREFFECT_H
