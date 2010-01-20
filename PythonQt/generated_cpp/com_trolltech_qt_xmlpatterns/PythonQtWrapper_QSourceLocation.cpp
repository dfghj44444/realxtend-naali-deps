#include "PythonQtWrapper_QSourceLocation.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qsourcelocation.h>
#include <qurl.h>

QSourceLocation* PythonQtWrapper_QSourceLocation::new_QSourceLocation()
{ 
return new QSourceLocation(); }

QSourceLocation* PythonQtWrapper_QSourceLocation::new_QSourceLocation(const QSourceLocation&  other)
{ 
return new QSourceLocation(other); }

QSourceLocation* PythonQtWrapper_QSourceLocation::new_QSourceLocation(const QUrl&  uri, int  line, int  column)
{ 
return new QSourceLocation(uri, line, column); }

bool  PythonQtWrapper_QSourceLocation::operator_equal(QSourceLocation* theWrappedObject, const QSourceLocation&  other) const
{
  return ( (*theWrappedObject)== other);
}

qint64  PythonQtWrapper_QSourceLocation::line(QSourceLocation* theWrappedObject) const
{
  return ( theWrappedObject->line());
}

QUrl  PythonQtWrapper_QSourceLocation::uri(QSourceLocation* theWrappedObject) const
{
  return ( theWrappedObject->uri());
}

void PythonQtWrapper_QSourceLocation::setColumn(QSourceLocation* theWrappedObject, qint64  newColumn)
{
  ( theWrappedObject->setColumn(newColumn));
}

qint64  PythonQtWrapper_QSourceLocation::column(QSourceLocation* theWrappedObject) const
{
  return ( theWrappedObject->column());
}

bool  PythonQtWrapper_QSourceLocation::isNull(QSourceLocation* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

void PythonQtWrapper_QSourceLocation::setLine(QSourceLocation* theWrappedObject, qint64  newLine)
{
  ( theWrappedObject->setLine(newLine));
}

void PythonQtWrapper_QSourceLocation::setUri(QSourceLocation* theWrappedObject, const QUrl&  newUri)
{
  ( theWrappedObject->setUri(newUri));
}

QString PythonQtWrapper_QSourceLocation::toString(QSourceLocation* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

