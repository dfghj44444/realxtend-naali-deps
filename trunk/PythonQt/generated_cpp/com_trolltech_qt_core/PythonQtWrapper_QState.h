#ifndef PYTHONQTWRAPPER_QSTATE_H
#define PYTHONQTWRAPPER_QSTATE_H

#include <qstate.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractstate.h>
#include <qabstracttransition.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsignaltransition.h>
#include <qstate.h>
#include <qstatemachine.h>

class PythonQtShell_QState : public QState
{
public:
    PythonQtShell_QState(QState*  parent = 0):QState(parent),_wrapper(NULL) {};
    PythonQtShell_QState(QState::ChildMode  childMode, QState*  parent = 0):QState(childMode, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void onEntry(QEvent*  event);
virtual void onExit(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QState : public QState
{ public:
inline void promoted_onExit(QEvent*  event) { QState::onExit(event); }
inline bool  promoted_event(QEvent*  e) { return QState::event(e); }
inline void promoted_onEntry(QEvent*  event) { QState::onEntry(event); }
};

class PythonQtWrapper_QState : public QObject
{ Q_OBJECT
public:
public slots:
QState* new_QState(QState*  parent = 0);
QState* new_QState(QState::ChildMode  childMode, QState*  parent = 0);
void delete_QState(QState* obj) { delete obj; } 
   void setInitialState(QState* theWrappedObject, QAbstractState*  state);
   QAbstractTransition*  addTransition(QState* theWrappedObject, QAbstractState*  target);
   void setChildMode(QState* theWrappedObject, QState::ChildMode  mode);
   void addTransition(QState* theWrappedObject, QAbstractTransition*  transition);
   void assignProperty(QState* theWrappedObject, QObject*  object, const char*  name, const QVariant&  value);
   QAbstractState*  errorState(QState* theWrappedObject) const;
   void removeTransition(QState* theWrappedObject, QAbstractTransition*  transition);
   void onExit(QState* theWrappedObject, QEvent*  event);
   QAbstractState*  initialState(QState* theWrappedObject) const;
   QSignalTransition*  addTransition(QState* theWrappedObject, QObject*  sender, const char*  signal, QAbstractState*  target);
   bool  event(QState* theWrappedObject, QEvent*  e);
   void setErrorState(QState* theWrappedObject, QAbstractState*  state);
   void onEntry(QState* theWrappedObject, QEvent*  event);
   QState::ChildMode  childMode(QState* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSTATE_H
