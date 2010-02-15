#ifndef PYTHONQTWRAPPER_QPANGESTURE_H
#define PYTHONQTWRAPPER_QPANGESTURE_H

#include <qgesture.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpoint.h>

class PythonQtShell_QPanGesture : public QPanGesture
{
public:
    PythonQtShell_QPanGesture(QObject*  parent = 0):QPanGesture(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPanGesture : public QObject
{ Q_OBJECT
public:
public slots:
QPanGesture* new_QPanGesture(QObject*  parent = 0);
void delete_QPanGesture(QPanGesture* obj) { delete obj; } 
   QPointF  delta(QPanGesture* theWrappedObject) const;
   QPointF  offset(QPanGesture* theWrappedObject) const;
   qreal  acceleration(QPanGesture* theWrappedObject) const;
   QPointF  lastOffset(QPanGesture* theWrappedObject) const;
   void setLastOffset(QPanGesture* theWrappedObject, const QPointF&  value);
   void setAcceleration(QPanGesture* theWrappedObject, qreal  value);
   void setOffset(QPanGesture* theWrappedObject, const QPointF&  value);
};

#endif // PYTHONQTWRAPPER_QPANGESTURE_H
