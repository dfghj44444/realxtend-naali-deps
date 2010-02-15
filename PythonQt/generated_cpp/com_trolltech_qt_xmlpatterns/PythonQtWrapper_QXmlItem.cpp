#include "PythonQtWrapper_QXmlItem.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractxmlnodemodel.h>

QXmlItem* PythonQtWrapper_QXmlItem::new_QXmlItem()
{ 
return new QXmlItem(); }

QXmlItem* PythonQtWrapper_QXmlItem::new_QXmlItem(const QVariant&  atomicValue)
{ 
return new QXmlItem(atomicValue); }

QXmlItem* PythonQtWrapper_QXmlItem::new_QXmlItem(const QXmlItem&  other)
{ 
return new QXmlItem(other); }

QXmlItem* PythonQtWrapper_QXmlItem::new_QXmlItem(const QXmlNodeModelIndex&  node)
{ 
return new QXmlItem(node); }

QVariant  PythonQtWrapper_QXmlItem::toAtomicValue(QXmlItem* theWrappedObject) const
{
  return ( theWrappedObject->toAtomicValue());
}

bool  PythonQtWrapper_QXmlItem::isNull(QXmlItem* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QXmlNodeModelIndex  PythonQtWrapper_QXmlItem::toNodeModelIndex(QXmlItem* theWrappedObject) const
{
  return ( theWrappedObject->toNodeModelIndex());
}

bool  PythonQtWrapper_QXmlItem::isNode(QXmlItem* theWrappedObject) const
{
  return ( theWrappedObject->isNode());
}

bool  PythonQtWrapper_QXmlItem::isAtomicValue(QXmlItem* theWrappedObject) const
{
  return ( theWrappedObject->isAtomicValue());
}

