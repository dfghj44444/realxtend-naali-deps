#ifndef PYTHONQTWRAPPER_QWEBSETTINGS_H
#define PYTHONQTWRAPPER_QWEBSETTINGS_H

#include <qwebsettings.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qicon.h>
#include <qpixmap.h>
#include <qurl.h>
#include <qwebsettings.h>

class PythonQtWrapper_QWebSettings : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FontSize WebGraphic FontFamily WebAttribute )
enum FontSize{
  MinimumFontSize = QWebSettings::MinimumFontSize,   MinimumLogicalFontSize = QWebSettings::MinimumLogicalFontSize,   DefaultFontSize = QWebSettings::DefaultFontSize,   DefaultFixedFontSize = QWebSettings::DefaultFixedFontSize};
enum WebGraphic{
  MissingImageGraphic = QWebSettings::MissingImageGraphic,   MissingPluginGraphic = QWebSettings::MissingPluginGraphic,   DefaultFrameIconGraphic = QWebSettings::DefaultFrameIconGraphic,   TextAreaSizeGripCornerGraphic = QWebSettings::TextAreaSizeGripCornerGraphic};
enum FontFamily{
  StandardFont = QWebSettings::StandardFont,   FixedFont = QWebSettings::FixedFont,   SerifFont = QWebSettings::SerifFont,   SansSerifFont = QWebSettings::SansSerifFont,   CursiveFont = QWebSettings::CursiveFont,   FantasyFont = QWebSettings::FantasyFont};
enum WebAttribute{
  AutoLoadImages = QWebSettings::AutoLoadImages,   JavascriptEnabled = QWebSettings::JavascriptEnabled,   JavaEnabled = QWebSettings::JavaEnabled,   PluginsEnabled = QWebSettings::PluginsEnabled,   PrivateBrowsingEnabled = QWebSettings::PrivateBrowsingEnabled,   JavascriptCanOpenWindows = QWebSettings::JavascriptCanOpenWindows,   JavascriptCanAccessClipboard = QWebSettings::JavascriptCanAccessClipboard,   DeveloperExtrasEnabled = QWebSettings::DeveloperExtrasEnabled,   LinksIncludedInFocusChain = QWebSettings::LinksIncludedInFocusChain,   ZoomTextOnly = QWebSettings::ZoomTextOnly,   PrintElementBackgrounds = QWebSettings::PrintElementBackgrounds,   OfflineStorageDatabaseEnabled = QWebSettings::OfflineStorageDatabaseEnabled,   OfflineWebApplicationCacheEnabled = QWebSettings::OfflineWebApplicationCacheEnabled,   LocalStorageEnabled = QWebSettings::LocalStorageEnabled,   LocalStorageDatabaseEnabled = QWebSettings::LocalStorageDatabaseEnabled,   LocalContentCanAccessRemoteUrls = QWebSettings::LocalContentCanAccessRemoteUrls,   DnsPrefetchEnabled = QWebSettings::DnsPrefetchEnabled};
public slots:
   QIcon  static_QWebSettings_iconForUrl(const QUrl&  url);
   int  static_QWebSettings_maximumPagesInCache();
   void resetFontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type);
   int  fontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type) const;
   QString  static_QWebSettings_iconDatabasePath();
   QString  static_QWebSettings_offlineStoragePath();
   QString  defaultTextEncoding(QWebSettings* theWrappedObject) const;
   bool  testAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr) const;
   void static_QWebSettings_clearIconDatabase();
   QWebSettings*  static_QWebSettings_globalSettings();
   void setDefaultTextEncoding(QWebSettings* theWrappedObject, const QString&  encoding);
   void setUserStyleSheetUrl(QWebSettings* theWrappedObject, const QUrl&  location);
   QUrl  userStyleSheetUrl(QWebSettings* theWrappedObject) const;
   QString  localStoragePath(QWebSettings* theWrappedObject) const;
   void static_QWebSettings_enablePersistentStorage(const QString&  path = QString());
   void static_QWebSettings_setOfflineWebApplicationCachePath(const QString&  path);
   QString  fontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which) const;
   void setFontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which, const QString&  family);
   void static_QWebSettings_setOfflineStorageDefaultQuota(qint64  maximumSize);
   void static_QWebSettings_setOfflineWebApplicationCacheQuota(qint64  maximumSize);
   QString  static_QWebSettings_offlineWebApplicationCachePath();
   void static_QWebSettings_setMaximumPagesInCache(int  pages);
   void static_QWebSettings_setIconDatabasePath(const QString&  location);
   void setFontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type, int  size);
   void setAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr, bool  on);
   qint64  static_QWebSettings_offlineStorageDefaultQuota();
   void static_QWebSettings_setOfflineStoragePath(const QString&  path);
   QPixmap  static_QWebSettings_webGraphic(QWebSettings::WebGraphic  type);
   void static_QWebSettings_clearMemoryCaches();
   void setLocalStoragePath(QWebSettings* theWrappedObject, const QString&  path);
   void static_QWebSettings_setWebGraphic(QWebSettings::WebGraphic  type, const QPixmap&  graphic);
   qint64  static_QWebSettings_offlineWebApplicationCacheQuota();
   void static_QWebSettings_setObjectCacheCapacities(int  cacheMinDeadCapacity, int  cacheMaxDead, int  totalCapacity);
   void resetFontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which);
   void resetAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr);
};

#endif // PYTHONQTWRAPPER_QWEBSETTINGS_H
