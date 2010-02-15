#ifndef PYTHONQTWRAPPER_QSOURCELOCATION_H
#define PYTHONQTWRAPPER_QSOURCELOCATION_H

#include <qsourcelocation.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qsourcelocation.h>
#include <qurl.h>

class PythonQtWrapper_QSourceLocation : public QObject
{ Q_OBJECT
public:
public slots:
QSourceLocation* new_QSourceLocation();
QSourceLocation* new_QSourceLocation(const QSourceLocation&  other);
QSourceLocation* new_QSourceLocation(const QUrl&  uri, int  line = -1, int  column = -1);
void delete_QSourceLocation(QSourceLocation* obj) { delete obj; } 
   bool  operator_equal(QSourceLocation* theWrappedObject, const QSourceLocation&  other) const;
   void setColumn(QSourceLocation* theWrappedObject, qint64  newColumn);
   QUrl  uri(QSourceLocation* theWrappedObject) const;
   qint64  column(QSourceLocation* theWrappedObject) const;
   void setLine(QSourceLocation* theWrappedObject, qint64  newLine);
   bool  isNull(QSourceLocation* theWrappedObject) const;
   void setUri(QSourceLocation* theWrappedObject, const QUrl&  newUri);
   qint64  line(QSourceLocation* theWrappedObject) const;
    QString toString(QSourceLocation*);
};

#endif // PYTHONQTWRAPPER_QSOURCELOCATION_H
