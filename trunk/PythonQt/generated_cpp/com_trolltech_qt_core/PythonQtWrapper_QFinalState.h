#ifndef PYTHONQTWRAPPER_QFINALSTATE_H
#define PYTHONQTWRAPPER_QFINALSTATE_H

#include <qfinalstate.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfinalstate.h>
#include <qlist.h>
#include <qobject.h>
#include <qstate.h>
#include <qstatemachine.h>

class PythonQtShell_QFinalState : public QFinalState
{
public:
    PythonQtShell_QFinalState(QState*  parent = 0):QFinalState(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void onEntry(QEvent*  event);
virtual void onExit(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFinalState : public QFinalState
{ public:
inline void promoted_onExit(QEvent*  event) { QFinalState::onExit(event); }
inline void promoted_onEntry(QEvent*  event) { QFinalState::onEntry(event); }
inline bool  promoted_event(QEvent*  e) { return QFinalState::event(e); }
};

class PythonQtWrapper_QFinalState : public QObject
{ Q_OBJECT
public:
public slots:
QFinalState* new_QFinalState(QState*  parent = 0);
void delete_QFinalState(QFinalState* obj) { delete obj; } 
   void onExit(QFinalState* theWrappedObject, QEvent*  event);
   void onEntry(QFinalState* theWrappedObject, QEvent*  event);
   bool  event(QFinalState* theWrappedObject, QEvent*  e);
};

#endif // PYTHONQTWRAPPER_QFINALSTATE_H
