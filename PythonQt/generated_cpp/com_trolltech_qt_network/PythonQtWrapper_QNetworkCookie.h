#ifndef PYTHONQTWRAPPER_QNETWORKCOOKIE_H
#define PYTHONQTWRAPPER_QNETWORKCOOKIE_H

#include <qnetworkcookie.h>
#include <QObject>

#include <PythonQt.h>

#include <QDateTime>
#include <QVariant>
#include <qbytearray.h>
#include <qdatetime.h>
#include <qlist.h>
#include <qnetworkcookie.h>

class PythonQtWrapper_QNetworkCookie : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RawForm )
enum RawForm{
  NameAndValueOnly = QNetworkCookie::NameAndValueOnly,   Full = QNetworkCookie::Full};
public slots:
QNetworkCookie* new_QNetworkCookie(const QByteArray&  name = QByteArray(), const QByteArray&  value = QByteArray());
QNetworkCookie* new_QNetworkCookie(const QNetworkCookie&  other);
void delete_QNetworkCookie(QNetworkCookie* obj) { delete obj; } 
   QString  domain(QNetworkCookie* theWrappedObject) const;
   QList<QNetworkCookie >  static_QNetworkCookie_parseCookies(const QByteArray&  cookieString);
   void setName(QNetworkCookie* theWrappedObject, const QByteArray&  cookieName);
   QByteArray  toRawForm(QNetworkCookie* theWrappedObject, QNetworkCookie::RawForm  form = QNetworkCookie::Full) const;
   void setValue(QNetworkCookie* theWrappedObject, const QByteArray&  value);
   QByteArray  name(QNetworkCookie* theWrappedObject) const;
   bool  isHttpOnly(QNetworkCookie* theWrappedObject) const;
   void setExpirationDate(QNetworkCookie* theWrappedObject, const QDateTime&  date);
   QString  path(QNetworkCookie* theWrappedObject) const;
   void setDomain(QNetworkCookie* theWrappedObject, const QString&  domain);
   bool  isSecure(QNetworkCookie* theWrappedObject) const;
   QByteArray  value(QNetworkCookie* theWrappedObject) const;
   void setHttpOnly(QNetworkCookie* theWrappedObject, bool  enable);
   void setPath(QNetworkCookie* theWrappedObject, const QString&  path);
   bool  isSessionCookie(QNetworkCookie* theWrappedObject) const;
   bool  operator_equal(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const;
   void setSecure(QNetworkCookie* theWrappedObject, bool  enable);
   QDateTime  expirationDate(QNetworkCookie* theWrappedObject) const;
    QString toString(QNetworkCookie*);
};

#endif // PYTHONQTWRAPPER_QNETWORKCOOKIE_H
