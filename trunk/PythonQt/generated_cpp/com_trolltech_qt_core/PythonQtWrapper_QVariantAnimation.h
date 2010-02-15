#ifndef PYTHONQTWRAPPER_QVARIANTANIMATION_H
#define PYTHONQTWRAPPER_QVARIANTANIMATION_H

#include <qvariantanimation.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qeasingcurve.h>
#include <qlist.h>
#include <qobject.h>
#include <qpair.h>
#include <qvariantanimation.h>
#include <qvector.h>

class PythonQtShell_QVariantAnimation : public QVariantAnimation
{
public:
    PythonQtShell_QVariantAnimation(QObject*  parent = 0):QVariantAnimation(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  duration() const;
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QVariant  interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateCurrentTime(int  arg__1);
virtual void updateCurrentValue(const QVariant&  value);
virtual void updateDirection(QAbstractAnimation::Direction  direction);
virtual void updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QVariantAnimation : public QVariantAnimation
{ public:
inline void promoted_updateCurrentTime(int  arg__1) { QVariantAnimation::updateCurrentTime(arg__1); }
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QVariantAnimation::updateState(newState, oldState); }
inline int  promoted_duration() const { return QVariantAnimation::duration(); }
inline bool  promoted_event(QEvent*  event) { return QVariantAnimation::event(event); }
inline QVariant  promoted_interpolated(const QVariant&  from, const QVariant&  to, qreal  progress) const { return QVariantAnimation::interpolated(from, to, progress); }
};

class PythonQtWrapper_QVariantAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QVariantAnimation* new_QVariantAnimation(QObject*  parent = 0);
void delete_QVariantAnimation(QVariantAnimation* obj) { delete obj; } 
   void updateCurrentTime(QVariantAnimation* theWrappedObject, int  arg__1);
   void setEndValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   void setDuration(QVariantAnimation* theWrappedObject, int  msecs);
   QVariant  keyValueAt(QVariantAnimation* theWrappedObject, qreal  step) const;
   void updateState(QVariantAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
   QVector<QPair<qreal , QVariant >  >  keyValues(QVariantAnimation* theWrappedObject) const;
   void setEasingCurve(QVariantAnimation* theWrappedObject, const QEasingCurve&  easing);
   void setStartValue(QVariantAnimation* theWrappedObject, const QVariant&  value);
   void setKeyValueAt(QVariantAnimation* theWrappedObject, qreal  step, const QVariant&  value);
   int  duration(QVariantAnimation* theWrappedObject) const;
   bool  event(QVariantAnimation* theWrappedObject, QEvent*  event);
   QVariant  interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const;
   QEasingCurve  easingCurve(QVariantAnimation* theWrappedObject) const;
   QVariant  startValue(QVariantAnimation* theWrappedObject) const;
   QVariant  currentValue(QVariantAnimation* theWrappedObject) const;
   QVariant  endValue(QVariantAnimation* theWrappedObject) const;
   void setKeyValues(QVariantAnimation* theWrappedObject, const QVector<QPair<qreal , QVariant >  >&  values);
};

#endif // PYTHONQTWRAPPER_QVARIANTANIMATION_H
