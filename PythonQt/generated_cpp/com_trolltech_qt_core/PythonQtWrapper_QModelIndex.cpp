#include "PythonQtWrapper_QModelIndex.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractitemmodel.h>

QModelIndex* PythonQtWrapper_QModelIndex::new_QModelIndex()
{ 
return new QModelIndex(); }

QModelIndex* PythonQtWrapper_QModelIndex::new_QModelIndex(const QModelIndex&  other)
{ 
return new QModelIndex(other); }

QModelIndex  PythonQtWrapper_QModelIndex::child(QModelIndex* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->child(row, column));
}

int  PythonQtWrapper_QModelIndex::column(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->column());
}

Qt::ItemFlags  PythonQtWrapper_QModelIndex::flags(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

bool  PythonQtWrapper_QModelIndex::isValid(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void*  PythonQtWrapper_QModelIndex::internalPointer(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->internalPointer());
}

bool  PythonQtWrapper_QModelIndex::operator_equal(QModelIndex* theWrappedObject, const QModelIndex&  other) const
{
  return ( (*theWrappedObject)== other);
}

int  PythonQtWrapper_QModelIndex::row(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->row());
}

QModelIndex  PythonQtWrapper_QModelIndex::sibling(QModelIndex* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->sibling(row, column));
}

qint64  PythonQtWrapper_QModelIndex::internalId(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->internalId());
}

bool  PythonQtWrapper_QModelIndex::operator_less(QModelIndex* theWrappedObject, const QModelIndex&  other) const
{
  return ( (*theWrappedObject)< other);
}

QVariant  PythonQtWrapper_QModelIndex::data(QModelIndex* theWrappedObject, int  role) const
{
  return ( theWrappedObject->data(role));
}

const QAbstractItemModel*  PythonQtWrapper_QModelIndex::model(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->model());
}

QModelIndex  PythonQtWrapper_QModelIndex::parent(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->parent());
}

QString PythonQtWrapper_QModelIndex::toString(QModelIndex* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

