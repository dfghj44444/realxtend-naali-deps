#ifndef PYTHONQTWRAPPER_QSQLERROR_H
#define PYTHONQTWRAPPER_QSQLERROR_H

#include <qsqlerror.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qsqlerror.h>

class PythonQtWrapper_QSqlError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ErrorType )
enum ErrorType{
  NoError = QSqlError::NoError,   ConnectionError = QSqlError::ConnectionError,   StatementError = QSqlError::StatementError,   TransactionError = QSqlError::TransactionError,   UnknownError = QSqlError::UnknownError};
public slots:
QSqlError* new_QSqlError(const QSqlError&  other);
QSqlError* new_QSqlError(const QString&  driverText = QString(), const QString&  databaseText = QString(), QSqlError::ErrorType  type = QSqlError::NoError, int  number = -1);
void delete_QSqlError(QSqlError* obj) { delete obj; } 
   void setType(QSqlError* theWrappedObject, QSqlError::ErrorType  type);
   QString  text(QSqlError* theWrappedObject) const;
   void setNumber(QSqlError* theWrappedObject, int  number);
   QString  databaseText(QSqlError* theWrappedObject) const;
   QString  driverText(QSqlError* theWrappedObject) const;
   bool  isValid(QSqlError* theWrappedObject) const;
   void setDriverText(QSqlError* theWrappedObject, const QString&  driverText);
   QSqlError::ErrorType  type(QSqlError* theWrappedObject) const;
   void setDatabaseText(QSqlError* theWrappedObject, const QString&  databaseText);
   int  number(QSqlError* theWrappedObject) const;
    QString toString(QSqlError*);
};

#endif // PYTHONQTWRAPPER_QSQLERROR_H
