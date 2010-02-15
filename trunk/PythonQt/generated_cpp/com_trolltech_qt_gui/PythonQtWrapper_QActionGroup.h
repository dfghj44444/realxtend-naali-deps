#ifndef PYTHONQTWRAPPER_QACTIONGROUP_H
#define PYTHONQTWRAPPER_QACTIONGROUP_H

#include <qactiongroup.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qactiongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qobject.h>

class PythonQtShell_QActionGroup : public QActionGroup
{
public:
    PythonQtShell_QActionGroup(QObject*  parent):QActionGroup(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QActionGroup : public QObject
{ Q_OBJECT
public:
public slots:
QActionGroup* new_QActionGroup(QObject*  parent);
void delete_QActionGroup(QActionGroup* obj) { delete obj; } 
   bool  isExclusive(QActionGroup* theWrappedObject) const;
   void removeAction(QActionGroup* theWrappedObject, QAction*  a);
   bool  isVisible(QActionGroup* theWrappedObject) const;
   bool  isEnabled(QActionGroup* theWrappedObject) const;
   QList<QAction* >  actions(QActionGroup* theWrappedObject) const;
   QAction*  addAction(QActionGroup* theWrappedObject, const QIcon&  icon, const QString&  text);
   QAction*  addAction(QActionGroup* theWrappedObject, const QString&  text);
   QAction*  checkedAction(QActionGroup* theWrappedObject) const;
   QAction*  addAction(QActionGroup* theWrappedObject, QAction*  a);
};

#endif // PYTHONQTWRAPPER_QACTIONGROUP_H
