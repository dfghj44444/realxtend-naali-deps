#include "PythonQtWrapper_QNetworkCookie.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QDateTime>
#include <QVariant>
#include <qbytearray.h>
#include <qdatetime.h>
#include <qlist.h>
#include <qnetworkcookie.h>

QNetworkCookie* PythonQtWrapper_QNetworkCookie::new_QNetworkCookie(const QByteArray&  name, const QByteArray&  value)
{ 
return new QNetworkCookie(name, value); }

QNetworkCookie* PythonQtWrapper_QNetworkCookie::new_QNetworkCookie(const QNetworkCookie&  other)
{ 
return new QNetworkCookie(other); }

QString  PythonQtWrapper_QNetworkCookie::domain(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->domain());
}

QList<QNetworkCookie >  PythonQtWrapper_QNetworkCookie::static_QNetworkCookie_parseCookies(const QByteArray&  cookieString)
{
  return (QNetworkCookie::parseCookies(cookieString));
}

void PythonQtWrapper_QNetworkCookie::setName(QNetworkCookie* theWrappedObject, const QByteArray&  cookieName)
{
  ( theWrappedObject->setName(cookieName));
}

QByteArray  PythonQtWrapper_QNetworkCookie::toRawForm(QNetworkCookie* theWrappedObject, QNetworkCookie::RawForm  form) const
{
  return ( theWrappedObject->toRawForm(form));
}

void PythonQtWrapper_QNetworkCookie::setValue(QNetworkCookie* theWrappedObject, const QByteArray&  value)
{
  ( theWrappedObject->setValue(value));
}

QByteArray  PythonQtWrapper_QNetworkCookie::name(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QNetworkCookie::isHttpOnly(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->isHttpOnly());
}

void PythonQtWrapper_QNetworkCookie::setExpirationDate(QNetworkCookie* theWrappedObject, const QDateTime&  date)
{
  ( theWrappedObject->setExpirationDate(date));
}

QString  PythonQtWrapper_QNetworkCookie::path(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

void PythonQtWrapper_QNetworkCookie::setDomain(QNetworkCookie* theWrappedObject, const QString&  domain)
{
  ( theWrappedObject->setDomain(domain));
}

bool  PythonQtWrapper_QNetworkCookie::isSecure(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->isSecure());
}

QByteArray  PythonQtWrapper_QNetworkCookie::value(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->value());
}

void PythonQtWrapper_QNetworkCookie::setHttpOnly(QNetworkCookie* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setHttpOnly(enable));
}

void PythonQtWrapper_QNetworkCookie::setPath(QNetworkCookie* theWrappedObject, const QString&  path)
{
  ( theWrappedObject->setPath(path));
}

bool  PythonQtWrapper_QNetworkCookie::isSessionCookie(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->isSessionCookie());
}

bool  PythonQtWrapper_QNetworkCookie::operator_equal(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QNetworkCookie::setSecure(QNetworkCookie* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setSecure(enable));
}

QDateTime  PythonQtWrapper_QNetworkCookie::expirationDate(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->expirationDate());
}

QString PythonQtWrapper_QNetworkCookie::toString(QNetworkCookie* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

