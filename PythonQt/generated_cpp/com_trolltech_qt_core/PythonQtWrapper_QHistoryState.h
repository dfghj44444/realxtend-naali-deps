#ifndef PYTHONQTWRAPPER_QHISTORYSTATE_H
#define PYTHONQTWRAPPER_QHISTORYSTATE_H

#include <qhistorystate.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractstate.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhistorystate.h>
#include <qlist.h>
#include <qobject.h>
#include <qstate.h>
#include <qstatemachine.h>

class PythonQtShell_QHistoryState : public QHistoryState
{
public:
    PythonQtShell_QHistoryState(QHistoryState::HistoryType  type, QState*  parent = 0):QHistoryState(type, parent),_wrapper(NULL) {};
    PythonQtShell_QHistoryState(QState*  parent = 0):QHistoryState(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void onEntry(QEvent*  event);
virtual void onExit(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QHistoryState : public QHistoryState
{ public:
inline bool  promoted_event(QEvent*  e) { return QHistoryState::event(e); }
inline void promoted_onEntry(QEvent*  event) { QHistoryState::onEntry(event); }
inline void promoted_onExit(QEvent*  event) { QHistoryState::onExit(event); }
};

class PythonQtWrapper_QHistoryState : public QObject
{ Q_OBJECT
public:
public slots:
QHistoryState* new_QHistoryState(QHistoryState::HistoryType  type, QState*  parent = 0);
QHistoryState* new_QHistoryState(QState*  parent = 0);
void delete_QHistoryState(QHistoryState* obj) { delete obj; } 
   bool  event(QHistoryState* theWrappedObject, QEvent*  e);
   void onEntry(QHistoryState* theWrappedObject, QEvent*  event);
   void onExit(QHistoryState* theWrappedObject, QEvent*  event);
   void setHistoryType(QHistoryState* theWrappedObject, QHistoryState::HistoryType  type);
   QAbstractState*  defaultState(QHistoryState* theWrappedObject) const;
   QHistoryState::HistoryType  historyType(QHistoryState* theWrappedObject) const;
   void setDefaultState(QHistoryState* theWrappedObject, QAbstractState*  state);
};

#endif // PYTHONQTWRAPPER_QHISTORYSTATE_H
