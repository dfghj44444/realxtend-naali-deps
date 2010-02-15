#ifndef PYTHONQTWRAPPER_QITEMSELECTION_H
#define PYTHONQTWRAPPER_QITEMSELECTION_H

#include <qitemselectionmodel.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qitemselectionmodel.h>
#include <qlist.h>
#include <qvector.h>

class PythonQtWrapper_QItemSelection : public QObject
{ Q_OBJECT
public:
public slots:
QItemSelection* new_QItemSelection();
QItemSelection* new_QItemSelection(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
QItemSelection* new_QItemSelection(const QItemSelection& other) {
QItemSelection* a = new QItemSelection();
*((QItemSelection*)a) = other;
return a; }
void delete_QItemSelection(QItemSelection* obj) { delete obj; } 
   void append(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void prepend(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   QItemSelectionRange  takeAt(QItemSelection* theWrappedObject, int  i);
   QItemSelectionRange  value(QItemSelection* theWrappedObject, int  i) const;
   QVector<QItemSelectionRange >  toVector(QItemSelection* theWrappedObject) const;
   QItemSelectionRange  takeLast(QItemSelection* theWrappedObject);
   QList<QItemSelectionRange >  mid(QItemSelection* theWrappedObject, int  pos, int  length) const;
   bool  removeOne(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   QItemSelectionRange  takeFirst(QItemSelection* theWrappedObject);
   const QItemSelectionRange*  back(QItemSelection* theWrappedObject) const;
   void replace(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  t);
   bool  startsWith(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const;
   int  indexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const;
   bool  contains(QItemSelection* theWrappedObject, const QModelIndex&  index) const;
   int  count(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const;
   void static_QItemSelection_split(const QItemSelectionRange&  range, const QItemSelectionRange&  other, QItemSelection*  result);
   const QItemSelectionRange*  front(QItemSelection* theWrappedObject) const;
   void merge(QItemSelection* theWrappedObject, const QItemSelection&  other, QItemSelectionModel::SelectionFlags  command);
   void removeAt(QItemSelection* theWrappedObject, int  i);
   const QItemSelectionRange*  last(QItemSelection* theWrappedObject) const;
   QList<QModelIndex >  indexes(QItemSelection* theWrappedObject) const;
   QList<QItemSelectionRange >  static_QItemSelection_fromVector(const QVector<QItemSelectionRange >&  vector);
   void push_back(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void clear(QItemSelection* theWrappedObject);
   void push_front(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   int  count(QItemSelection* theWrappedObject) const;
   void pop_back(QItemSelection* theWrappedObject);
   void swap(QItemSelection* theWrappedObject, int  i, int  j);
   bool  isEmpty(QItemSelection* theWrappedObject) const;
   bool  operator_equal(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  l) const;
   void select(QItemSelection* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   void removeLast(QItemSelection* theWrappedObject);
   const QItemSelectionRange*  at(QItemSelection* theWrappedObject, int  i) const;
   const QItemSelectionRange*  first(QItemSelection* theWrappedObject) const;
   void pop_front(QItemSelection* theWrappedObject);
   int  length(QItemSelection* theWrappedObject) const;
   void append(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  t);
   void setSharable(QItemSelection* theWrappedObject, bool  sharable);
   QItemSelectionRange  value(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  defaultValue) const;
   void detachShared(QItemSelection* theWrappedObject);
   void move(QItemSelection* theWrappedObject, int  from, int  to);
   int  removeAll(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   int  lastIndexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const;
   int  size(QItemSelection* theWrappedObject) const;
   bool  empty(QItemSelection* theWrappedObject) const;
   bool  endsWith(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const;
   void removeFirst(QItemSelection* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QITEMSELECTION_H
