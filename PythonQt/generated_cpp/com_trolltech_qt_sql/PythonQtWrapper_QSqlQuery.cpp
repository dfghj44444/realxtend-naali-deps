#include "PythonQtWrapper_QSqlQuery.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QSize>
#include <QSqlError>
#include <QSqlRecord>
#include <QStringList>
#include <QVariant>
#include <qsqldatabase.h>
#include <qsqldriver.h>
#include <qsqlerror.h>
#include <qsqlquery.h>
#include <qsqlrecord.h>
#include <qsqlresult.h>

QSqlQuery* PythonQtWrapper_QSqlQuery::new_QSqlQuery(QSqlDatabase  db)
{ 
return new QSqlQuery(db); }

QSqlQuery* PythonQtWrapper_QSqlQuery::new_QSqlQuery(QSqlResult*  r)
{ 
return new QSqlQuery(r); }

QSqlQuery* PythonQtWrapper_QSqlQuery::new_QSqlQuery(const QSqlQuery&  other)
{ 
return new QSqlQuery(other); }

QSqlQuery* PythonQtWrapper_QSqlQuery::new_QSqlQuery(const QString&  query, QSqlDatabase  db)
{ 
return new QSqlQuery(query, db); }

int  PythonQtWrapper_QSqlQuery::numRowsAffected(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->numRowsAffected());
}

bool  PythonQtWrapper_QSqlQuery::prepare(QSqlQuery* theWrappedObject, const QString&  query)
{
  return ( theWrappedObject->prepare(query));
}

QVariant  PythonQtWrapper_QSqlQuery::value(QSqlQuery* theWrappedObject, int  i) const
{
  return ( theWrappedObject->value(i));
}

int  PythonQtWrapper_QSqlQuery::at(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->at());
}

const QSqlDriver*  PythonQtWrapper_QSqlQuery::driver(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->driver());
}

bool  PythonQtWrapper_QSqlQuery::seek(QSqlQuery* theWrappedObject, int  i, bool  relative)
{
  return ( theWrappedObject->seek(i, relative));
}

void PythonQtWrapper_QSqlQuery::addBindValue(QSqlQuery* theWrappedObject, const QVariant&  val, QSql::ParamType  type)
{
  ( theWrappedObject->addBindValue(val, type));
}

void PythonQtWrapper_QSqlQuery::bindValue(QSqlQuery* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type)
{
  ( theWrappedObject->bindValue(placeholder, val, type));
}

bool  PythonQtWrapper_QSqlQuery::exec(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->exec());
}

bool  PythonQtWrapper_QSqlQuery::isSelect(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isSelect());
}

QVariant  PythonQtWrapper_QSqlQuery::boundValue(QSqlQuery* theWrappedObject, int  pos) const
{
  return ( theWrappedObject->boundValue(pos));
}

QSqlError  PythonQtWrapper_QSqlQuery::lastError(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->lastError());
}

int  PythonQtWrapper_QSqlQuery::size(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QMap<QString , QVariant >  PythonQtWrapper_QSqlQuery::boundValues(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->boundValues());
}

QSqlRecord  PythonQtWrapper_QSqlQuery::record(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->record());
}

bool  PythonQtWrapper_QSqlQuery::nextResult(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->nextResult());
}

bool  PythonQtWrapper_QSqlQuery::isActive(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

void PythonQtWrapper_QSqlQuery::setForwardOnly(QSqlQuery* theWrappedObject, bool  forward)
{
  ( theWrappedObject->setForwardOnly(forward));
}

void PythonQtWrapper_QSqlQuery::setNumericalPrecisionPolicy(QSqlQuery* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy)
{
  ( theWrappedObject->setNumericalPrecisionPolicy(precisionPolicy));
}

void PythonQtWrapper_QSqlQuery::bindValue(QSqlQuery* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type)
{
  ( theWrappedObject->bindValue(pos, val, type));
}

bool  PythonQtWrapper_QSqlQuery::last(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->last());
}

void PythonQtWrapper_QSqlQuery::clear(QSqlQuery* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QSqlQuery::isForwardOnly(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isForwardOnly());
}

void PythonQtWrapper_QSqlQuery::finish(QSqlQuery* theWrappedObject)
{
  ( theWrappedObject->finish());
}

bool  PythonQtWrapper_QSqlQuery::first(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->first());
}

QVariant  PythonQtWrapper_QSqlQuery::lastInsertId(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->lastInsertId());
}

QSql::NumericalPrecisionPolicy  PythonQtWrapper_QSqlQuery::numericalPrecisionPolicy(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->numericalPrecisionPolicy());
}

QVariant  PythonQtWrapper_QSqlQuery::boundValue(QSqlQuery* theWrappedObject, const QString&  placeholder) const
{
  return ( theWrappedObject->boundValue(placeholder));
}

bool  PythonQtWrapper_QSqlQuery::previous(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->previous());
}

bool  PythonQtWrapper_QSqlQuery::exec(QSqlQuery* theWrappedObject, const QString&  query)
{
  return ( theWrappedObject->exec(query));
}

bool  PythonQtWrapper_QSqlQuery::execBatch(QSqlQuery* theWrappedObject, QSqlQuery::BatchExecutionMode  mode)
{
  return ( theWrappedObject->execBatch(mode));
}

const QSqlResult*  PythonQtWrapper_QSqlQuery::result(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->result());
}

bool  PythonQtWrapper_QSqlQuery::isNull(QSqlQuery* theWrappedObject, int  field) const
{
  return ( theWrappedObject->isNull(field));
}

QString  PythonQtWrapper_QSqlQuery::executedQuery(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->executedQuery());
}

bool  PythonQtWrapper_QSqlQuery::isValid(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QSqlQuery::next(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->next());
}

QString  PythonQtWrapper_QSqlQuery::lastQuery(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->lastQuery());
}

