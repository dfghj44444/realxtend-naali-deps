#ifndef PYTHONQTWRAPPER_QDATE_H
#define PYTHONQTWRAPPER_QDATE_H

#include <qdatetime.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>

class PythonQtWrapper_QDate : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MonthNameType )
enum MonthNameType{
  DateFormat = QDate::DateFormat,   StandaloneFormat = QDate::StandaloneFormat};
public slots:
QDate* new_QDate();
QDate* new_QDate(int  y, int  m, int  d);
QDate* new_QDate(const QDate& other) {
QDate* a = new QDate();
*((QDate*)a) = other;
return a; }
void delete_QDate(QDate* obj) { delete obj; } 
   QDate  addDays(QDate* theWrappedObject, int  days) const;
   bool  isNull(QDate* theWrappedObject) const;
   bool  setDate(QDate* theWrappedObject, int  year, int  month, int  day);
   int  dayOfYear(QDate* theWrappedObject) const;
   QString  static_QDate_longMonthName(int  month, QDate::MonthNameType  type);
   QString  static_QDate_longDayName(int  weekday, QDate::MonthNameType  type);
   int  dayOfWeek(QDate* theWrappedObject) const;
   QString  static_QDate_longMonthName(int  month);
   int  year(QDate* theWrappedObject) const;
   QDate  addYears(QDate* theWrappedObject, int  years) const;
   int  daysInYear(QDate* theWrappedObject) const;
   void getDate(QDate* theWrappedObject, int*  year, int*  month, int*  day);
   bool  operator_equal(QDate* theWrappedObject, const QDate&  other) const;
   QString  static_QDate_shortMonthName(int  month, QDate::MonthNameType  type);
   int  month(QDate* theWrappedObject) const;
   void readFrom(QDate* theWrappedObject, QDataStream&  arg__1);
   QDate  static_QDate_currentDate();
   QString  static_QDate_shortMonthName(int  month);
   QString  static_QDate_longDayName(int  weekday);
   int  day(QDate* theWrappedObject) const;
   bool  static_QDate_isLeapYear(int  year);
   bool  isValid(QDate* theWrappedObject) const;
   bool  static_QDate_isValid(int  y, int  m, int  d);
   QDate  static_QDate_fromString(const QString&  s, const QString&  format);
   int  daysTo(QDate* theWrappedObject, const QDate&  arg__1) const;
   QString  toString(QDate* theWrappedObject, const QString&  format) const;
   QString  static_QDate_shortDayName(int  weekday);
   int  daysInMonth(QDate* theWrappedObject) const;
   QDate  static_QDate_fromJulianDay(int  jd);
   QDate  static_QDate_fromString(const QString&  s, Qt::DateFormat  f = Qt::TextDate);
   uint  static_QDate_gregorianToJulian(int  y, int  m, int  d);
   QString  static_QDate_shortDayName(int  weekday, QDate::MonthNameType  type);
   QDate  addMonths(QDate* theWrappedObject, int  months) const;
   QString  toString(QDate* theWrappedObject, Qt::DateFormat  f = Qt::TextDate) const;
   bool  operator_less(QDate* theWrappedObject, const QDate&  other) const;
   void writeTo(QDate* theWrappedObject, QDataStream&  arg__1);
   int  toJulianDay(QDate* theWrappedObject) const;
   int  weekNumber(QDate* theWrappedObject, int*  yearNum = 0) const;
};

#endif // PYTHONQTWRAPPER_QDATE_H
