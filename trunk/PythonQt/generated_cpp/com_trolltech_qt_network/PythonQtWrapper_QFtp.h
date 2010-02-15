#ifndef PYTHONQTWRAPPER_QFTP_H
#define PYTHONQTWRAPPER_QFTP_H

#include <qftp.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qftp.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qobject.h>
#include <qurlinfo.h>

class PythonQtShell_QFtp : public QFtp
{
public:
    PythonQtShell_QFtp(QObject*  parent = 0):QFtp(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QFtp : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TransferType Error Command TransferMode State )
enum TransferType{
  Binary = QFtp::Binary,   Ascii = QFtp::Ascii};
enum Error{
  NoError = QFtp::NoError,   UnknownError = QFtp::UnknownError,   HostNotFound = QFtp::HostNotFound,   ConnectionRefused = QFtp::ConnectionRefused,   NotConnected = QFtp::NotConnected};
enum Command{
  None = QFtp::None,   SetTransferMode = QFtp::SetTransferMode,   SetProxy = QFtp::SetProxy,   ConnectToHost = QFtp::ConnectToHost,   Login = QFtp::Login,   Close = QFtp::Close,   List = QFtp::List,   Cd = QFtp::Cd,   Get = QFtp::Get,   Put = QFtp::Put,   Remove = QFtp::Remove,   Mkdir = QFtp::Mkdir,   Rmdir = QFtp::Rmdir,   Rename = QFtp::Rename,   RawCommand = QFtp::RawCommand};
enum TransferMode{
  Active = QFtp::Active,   Passive = QFtp::Passive};
enum State{
  Unconnected = QFtp::Unconnected,   HostLookup = QFtp::HostLookup,   Connecting = QFtp::Connecting,   Connected = QFtp::Connected,   LoggedIn = QFtp::LoggedIn,   Closing = QFtp::Closing};
public slots:
QFtp* new_QFtp(QObject*  parent = 0);
void delete_QFtp(QFtp* obj) { delete obj; } 
   int  put(QFtp* theWrappedObject, const QByteArray&  data, const QString&  file, QFtp::TransferType  type = QFtp::Binary);
   int  setProxy(QFtp* theWrappedObject, const QString&  host, unsigned short  port);
   QFtp::Error  error(QFtp* theWrappedObject) const;
   int  login(QFtp* theWrappedObject, const QString&  user = QString(), const QString&  password = QString());
   qint64  bytesAvailable(QFtp* theWrappedObject) const;
   int  rawCommand(QFtp* theWrappedObject, const QString&  command);
   int  cd(QFtp* theWrappedObject, const QString&  dir);
   QFtp::Command  currentCommand(QFtp* theWrappedObject) const;
   int  setTransferMode(QFtp* theWrappedObject, QFtp::TransferMode  mode);
   int  close(QFtp* theWrappedObject);
   QString  errorString(QFtp* theWrappedObject) const;
   QFtp::State  state(QFtp* theWrappedObject) const;
   int  connectToHost(QFtp* theWrappedObject, const QString&  host, unsigned short  port = 21);
   int  put(QFtp* theWrappedObject, QIODevice*  dev, const QString&  file, QFtp::TransferType  type = QFtp::Binary);
   int  remove(QFtp* theWrappedObject, const QString&  file);
   int  get(QFtp* theWrappedObject, const QString&  file, QIODevice*  dev = 0, QFtp::TransferType  type = QFtp::Binary);
   int  currentId(QFtp* theWrappedObject) const;
   int  rmdir(QFtp* theWrappedObject, const QString&  dir);
   int  mkdir(QFtp* theWrappedObject, const QString&  dir);
   qint64  read(QFtp* theWrappedObject, char*  data, qint64  maxlen);
   QByteArray  readAll(QFtp* theWrappedObject);
   void clearPendingCommands(QFtp* theWrappedObject);
   int  list(QFtp* theWrappedObject, const QString&  dir = QString());
   QIODevice*  currentDevice(QFtp* theWrappedObject) const;
   bool  hasPendingCommands(QFtp* theWrappedObject) const;
   int  rename(QFtp* theWrappedObject, const QString&  oldname, const QString&  newname);
};

#endif // PYTHONQTWRAPPER_QFTP_H
