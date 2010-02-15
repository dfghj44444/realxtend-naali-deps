#ifndef PYTHONQTWRAPPER_QKEYEVENTTRANSITION_H
#define PYTHONQTWRAPPER_QKEYEVENTTRANSITION_H

#include <qkeyeventtransition.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractstate.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qkeyeventtransition.h>
#include <qlist.h>
#include <qobject.h>
#include <qstate.h>
#include <qstatemachine.h>

class PythonQtShell_QKeyEventTransition : public QKeyEventTransition
{
public:
    PythonQtShell_QKeyEventTransition(QObject*  object, QEvent::Type  type, int  key, QState*  sourceState = 0):QKeyEventTransition(object, type, key, sourceState),_wrapper(NULL) {};
    PythonQtShell_QKeyEventTransition(QState*  sourceState = 0):QKeyEventTransition(sourceState),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QKeyEventTransition : public QKeyEventTransition
{ public:
inline void promoted_onTransition(QEvent*  event) { QKeyEventTransition::onTransition(event); }
inline bool  promoted_eventTest(QEvent*  event) { return QKeyEventTransition::eventTest(event); }
};

class PythonQtWrapper_QKeyEventTransition : public QObject
{ Q_OBJECT
public:
public slots:
QKeyEventTransition* new_QKeyEventTransition(QObject*  object, QEvent::Type  type, int  key, QState*  sourceState = 0);
QKeyEventTransition* new_QKeyEventTransition(QState*  sourceState = 0);
void delete_QKeyEventTransition(QKeyEventTransition* obj) { delete obj; } 
   void onTransition(QKeyEventTransition* theWrappedObject, QEvent*  event);
   Qt::KeyboardModifiers  modifierMask(QKeyEventTransition* theWrappedObject) const;
   int  key(QKeyEventTransition* theWrappedObject) const;
   void setKey(QKeyEventTransition* theWrappedObject, int  key);
   bool  eventTest(QKeyEventTransition* theWrappedObject, QEvent*  event);
   void setModifierMask(QKeyEventTransition* theWrappedObject, Qt::KeyboardModifiers  modifiers);
};

#endif // PYTHONQTWRAPPER_QKEYEVENTTRANSITION_H
