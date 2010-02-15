#ifndef PYTHONQTWRAPPER_QFILE_H
#define PYTHONQTWRAPPER_QFILE_H

#include <qfile.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfile.h>
#include <qlist.h>
#include <qobject.h>

class PythonQtShell_QFile : public QFile
{
public:
    PythonQtShell_QFile():QFile(),_wrapper(NULL) {};
    PythonQtShell_QFile(QObject*  parent):QFile(parent),_wrapper(NULL) {};
    PythonQtShell_QFile(const QString&  name):QFile(name),_wrapper(NULL) {};
    PythonQtShell_QFile(const QString&  name, QObject*  parent):QFile(name, parent),_wrapper(NULL) {};

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void close();
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QAbstractFileEngine*  fileEngine() const;
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  flags);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  offset);
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFile : public QFile
{ public:
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QFile::writeData(data, len); }
inline bool  promoted_open(QIODevice::OpenMode  flags) { return QFile::open(flags); }
inline bool  promoted_atEnd() const { return QFile::atEnd(); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return QFile::readLineData(data, maxlen); }
inline bool  promoted_seek(qint64  offset) { return QFile::seek(offset); }
inline void promoted_close() { QFile::close(); }
inline qint64  promoted_pos() const { return QFile::pos(); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return QFile::readData(data, maxlen); }
inline QAbstractFileEngine*  promoted_fileEngine() const { return QFile::fileEngine(); }
inline bool  promoted_isSequential() const { return QFile::isSequential(); }
inline qint64  promoted_size() const { return QFile::size(); }
};

class PythonQtWrapper_QFile : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FileError MemoryMapFlags Permission )
Q_FLAGS(Permissions )
enum FileError{
  NoError = QFile::NoError,   ReadError = QFile::ReadError,   WriteError = QFile::WriteError,   FatalError = QFile::FatalError,   ResourceError = QFile::ResourceError,   OpenError = QFile::OpenError,   AbortError = QFile::AbortError,   TimeOutError = QFile::TimeOutError,   UnspecifiedError = QFile::UnspecifiedError,   RemoveError = QFile::RemoveError,   RenameError = QFile::RenameError,   PositionError = QFile::PositionError,   ResizeError = QFile::ResizeError,   PermissionsError = QFile::PermissionsError,   CopyError = QFile::CopyError};
enum MemoryMapFlags{
  NoOptions = QFile::NoOptions};
enum Permission{
  ReadOwner = QFile::ReadOwner,   WriteOwner = QFile::WriteOwner,   ExeOwner = QFile::ExeOwner,   ReadUser = QFile::ReadUser,   WriteUser = QFile::WriteUser,   ExeUser = QFile::ExeUser,   ReadGroup = QFile::ReadGroup,   WriteGroup = QFile::WriteGroup,   ExeGroup = QFile::ExeGroup,   ReadOther = QFile::ReadOther,   WriteOther = QFile::WriteOther,   ExeOther = QFile::ExeOther};
Q_DECLARE_FLAGS(Permissions, Permission)
public slots:
QFile* new_QFile();
QFile* new_QFile(QObject*  parent);
QFile* new_QFile(const QString&  name);
QFile* new_QFile(const QString&  name, QObject*  parent);
void delete_QFile(QFile* obj) { delete obj; } 
   bool  static_QFile_exists(const QString&  fileName);
   bool  link(QFile* theWrappedObject, const QString&  newName);
   QFile::Permissions  static_QFile_permissions(const QString&  filename);
   bool  setPermissions(QFile* theWrappedObject, QFile::Permissions  permissionSpec);
   qint64  writeData(QFile* theWrappedObject, const char*  data, qint64  len);
   QString  static_QFile_symLinkTarget(const QString&  fileName);
   bool  open(QFile* theWrappedObject, QIODevice::OpenMode  flags);
   bool  remove(QFile* theWrappedObject);
   void unsetError(QFile* theWrappedObject);
   bool  exists(QFile* theWrappedObject) const;
   bool  static_QFile_remove(const QString&  fileName);
   bool  static_QFile_copy(const QString&  fileName, const QString&  newName);
   QString  fileName(QFile* theWrappedObject) const;
   bool  rename(QFile* theWrappedObject, const QString&  newName);
   bool  copy(QFile* theWrappedObject, const QString&  newName);
   bool  atEnd(QFile* theWrappedObject) const;
   qint64  readLineData(QFile* theWrappedObject, char*  data, qint64  maxlen);
   QFile::FileError  error(QFile* theWrappedObject) const;
   bool  seek(QFile* theWrappedObject, qint64  offset);
   void close(QFile* theWrappedObject);
   bool  static_QFile_setPermissions(const QString&  filename, QFile::Permissions  permissionSpec);
   QFile::Permissions  permissions(QFile* theWrappedObject) const;
   QByteArray  static_QFile_encodeName(const QString&  fileName);
   bool  flush(QFile* theWrappedObject);
   qint64  pos(QFile* theWrappedObject) const;
   bool  static_QFile_resize(const QString&  filename, qint64  sz);
   int  handle(QFile* theWrappedObject) const;
   qint64  readData(QFile* theWrappedObject, char*  data, qint64  maxlen);
   QAbstractFileEngine*  fileEngine(QFile* theWrappedObject) const;
   bool  static_QFile_rename(const QString&  oldName, const QString&  newName);
   bool  resize(QFile* theWrappedObject, qint64  sz);
   bool  static_QFile_link(const QString&  oldname, const QString&  newName);
   bool  isSequential(QFile* theWrappedObject) const;
   QString  symLinkTarget(QFile* theWrappedObject) const;
   QString  static_QFile_decodeName(const QByteArray&  localFileName);
   void setFileName(QFile* theWrappedObject, const QString&  name);
   qint64  size(QFile* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QFILE_H
