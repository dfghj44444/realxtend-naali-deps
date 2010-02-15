#include "PythonQtWrapper_QPixmapCache_Key.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qpixmapcache.h>

QPixmapCache::Key* PythonQtWrapper_QPixmapCache_Key::new_QPixmapCache_Key()
{ 
return new QPixmapCache::Key(); }

QPixmapCache::Key* PythonQtWrapper_QPixmapCache_Key::new_QPixmapCache_Key(const QPixmapCache::Key&  other)
{ 
return new QPixmapCache::Key(other); }

QPixmapCache::Key*  PythonQtWrapper_QPixmapCache_Key::operator_assign(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QPixmapCache_Key::operator_equal(QPixmapCache::Key* theWrappedObject, const QPixmapCache::Key&  key) const
{
  return ( (*theWrappedObject)== key);
}

