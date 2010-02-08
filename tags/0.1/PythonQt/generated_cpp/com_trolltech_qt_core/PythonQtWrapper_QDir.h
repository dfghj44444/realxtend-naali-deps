#ifndef PYTHONQTWRAPPER_QDIR_H
#define PYTHONQTWRAPPER_QDIR_H

#include <qdir.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdir.h>
#include <qfileinfo.h>
#include <qlist.h>
#include <qstringlist.h>

class PythonQtWrapper_QDir : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Filter SortFlag )
Q_FLAGS(Filters SortFlags )
enum Filter{
  Dirs = QDir::Dirs,   Files = QDir::Files,   Drives = QDir::Drives,   NoSymLinks = QDir::NoSymLinks,   AllEntries = QDir::AllEntries,   TypeMask = QDir::TypeMask,   Readable = QDir::Readable,   Writable = QDir::Writable,   Executable = QDir::Executable,   PermissionMask = QDir::PermissionMask,   Modified = QDir::Modified,   Hidden = QDir::Hidden,   System = QDir::System,   AccessMask = QDir::AccessMask,   AllDirs = QDir::AllDirs,   CaseSensitive = QDir::CaseSensitive,   NoDotAndDotDot = QDir::NoDotAndDotDot,   NoFilter = QDir::NoFilter};
enum SortFlag{
  Name = QDir::Name,   Time = QDir::Time,   Size = QDir::Size,   Unsorted = QDir::Unsorted,   SortByMask = QDir::SortByMask,   DirsFirst = QDir::DirsFirst,   Reversed = QDir::Reversed,   IgnoreCase = QDir::IgnoreCase,   DirsLast = QDir::DirsLast,   LocaleAware = QDir::LocaleAware,   Type = QDir::Type,   NoSort = QDir::NoSort};
Q_DECLARE_FLAGS(Filters, Filter)
Q_DECLARE_FLAGS(SortFlags, SortFlag)
public slots:
QDir* new_QDir(const QDir&  arg__1);
QDir* new_QDir(const QString&  path = QString());
QDir* new_QDir(const QString&  path, const QString&  nameFilter, QDir::SortFlags  sort = QDir::SortFlags(Name | IgnoreCase), QDir::Filters  filter = QDir::AllEntries);
void delete_QDir(QDir* obj) { delete obj; } 
   QString  static_QDir_convertSeparators(const QString&  pathName);
   QStringList  entryList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QString  static_QDir_cleanPath(const QString&  path);
   bool  isRoot(QDir* theWrappedObject) const;
   bool  exists(QDir* theWrappedObject) const;
   QDir::Filters  filter(QDir* theWrappedObject) const;
   bool  isAbsolute(QDir* theWrappedObject) const;
   QDir::SortFlags  sorting(QDir* theWrappedObject) const;
   QString  dirName(QDir* theWrappedObject) const;
   QString  static_QDir_fromNativeSeparators(const QString&  pathName);
   QDir  static_QDir_temp();
   QList<QFileInfo >  entryInfoList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QString  filePath(QDir* theWrappedObject, const QString&  fileName) const;
   bool  static_QDir_setCurrent(const QString&  path);
   void static_QDir_addSearchPath(const QString&  prefix, const QString&  path);
   QString  static_QDir_toNativeSeparators(const QString&  pathName);
   QString  absoluteFilePath(QDir* theWrappedObject, const QString&  fileName) const;
   QList<QFileInfo >  entryInfoList(QDir* theWrappedObject, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QString  static_QDir_rootPath();
   QList<QFileInfo >  static_QDir_drives();
   bool  static_QDir_match(const QStringList&  filters, const QString&  fileName);
   void refresh(QDir* theWrappedObject) const;
   bool  remove(QDir* theWrappedObject, const QString&  fileName);
   QDir  static_QDir_current();
   bool  isReadable(QDir* theWrappedObject) const;
   QString  static_QDir_homePath();
   bool  mkpath(QDir* theWrappedObject, const QString&  dirPath) const;
   bool  cd(QDir* theWrappedObject, const QString&  dirName);
   bool  rmdir(QDir* theWrappedObject, const QString&  dirName) const;
   QString  absolutePath(QDir* theWrappedObject) const;
   uint  count(QDir* theWrappedObject) const;
   bool  rename(QDir* theWrappedObject, const QString&  oldName, const QString&  newName);
   bool  cdUp(QDir* theWrappedObject);
   bool  isRelative(QDir* theWrappedObject) const;
   QStringList  nameFilters(QDir* theWrappedObject) const;
   QStringList  static_QDir_nameFiltersFromString(const QString&  nameFilter);
   bool  exists(QDir* theWrappedObject, const QString&  name) const;
   QChar  static_QDir_separator();
   void setFilter(QDir* theWrappedObject, QDir::Filters  filter);
   QDir  static_QDir_home();
   void setPath(QDir* theWrappedObject, const QString&  path);
   QString  static_QDir_tempPath();
   bool  makeAbsolute(QDir* theWrappedObject);
   bool  mkdir(QDir* theWrappedObject, const QString&  dirName) const;
   QString  path(QDir* theWrappedObject) const;
   QString  operator_subscript(QDir* theWrappedObject, int  arg__1) const;
   QStringList  static_QDir_searchPaths(const QString&  prefix);
   void setNameFilters(QDir* theWrappedObject, const QStringList&  nameFilters);
   bool  static_QDir_isAbsolutePath(const QString&  path);
   void static_QDir_setSearchPaths(const QString&  prefix, const QStringList&  searchPaths);
   bool  rmpath(QDir* theWrappedObject, const QString&  dirPath) const;
   bool  operator_equal(QDir* theWrappedObject, const QDir&  dir) const;
   QString  relativeFilePath(QDir* theWrappedObject, const QString&  fileName) const;
   void setSorting(QDir* theWrappedObject, QDir::SortFlags  sort);
   QStringList  entryList(QDir* theWrappedObject, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QDir  static_QDir_root();
   QString  canonicalPath(QDir* theWrappedObject) const;
   bool  static_QDir_isRelativePath(const QString&  path);
   bool  static_QDir_match(const QString&  filter, const QString&  fileName);
   QString  static_QDir_currentPath();
    QString toString(QDir*);
};

#endif // PYTHONQTWRAPPER_QDIR_H
