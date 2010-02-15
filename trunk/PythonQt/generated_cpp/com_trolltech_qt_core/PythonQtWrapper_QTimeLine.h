#ifndef PYTHONQTWRAPPER_QTIMELINE_H
#define PYTHONQTWRAPPER_QTIMELINE_H

#include <qtimeline.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qeasingcurve.h>
#include <qlist.h>
#include <qobject.h>
#include <qtimeline.h>

class PythonQtShell_QTimeLine : public QTimeLine
{
public:
    PythonQtShell_QTimeLine(int  duration = 1000, QObject*  parent = 0):QTimeLine(duration, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  event);
virtual qreal  valueForTime(int  msec) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTimeLine : public QTimeLine
{ public:
inline void promoted_timerEvent(QTimerEvent*  event) { QTimeLine::timerEvent(event); }
inline qreal  promoted_valueForTime(int  msec) const { return QTimeLine::valueForTime(msec); }
};

class PythonQtWrapper_QTimeLine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Direction CurveShape State )
enum Direction{
  Forward = QTimeLine::Forward,   Backward = QTimeLine::Backward};
enum CurveShape{
  EaseInCurve = QTimeLine::EaseInCurve,   EaseOutCurve = QTimeLine::EaseOutCurve,   EaseInOutCurve = QTimeLine::EaseInOutCurve,   LinearCurve = QTimeLine::LinearCurve,   SineCurve = QTimeLine::SineCurve,   CosineCurve = QTimeLine::CosineCurve};
enum State{
  NotRunning = QTimeLine::NotRunning,   Paused = QTimeLine::Paused,   Running = QTimeLine::Running};
public slots:
QTimeLine* new_QTimeLine(int  duration = 1000, QObject*  parent = 0);
void delete_QTimeLine(QTimeLine* obj) { delete obj; } 
   qreal  currentValue(QTimeLine* theWrappedObject) const;
   void setLoopCount(QTimeLine* theWrappedObject, int  count);
   QTimeLine::CurveShape  curveShape(QTimeLine* theWrappedObject) const;
   QTimeLine::Direction  direction(QTimeLine* theWrappedObject) const;
   QTimeLine::State  state(QTimeLine* theWrappedObject) const;
   void setEasingCurve(QTimeLine* theWrappedObject, const QEasingCurve&  curve);
   void timerEvent(QTimeLine* theWrappedObject, QTimerEvent*  event);
   void setUpdateInterval(QTimeLine* theWrappedObject, int  interval);
   int  currentTime(QTimeLine* theWrappedObject) const;
   int  duration(QTimeLine* theWrappedObject) const;
   void setEndFrame(QTimeLine* theWrappedObject, int  frame);
   int  startFrame(QTimeLine* theWrappedObject) const;
   void setDuration(QTimeLine* theWrappedObject, int  duration);
   void setCurveShape(QTimeLine* theWrappedObject, QTimeLine::CurveShape  shape);
   int  frameForTime(QTimeLine* theWrappedObject, int  msec) const;
   void setDirection(QTimeLine* theWrappedObject, QTimeLine::Direction  direction);
   void setFrameRange(QTimeLine* theWrappedObject, int  startFrame, int  endFrame);
   qreal  valueForTime(QTimeLine* theWrappedObject, int  msec) const;
   int  currentFrame(QTimeLine* theWrappedObject) const;
   QEasingCurve  easingCurve(QTimeLine* theWrappedObject) const;
   int  loopCount(QTimeLine* theWrappedObject) const;
   int  endFrame(QTimeLine* theWrappedObject) const;
   void setStartFrame(QTimeLine* theWrappedObject, int  frame);
   int  updateInterval(QTimeLine* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTIMELINE_H
