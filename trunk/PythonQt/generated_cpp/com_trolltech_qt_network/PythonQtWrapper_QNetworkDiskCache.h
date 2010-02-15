#ifndef PYTHONQTWRAPPER_QNETWORKDISKCACHE_H
#define PYTHONQTWRAPPER_QNETWORKDISKCACHE_H

#include <qnetworkdiskcache.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractnetworkcache.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkdiskcache.h>
#include <qobject.h>
#include <qurl.h>

class PythonQtShell_QNetworkDiskCache : public QNetworkDiskCache
{
public:
    PythonQtShell_QNetworkDiskCache(QObject*  parent = 0):QNetworkDiskCache(parent),_wrapper(NULL) {};

virtual qint64  cacheSize() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void clear();
virtual void customEvent(QEvent*  arg__1);
virtual QIODevice*  data(const QUrl&  url);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual qint64  expire();
virtual void insert(QIODevice*  device);
virtual QNetworkCacheMetaData  metaData(const QUrl&  url);
virtual QIODevice*  prepare(const QNetworkCacheMetaData&  metaData);
virtual bool  remove(const QUrl&  url);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateMetaData(const QNetworkCacheMetaData&  metaData);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkDiskCache : public QNetworkDiskCache
{ public:
inline void promoted_updateMetaData(const QNetworkCacheMetaData&  metaData) { QNetworkDiskCache::updateMetaData(metaData); }
inline QIODevice*  promoted_data(const QUrl&  url) { return QNetworkDiskCache::data(url); }
inline QIODevice*  promoted_prepare(const QNetworkCacheMetaData&  metaData) { return QNetworkDiskCache::prepare(metaData); }
inline qint64  promoted_cacheSize() const { return QNetworkDiskCache::cacheSize(); }
inline void promoted_clear() { QNetworkDiskCache::clear(); }
inline void promoted_insert(QIODevice*  device) { QNetworkDiskCache::insert(device); }
inline bool  promoted_remove(const QUrl&  url) { return QNetworkDiskCache::remove(url); }
inline qint64  promoted_expire() { return QNetworkDiskCache::expire(); }
inline QNetworkCacheMetaData  promoted_metaData(const QUrl&  url) { return QNetworkDiskCache::metaData(url); }
};

class PythonQtWrapper_QNetworkDiskCache : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkDiskCache* new_QNetworkDiskCache(QObject*  parent = 0);
void delete_QNetworkDiskCache(QNetworkDiskCache* obj) { delete obj; } 
   QString  cacheDirectory(QNetworkDiskCache* theWrappedObject) const;
   void updateMetaData(QNetworkDiskCache* theWrappedObject, const QNetworkCacheMetaData&  metaData);
   qint64  maximumCacheSize(QNetworkDiskCache* theWrappedObject) const;
   QIODevice*  data(QNetworkDiskCache* theWrappedObject, const QUrl&  url);
   QIODevice*  prepare(QNetworkDiskCache* theWrappedObject, const QNetworkCacheMetaData&  metaData);
   qint64  cacheSize(QNetworkDiskCache* theWrappedObject) const;
   void insert(QNetworkDiskCache* theWrappedObject, QIODevice*  device);
   bool  remove(QNetworkDiskCache* theWrappedObject, const QUrl&  url);
   qint64  expire(QNetworkDiskCache* theWrappedObject);
   void setCacheDirectory(QNetworkDiskCache* theWrappedObject, const QString&  cacheDir);
   QNetworkCacheMetaData  fileMetaData(QNetworkDiskCache* theWrappedObject, const QString&  fileName) const;
   QNetworkCacheMetaData  metaData(QNetworkDiskCache* theWrappedObject, const QUrl&  url);
   void setMaximumCacheSize(QNetworkDiskCache* theWrappedObject, qint64  size);
};

#endif // PYTHONQTWRAPPER_QNETWORKDISKCACHE_H
