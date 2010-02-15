#ifndef PYTHONQTWRAPPER_QSQLFIELD_H
#define PYTHONQTWRAPPER_QSQLFIELD_H

#include <qsqlfield.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qsqlfield.h>

class PythonQtWrapper_QSqlField : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RequiredStatus )
enum RequiredStatus{
  Unknown = QSqlField::Unknown,   Optional = QSqlField::Optional,   Required = QSqlField::Required};
public slots:
QSqlField* new_QSqlField(const QSqlField&  other);
QSqlField* new_QSqlField(const QString&  fieldName = QString(), QVariant::Type  type = QVariant::Invalid);
void delete_QSqlField(QSqlField* obj) { delete obj; } 
   void setType(QSqlField* theWrappedObject, QVariant::Type  type);
   QSqlField::RequiredStatus  requiredStatus(QSqlField* theWrappedObject) const;
   void setGenerated(QSqlField* theWrappedObject, bool  gen);
   void setPrecision(QSqlField* theWrappedObject, int  precision);
   void setRequiredStatus(QSqlField* theWrappedObject, QSqlField::RequiredStatus  status);
   bool  isReadOnly(QSqlField* theWrappedObject) const;
   void setDefaultValue(QSqlField* theWrappedObject, const QVariant&  value);
   bool  operator_equal(QSqlField* theWrappedObject, const QSqlField&  other) const;
   bool  isValid(QSqlField* theWrappedObject) const;
   int  length(QSqlField* theWrappedObject) const;
   void setValue(QSqlField* theWrappedObject, const QVariant&  value);
   bool  isAutoValue(QSqlField* theWrappedObject) const;
   void clear(QSqlField* theWrappedObject);
   void setName(QSqlField* theWrappedObject, const QString&  name);
   bool  isGenerated(QSqlField* theWrappedObject) const;
   void setRequired(QSqlField* theWrappedObject, bool  required);
   bool  isNull(QSqlField* theWrappedObject) const;
   int  precision(QSqlField* theWrappedObject) const;
   void setSqlType(QSqlField* theWrappedObject, int  type);
   QVariant  value(QSqlField* theWrappedObject) const;
   void setAutoValue(QSqlField* theWrappedObject, bool  autoVal);
   QVariant::Type  type(QSqlField* theWrappedObject) const;
   int  typeID(QSqlField* theWrappedObject) const;
   QString  name(QSqlField* theWrappedObject) const;
   void setLength(QSqlField* theWrappedObject, int  fieldLength);
   QVariant  defaultValue(QSqlField* theWrappedObject) const;
   void setReadOnly(QSqlField* theWrappedObject, bool  readOnly);
    QString toString(QSqlField*);
};

#endif // PYTHONQTWRAPPER_QSQLFIELD_H
