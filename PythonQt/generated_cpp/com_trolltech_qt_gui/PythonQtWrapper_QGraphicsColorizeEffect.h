#ifndef PYTHONQTWRAPPER_QGRAPHICSCOLORIZEEFFECT_H
#define PYTHONQTWRAPPER_QGRAPHICSCOLORIZEEFFECT_H

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

class PythonQtShell_QGraphicsColorizeEffect : public QGraphicsColorizeEffect
{
public:
    PythonQtShell_QGraphicsColorizeEffect(QObject*  parent = 0):QGraphicsColorizeEffect(parent),_wrapper(NULL) {};

virtual QRectF  boundingRectFor(const QRectF&  sourceRect) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void draw(QPainter*  painter);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void sourceChanged(QGraphicsEffect::ChangeFlags  flags);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsColorizeEffect : public QGraphicsColorizeEffect
{ public:
inline void promoted_draw(QPainter*  painter) { QGraphicsColorizeEffect::draw(painter); }
};

class PythonQtWrapper_QGraphicsColorizeEffect : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsColorizeEffect* new_QGraphicsColorizeEffect(QObject*  parent = 0);
void delete_QGraphicsColorizeEffect(QGraphicsColorizeEffect* obj) { delete obj; } 
   void draw(QGraphicsColorizeEffect* theWrappedObject, QPainter*  painter);
   qreal  strength(QGraphicsColorizeEffect* theWrappedObject) const;
   QColor  color(QGraphicsColorizeEffect* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSCOLORIZEEFFECT_H
