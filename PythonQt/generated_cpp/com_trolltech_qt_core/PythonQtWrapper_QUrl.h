#ifndef PYTHONQTWRAPPER_QURL_H
#define PYTHONQTWRAPPER_QURL_H

#include <qurl.h>
#include <QObject>

#include <PythonQt.h>

#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>
#include <qurl.h>

class PythonQtWrapper_QUrl : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ParsingMode FormattingOption )
Q_FLAGS(FormattingOptions )
enum ParsingMode{
  TolerantMode = QUrl::TolerantMode,   StrictMode = QUrl::StrictMode};
enum FormattingOption{
  None = QUrl::None,   RemoveScheme = QUrl::RemoveScheme,   RemovePassword = QUrl::RemovePassword,   RemoveUserInfo = QUrl::RemoveUserInfo,   RemovePort = QUrl::RemovePort,   RemoveAuthority = QUrl::RemoveAuthority,   RemovePath = QUrl::RemovePath,   RemoveQuery = QUrl::RemoveQuery,   RemoveFragment = QUrl::RemoveFragment,   StripTrailingSlash = QUrl::StripTrailingSlash};
Q_DECLARE_FLAGS(FormattingOptions, FormattingOption)
public slots:
QUrl* new_QUrl();
QUrl* new_QUrl(const QString&  url);
QUrl* new_QUrl(const QString&  url, QUrl::ParsingMode  mode);
QUrl* new_QUrl(const QUrl&  copy);
void delete_QUrl(QUrl* obj) { delete obj; } 
   void setUrl(QUrl* theWrappedObject, const QString&  url, QUrl::ParsingMode  mode);
   QUrl  static_QUrl_fromUserInput(const QString&  userInput);
   void setEncodedUserName(QUrl* theWrappedObject, const QByteArray&  userName);
   int  port(QUrl* theWrappedObject, int  defaultPort) const;
   char  queryPairDelimiter(QUrl* theWrappedObject) const;
   void setQueryDelimiters(QUrl* theWrappedObject, char  valueDelimiter, char  pairDelimiter);
   void setUrl(QUrl* theWrappedObject, const QString&  url);
   char  queryValueDelimiter(QUrl* theWrappedObject) const;
   void setUserName(QUrl* theWrappedObject, const QString&  userName);
   bool  operator_less(QUrl* theWrappedObject, const QUrl&  url) const;
   QString  static_QUrl_fromAce(const QByteArray&  arg__1);
   QString  host(QUrl* theWrappedObject) const;
   void removeAllQueryItems(QUrl* theWrappedObject, const QString&  key);
   void setUserInfo(QUrl* theWrappedObject, const QString&  userInfo);
   void removeAllEncodedQueryItems(QUrl* theWrappedObject, const QByteArray&  key);
   void readFrom(QUrl* theWrappedObject, QDataStream&  arg__1);
   void setEncodedUrl(QUrl* theWrappedObject, const QByteArray&  url, QUrl::ParsingMode  mode);
   QString  password(QUrl* theWrappedObject) const;
   QByteArray  encodedPath(QUrl* theWrappedObject) const;
   void setHost(QUrl* theWrappedObject, const QString&  host);
   QByteArray  encodedHost(QUrl* theWrappedObject) const;
   QString  path(QUrl* theWrappedObject) const;
   void addQueryItem(QUrl* theWrappedObject, const QString&  key, const QString&  value);
   QList<QByteArray >  allEncodedQueryItemValues(QUrl* theWrappedObject, const QByteArray&  key) const;
   void clear(QUrl* theWrappedObject);
   void removeQueryItem(QUrl* theWrappedObject, const QString&  key);
   QString  toString(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::None) const;
   void writeTo(QUrl* theWrappedObject, QDataStream&  arg__1);
   QByteArray  toEncoded(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::None) const;
   void setEncodedQuery(QUrl* theWrappedObject, const QByteArray&  query);
   QUrl  static_QUrl_fromEncoded(const QByteArray&  url);
   bool  isEmpty(QUrl* theWrappedObject) const;
   bool  hasFragment(QUrl* theWrappedObject) const;
   void setPort(QUrl* theWrappedObject, int  port);
   QByteArray  encodedUserName(QUrl* theWrappedObject) const;
   bool  isParentOf(QUrl* theWrappedObject, const QUrl&  url) const;
   QString  userName(QUrl* theWrappedObject) const;
   QUrl  resolved(QUrl* theWrappedObject, const QUrl&  relative) const;
   bool  isRelative(QUrl* theWrappedObject) const;
   void removeEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key);
   QUrl  static_QUrl_fromLocalFile(const QString&  localfile);
   bool  isValid(QUrl* theWrappedObject) const;
   QUrl  static_QUrl_fromEncoded(const QByteArray&  url, QUrl::ParsingMode  mode);
   QByteArray  encodedPassword(QUrl* theWrappedObject) const;
   void setPath(QUrl* theWrappedObject, const QString&  path);
   void setQueryItems(QUrl* theWrappedObject, const QList<QPair<QString , QString >  >&  query);
   QString  static_QUrl_fromPercentEncoding(const QByteArray&  arg__1);
   void static_QUrl_setIdnWhitelist(const QStringList&  arg__1);
   QByteArray  encodedQueryItemValue(QUrl* theWrappedObject, const QByteArray&  key) const;
   QList<QPair<QByteArray , QByteArray >  >  encodedQueryItems(QUrl* theWrappedObject) const;
   void addEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key, const QByteArray&  value);
   bool  hasEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key) const;
   void setEncodedQueryItems(QUrl* theWrappedObject, const QList<QPair<QByteArray , QByteArray >  >&  query);
   QByteArray  static_QUrl_toAce(const QString&  arg__1);
   void setEncodedPassword(QUrl* theWrappedObject, const QByteArray&  password);
   QString  scheme(QUrl* theWrappedObject) const;
   void setEncodedFragment(QUrl* theWrappedObject, const QByteArray&  fragment);
   QByteArray  encodedFragment(QUrl* theWrappedObject) const;
   QByteArray  encodedQuery(QUrl* theWrappedObject) const;
   void setEncodedUrl(QUrl* theWrappedObject, const QByteArray&  url);
   QString  queryItemValue(QUrl* theWrappedObject, const QString&  key) const;
   void setPassword(QUrl* theWrappedObject, const QString&  password);
   QStringList  allQueryItemValues(QUrl* theWrappedObject, const QString&  key) const;
   void setScheme(QUrl* theWrappedObject, const QString&  scheme);
   int  port(QUrl* theWrappedObject) const;
   void setAuthority(QUrl* theWrappedObject, const QString&  authority);
   void setEncodedPath(QUrl* theWrappedObject, const QByteArray&  path);
   QString  fragment(QUrl* theWrappedObject) const;
   bool  hasQuery(QUrl* theWrappedObject) const;
   bool  hasQueryItem(QUrl* theWrappedObject, const QString&  key) const;
   bool  operator_equal(QUrl* theWrappedObject, const QUrl&  url) const;
   QString  userInfo(QUrl* theWrappedObject) const;
   QString  errorString(QUrl* theWrappedObject) const;
   QString  authority(QUrl* theWrappedObject) const;
   QByteArray  static_QUrl_toPercentEncoding(const QString&  arg__1, const QByteArray&  exclude = QByteArray(), const QByteArray&  include = QByteArray());
   QList<QPair<QString , QString >  >  queryItems(QUrl* theWrappedObject) const;
   void setEncodedHost(QUrl* theWrappedObject, const QByteArray&  host);
   QString  toLocalFile(QUrl* theWrappedObject) const;
   void setFragment(QUrl* theWrappedObject, const QString&  fragment);
   QStringList  static_QUrl_idnWhitelist();
};

#endif // PYTHONQTWRAPPER_QURL_H
