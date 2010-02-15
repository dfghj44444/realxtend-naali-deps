#ifndef PYTHONQTWRAPPER_QTIMER_H
#define PYTHONQTWRAPPER_QTIMER_H

#include <qtimer.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtimer.h>

class PythonQtShell_QTimer : public QTimer
{
public:
    PythonQtShell_QTimer(QObject*  parent = 0):QTimer(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTimer : public QTimer
{ public:
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QTimer::timerEvent(arg__1); }
};

class PythonQtWrapper_QTimer : public QObject
{ Q_OBJECT
public:
public slots:
QTimer* new_QTimer(QObject*  parent = 0);
void delete_QTimer(QTimer* obj) { delete obj; } 
   int  timerId(QTimer* theWrappedObject) const;
   void setInterval(QTimer* theWrappedObject, int  msec);
   void timerEvent(QTimer* theWrappedObject, QTimerEvent*  arg__1);
   bool  isSingleShot(QTimer* theWrappedObject) const;
   bool  isActive(QTimer* theWrappedObject) const;
   void setSingleShot(QTimer* theWrappedObject, bool  singleShot);
   int  interval(QTimer* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTIMER_H
