#ifndef PYTHONQTWRAPPER_QPROCESSENVIRONMENT_H
#define PYTHONQTWRAPPER_QPROCESSENVIRONMENT_H

#include <qprocess.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qprocess.h>
#include <qstringlist.h>

class PythonQtWrapper_QProcessEnvironment : public QObject
{ Q_OBJECT
public:
public slots:
QProcessEnvironment* new_QProcessEnvironment();
QProcessEnvironment* new_QProcessEnvironment(const QProcessEnvironment&  other);
void delete_QProcessEnvironment(QProcessEnvironment* obj) { delete obj; } 
   bool  isEmpty(QProcessEnvironment* theWrappedObject) const;
   QString  value(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  defaultValue = QString()) const;
   void remove(QProcessEnvironment* theWrappedObject, const QString&  name);
   QProcessEnvironment*  operator_assign(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other);
   QProcessEnvironment  static_QProcessEnvironment_systemEnvironment();
   bool  operator_equal(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other) const;
   void clear(QProcessEnvironment* theWrappedObject);
   void insert(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  value);
   bool  contains(QProcessEnvironment* theWrappedObject, const QString&  name) const;
   QStringList  toStringList(QProcessEnvironment* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPROCESSENVIRONMENT_H
