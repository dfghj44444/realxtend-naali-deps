#ifndef PYTHONQTWRAPPER_QPROPERTYANIMATION_H
#define PYTHONQTWRAPPER_QPROPERTYANIMATION_H

#include <qpropertyanimation.h>
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
#include <qpropertyanimation.h>
#include <qvector.h>

class PythonQtShell_QPropertyAnimation : public QPropertyAnimation
{
public:
    PythonQtShell_QPropertyAnimation(QObject*  parent = 0):QPropertyAnimation(parent),_wrapper(NULL) {};
    PythonQtShell_QPropertyAnimation(QObject*  target, const QByteArray&  propertyName, QObject*  parent = 0):QPropertyAnimation(target, propertyName, parent),_wrapper(NULL) {};

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

class PythonQtPublicPromoter_QPropertyAnimation : public QPropertyAnimation
{ public:
inline void promoted_updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState) { QPropertyAnimation::updateState(newState, oldState); }
inline bool  promoted_event(QEvent*  event) { return QPropertyAnimation::event(event); }
inline void promoted_updateCurrentValue(const QVariant&  value) { QPropertyAnimation::updateCurrentValue(value); }
};

class PythonQtWrapper_QPropertyAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QPropertyAnimation* new_QPropertyAnimation(QObject*  parent = 0);
QPropertyAnimation* new_QPropertyAnimation(QObject*  target, const QByteArray&  propertyName, QObject*  parent = 0);
void delete_QPropertyAnimation(QPropertyAnimation* obj) { delete obj; } 
   void setTargetObject(QPropertyAnimation* theWrappedObject, QObject*  target);
   QByteArray  propertyName(QPropertyAnimation* theWrappedObject) const;
   void updateState(QPropertyAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState);
   void setPropertyName(QPropertyAnimation* theWrappedObject, const QByteArray&  propertyName);
   QObject*  targetObject(QPropertyAnimation* theWrappedObject) const;
   bool  event(QPropertyAnimation* theWrappedObject, QEvent*  event);
   void updateCurrentValue(QPropertyAnimation* theWrappedObject, const QVariant&  value);
};

#endif // PYTHONQTWRAPPER_QPROPERTYANIMATION_H
