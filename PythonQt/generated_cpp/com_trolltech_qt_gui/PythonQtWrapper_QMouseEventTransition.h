#ifndef PYTHONQTWRAPPER_QMOUSEEVENTTRANSITION_H
#define PYTHONQTWRAPPER_QMOUSEEVENTTRANSITION_H

#include <qmouseeventtransition.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractstate.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qmouseeventtransition.h>
#include <qobject.h>
#include <qpainterpath.h>
#include <qstate.h>
#include <qstatemachine.h>

class PythonQtShell_QMouseEventTransition : public QMouseEventTransition
{
public:
    PythonQtShell_QMouseEventTransition(QObject*  object, QEvent::Type  type, Qt::MouseButton  button, QState*  sourceState = 0):QMouseEventTransition(object, type, button, sourceState),_wrapper(NULL) {};
    PythonQtShell_QMouseEventTransition(QState*  sourceState = 0):QMouseEventTransition(sourceState),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMouseEventTransition : public QMouseEventTransition
{ public:
inline bool  promoted_eventTest(QEvent*  event) { return QMouseEventTransition::eventTest(event); }
inline void promoted_onTransition(QEvent*  event) { QMouseEventTransition::onTransition(event); }
};

class PythonQtWrapper_QMouseEventTransition : public QObject
{ Q_OBJECT
public:
public slots:
QMouseEventTransition* new_QMouseEventTransition(QObject*  object, QEvent::Type  type, Qt::MouseButton  button, QState*  sourceState = 0);
QMouseEventTransition* new_QMouseEventTransition(QState*  sourceState = 0);
void delete_QMouseEventTransition(QMouseEventTransition* obj) { delete obj; } 
   void setModifierMask(QMouseEventTransition* theWrappedObject, Qt::KeyboardModifiers  modifiers);
   Qt::KeyboardModifiers  modifierMask(QMouseEventTransition* theWrappedObject) const;
   void setButton(QMouseEventTransition* theWrappedObject, Qt::MouseButton  button);
   bool  eventTest(QMouseEventTransition* theWrappedObject, QEvent*  event);
   QPainterPath  hitTestPath(QMouseEventTransition* theWrappedObject) const;
   void setHitTestPath(QMouseEventTransition* theWrappedObject, const QPainterPath&  path);
   Qt::MouseButton  button(QMouseEventTransition* theWrappedObject) const;
   void onTransition(QMouseEventTransition* theWrappedObject, QEvent*  event);
};

#endif // PYTHONQTWRAPPER_QMOUSEEVENTTRANSITION_H
