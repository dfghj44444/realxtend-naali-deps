#ifndef PYTHONQTWRAPPER_QFILEINFO_H
#define PYTHONQTWRAPPER_QFILEINFO_H

#include <qfileinfo.h>
#include <QObject>

#include <PythonQt.h>

#include <QDateTime>
#include <QDir>
#include <QVariant>
#include <qdatetime.h>
#include <qdir.h>
#include <qfile.h>
#include <qfileinfo.h>

class PythonQtWrapper_QFileInfo : public QObject
{ Q_OBJECT
public:
public slots:
QFileInfo* new_QFileInfo();
QFileInfo* new_QFileInfo(const QDir&  dir, const QString&  file);
QFileInfo* new_QFileInfo(const QFile&  file);
QFileInfo* new_QFileInfo(const QFileInfo&  fileinfo);
QFileInfo* new_QFileInfo(const QString&  file);
void delete_QFileInfo(QFileInfo* obj) { delete obj; } 
   QString  symLinkTarget(QFileInfo* theWrappedObject) const;
   void setCaching(QFileInfo* theWrappedObject, bool  on);
   void refresh(QFileInfo* theWrappedObject);
   QString  canonicalFilePath(QFileInfo* theWrappedObject) const;
   bool  isWritable(QFileInfo* theWrappedObject) const;
   bool  caching(QFileInfo* theWrappedObject) const;
   bool  isSymLink(QFileInfo* theWrappedObject) const;
   QString  completeBaseName(QFileInfo* theWrappedObject) const;
   uint  groupId(QFileInfo* theWrappedObject) const;
   QDateTime  lastModified(QFileInfo* theWrappedObject) const;
   void setFile(QFileInfo* theWrappedObject, const QFile&  file);
   QDateTime  lastRead(QFileInfo* theWrappedObject) const;
   QString  path(QFileInfo* theWrappedObject) const;
   QString  owner(QFileInfo* theWrappedObject) const;
   bool  isRelative(QFileInfo* theWrappedObject) const;
   bool  isFile(QFileInfo* theWrappedObject) const;
   QString  filePath(QFileInfo* theWrappedObject) const;
   QDir  dir(QFileInfo* theWrappedObject) const;
   bool  operator_equal(QFileInfo* theWrappedObject, const QFileInfo&  fileinfo);
   bool  permission(QFileInfo* theWrappedObject, QFile::Permissions  permissions) const;
   QString  canonicalPath(QFileInfo* theWrappedObject) const;
   bool  isRoot(QFileInfo* theWrappedObject) const;
   QDir  absoluteDir(QFileInfo* theWrappedObject) const;
   uint  ownerId(QFileInfo* theWrappedObject) const;
   bool  isDir(QFileInfo* theWrappedObject) const;
   bool  isHidden(QFileInfo* theWrappedObject) const;
   QString  baseName(QFileInfo* theWrappedObject) const;
   QDateTime  created(QFileInfo* theWrappedObject) const;
   bool  isExecutable(QFileInfo* theWrappedObject) const;
   QString  suffix(QFileInfo* theWrappedObject) const;
   QString  group(QFileInfo* theWrappedObject) const;
   bool  isAbsolute(QFileInfo* theWrappedObject) const;
   bool  isReadable(QFileInfo* theWrappedObject) const;
   QString  absolutePath(QFileInfo* theWrappedObject) const;
   QString  fileName(QFileInfo* theWrappedObject) const;
   QString  bundleName(QFileInfo* theWrappedObject) const;
   bool  exists(QFileInfo* theWrappedObject) const;
   bool  makeAbsolute(QFileInfo* theWrappedObject);
   void setFile(QFileInfo* theWrappedObject, const QString&  file);
   qint64  size(QFileInfo* theWrappedObject) const;
   QString  absoluteFilePath(QFileInfo* theWrappedObject) const;
   QString  completeSuffix(QFileInfo* theWrappedObject) const;
   void setFile(QFileInfo* theWrappedObject, const QDir&  dir, const QString&  file);
   QFile::Permissions  permissions(QFileInfo* theWrappedObject) const;
   bool  isBundle(QFileInfo* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QFILEINFO_H
