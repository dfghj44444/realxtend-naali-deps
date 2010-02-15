#ifndef PYTHONQTWRAPPER_QCOMPLETER_H
#define PYTHONQTWRAPPER_QCOMPLETER_H

#include <qcompleter.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qbytearray.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qstringlist.h>
#include <qwidget.h>

class PythonQtShell_QCompleter : public QCompleter
{
public:
    PythonQtShell_QCompleter(QAbstractItemModel*  model, QObject*  parent = 0):QCompleter(model, parent),_wrapper(NULL) {};
    PythonQtShell_QCompleter(QObject*  parent = 0):QCompleter(parent),_wrapper(NULL) {};
    PythonQtShell_QCompleter(const QStringList&  completions, QObject*  parent = 0):QCompleter(completions, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  o, QEvent*  e);
virtual QString  pathFromIndex(const QModelIndex&  index) const;
virtual QStringList  splitPath(const QString&  path) const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCompleter : public QCompleter
{ public:
inline QString  promoted_pathFromIndex(const QModelIndex&  index) const { return QCompleter::pathFromIndex(index); }
inline bool  promoted_eventFilter(QObject*  o, QEvent*  e) { return QCompleter::eventFilter(o, e); }
inline bool  promoted_event(QEvent*  arg__1) { return QCompleter::event(arg__1); }
inline QStringList  promoted_splitPath(const QString&  path) const { return QCompleter::splitPath(path); }
};

class PythonQtWrapper_QCompleter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ModelSorting CompletionMode )
enum ModelSorting{
  UnsortedModel = QCompleter::UnsortedModel,   CaseSensitivelySortedModel = QCompleter::CaseSensitivelySortedModel,   CaseInsensitivelySortedModel = QCompleter::CaseInsensitivelySortedModel};
enum CompletionMode{
  PopupCompletion = QCompleter::PopupCompletion,   UnfilteredPopupCompletion = QCompleter::UnfilteredPopupCompletion,   InlineCompletion = QCompleter::InlineCompletion};
public slots:
QCompleter* new_QCompleter(QAbstractItemModel*  model, QObject*  parent = 0);
QCompleter* new_QCompleter(QObject*  parent = 0);
QCompleter* new_QCompleter(const QStringList&  completions, QObject*  parent = 0);
void delete_QCompleter(QCompleter* obj) { delete obj; } 
   int  maxVisibleItems(QCompleter* theWrappedObject) const;
   QAbstractItemModel*  model(QCompleter* theWrappedObject) const;
   QWidget*  widget(QCompleter* theWrappedObject) const;
   bool  wrapAround(QCompleter* theWrappedObject) const;
   QString  completionPrefix(QCompleter* theWrappedObject) const;
   QString  pathFromIndex(QCompleter* theWrappedObject, const QModelIndex&  index) const;
   bool  setCurrentRow(QCompleter* theWrappedObject, int  row);
   void setCaseSensitivity(QCompleter* theWrappedObject, Qt::CaseSensitivity  caseSensitivity);
   QAbstractItemView*  popup(QCompleter* theWrappedObject) const;
   int  completionColumn(QCompleter* theWrappedObject) const;
   int  completionRole(QCompleter* theWrappedObject) const;
   bool  eventFilter(QCompleter* theWrappedObject, QObject*  o, QEvent*  e);
   void setModelSorting(QCompleter* theWrappedObject, QCompleter::ModelSorting  sorting);
   QCompleter::CompletionMode  completionMode(QCompleter* theWrappedObject) const;
   void setPopup(QCompleter* theWrappedObject, QAbstractItemView*  popup);
   void setCompletionColumn(QCompleter* theWrappedObject, int  column);
   int  currentRow(QCompleter* theWrappedObject) const;
   void setCompletionMode(QCompleter* theWrappedObject, QCompleter::CompletionMode  mode);
   bool  event(QCompleter* theWrappedObject, QEvent*  arg__1);
   void setWidget(QCompleter* theWrappedObject, QWidget*  widget);
   int  completionCount(QCompleter* theWrappedObject) const;
   QAbstractItemModel*  completionModel(QCompleter* theWrappedObject) const;
   void setMaxVisibleItems(QCompleter* theWrappedObject, int  maxItems);
   QCompleter::ModelSorting  modelSorting(QCompleter* theWrappedObject) const;
   Qt::CaseSensitivity  caseSensitivity(QCompleter* theWrappedObject) const;
   QString  currentCompletion(QCompleter* theWrappedObject) const;
   void setModel(QCompleter* theWrappedObject, QAbstractItemModel*  c);
   QStringList  splitPath(QCompleter* theWrappedObject, const QString&  path) const;
   void setCompletionRole(QCompleter* theWrappedObject, int  role);
   QModelIndex  currentIndex(QCompleter* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QCOMPLETER_H
