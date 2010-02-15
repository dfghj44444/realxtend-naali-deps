#ifndef PYTHONQTWRAPPER_QEVENTTRANSITION_H
#define PYTHONQTWRAPPER_QEVENTTRANSITION_H

#include <qeventtransition.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractstate.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qeventtransition.h>
#include <qlist.h>
#include <qobject.h>
#include <qstate.h>
#include <qstatemachine.h>

class PythonQtShell_QEventTransition : public QEventTransition
{
public:
    PythonQtShell_QEventTransition(QObject*  object, QEvent::Type  type, QState*  sourceState = 0):QEventTransition(object, type, sourceState),_wrapper(NULL) {};
    PythonQtShell_QEventTransition(QState*  sourceState = 0):QEventTransition(sourceState),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QEventTransition : public QEventTransition
{ public:
inline bool  promoted_event(QEvent*  e) { return QEventTransition::event(e); }
inline bool  promoted_eventTest(QEvent*  event) { return QEventTransition::eventTest(event); }
inline void promoted_onTransition(QEvent*  event) { QEventTransition::onTransition(event); }
};

class PythonQtWrapper_QEventTransition : public QObject
{ Q_OBJECT
public:
public slots:
QEventTransition* new_QEventTransition(QObject*  object, QEvent::Type  type, QState*  sourceState = 0);
QEventTransition* new_QEventTransition(QState*  sourceState = 0);
void delete_QEventTransition(QEventTransition* obj) { delete obj; } 
   void setEventType(QEventTransition* theWrappedObject, QEvent::Type  type);
   bool  event(QEventTransition* theWrappedObject, QEvent*  e);
   bool  eventTest(QEventTransition* theWrappedObject, QEvent*  event);
   void onTransition(QEventTransition* theWrappedObject, QEvent*  event);
   QEvent::Type  eventType(QEventTransition* theWrappedObject) const;
   QObject*  eventSource(QEventTransition* theWrappedObject) const;
   void setEventSource(QEventTransition* theWrappedObject, QObject*  object);
};

#endif // PYTHONQTWRAPPER_QEVENTTRANSITION_H
