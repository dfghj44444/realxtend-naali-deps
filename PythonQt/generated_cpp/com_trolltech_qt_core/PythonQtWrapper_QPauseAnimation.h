#ifndef PYTHONQTWRAPPER_QPAUSEANIMATION_H
#define PYTHONQTWRAPPER_QPAUSEANIMATION_H

#include <qpauseanimation.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpauseanimation.h>

class PythonQtShell_QPauseAnimation : public QPauseAnimation
{
public:
    PythonQtShell_QPauseAnimation(QObject*  parent = 0):QPauseAnimation(parent),_wrapper(NULL) {};
    PythonQtShell_QPauseAnimation(int  msecs, QObject*  parent = 0):QPauseAnimation(msecs, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  duration() const;
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateCurrentTime(int  arg__1);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPauseAnimation : public QPauseAnimation
{ public:
inline void promoted_updateCurrentTime(int  arg__1) { QPauseAnimation::updateCurrentTime(arg__1); }
inline bool  promoted_event(QEvent*  e) { return QPauseAnimation::event(e); }
inline int  promoted_duration() const { return QPauseAnimation::duration(); }
};

class PythonQtWrapper_QPauseAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QPauseAnimation* new_QPauseAnimation(QObject*  parent = 0);
QPauseAnimation* new_QPauseAnimation(int  msecs, QObject*  parent = 0);
void delete_QPauseAnimation(QPauseAnimation* obj) { delete obj; } 
   void updateCurrentTime(QPauseAnimation* theWrappedObject, int  arg__1);
   bool  event(QPauseAnimation* theWrappedObject, QEvent*  e);
   int  duration(QPauseAnimation* theWrappedObject) const;
   void setDuration(QPauseAnimation* theWrappedObject, int  msecs);
};

#endif // PYTHONQTWRAPPER_QPAUSEANIMATION_H
