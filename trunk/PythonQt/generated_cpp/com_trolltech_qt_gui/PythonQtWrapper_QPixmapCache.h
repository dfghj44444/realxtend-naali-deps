#ifndef PYTHONQTWRAPPER_QPIXMAPCACHE_H
#define PYTHONQTWRAPPER_QPIXMAPCACHE_H

#include <qpixmapcache.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qpixmap.h>
#include <qpixmapcache.h>

class PythonQtShell_QPixmapCache : public QPixmapCache
{
public:
    PythonQtShell_QPixmapCache():QPixmapCache(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPixmapCache : public QObject
{ Q_OBJECT
public:
public slots:
QPixmapCache* new_QPixmapCache();
void delete_QPixmapCache(QPixmapCache* obj) { delete obj; } 
   int  static_QPixmapCache_cacheLimit();
   void static_QPixmapCache_clear();
   void static_QPixmapCache_setCacheLimit(int  arg__1);
   void static_QPixmapCache_remove(const QPixmapCache::Key&  key);
   bool  static_QPixmapCache_find(const QPixmapCache::Key&  key, QPixmap*  pixmap);
   QPixmapCache::Key  static_QPixmapCache_insert(const QPixmap&  pixmap);
   bool  static_QPixmapCache_insert(const QString&  key, const QPixmap&  pixmap);
   bool  static_QPixmapCache_find(const QString&  key, QPixmap&  pixmap);
   bool  static_QPixmapCache_replace(const QPixmapCache::Key&  key, const QPixmap&  pixmap);
   void static_QPixmapCache_remove(const QString&  key);
};

#endif // PYTHONQTWRAPPER_QPIXMAPCACHE_H
