#ifndef PYTHONQTWRAPPER_QABSTRACTANIMATION_H
#define PYTHONQTWRAPPER_QABSTRACTANIMATION_H

#include <qabstractanimation.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractanimation.h>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

class PythonQtShell_QAbstractAnimation : public QAbstractAnimation
{
public:
    PythonQtShell_QAbstractAnimation(QObject*  parent = 0):QAbstractAnimation(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  duration() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateCurrentTime(int  currentTime);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractAnimation : public QAbstractAnimation
{ public:
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QAbstractAnimation::updateState(newState, oldState); }
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { QAbstractAnimation::updateDirection(direction); }
inline bool  promoted_event(QEvent*  event) { return QAbstractAnimation::event(event); }
};

class PythonQtWrapper_QAbstractAnimation : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DeletionPolicy )
enum DeletionPolicy{
  KeepWhenStopped = QAbstractAnimation::KeepWhenStopped,   DeleteWhenStopped = QAbstractAnimation::DeleteWhenStopped};
public slots:
QAbstractAnimation* new_QAbstractAnimation(QObject*  parent = 0);
void delete_QAbstractAnimation(QAbstractAnimation* obj) { delete obj; } 
   int  currentLoopTime(QAbstractAnimation* theWrappedObject) const;
   int  currentLoop(QAbstractAnimation* theWrappedObject) const;
   void updateState(QAbstractAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
   int  loopCount(QAbstractAnimation* theWrappedObject) const;
   int  totalDuration(QAbstractAnimation* theWrappedObject) const;
   QAbstractAnimation::Direction  direction(QAbstractAnimation* theWrappedObject) const;
   void setLoopCount(QAbstractAnimation* theWrappedObject, int  loopCount);
   QAbstractAnimation::State  state(QAbstractAnimation* theWrappedObject) const;
   int  currentTime(QAbstractAnimation* theWrappedObject) const;
   void setDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction);
   void updateDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction);
   QAnimationGroup*  group(QAbstractAnimation* theWrappedObject) const;
   bool  event(QAbstractAnimation* theWrappedObject, QEvent*  event);
};

#endif // PYTHONQTWRAPPER_QABSTRACTANIMATION_H
