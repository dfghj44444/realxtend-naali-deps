#ifndef PYTHONQTWRAPPER_QTIME_H
#define PYTHONQTWRAPPER_QTIME_H

#include <qdatetime.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>

class PythonQtWrapper_QTime : public QObject
{ Q_OBJECT
public:
public slots:
QTime* new_QTime();
QTime* new_QTime(int  h, int  m, int  s = 0, int  ms = 0);
QTime* new_QTime(const QTime& other) {
QTime* a = new QTime();
*((QTime*)a) = other;
return a; }
void delete_QTime(QTime* obj) { delete obj; } 
   QTime  addMSecs(QTime* theWrappedObject, int  ms) const;
   bool  isValid(QTime* theWrappedObject) const;
   int  msec(QTime* theWrappedObject) const;
   int  second(QTime* theWrappedObject) const;
   QTime  static_QTime_fromString(const QString&  s, Qt::DateFormat  f = Qt::TextDate);
   int  msecsTo(QTime* theWrappedObject, const QTime&  arg__1) const;
   QTime  static_QTime_fromString(const QString&  s, const QString&  format);
   int  secsTo(QTime* theWrappedObject, const QTime&  arg__1) const;
   QTime  addSecs(QTime* theWrappedObject, int  secs) const;
   bool  static_QTime_isValid(int  h, int  m, int  s, int  ms = 0);
   int  minute(QTime* theWrappedObject) const;
   QString  toString(QTime* theWrappedObject, Qt::DateFormat  f = Qt::TextDate) const;
   bool  setHMS(QTime* theWrappedObject, int  h, int  m, int  s, int  ms = 0);
   void start(QTime* theWrappedObject);
   int  hour(QTime* theWrappedObject) const;
   int  elapsed(QTime* theWrappedObject) const;
   bool  operator_less(QTime* theWrappedObject, const QTime&  other) const;
   void writeTo(QTime* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QTime* theWrappedObject, QDataStream&  arg__1);
   QTime  static_QTime_currentTime();
   int  restart(QTime* theWrappedObject);
   bool  isNull(QTime* theWrappedObject) const;
   bool  operator_equal(QTime* theWrappedObject, const QTime&  other) const;
   QString  toString(QTime* theWrappedObject, const QString&  format) const;
};

#endif // PYTHONQTWRAPPER_QTIME_H
