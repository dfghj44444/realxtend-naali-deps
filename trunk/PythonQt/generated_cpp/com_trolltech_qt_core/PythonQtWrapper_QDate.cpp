#include "PythonQtWrapper_QDate.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>

QDate* PythonQtWrapper_QDate::new_QDate()
{ 
return new QDate(); }

QDate* PythonQtWrapper_QDate::new_QDate(int  y, int  m, int  d)
{ 
return new QDate(y, m, d); }

QDate  PythonQtWrapper_QDate::addDays(QDate* theWrappedObject, int  days) const
{
  return ( theWrappedObject->addDays(days));
}

bool  PythonQtWrapper_QDate::isNull(QDate* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QDate::setDate(QDate* theWrappedObject, int  year, int  month, int  day)
{
  return ( theWrappedObject->setDate(year, month, day));
}

int  PythonQtWrapper_QDate::dayOfYear(QDate* theWrappedObject) const
{
  return ( theWrappedObject->dayOfYear());
}

QString  PythonQtWrapper_QDate::static_QDate_longMonthName(int  month, QDate::MonthNameType  type)
{
  return (QDate::longMonthName(month, type));
}

QString  PythonQtWrapper_QDate::static_QDate_longDayName(int  weekday, QDate::MonthNameType  type)
{
  return (QDate::longDayName(weekday, type));
}

int  PythonQtWrapper_QDate::dayOfWeek(QDate* theWrappedObject) const
{
  return ( theWrappedObject->dayOfWeek());
}

QString  PythonQtWrapper_QDate::static_QDate_longMonthName(int  month)
{
  return (QDate::longMonthName(month));
}

int  PythonQtWrapper_QDate::year(QDate* theWrappedObject) const
{
  return ( theWrappedObject->year());
}

QDate  PythonQtWrapper_QDate::addYears(QDate* theWrappedObject, int  years) const
{
  return ( theWrappedObject->addYears(years));
}

int  PythonQtWrapper_QDate::daysInYear(QDate* theWrappedObject) const
{
  return ( theWrappedObject->daysInYear());
}

void PythonQtWrapper_QDate::getDate(QDate* theWrappedObject, int*  year, int*  month, int*  day)
{
  ( theWrappedObject->getDate(year, month, day));
}

bool  PythonQtWrapper_QDate::operator_equal(QDate* theWrappedObject, const QDate&  other) const
{
  return ( (*theWrappedObject)== other);
}

QString  PythonQtWrapper_QDate::static_QDate_shortMonthName(int  month, QDate::MonthNameType  type)
{
  return (QDate::shortMonthName(month, type));
}

int  PythonQtWrapper_QDate::month(QDate* theWrappedObject) const
{
  return ( theWrappedObject->month());
}

void PythonQtWrapper_QDate::readFrom(QDate* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QDate  PythonQtWrapper_QDate::static_QDate_currentDate()
{
  return (QDate::currentDate());
}

QString  PythonQtWrapper_QDate::static_QDate_shortMonthName(int  month)
{
  return (QDate::shortMonthName(month));
}

QString  PythonQtWrapper_QDate::static_QDate_longDayName(int  weekday)
{
  return (QDate::longDayName(weekday));
}

int  PythonQtWrapper_QDate::day(QDate* theWrappedObject) const
{
  return ( theWrappedObject->day());
}

bool  PythonQtWrapper_QDate::static_QDate_isLeapYear(int  year)
{
  return (QDate::isLeapYear(year));
}

bool  PythonQtWrapper_QDate::isValid(QDate* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QDate::static_QDate_isValid(int  y, int  m, int  d)
{
  return (QDate::isValid(y, m, d));
}

QDate  PythonQtWrapper_QDate::static_QDate_fromString(const QString&  s, const QString&  format)
{
  return (QDate::fromString(s, format));
}

int  PythonQtWrapper_QDate::daysTo(QDate* theWrappedObject, const QDate&  arg__1) const
{
  return ( theWrappedObject->daysTo(arg__1));
}

QString  PythonQtWrapper_QDate::toString(QDate* theWrappedObject, const QString&  format) const
{
  return ( theWrappedObject->toString(format));
}

QString  PythonQtWrapper_QDate::static_QDate_shortDayName(int  weekday)
{
  return (QDate::shortDayName(weekday));
}

int  PythonQtWrapper_QDate::daysInMonth(QDate* theWrappedObject) const
{
  return ( theWrappedObject->daysInMonth());
}

QDate  PythonQtWrapper_QDate::static_QDate_fromJulianDay(int  jd)
{
  return (QDate::fromJulianDay(jd));
}

QDate  PythonQtWrapper_QDate::static_QDate_fromString(const QString&  s, Qt::DateFormat  f)
{
  return (QDate::fromString(s, f));
}

uint  PythonQtWrapper_QDate::static_QDate_gregorianToJulian(int  y, int  m, int  d)
{
  return (QDate::gregorianToJulian(y, m, d));
}

QString  PythonQtWrapper_QDate::static_QDate_shortDayName(int  weekday, QDate::MonthNameType  type)
{
  return (QDate::shortDayName(weekday, type));
}

QDate  PythonQtWrapper_QDate::addMonths(QDate* theWrappedObject, int  months) const
{
  return ( theWrappedObject->addMonths(months));
}

QString  PythonQtWrapper_QDate::toString(QDate* theWrappedObject, Qt::DateFormat  f) const
{
  return ( theWrappedObject->toString(f));
}

bool  PythonQtWrapper_QDate::operator_less(QDate* theWrappedObject, const QDate&  other) const
{
  return ( (*theWrappedObject)< other);
}

void PythonQtWrapper_QDate::writeTo(QDate* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

int  PythonQtWrapper_QDate::toJulianDay(QDate* theWrappedObject) const
{
  return ( theWrappedObject->toJulianDay());
}

int  PythonQtWrapper_QDate::weekNumber(QDate* theWrappedObject, int*  yearNum) const
{
  return ( theWrappedObject->weekNumber(yearNum));
}

