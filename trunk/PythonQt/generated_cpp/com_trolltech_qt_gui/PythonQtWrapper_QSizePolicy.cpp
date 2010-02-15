#include "PythonQtWrapper_QSizePolicy.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qsizepolicy.h>

QSizePolicy* PythonQtWrapper_QSizePolicy::new_QSizePolicy()
{ 
return new QSizePolicy(); }

QSizePolicy* PythonQtWrapper_QSizePolicy::new_QSizePolicy(QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical)
{ 
return new QSizePolicy(horizontal, vertical); }

QSizePolicy* PythonQtWrapper_QSizePolicy::new_QSizePolicy(QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical, QSizePolicy::ControlType  type)
{ 
return new QSizePolicy(horizontal, vertical, type); }

void PythonQtWrapper_QSizePolicy::transpose(QSizePolicy* theWrappedObject)
{
  ( theWrappedObject->transpose());
}

QSizePolicy::Policy  PythonQtWrapper_QSizePolicy::verticalPolicy(QSizePolicy* theWrappedObject) const
{
  return ( theWrappedObject->verticalPolicy());
}

int  PythonQtWrapper_QSizePolicy::verticalStretch(QSizePolicy* theWrappedObject) const
{
  return ( theWrappedObject->verticalStretch());
}

void PythonQtWrapper_QSizePolicy::setHorizontalPolicy(QSizePolicy* theWrappedObject, QSizePolicy::Policy  d)
{
  ( theWrappedObject->setHorizontalPolicy(d));
}

void PythonQtWrapper_QSizePolicy::setControlType(QSizePolicy* theWrappedObject, QSizePolicy::ControlType  type)
{
  ( theWrappedObject->setControlType(type));
}

void PythonQtWrapper_QSizePolicy::setHeightForWidth(QSizePolicy* theWrappedObject, bool  b)
{
  ( theWrappedObject->setHeightForWidth(b));
}

void PythonQtWrapper_QSizePolicy::readFrom(QSizePolicy* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

Qt::Orientations  PythonQtWrapper_QSizePolicy::expandingDirections(QSizePolicy* theWrappedObject) const
{
  return ( theWrappedObject->expandingDirections());
}

bool  PythonQtWrapper_QSizePolicy::hasHeightForWidth(QSizePolicy* theWrappedObject) const
{
  return ( theWrappedObject->hasHeightForWidth());
}

QSizePolicy::ControlType  PythonQtWrapper_QSizePolicy::controlType(QSizePolicy* theWrappedObject) const
{
  return ( theWrappedObject->controlType());
}

void PythonQtWrapper_QSizePolicy::setVerticalPolicy(QSizePolicy* theWrappedObject, QSizePolicy::Policy  d)
{
  ( theWrappedObject->setVerticalPolicy(d));
}

void PythonQtWrapper_QSizePolicy::writeTo(QSizePolicy* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QSizePolicy::operator_equal(QSizePolicy* theWrappedObject, const QSizePolicy&  s) const
{
  return ( (*theWrappedObject)== s);
}

int  PythonQtWrapper_QSizePolicy::horizontalStretch(QSizePolicy* theWrappedObject) const
{
  return ( theWrappedObject->horizontalStretch());
}

void PythonQtWrapper_QSizePolicy::setVerticalStretch(QSizePolicy* theWrappedObject, uchar  stretchFactor)
{
  ( theWrappedObject->setVerticalStretch(stretchFactor));
}

QSizePolicy::Policy  PythonQtWrapper_QSizePolicy::horizontalPolicy(QSizePolicy* theWrappedObject) const
{
  return ( theWrappedObject->horizontalPolicy());
}

void PythonQtWrapper_QSizePolicy::setHorizontalStretch(QSizePolicy* theWrappedObject, uchar  stretchFactor)
{
  ( theWrappedObject->setHorizontalStretch(stretchFactor));
}

