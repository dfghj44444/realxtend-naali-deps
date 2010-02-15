#ifndef PYTHONQTWRAPPER_QHELPEVENT_H
#define PYTHONQTWRAPPER_QHELPEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qpoint.h>

class PythonQtWrapper_QHelpEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHelpEvent* new_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos);
void delete_QHelpEvent(QHelpEvent* obj) { delete obj; } 
   int  globalY(QHelpEvent* theWrappedObject) const;
   int  x(QHelpEvent* theWrappedObject) const;
   int  globalX(QHelpEvent* theWrappedObject) const;
   const QPoint*  globalPos(QHelpEvent* theWrappedObject) const;
   const QPoint*  pos(QHelpEvent* theWrappedObject) const;
   int  y(QHelpEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QHELPEVENT_H
