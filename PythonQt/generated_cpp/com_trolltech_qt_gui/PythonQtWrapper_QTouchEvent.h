#ifndef PYTHONQTWRAPPER_QTOUCHEVENT_H
#define PYTHONQTWRAPPER_QTOUCHEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qevent.h>
#include <qlist.h>
#include <qwidget.h>

class PythonQtShell_QTouchEvent : public QTouchEvent
{
public:
    PythonQtShell_QTouchEvent(QEvent::Type  eventType, QTouchEvent::DeviceType  deviceType = QTouchEvent::TouchScreen, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, Qt::TouchPointStates  touchPointStates = 0, const QList<QTouchEvent::TouchPoint >&  touchPoints = QList<QTouchEvent::TouchPoint>()):QTouchEvent(eventType, deviceType, modifiers, touchPointStates, touchPoints),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTouchEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DeviceType )
enum DeviceType{
  TouchScreen = QTouchEvent::TouchScreen,   TouchPad = QTouchEvent::TouchPad};
public slots:
QTouchEvent* new_QTouchEvent(QEvent::Type  eventType, QTouchEvent::DeviceType  deviceType = QTouchEvent::TouchScreen, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, Qt::TouchPointStates  touchPointStates = 0, const QList<QTouchEvent::TouchPoint >&  touchPoints = QList<QTouchEvent::TouchPoint>());
void delete_QTouchEvent(QTouchEvent* obj) { delete obj; } 
   QTouchEvent::DeviceType  deviceType(QTouchEvent* theWrappedObject) const;
   void setDeviceType(QTouchEvent* theWrappedObject, QTouchEvent::DeviceType  adeviceType);
   void setTouchPoints(QTouchEvent* theWrappedObject, const QList<QTouchEvent::TouchPoint >&  atouchPoints);
   void setWidget(QTouchEvent* theWrappedObject, QWidget*  awidget);
   const QList<QTouchEvent::TouchPoint >*  touchPoints(QTouchEvent* theWrappedObject) const;
   void setTouchPointStates(QTouchEvent* theWrappedObject, Qt::TouchPointStates  aTouchPointStates);
   Qt::TouchPointStates  touchPointStates(QTouchEvent* theWrappedObject) const;
   QWidget*  widget(QTouchEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTOUCHEVENT_H
