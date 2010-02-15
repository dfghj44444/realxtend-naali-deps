#ifndef PYTHONQTWRAPPER_QGRAPHICSOPACITYEFFECT_H
#define PYTHONQTWRAPPER_QGRAPHICSOPACITYEFFECT_H

#include <qgraphicseffect.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qgraphicseffect.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>

class PythonQtShell_QGraphicsOpacityEffect : public QGraphicsOpacityEffect
{
public:
    PythonQtShell_QGraphicsOpacityEffect(QObject*  parent = 0):QGraphicsOpacityEffect(parent),_wrapper(NULL) {};

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

class PythonQtPublicPromoter_QGraphicsOpacityEffect : public QGraphicsOpacityEffect
{ public:
inline void promoted_draw(QPainter*  painter) { QGraphicsOpacityEffect::draw(painter); }
};

class PythonQtWrapper_QGraphicsOpacityEffect : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsOpacityEffect* new_QGraphicsOpacityEffect(QObject*  parent = 0);
void delete_QGraphicsOpacityEffect(QGraphicsOpacityEffect* obj) { delete obj; } 
   QBrush  opacityMask(QGraphicsOpacityEffect* theWrappedObject) const;
   qreal  opacity(QGraphicsOpacityEffect* theWrappedObject) const;
   void draw(QGraphicsOpacityEffect* theWrappedObject, QPainter*  painter);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSOPACITYEFFECT_H
