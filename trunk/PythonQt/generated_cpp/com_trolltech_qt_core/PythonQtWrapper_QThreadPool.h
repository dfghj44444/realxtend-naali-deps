#ifndef PYTHONQTWRAPPER_QTHREADPOOL_H
#define PYTHONQTWRAPPER_QTHREADPOOL_H

#include <qthreadpool.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qrunnable.h>
#include <qthreadpool.h>

class PythonQtShell_QThreadPool : public QThreadPool
{
public:
    PythonQtShell_QThreadPool(QObject*  parent = 0):QThreadPool(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QThreadPool : public QObject
{ Q_OBJECT
public:
public slots:
QThreadPool* new_QThreadPool(QObject*  parent = 0);
void delete_QThreadPool(QThreadPool* obj) { delete obj; } 
   int  expiryTimeout(QThreadPool* theWrappedObject) const;
   void waitForDone(QThreadPool* theWrappedObject);
   void setExpiryTimeout(QThreadPool* theWrappedObject, int  expiryTimeout);
   void start(QThreadPool* theWrappedObject, QRunnable*  runnable, int  priority = 0);
   bool  tryStart(QThreadPool* theWrappedObject, QRunnable*  runnable);
   void releaseThread(QThreadPool* theWrappedObject);
   QThreadPool*  static_QThreadPool_globalInstance();
   int  activeThreadCount(QThreadPool* theWrappedObject) const;
   void setMaxThreadCount(QThreadPool* theWrappedObject, int  maxThreadCount);
   void reserveThread(QThreadPool* theWrappedObject);
   int  maxThreadCount(QThreadPool* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTHREADPOOL_H
