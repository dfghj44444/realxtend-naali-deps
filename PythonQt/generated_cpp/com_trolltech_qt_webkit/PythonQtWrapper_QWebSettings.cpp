#include "PythonQtWrapper_QWebSettings.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qicon.h>
#include <qpixmap.h>
#include <qurl.h>
#include <qwebsettings.h>

QIcon  PythonQtWrapper_QWebSettings::static_QWebSettings_iconForUrl(const QUrl&  url)
{
  return (QWebSettings::iconForUrl(url));
}

int  PythonQtWrapper_QWebSettings::static_QWebSettings_maximumPagesInCache()
{
  return (QWebSettings::maximumPagesInCache());
}

void PythonQtWrapper_QWebSettings::resetFontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type)
{
  ( theWrappedObject->resetFontSize(type));
}

int  PythonQtWrapper_QWebSettings::fontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type) const
{
  return ( theWrappedObject->fontSize(type));
}

QString  PythonQtWrapper_QWebSettings::static_QWebSettings_iconDatabasePath()
{
  return (QWebSettings::iconDatabasePath());
}

QString  PythonQtWrapper_QWebSettings::static_QWebSettings_offlineStoragePath()
{
  return (QWebSettings::offlineStoragePath());
}

QString  PythonQtWrapper_QWebSettings::defaultTextEncoding(QWebSettings* theWrappedObject) const
{
  return ( theWrappedObject->defaultTextEncoding());
}

bool  PythonQtWrapper_QWebSettings::testAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr) const
{
  return ( theWrappedObject->testAttribute(attr));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_clearIconDatabase()
{
  (QWebSettings::clearIconDatabase());
}

QWebSettings*  PythonQtWrapper_QWebSettings::static_QWebSettings_globalSettings()
{
  return (QWebSettings::globalSettings());
}

void PythonQtWrapper_QWebSettings::setDefaultTextEncoding(QWebSettings* theWrappedObject, const QString&  encoding)
{
  ( theWrappedObject->setDefaultTextEncoding(encoding));
}

void PythonQtWrapper_QWebSettings::setUserStyleSheetUrl(QWebSettings* theWrappedObject, const QUrl&  location)
{
  ( theWrappedObject->setUserStyleSheetUrl(location));
}

QUrl  PythonQtWrapper_QWebSettings::userStyleSheetUrl(QWebSettings* theWrappedObject) const
{
  return ( theWrappedObject->userStyleSheetUrl());
}

QString  PythonQtWrapper_QWebSettings::localStoragePath(QWebSettings* theWrappedObject) const
{
  return ( theWrappedObject->localStoragePath());
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_enablePersistentStorage(const QString&  path)
{
  (QWebSettings::enablePersistentStorage(path));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setOfflineWebApplicationCachePath(const QString&  path)
{
  (QWebSettings::setOfflineWebApplicationCachePath(path));
}

QString  PythonQtWrapper_QWebSettings::fontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which) const
{
  return ( theWrappedObject->fontFamily(which));
}

void PythonQtWrapper_QWebSettings::setFontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which, const QString&  family)
{
  ( theWrappedObject->setFontFamily(which, family));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setOfflineStorageDefaultQuota(qint64  maximumSize)
{
  (QWebSettings::setOfflineStorageDefaultQuota(maximumSize));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setOfflineWebApplicationCacheQuota(qint64  maximumSize)
{
  (QWebSettings::setOfflineWebApplicationCacheQuota(maximumSize));
}

QString  PythonQtWrapper_QWebSettings::static_QWebSettings_offlineWebApplicationCachePath()
{
  return (QWebSettings::offlineWebApplicationCachePath());
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setMaximumPagesInCache(int  pages)
{
  (QWebSettings::setMaximumPagesInCache(pages));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setIconDatabasePath(const QString&  location)
{
  (QWebSettings::setIconDatabasePath(location));
}

void PythonQtWrapper_QWebSettings::setFontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type, int  size)
{
  ( theWrappedObject->setFontSize(type, size));
}

void PythonQtWrapper_QWebSettings::setAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr, bool  on)
{
  ( theWrappedObject->setAttribute(attr, on));
}

qint64  PythonQtWrapper_QWebSettings::static_QWebSettings_offlineStorageDefaultQuota()
{
  return (QWebSettings::offlineStorageDefaultQuota());
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setOfflineStoragePath(const QString&  path)
{
  (QWebSettings::setOfflineStoragePath(path));
}

QPixmap  PythonQtWrapper_QWebSettings::static_QWebSettings_webGraphic(QWebSettings::WebGraphic  type)
{
  return (QWebSettings::webGraphic(type));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_clearMemoryCaches()
{
  (QWebSettings::clearMemoryCaches());
}

void PythonQtWrapper_QWebSettings::setLocalStoragePath(QWebSettings* theWrappedObject, const QString&  path)
{
  ( theWrappedObject->setLocalStoragePath(path));
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setWebGraphic(QWebSettings::WebGraphic  type, const QPixmap&  graphic)
{
  (QWebSettings::setWebGraphic(type, graphic));
}

qint64  PythonQtWrapper_QWebSettings::static_QWebSettings_offlineWebApplicationCacheQuota()
{
  return (QWebSettings::offlineWebApplicationCacheQuota());
}

void PythonQtWrapper_QWebSettings::static_QWebSettings_setObjectCacheCapacities(int  cacheMinDeadCapacity, int  cacheMaxDead, int  totalCapacity)
{
  (QWebSettings::setObjectCacheCapacities(cacheMinDeadCapacity, cacheMaxDead, totalCapacity));
}

void PythonQtWrapper_QWebSettings::resetFontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which)
{
  ( theWrappedObject->resetFontFamily(which));
}

void PythonQtWrapper_QWebSettings::resetAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr)
{
  ( theWrappedObject->resetAttribute(attr));
}

