#ifndef PYTHONQTWRAPPER_QNETWORKCACHEMETADATA_H
#define PYTHONQTWRAPPER_QNETWORKCACHEMETADATA_H

#include <qabstractnetworkcache.h>
#include <QObject>

#include <PythonQt.h>

#include <QDateTime>
#include <QVariant>
#include <qabstractnetworkcache.h>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qlist.h>
#include <qpair.h>
#include <qurl.h>

class PythonQtWrapper_QNetworkCacheMetaData : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkCacheMetaData* new_QNetworkCacheMetaData();
QNetworkCacheMetaData* new_QNetworkCacheMetaData(const QNetworkCacheMetaData&  other);
void delete_QNetworkCacheMetaData(QNetworkCacheMetaData* obj) { delete obj; } 
   bool  operator_equal(QNetworkCacheMetaData* theWrappedObject, const QNetworkCacheMetaData&  other) const;
   void readFrom(QNetworkCacheMetaData* theWrappedObject, QDataStream&  arg__1);
   QUrl  url(QNetworkCacheMetaData* theWrappedObject) const;
   QHash<QNetworkRequest::Attribute , QVariant >  attributes(QNetworkCacheMetaData* theWrappedObject) const;
   QDateTime  lastModified(QNetworkCacheMetaData* theWrappedObject) const;
   void setExpirationDate(QNetworkCacheMetaData* theWrappedObject, const QDateTime&  dateTime);
   QDateTime  expirationDate(QNetworkCacheMetaData* theWrappedObject) const;
   void setSaveToDisk(QNetworkCacheMetaData* theWrappedObject, bool  allow);
   bool  saveToDisk(QNetworkCacheMetaData* theWrappedObject) const;
   void setAttributes(QNetworkCacheMetaData* theWrappedObject, const QHash<QNetworkRequest::Attribute , QVariant >&  attributes);
   QList<QPair<QByteArray , QByteArray >  >  rawHeaders(QNetworkCacheMetaData* theWrappedObject) const;
   void setLastModified(QNetworkCacheMetaData* theWrappedObject, const QDateTime&  dateTime);
   bool  isValid(QNetworkCacheMetaData* theWrappedObject) const;
   void writeTo(QNetworkCacheMetaData* theWrappedObject, QDataStream&  arg__1);
   void setRawHeaders(QNetworkCacheMetaData* theWrappedObject, const QList<QPair<QByteArray , QByteArray >  >&  headers);
   void setUrl(QNetworkCacheMetaData* theWrappedObject, const QUrl&  url);
};

#endif // PYTHONQTWRAPPER_QNETWORKCACHEMETADATA_H
