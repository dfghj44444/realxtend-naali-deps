#ifndef PYTHONQTWRAPPER_QSTATEMACHINE_SIGNALEVENT_H
#define PYTHONQTWRAPPER_QSTATEMACHINE_SIGNALEVENT_H

#include <qstatemachine.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qlist.h>
#include <qobject.h>

class PythonQtWrapper_QStateMachine_SignalEvent : public QObject
{ Q_OBJECT
public:
public slots:
QStateMachine::SignalEvent* new_QStateMachine_SignalEvent(QObject*  sender, int  signalIndex, const QList<QVariant >&  arguments);
void delete_QStateMachine_SignalEvent(QStateMachine::SignalEvent* obj) { delete obj; } 
   int  signalIndex(QStateMachine::SignalEvent* theWrappedObject) const;
   QList<QVariant >  arguments(QStateMachine::SignalEvent* theWrappedObject) const;
   QObject*  sender(QStateMachine::SignalEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSTATEMACHINE_SIGNALEVENT_H
