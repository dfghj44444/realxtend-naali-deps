#ifndef PYTHONQTWRAPPER_QDATETIME_H
#define PYTHONQTWRAPPER_QDATETIME_H

#include <qdatetime.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>

class PythonQtWrapper_QDateTime : public QObject
{ Q_OBJECT
public:
public slots:
QDateTime* new_QDateTime();
QDateTime* new_QDateTime(const QDate&  arg__1);
QDateTime* new_QDateTime(const QDate&  arg__1, const QTime&  arg__2, Qt::TimeSpec  spec = Qt::LocalTime);
QDateTime* new_QDateTime(const QDateTime&  other);
void delete_QDateTime(QDateTime* obj) { delete obj; } 
   QDateTime  addSecs(QDateTime* theWrappedObject, int  secs) const;
   void setTime(QDateTime* theWrappedObject, const QTime&  time);
   void setTime_t(QDateTime* theWrappedObject, uint  secsSince1Jan1970UTC);
   QDateTime  static_QDateTime_fromTime_t(uint  secsSince1Jan1970UTC);
   bool  isNull(QDateTime* theWrappedObject) const;
   QTime  time(QDateTime* theWrappedObject) const;
   QDateTime  toUTC(QDateTime* theWrappedObject) const;
   QDate  date(QDateTime* theWrappedObject) const;
   Qt::TimeSpec  timeSpec(QDateTime* theWrappedObject) const;
   QDateTime  static_QDateTime_currentDateTime();
   void setDate(QDateTime* theWrappedObject, const QDate&  date);
   uint  toTime_t(QDateTime* theWrappedObject) const;
   QDateTime  static_QDateTime_fromString(const QString&  s, Qt::DateFormat  f = Qt::TextDate);
   bool  isValid(QDateTime* theWrappedObject) const;
   void writeTo(QDateTime* theWrappedObject, QDataStream&  arg__1);
   int  secsTo(QDateTime* theWrappedObject, const QDateTime&  arg__1) const;
   QString  toString(QDateTime* theWrappedObject, const QString&  format) const;
   QDateTime  addDays(QDateTime* theWrappedObject, int  days) const;
   QDateTime  addMSecs(QDateTime* theWrappedObject, qint64  msecs) const;
   QString  toString(QDateTime* theWrappedObject, Qt::DateFormat  f = Qt::TextDate) const;
   QDateTime  static_QDateTime_fromString(const QString&  s, const QString&  format);
   void readFrom(QDateTime* theWrappedObject, QDataStream&  arg__1);
   void setTimeSpec(QDateTime* theWrappedObject, Qt::TimeSpec  spec);
   QDateTime  addYears(QDateTime* theWrappedObject, int  years) const;
   bool  operator_equal(QDateTime* theWrappedObject, const QDateTime&  other) const;
   int  utcOffset(QDateTime* theWrappedObject) const;
   void setUtcOffset(QDateTime* theWrappedObject, int  seconds);
   int  daysTo(QDateTime* theWrappedObject, const QDateTime&  arg__1) const;
   QDateTime  toLocalTime(QDateTime* theWrappedObject) const;
   QDateTime  toTimeSpec(QDateTime* theWrappedObject, Qt::TimeSpec  spec) const;
   QDateTime  addMonths(QDateTime* theWrappedObject, int  months) const;
   bool  operator_less(QDateTime* theWrappedObject, const QDateTime&  other) const;
};

#endif // PYTHONQTWRAPPER_QDATETIME_H
