#ifndef PYTHONQTWRAPPER_QSTATEMACHINE_H
#define PYTHONQTWRAPPER_QSTATEMACHINE_H

#include <qstatemachine.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractstate.h>
#include <qabstracttransition.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsignaltransition.h>
#include <qstate.h>
#include <qstatemachine.h>

class PythonQtShell_QStateMachine : public QStateMachine
{
public:
    PythonQtShell_QStateMachine(QObject*  parent = 0):QStateMachine(parent),_wrapper(NULL) {};

virtual void beginMicrostep(QEvent*  event);
virtual void beginSelectTransitions(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void endMicrostep(QEvent*  event);
virtual void endSelectTransitions(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void onEntry(QEvent*  event);
virtual void onExit(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStateMachine : public QStateMachine
{ public:
inline void promoted_beginMicrostep(QEvent*  event) { QStateMachine::beginMicrostep(event); }
inline void promoted_endMicrostep(QEvent*  event) { QStateMachine::endMicrostep(event); }
inline void promoted_endSelectTransitions(QEvent*  event) { QStateMachine::endSelectTransitions(event); }
inline void promoted_onExit(QEvent*  event) { QStateMachine::onExit(event); }
inline bool  promoted_event(QEvent*  e) { return QStateMachine::event(e); }
inline bool  promoted_eventFilter(QObject*  watched, QEvent*  event) { return QStateMachine::eventFilter(watched, event); }
inline void promoted_onEntry(QEvent*  event) { QStateMachine::onEntry(event); }
inline void promoted_beginSelectTransitions(QEvent*  event) { QStateMachine::beginSelectTransitions(event); }
};

class PythonQtWrapper_QStateMachine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error EventPriority )
enum Error{
  NoError = QStateMachine::NoError,   NoInitialStateError = QStateMachine::NoInitialStateError,   NoDefaultStateInHistoryStateError = QStateMachine::NoDefaultStateInHistoryStateError,   NoCommonAncestorForTransitionError = QStateMachine::NoCommonAncestorForTransitionError};
enum EventPriority{
  NormalPriority = QStateMachine::NormalPriority,   HighPriority = QStateMachine::HighPriority};
public slots:
QStateMachine* new_QStateMachine(QObject*  parent = 0);
void delete_QStateMachine(QStateMachine* obj) { delete obj; } 
   void postEvent(QStateMachine* theWrappedObject, QEvent*  event, QStateMachine::EventPriority  priority = QStateMachine::NormalPriority);
   void beginMicrostep(QStateMachine* theWrappedObject, QEvent*  event);
   QStateMachine::RestorePolicy  globalRestorePolicy(QStateMachine* theWrappedObject) const;
   QString  errorString(QStateMachine* theWrappedObject) const;
   void endMicrostep(QStateMachine* theWrappedObject, QEvent*  event);
   void removeDefaultAnimation(QStateMachine* theWrappedObject, QAbstractAnimation*  animation);
   void setGlobalRestorePolicy(QStateMachine* theWrappedObject, QStateMachine::RestorePolicy  restorePolicy);
   void clearError(QStateMachine* theWrappedObject);
   void endSelectTransitions(QStateMachine* theWrappedObject, QEvent*  event);
   bool  isAnimated(QStateMachine* theWrappedObject) const;
   void removeState(QStateMachine* theWrappedObject, QAbstractState*  state);
   void addState(QStateMachine* theWrappedObject, QAbstractState*  state);
   void onExit(QStateMachine* theWrappedObject, QEvent*  event);
   bool  event(QStateMachine* theWrappedObject, QEvent*  e);
   bool  eventFilter(QStateMachine* theWrappedObject, QObject*  watched, QEvent*  event);
   int  postDelayedEvent(QStateMachine* theWrappedObject, QEvent*  event, int  delay);
   void setAnimated(QStateMachine* theWrappedObject, bool  enabled);
   QSet<QAbstractState* >  configuration(QStateMachine* theWrappedObject) const;
   void onEntry(QStateMachine* theWrappedObject, QEvent*  event);
   void addDefaultAnimation(QStateMachine* theWrappedObject, QAbstractAnimation*  animation);
   QList<QAbstractAnimation* >  defaultAnimations(QStateMachine* theWrappedObject) const;
   bool  isRunning(QStateMachine* theWrappedObject) const;
   QStateMachine::Error  error(QStateMachine* theWrappedObject) const;
   bool  cancelDelayedEvent(QStateMachine* theWrappedObject, int  id);
   void beginSelectTransitions(QStateMachine* theWrappedObject, QEvent*  event);
};

#endif // PYTHONQTWRAPPER_QSTATEMACHINE_H
