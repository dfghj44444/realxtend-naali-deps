#ifndef PYTHONQTWRAPPER_QSEQUENTIALANIMATIONGROUP_H
#define PYTHONQTWRAPPER_QSEQUENTIALANIMATIONGROUP_H

#include <qsequentialanimationgroup.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractanimation.h>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpauseanimation.h>
#include <qsequentialanimationgroup.h>

class PythonQtShell_QSequentialAnimationGroup : public QSequentialAnimationGroup
{
public:
    PythonQtShell_QSequentialAnimationGroup(QObject*  parent = 0):QSequentialAnimationGroup(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  duration() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateCurrentTime(int  arg__1);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSequentialAnimationGroup : public QSequentialAnimationGroup
{ public:
inline bool  promoted_event(QEvent*  event) { return QSequentialAnimationGroup::event(event); }
inline int  promoted_duration() const { return QSequentialAnimationGroup::duration(); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QSequentialAnimationGroup::updateState(newState, oldState); }
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { QSequentialAnimationGroup::updateDirection(direction); }
inline void promoted_updateCurrentTime(int  arg__1) { QSequentialAnimationGroup::updateCurrentTime(arg__1); }
};

class PythonQtWrapper_QSequentialAnimationGroup : public QObject
{ Q_OBJECT
public:
public slots:
QSequentialAnimationGroup* new_QSequentialAnimationGroup(QObject*  parent = 0);
void delete_QSequentialAnimationGroup(QSequentialAnimationGroup* obj) { delete obj; } 
   QAbstractAnimation*  currentAnimation(QSequentialAnimationGroup* theWrappedObject) const;
   bool  event(QSequentialAnimationGroup* theWrappedObject, QEvent*  event);
   QPauseAnimation*  insertPause(QSequentialAnimationGroup* theWrappedObject, int  index, int  msecs);
   int  duration(QSequentialAnimationGroup* theWrappedObject) const;
   void updateState(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
   QPauseAnimation*  addPause(QSequentialAnimationGroup* theWrappedObject, int  msecs);
   void updateDirection(QSequentialAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction);
   void updateCurrentTime(QSequentialAnimationGroup* theWrappedObject, int  arg__1);
};

#endif // PYTHONQTWRAPPER_QSEQUENTIALANIMATIONGROUP_H
