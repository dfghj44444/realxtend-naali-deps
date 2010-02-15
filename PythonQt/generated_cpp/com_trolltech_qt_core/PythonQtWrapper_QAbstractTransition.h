#ifndef PYTHONQTWRAPPER_QABSTRACTTRANSITION_H
#define PYTHONQTWRAPPER_QABSTRACTTRANSITION_H

#include <qabstracttransition.h>
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
#include <qstate.h>
#include <qstatemachine.h>

class PythonQtShell_QAbstractTransition : public QAbstractTransition
{
public:
    PythonQtShell_QAbstractTransition(QState*  sourceState = 0):QAbstractTransition(sourceState),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractTransition : public QAbstractTransition
{ public:
inline bool  promoted_event(QEvent*  e) { return QAbstractTransition::event(e); }
};

class PythonQtWrapper_QAbstractTransition : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractTransition* new_QAbstractTransition(QState*  sourceState = 0);
void delete_QAbstractTransition(QAbstractTransition* obj) { delete obj; } 
   QList<QAbstractAnimation* >  animations(QAbstractTransition* theWrappedObject) const;
   void addAnimation(QAbstractTransition* theWrappedObject, QAbstractAnimation*  animation);
   void setTargetStates(QAbstractTransition* theWrappedObject, const QList<QAbstractState* >&  targets);
   bool  event(QAbstractTransition* theWrappedObject, QEvent*  e);
   void removeAnimation(QAbstractTransition* theWrappedObject, QAbstractAnimation*  animation);
   void setTargetState(QAbstractTransition* theWrappedObject, QAbstractState*  target);
   QList<QAbstractState* >  targetStates(QAbstractTransition* theWrappedObject) const;
   QAbstractState*  targetState(QAbstractTransition* theWrappedObject) const;
   QStateMachine*  machine(QAbstractTransition* theWrappedObject) const;
   QState*  sourceState(QAbstractTransition* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QABSTRACTTRANSITION_H
