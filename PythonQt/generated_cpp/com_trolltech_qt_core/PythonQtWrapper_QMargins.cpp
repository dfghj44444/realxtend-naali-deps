#include "PythonQtWrapper_QMargins.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>

QMargins* PythonQtWrapper_QMargins::new_QMargins()
{ 
return new QMargins(); }

QMargins* PythonQtWrapper_QMargins::new_QMargins(int  left, int  top, int  right, int  bottom)
{ 
return new QMargins(left, top, right, bottom); }

void PythonQtWrapper_QMargins::setRight(QMargins* theWrappedObject, int  right)
{
  ( theWrappedObject->setRight(right));
}

bool  PythonQtWrapper_QMargins::operator_equal(QMargins* theWrappedObject, const QMargins&  m2)
{
  return ( (*theWrappedObject)== m2);
}

int  PythonQtWrapper_QMargins::left(QMargins* theWrappedObject) const
{
  return ( theWrappedObject->left());
}

bool  PythonQtWrapper_QMargins::isNull(QMargins* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

void PythonQtWrapper_QMargins::setTop(QMargins* theWrappedObject, int  top)
{
  ( theWrappedObject->setTop(top));
}

void PythonQtWrapper_QMargins::setLeft(QMargins* theWrappedObject, int  left)
{
  ( theWrappedObject->setLeft(left));
}

int  PythonQtWrapper_QMargins::top(QMargins* theWrappedObject) const
{
  return ( theWrappedObject->top());
}

void PythonQtWrapper_QMargins::setBottom(QMargins* theWrappedObject, int  bottom)
{
  ( theWrappedObject->setBottom(bottom));
}

int  PythonQtWrapper_QMargins::right(QMargins* theWrappedObject) const
{
  return ( theWrappedObject->right());
}

int  PythonQtWrapper_QMargins::bottom(QMargins* theWrappedObject) const
{
  return ( theWrappedObject->bottom());
}

QString PythonQtWrapper_QMargins::toString(QMargins* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

