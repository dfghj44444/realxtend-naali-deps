#ifndef PYTHONQTWRAPPER_QABSTRACTSTATE_H
#define PYTHONQTWRAPPER_QABSTRACTSTATE_H

#include <qabstractstate.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractstate.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstate.h>
#include <qstatemachine.h>

class PythonQtShell_QAbstractState : public QAbstractState
{
public:
    PythonQtShell_QAbstractState(QState*  parent = 0):QAbstractState(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void onEntry(QEvent*  event);
virtual void onExit(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractState : public QAbstractState
{ public:
inline bool  promoted_event(QEvent*  e) { return QAbstractState::event(e); }
};

class PythonQtWrapper_QAbstractState : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAbstractState(QAbstractState* obj) { delete obj; } 
   QState*  parentState(QAbstractState* theWrappedObject) const;
   bool  event(QAbstractState* theWrappedObject, QEvent*  e);
   QStateMachine*  machine(QAbstractState* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QABSTRACTSTATE_H
