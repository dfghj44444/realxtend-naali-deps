#include "PythonQtWrapper_QSqlField.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qsqlfield.h>

QSqlField* PythonQtWrapper_QSqlField::new_QSqlField(const QSqlField&  other)
{ 
return new QSqlField(other); }

QSqlField* PythonQtWrapper_QSqlField::new_QSqlField(const QString&  fieldName, QVariant::Type  type)
{ 
return new QSqlField(fieldName, type); }

void PythonQtWrapper_QSqlField::setType(QSqlField* theWrappedObject, QVariant::Type  type)
{
  ( theWrappedObject->setType(type));
}

QSqlField::RequiredStatus  PythonQtWrapper_QSqlField::requiredStatus(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->requiredStatus());
}

void PythonQtWrapper_QSqlField::setGenerated(QSqlField* theWrappedObject, bool  gen)
{
  ( theWrappedObject->setGenerated(gen));
}

void PythonQtWrapper_QSqlField::setPrecision(QSqlField* theWrappedObject, int  precision)
{
  ( theWrappedObject->setPrecision(precision));
}

void PythonQtWrapper_QSqlField::setRequiredStatus(QSqlField* theWrappedObject, QSqlField::RequiredStatus  status)
{
  ( theWrappedObject->setRequiredStatus(status));
}

bool  PythonQtWrapper_QSqlField::isReadOnly(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isReadOnly());
}

void PythonQtWrapper_QSqlField::setDefaultValue(QSqlField* theWrappedObject, const QVariant&  value)
{
  ( theWrappedObject->setDefaultValue(value));
}

bool  PythonQtWrapper_QSqlField::operator_equal(QSqlField* theWrappedObject, const QSqlField&  other) const
{
  return ( (*theWrappedObject)== other);
}

bool  PythonQtWrapper_QSqlField::isValid(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QSqlField::length(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

void PythonQtWrapper_QSqlField::setValue(QSqlField* theWrappedObject, const QVariant&  value)
{
  ( theWrappedObject->setValue(value));
}

bool  PythonQtWrapper_QSqlField::isAutoValue(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isAutoValue());
}

void PythonQtWrapper_QSqlField::clear(QSqlField* theWrappedObject)
{
  ( theWrappedObject->clear());
}

void PythonQtWrapper_QSqlField::setName(QSqlField* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setName(name));
}

bool  PythonQtWrapper_QSqlField::isGenerated(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isGenerated());
}

void PythonQtWrapper_QSqlField::setRequired(QSqlField* theWrappedObject, bool  required)
{
  ( theWrappedObject->setRequired(required));
}

bool  PythonQtWrapper_QSqlField::isNull(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

int  PythonQtWrapper_QSqlField::precision(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->precision());
}

void PythonQtWrapper_QSqlField::setSqlType(QSqlField* theWrappedObject, int  type)
{
  ( theWrappedObject->setSqlType(type));
}

QVariant  PythonQtWrapper_QSqlField::value(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->value());
}

void PythonQtWrapper_QSqlField::setAutoValue(QSqlField* theWrappedObject, bool  autoVal)
{
  ( theWrappedObject->setAutoValue(autoVal));
}

QVariant::Type  PythonQtWrapper_QSqlField::type(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

int  PythonQtWrapper_QSqlField::typeID(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->typeID());
}

QString  PythonQtWrapper_QSqlField::name(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

void PythonQtWrapper_QSqlField::setLength(QSqlField* theWrappedObject, int  fieldLength)
{
  ( theWrappedObject->setLength(fieldLength));
}

QVariant  PythonQtWrapper_QSqlField::defaultValue(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->defaultValue());
}

void PythonQtWrapper_QSqlField::setReadOnly(QSqlField* theWrappedObject, bool  readOnly)
{
  ( theWrappedObject->setReadOnly(readOnly));
}

QString PythonQtWrapper_QSqlField::toString(QSqlField* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

