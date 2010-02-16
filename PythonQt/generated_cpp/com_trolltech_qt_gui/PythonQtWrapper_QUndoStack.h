#ifndef PYTHONQTWRAPPER_QUNDOSTACK_H
#define PYTHONQTWRAPPER_QUNDOSTACK_H

#include <qundostack.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qundostack.h>

class PythonQtShell_QUndoStack : public QUndoStack
{
public:
    PythonQtShell_QUndoStack(QObject*  parent = 0):QUndoStack(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUndoStack : public QObject
{ Q_OBJECT
public:
public slots:
QUndoStack* new_QUndoStack(QObject*  parent = 0);
void delete_QUndoStack(QUndoStack* obj) { delete obj; } 
   int  undoLimit(QUndoStack* theWrappedObject) const;
   void clear(QUndoStack* theWrappedObject);
   QString  redoText(QUndoStack* theWrappedObject) const;
   int  index(QUndoStack* theWrappedObject) const;
   bool  isActive(QUndoStack* theWrappedObject) const;
   bool  isClean(QUndoStack* theWrappedObject) const;
   QAction*  createRedoAction(QUndoStack* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
   void endMacro(QUndoStack* theWrappedObject);
   int  cleanIndex(QUndoStack* theWrappedObject) const;
   QString  text(QUndoStack* theWrappedObject, int  idx) const;
   bool  canRedo(QUndoStack* theWrappedObject) const;
   QString  undoText(QUndoStack* theWrappedObject) const;
   void push(QUndoStack* theWrappedObject, QUndoCommand*  cmd);
   void beginMacro(QUndoStack* theWrappedObject, const QString&  text);
   void setUndoLimit(QUndoStack* theWrappedObject, int  limit);
   const QUndoCommand*  command(QUndoStack* theWrappedObject, int  index) const;
   QAction*  createUndoAction(QUndoStack* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
   bool  canUndo(QUndoStack* theWrappedObject) const;
   int  count(QUndoStack* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QUNDOSTACK_H