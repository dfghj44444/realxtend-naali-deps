#ifndef PYTHONQTWRAPPER_QGESTURE_H
#define PYTHONQTWRAPPER_QGESTURE_H

#include <qgesture.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpoint.h>

class PythonQtShell_QGesture : public QGesture
{
public:
    PythonQtShell_QGesture(QObject*  parent = 0):QGesture(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGesture : public QObject
{ Q_OBJECT
public:
Q_ENUMS(GestureCancelPolicy )
enum GestureCancelPolicy{
  CancelNone = QGesture::CancelNone,   CancelAllInContext = QGesture::CancelAllInContext};
public slots:
QGesture* new_QGesture(QObject*  parent = 0);
void delete_QGesture(QGesture* obj) { delete obj; } 
   bool  hasHotSpot(QGesture* theWrappedObject) const;
   void unsetHotSpot(QGesture* theWrappedObject);
   void setGestureCancelPolicy(QGesture* theWrappedObject, QGesture::GestureCancelPolicy  policy);
   void setHotSpot(QGesture* theWrappedObject, const QPointF&  value);
   QGesture::GestureCancelPolicy  gestureCancelPolicy(QGesture* theWrappedObject) const;
   QPointF  hotSpot(QGesture* theWrappedObject) const;
   Qt::GestureType  gestureType(QGesture* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGESTURE_H
