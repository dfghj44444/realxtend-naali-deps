#ifndef PYTHONQTWRAPPER_QSQLRECORD_H
#define PYTHONQTWRAPPER_QSQLRECORD_H

#include <qsqlrecord.h>
#include <QObject>

#include <PythonQt.h>

#include <QSqlField>
#include <QVariant>
#include <qsqlfield.h>
#include <qsqlrecord.h>

class PythonQtWrapper_QSqlRecord : public QObject
{ Q_OBJECT
public:
public slots:
QSqlRecord* new_QSqlRecord();
QSqlRecord* new_QSqlRecord(const QSqlRecord&  other);
void delete_QSqlRecord(QSqlRecord* obj) { delete obj; } 
   void clearValues(QSqlRecord* theWrappedObject);
   bool  isNull(QSqlRecord* theWrappedObject, int  i) const;
   void clear(QSqlRecord* theWrappedObject);
   bool  operator_equal(QSqlRecord* theWrappedObject, const QSqlRecord&  other) const;
   QString  fieldName(QSqlRecord* theWrappedObject, int  i) const;
   void setValue(QSqlRecord* theWrappedObject, const QString&  name, const QVariant&  val);
   void insert(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field);
   void remove(QSqlRecord* theWrappedObject, int  pos);
   bool  isGenerated(QSqlRecord* theWrappedObject, const QString&  name) const;
   void setValue(QSqlRecord* theWrappedObject, int  i, const QVariant&  val);
   int  count(QSqlRecord* theWrappedObject) const;
   bool  isEmpty(QSqlRecord* theWrappedObject) const;
   void replace(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field);
   void setGenerated(QSqlRecord* theWrappedObject, int  i, bool  generated);
   QSqlField  field(QSqlRecord* theWrappedObject, int  i) const;
   void setNull(QSqlRecord* theWrappedObject, const QString&  name);
   QSqlField  field(QSqlRecord* theWrappedObject, const QString&  name) const;
   void setNull(QSqlRecord* theWrappedObject, int  i);
   void append(QSqlRecord* theWrappedObject, const QSqlField&  field);
   bool  contains(QSqlRecord* theWrappedObject, const QString&  name) const;
   int  indexOf(QSqlRecord* theWrappedObject, const QString&  name) const;
   QVariant  value(QSqlRecord* theWrappedObject, int  i) const;
   QVariant  value(QSqlRecord* theWrappedObject, const QString&  name) const;
   void setGenerated(QSqlRecord* theWrappedObject, const QString&  name, bool  generated);
   bool  isGenerated(QSqlRecord* theWrappedObject, int  i) const;
   bool  isNull(QSqlRecord* theWrappedObject, const QString&  name) const;
    QString toString(QSqlRecord*);
};

#endif // PYTHONQTWRAPPER_QSQLRECORD_H
