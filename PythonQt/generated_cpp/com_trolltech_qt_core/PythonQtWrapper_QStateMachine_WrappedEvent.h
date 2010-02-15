#ifndef PYTHONQTWRAPPER_QSTATEMACHINE_WRAPPEDEVENT_H
#define PYTHONQTWRAPPER_QSTATEMACHINE_WRAPPEDEVENT_H

#include <qstatemachine.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qcoreevent.h>
#include <qobject.h>

class PythonQtWrapper_QStateMachine_WrappedEvent : public QObject
{ Q_OBJECT
public:
public slots:
QStateMachine::WrappedEvent* new_QStateMachine_WrappedEvent(QObject*  object, QEvent*  event);
void delete_QStateMachine_WrappedEvent(QStateMachine::WrappedEvent* obj) { delete obj; } 
   QEvent*  event(QStateMachine::WrappedEvent* theWrappedObject) const;
   QObject*  object(QStateMachine::WrappedEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSTATEMACHINE_WRAPPEDEVENT_H
