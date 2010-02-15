#ifndef PYTHONQTWRAPPER_QANIMATIONGROUP_H
#define PYTHONQTWRAPPER_QANIMATIONGROUP_H

#include <qanimationgroup.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractanimation.h>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

class PythonQtShell_QAnimationGroup : public QAnimationGroup
{
public:
    PythonQtShell_QAnimationGroup(QObject*  parent = 0):QAnimationGroup(parent),_wrapper(NULL) {};

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

class PythonQtPublicPromoter_QAnimationGroup : public QAnimationGroup
{ public:
inline bool  promoted_event(QEvent*  event) { return QAnimationGroup::event(event); }
};

class PythonQtWrapper_QAnimationGroup : public QObject
{ Q_OBJECT
public:
public slots:
QAnimationGroup* new_QAnimationGroup(QObject*  parent = 0);
void delete_QAnimationGroup(QAnimationGroup* obj) { delete obj; } 
   QAbstractAnimation*  takeAnimation(QAnimationGroup* theWrappedObject, int  index);
   void clear(QAnimationGroup* theWrappedObject);
   bool  event(QAnimationGroup* theWrappedObject, QEvent*  event);
   void insertAnimation(QAnimationGroup* theWrappedObject, int  index, QAbstractAnimation*  animation);
   int  animationCount(QAnimationGroup* theWrappedObject) const;
   void addAnimation(QAnimationGroup* theWrappedObject, QAbstractAnimation*  animation);
   QAbstractAnimation*  animationAt(QAnimationGroup* theWrappedObject, int  index) const;
   void removeAnimation(QAnimationGroup* theWrappedObject, QAbstractAnimation*  animation);
   int  indexOfAnimation(QAnimationGroup* theWrappedObject, QAbstractAnimation*  animation) const;
};

#endif // PYTHONQTWRAPPER_QANIMATIONGROUP_H
