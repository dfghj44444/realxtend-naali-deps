#include "PythonQtWrapper_QSqlDatabase.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QSize>
#include <QSqlError>
#include <QSqlIndex>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QVariant>
#include <qsqldatabase.h>
#include <qsqldriver.h>
#include <qsqlerror.h>
#include <qsqlindex.h>
#include <qsqlquery.h>
#include <qsqlrecord.h>
#include <qstringlist.h>

QSqlDatabase* PythonQtWrapper_QSqlDatabase::new_QSqlDatabase()
{ 
return new PythonQtShell_QSqlDatabase(); }

QSqlDatabase* PythonQtWrapper_QSqlDatabase::new_QSqlDatabase(const QSqlDatabase&  other)
{ 
return new PythonQtShell_QSqlDatabase(other); }

QSqlDriver*  PythonQtWrapper_QSqlDatabase::driver(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->driver());
}

QStringList  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_connectionNames()
{
  return (QSqlDatabase::connectionNames());
}

void PythonQtWrapper_QSqlDatabase::setHostName(QSqlDatabase* theWrappedObject, const QString&  host)
{
  ( theWrappedObject->setHostName(host));
}

QSqlIndex  PythonQtWrapper_QSqlDatabase::primaryIndex(QSqlDatabase* theWrappedObject, const QString&  tablename) const
{
  return ( theWrappedObject->primaryIndex(tablename));
}

bool  PythonQtWrapper_QSqlDatabase::commit(QSqlDatabase* theWrappedObject)
{
  return ( theWrappedObject->commit());
}

void PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_removeDatabase(const QString&  connectionName)
{
  (QSqlDatabase::removeDatabase(connectionName));
}

QSqlError  PythonQtWrapper_QSqlDatabase::lastError(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->lastError());
}

void PythonQtWrapper_QSqlDatabase::setDatabaseName(QSqlDatabase* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setDatabaseName(name));
}

QStringList  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_drivers()
{
  return (QSqlDatabase::drivers());
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_addDatabase(const QString&  type, const QString&  connectionName)
{
  return (QSqlDatabase::addDatabase(type, connectionName));
}

QSqlRecord  PythonQtWrapper_QSqlDatabase::record(QSqlDatabase* theWrappedObject, const QString&  tablename) const
{
  return ( theWrappedObject->record(tablename));
}

QString  PythonQtWrapper_QSqlDatabase::connectOptions(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->connectOptions());
}

bool  PythonQtWrapper_QSqlDatabase::isOpenError(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->isOpenError());
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_database(const QString&  connectionName, bool  open)
{
  return (QSqlDatabase::database(connectionName, open));
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_addDatabase(QSqlDriver*  driver, const QString&  connectionName)
{
  return (QSqlDatabase::addDatabase(driver, connectionName));
}

QString  PythonQtWrapper_QSqlDatabase::connectionName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->connectionName());
}

QSqlQuery  PythonQtWrapper_QSqlDatabase::exec(QSqlDatabase* theWrappedObject, const QString&  query) const
{
  return ( theWrappedObject->exec(query));
}

QSql::NumericalPrecisionPolicy  PythonQtWrapper_QSqlDatabase::numericalPrecisionPolicy(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->numericalPrecisionPolicy());
}

int  PythonQtWrapper_QSqlDatabase::port(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->port());
}

QString  PythonQtWrapper_QSqlDatabase::hostName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->hostName());
}

QStringList  PythonQtWrapper_QSqlDatabase::tables(QSqlDatabase* theWrappedObject, QSql::TableType  type) const
{
  return ( theWrappedObject->tables(type));
}

bool  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_contains(const QString&  connectionName)
{
  return (QSqlDatabase::contains(connectionName));
}

bool  PythonQtWrapper_QSqlDatabase::isOpen(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->isOpen());
}

QString  PythonQtWrapper_QSqlDatabase::password(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->password());
}

void PythonQtWrapper_QSqlDatabase::setNumericalPrecisionPolicy(QSqlDatabase* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy)
{
  ( theWrappedObject->setNumericalPrecisionPolicy(precisionPolicy));
}

bool  PythonQtWrapper_QSqlDatabase::open(QSqlDatabase* theWrappedObject)
{
  return ( theWrappedObject->open());
}

bool  PythonQtWrapper_QSqlDatabase::rollback(QSqlDatabase* theWrappedObject)
{
  return ( theWrappedObject->rollback());
}

void PythonQtWrapper_QSqlDatabase::setPort(QSqlDatabase* theWrappedObject, int  p)
{
  ( theWrappedObject->setPort(p));
}

bool  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_isDriverAvailable(const QString&  name)
{
  return (QSqlDatabase::isDriverAvailable(name));
}

void PythonQtWrapper_QSqlDatabase::setUserName(QSqlDatabase* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setUserName(name));
}

QString  PythonQtWrapper_QSqlDatabase::databaseName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->databaseName());
}

QString  PythonQtWrapper_QSqlDatabase::userName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->userName());
}

void PythonQtWrapper_QSqlDatabase::setConnectOptions(QSqlDatabase* theWrappedObject, const QString&  options)
{
  ( theWrappedObject->setConnectOptions(options));
}

void PythonQtWrapper_QSqlDatabase::close(QSqlDatabase* theWrappedObject)
{
  ( theWrappedObject->close());
}

void PythonQtWrapper_QSqlDatabase::setPassword(QSqlDatabase* theWrappedObject, const QString&  password)
{
  ( theWrappedObject->setPassword(password));
}

void PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_registerSqlDriver(const QString&  name, QSqlDriverCreatorBase*  creator)
{
  (QSqlDatabase::registerSqlDriver(name, creator));
}

bool  PythonQtWrapper_QSqlDatabase::transaction(QSqlDatabase* theWrappedObject)
{
  return ( theWrappedObject->transaction());
}

bool  PythonQtWrapper_QSqlDatabase::open(QSqlDatabase* theWrappedObject, const QString&  user, const QString&  password)
{
  return ( theWrappedObject->open(user, password));
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_cloneDatabase(const QSqlDatabase&  other, const QString&  connectionName)
{
  return (QSqlDatabase::cloneDatabase(other, connectionName));
}

bool  PythonQtWrapper_QSqlDatabase::isValid(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QSqlDatabase::driverName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->driverName());
}

QString PythonQtWrapper_QSqlDatabase::toString(QSqlDatabase* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

