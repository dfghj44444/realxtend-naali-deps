#ifndef PYTHONQTWRAPPER_QITEMSELECTIONRANGE_H
#define PYTHONQTWRAPPER_QITEMSELECTIONRANGE_H

#include <qitemselectionmodel.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qitemselectionmodel.h>
#include <qlist.h>

class PythonQtWrapper_QItemSelectionRange : public QObject
{ Q_OBJECT
public:
public slots:
QItemSelectionRange* new_QItemSelectionRange();
QItemSelectionRange* new_QItemSelectionRange(const QItemSelectionRange&  other);
QItemSelectionRange* new_QItemSelectionRange(const QModelIndex&  index);
QItemSelectionRange* new_QItemSelectionRange(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
void delete_QItemSelectionRange(QItemSelectionRange* obj) { delete obj; } 
   const QAbstractItemModel*  model(QItemSelectionRange* theWrappedObject) const;
   int  width(QItemSelectionRange* theWrappedObject) const;
   int  height(QItemSelectionRange* theWrappedObject) const;
   QList<QModelIndex >  indexes(QItemSelectionRange* theWrappedObject) const;
   QModelIndex  topLeft(QItemSelectionRange* theWrappedObject) const;
   int  bottom(QItemSelectionRange* theWrappedObject) const;
   bool  contains(QItemSelectionRange* theWrappedObject, int  row, int  column, const QModelIndex&  parentIndex) const;
   bool  contains(QItemSelectionRange* theWrappedObject, const QModelIndex&  index) const;
   bool  isValid(QItemSelectionRange* theWrappedObject) const;
   bool  operator_equal(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   int  right(QItemSelectionRange* theWrappedObject) const;
   QItemSelectionRange  intersected(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   int  left(QItemSelectionRange* theWrappedObject) const;
   QModelIndex  parent(QItemSelectionRange* theWrappedObject) const;
   int  top(QItemSelectionRange* theWrappedObject) const;
   bool  intersects(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const;
   QModelIndex  bottomRight(QItemSelectionRange* theWrappedObject) const;
    QString toString(QItemSelectionRange*);
};

#endif // PYTHONQTWRAPPER_QITEMSELECTIONRANGE_H
