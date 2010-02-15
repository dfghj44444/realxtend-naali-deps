#ifndef PYTHONQTWRAPPER_QSQLQUERY_H
#define PYTHONQTWRAPPER_QSQLQUERY_H

#include <qsqlquery.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtWrapper_QSqlQuery : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BatchExecutionMode )
enum BatchExecutionMode{
  ValuesAsRows = QSqlQuery::ValuesAsRows,   ValuesAsColumns = QSqlQuery::ValuesAsColumns};
public slots:
QSqlQuery* new_QSqlQuery(QSqlDatabase  db);
QSqlQuery* new_QSqlQuery(QSqlResult*  r);
QSqlQuery* new_QSqlQuery(const QSqlQuery&  other);
QSqlQuery* new_QSqlQuery(const QString&  query = QString(), QSqlDatabase  db = QSqlDatabase());
void delete_QSqlQuery(QSqlQuery* obj) { delete obj; } 
   int  numRowsAffected(QSqlQuery* theWrappedObject) const;
   bool  prepare(QSqlQuery* theWrappedObject, const QString&  query);
   QVariant  value(QSqlQuery* theWrappedObject, int  i) const;
   int  at(QSqlQuery* theWrappedObject) const;
   const QSqlDriver*  driver(QSqlQuery* theWrappedObject) const;
   bool  seek(QSqlQuery* theWrappedObject, int  i, bool  relative = false);
   void addBindValue(QSqlQuery* theWrappedObject, const QVariant&  val, QSql::ParamType  type = QSql::In);
   void bindValue(QSqlQuery* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type = QSql::In);
   bool  exec(QSqlQuery* theWrappedObject);
   bool  isSelect(QSqlQuery* theWrappedObject) const;
   QVariant  boundValue(QSqlQuery* theWrappedObject, int  pos) const;
   QSqlError  lastError(QSqlQuery* theWrappedObject) const;
   int  size(QSqlQuery* theWrappedObject) const;
   QMap<QString , QVariant >  boundValues(QSqlQuery* theWrappedObject) const;
   QSqlRecord  record(QSqlQuery* theWrappedObject) const;
   bool  nextResult(QSqlQuery* theWrappedObject);
   bool  isActive(QSqlQuery* theWrappedObject) const;
   void setForwardOnly(QSqlQuery* theWrappedObject, bool  forward);
   void setNumericalPrecisionPolicy(QSqlQuery* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy);
   void bindValue(QSqlQuery* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type = QSql::In);
   bool  last(QSqlQuery* theWrappedObject);
   void clear(QSqlQuery* theWrappedObject);
   bool  isForwardOnly(QSqlQuery* theWrappedObject) const;
   void finish(QSqlQuery* theWrappedObject);
   bool  first(QSqlQuery* theWrappedObject);
   QVariant  lastInsertId(QSqlQuery* theWrappedObject) const;
   QSql::NumericalPrecisionPolicy  numericalPrecisionPolicy(QSqlQuery* theWrappedObject) const;
   QVariant  boundValue(QSqlQuery* theWrappedObject, const QString&  placeholder) const;
   bool  previous(QSqlQuery* theWrappedObject);
   bool  exec(QSqlQuery* theWrappedObject, const QString&  query);
   bool  execBatch(QSqlQuery* theWrappedObject, QSqlQuery::BatchExecutionMode  mode = QSqlQuery::ValuesAsRows);
   const QSqlResult*  result(QSqlQuery* theWrappedObject) const;
   bool  isNull(QSqlQuery* theWrappedObject, int  field) const;
   QString  executedQuery(QSqlQuery* theWrappedObject) const;
   bool  isValid(QSqlQuery* theWrappedObject) const;
   bool  next(QSqlQuery* theWrappedObject);
   QString  lastQuery(QSqlQuery* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSQLQUERY_H
