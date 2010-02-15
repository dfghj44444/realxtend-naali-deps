#ifndef PYTHONQTWRAPPER_QSQLDRIVER_H
#define PYTHONQTWRAPPER_QSQLDRIVER_H

#include <qsqldriver.h>
#include <QObject>

#include <PythonQt.h>

#include <QSize>
#include <QSqlError>
#include <QSqlIndex>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsqldriver.h>
#include <qsqlerror.h>
#include <qsqlfield.h>
#include <qsqlindex.h>
#include <qsqlrecord.h>
#include <qsqlresult.h>
#include <qstringlist.h>

class PythonQtShell_QSqlDriver : public QSqlDriver
{
public:
    PythonQtShell_QSqlDriver(QObject*  parent = 0):QSqlDriver(parent),_wrapper(NULL) {};

virtual bool  beginTransaction();
virtual void childEvent(QChildEvent*  arg__1);
virtual void close();
virtual bool  commitTransaction();
virtual QSqlResult*  createResult() const;
virtual void customEvent(QEvent*  arg__1);
virtual QString  escapeIdentifier(const QString&  identifier, QSqlDriver::IdentifierType  type) const;
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QString  formatValue(const QSqlField&  field, bool  trimStrings = false) const;
virtual QVariant  handle() const;
virtual bool  hasFeature(QSqlDriver::DriverFeature  f) const;
virtual bool  isOpen() const;
virtual bool  open(const QString&  db, const QString&  user = QString(), const QString&  password = QString(), const QString&  host = QString(), int  port = -1, const QString&  connOpts = QString());
virtual QSqlIndex  primaryIndex(const QString&  tableName) const;
virtual QSqlRecord  record(const QString&  tableName) const;
virtual bool  rollbackTransaction();
virtual void setLastError(const QSqlError&  e);
virtual void setOpen(bool  o);
virtual void setOpenError(bool  e);
virtual QString  sqlStatement(QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const;
virtual QStringList  tables(QSql::TableType  tableType) const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSqlDriver : public QSqlDriver
{ public:
inline QSqlRecord  promoted_record(const QString&  tableName) const { return QSqlDriver::record(tableName); }
inline void promoted_setOpenError(bool  e) { QSqlDriver::setOpenError(e); }
inline QSqlIndex  promoted_primaryIndex(const QString&  tableName) const { return QSqlDriver::primaryIndex(tableName); }
inline bool  promoted_commitTransaction() { return QSqlDriver::commitTransaction(); }
inline bool  promoted_beginTransaction() { return QSqlDriver::beginTransaction(); }
inline QString  promoted_escapeIdentifier(const QString&  identifier, QSqlDriver::IdentifierType  type) const { return QSqlDriver::escapeIdentifier(identifier, type); }
inline QVariant  promoted_handle() const { return QSqlDriver::handle(); }
inline bool  promoted_rollbackTransaction() { return QSqlDriver::rollbackTransaction(); }
inline QString  promoted_formatValue(const QSqlField&  field, bool  trimStrings = false) const { return QSqlDriver::formatValue(field, trimStrings); }
inline QString  promoted_sqlStatement(QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const { return QSqlDriver::sqlStatement(type, tableName, rec, preparedStatement); }
inline void promoted_setLastError(const QSqlError&  e) { QSqlDriver::setLastError(e); }
inline void promoted_setOpen(bool  o) { QSqlDriver::setOpen(o); }
inline bool  promoted_isOpen() const { return QSqlDriver::isOpen(); }
inline QStringList  promoted_tables(QSql::TableType  tableType) const { return QSqlDriver::tables(tableType); }
};

class PythonQtWrapper_QSqlDriver : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StatementType IdentifierType DriverFeature )
enum StatementType{
  WhereStatement = QSqlDriver::WhereStatement,   SelectStatement = QSqlDriver::SelectStatement,   UpdateStatement = QSqlDriver::UpdateStatement,   InsertStatement = QSqlDriver::InsertStatement,   DeleteStatement = QSqlDriver::DeleteStatement};
enum IdentifierType{
  FieldName = QSqlDriver::FieldName,   TableName = QSqlDriver::TableName};
enum DriverFeature{
  Transactions = QSqlDriver::Transactions,   QuerySize = QSqlDriver::QuerySize,   BLOB = QSqlDriver::BLOB,   Unicode = QSqlDriver::Unicode,   PreparedQueries = QSqlDriver::PreparedQueries,   NamedPlaceholders = QSqlDriver::NamedPlaceholders,   PositionalPlaceholders = QSqlDriver::PositionalPlaceholders,   LastInsertId = QSqlDriver::LastInsertId,   BatchOperations = QSqlDriver::BatchOperations,   SimpleLocking = QSqlDriver::SimpleLocking,   LowPrecisionNumbers = QSqlDriver::LowPrecisionNumbers,   EventNotifications = QSqlDriver::EventNotifications,   FinishQuery = QSqlDriver::FinishQuery,   MultipleResultSets = QSqlDriver::MultipleResultSets};
public slots:
QSqlDriver* new_QSqlDriver(QObject*  parent = 0);
void delete_QSqlDriver(QSqlDriver* obj) { delete obj; } 
   bool  subscribeToNotification(QSqlDriver* theWrappedObject, const QString&  name);
   QSqlRecord  record(QSqlDriver* theWrappedObject, const QString&  tableName) const;
   void setOpenError(QSqlDriver* theWrappedObject, bool  e);
   QSqlError  lastError(QSqlDriver* theWrappedObject) const;
   bool  unsubscribeFromNotification(QSqlDriver* theWrappedObject, const QString&  name);
   QSqlIndex  primaryIndex(QSqlDriver* theWrappedObject, const QString&  tableName) const;
   bool  commitTransaction(QSqlDriver* theWrappedObject);
   bool  beginTransaction(QSqlDriver* theWrappedObject);
   bool  isOpenError(QSqlDriver* theWrappedObject) const;
   QString  escapeIdentifier(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const;
   void setNumericalPrecisionPolicy(QSqlDriver* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy);
   QStringList  subscribedToNotifications(QSqlDriver* theWrappedObject) const;
   QVariant  handle(QSqlDriver* theWrappedObject) const;
   bool  isIdentifierEscaped(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const;
   bool  rollbackTransaction(QSqlDriver* theWrappedObject);
   QString  formatValue(QSqlDriver* theWrappedObject, const QSqlField&  field, bool  trimStrings = false) const;
   QSql::NumericalPrecisionPolicy  numericalPrecisionPolicy(QSqlDriver* theWrappedObject) const;
   QString  sqlStatement(QSqlDriver* theWrappedObject, QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const;
   void setLastError(QSqlDriver* theWrappedObject, const QSqlError&  e);
   QString  stripDelimiters(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const;
   void setOpen(QSqlDriver* theWrappedObject, bool  o);
   bool  isOpen(QSqlDriver* theWrappedObject) const;
   QStringList  tables(QSqlDriver* theWrappedObject, QSql::TableType  tableType) const;
};

#endif // PYTHONQTWRAPPER_QSQLDRIVER_H
