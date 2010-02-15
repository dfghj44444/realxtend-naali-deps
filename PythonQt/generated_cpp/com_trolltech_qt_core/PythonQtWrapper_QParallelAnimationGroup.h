#ifndef PYTHONQTWRAPPER_QPARALLELANIMATIONGROUP_H
#define PYTHONQTWRAPPER_QPARALLELANIMATIONGROUP_H

#include <qparallelanimationgroup.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractanimation.h>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qparallelanimationgroup.h>

class PythonQtShell_QParallelAnimationGroup : public QParallelAnimationGroup
{
public:
    PythonQtShell_QParallelAnimationGroup(QObject*  parent = 0):QParallelAnimationGroup(parent),_wrapper(NULL) {};

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

class PythonQtPublicPromoter_QParallelAnimationGroup : public QParallelAnimationGroup
{ public:
inline void promoted_updateDirection(QAbstractAnimation::Direction  direction) { QParallelAnimationGroup::updateDirection(direction); }
inline bool  promoted_event(QEvent*  event) { return QParallelAnimationGroup::event(event); }
inline int  promoted_duration() const { return QParallelAnimationGroup::duration(); }
inline void promoted_updateCurrentTime(int  currentTime) { QParallelAnimationGroup::updateCurrentTime(currentTime); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QParallelAnimationGroup::updateState(newState, oldState); }
};

class PythonQtWrapper_QParallelAnimationGroup : public QObject
{ Q_OBJECT
public:
public slots:
QParallelAnimationGroup* new_QParallelAnimationGroup(QObject*  parent = 0);
void delete_QParallelAnimationGroup(QParallelAnimationGroup* obj) { delete obj; } 
   void updateDirection(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction);
   bool  event(QParallelAnimationGroup* theWrappedObject, QEvent*  event);
   int  duration(QParallelAnimationGroup* theWrappedObject) const;
   void updateCurrentTime(QParallelAnimationGroup* theWrappedObject, int  currentTime);
   void updateState(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
};

#endif // PYTHONQTWRAPPER_QPARALLELANIMATIONGROUP_H
