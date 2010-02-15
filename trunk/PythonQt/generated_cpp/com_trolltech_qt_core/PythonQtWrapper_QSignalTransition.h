#ifndef PYTHONQTWRAPPER_QSIGNALTRANSITION_H
#define PYTHONQTWRAPPER_QSIGNALTRANSITION_H

#include <qsignaltransition.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractstate.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsignaltransition.h>
#include <qstate.h>
#include <qstatemachine.h>

class PythonQtShell_QSignalTransition : public QSignalTransition
{
public:
    PythonQtShell_QSignalTransition(QObject*  sender, const char*  signal, QState*  sourceState = 0):QSignalTransition(sender, signal, sourceState),_wrapper(NULL) {};
    PythonQtShell_QSignalTransition(QState*  sourceState = 0):QSignalTransition(sourceState),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSignalTransition : public QSignalTransition
{ public:
inline void promoted_onTransition(QEvent*  event) { QSignalTransition::onTransition(event); }
inline bool  promoted_eventTest(QEvent*  event) { return QSignalTransition::eventTest(event); }
inline bool  promoted_event(QEvent*  e) { return QSignalTransition::event(e); }
};

class PythonQtWrapper_QSignalTransition : public QObject
{ Q_OBJECT
public:
public slots:
QSignalTransition* new_QSignalTransition(QObject*  sender, const char*  signal, QState*  sourceState = 0);
QSignalTransition* new_QSignalTransition(QState*  sourceState = 0);
void delete_QSignalTransition(QSignalTransition* obj) { delete obj; } 
   QByteArray  signal(QSignalTransition* theWrappedObject) const;
   void onTransition(QSignalTransition* theWrappedObject, QEvent*  event);
   void setSignal(QSignalTransition* theWrappedObject, const QByteArray&  signal);
   bool  eventTest(QSignalTransition* theWrappedObject, QEvent*  event);
   void setSenderObject(QSignalTransition* theWrappedObject, QObject*  sender);
   QObject*  senderObject(QSignalTransition* theWrappedObject) const;
   bool  event(QSignalTransition* theWrappedObject, QEvent*  e);
};

#endif // PYTHONQTWRAPPER_QSIGNALTRANSITION_H
