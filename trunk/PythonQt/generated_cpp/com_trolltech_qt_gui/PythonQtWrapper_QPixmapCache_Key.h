#ifndef PYTHONQTWRAPPER_QPIXMAPCACHE_KEY_H
#define PYTHONQTWRAPPER_QPIXMAPCACHE_KEY_H

#include <qpixmapcache.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qpixmapcache.h>

class PythonQtWrapper_QPixmapCache_Key : public QObject
{ Q_OBJECT
public:
public slots:
QPixmapCache::Key* new_QPixmapCache_Key();
QPixmapCache::Key* new_QPixmapCache_Key(const QPixmapCache::Key&  other);
void delete_QPixmapCache_Key(QPixmapCache::Key* obj) { delete obj; } 
   QPixmapCache::Key*  operator_assign(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  other);
   bool  operator_equal(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  key) const;
};

#endif // PYTHONQTWRAPPER_QPIXMAPCACHE_KEY_H
