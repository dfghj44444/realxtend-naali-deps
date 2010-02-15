#ifndef PYTHONQTWRAPPER_QABSTRACTSOCKET_H
#define PYTHONQTWRAPPER_QABSTRACTSOCKET_H

#include <qabstractsocket.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractsocket.h>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>

class PythonQtShell_QAbstractSocket : public QAbstractSocket
{
public:
    PythonQtShell_QAbstractSocket(QAbstractSocket::SocketType  socketType, QObject*  parent):QAbstractSocket(socketType, parent),_wrapper(NULL) {};

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void close();
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  data, qint64  len);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractSocket : public QAbstractSocket
{ public:
inline bool  promoted_waitForBytesWritten(int  msecs = 30000) { return QAbstractSocket::waitForBytesWritten(msecs); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return QAbstractSocket::readLineData(data, maxlen); }
inline void promoted_close() { QAbstractSocket::close(); }
inline qint64  promoted_bytesToWrite() const { return QAbstractSocket::bytesToWrite(); }
inline bool  promoted_waitForReadyRead(int  msecs = 30000) { return QAbstractSocket::waitForReadyRead(msecs); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return QAbstractSocket::readData(data, maxlen); }
inline bool  promoted_isSequential() const { return QAbstractSocket::isSequential(); }
inline qint64  promoted_bytesAvailable() const { return QAbstractSocket::bytesAvailable(); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QAbstractSocket::writeData(data, len); }
inline bool  promoted_atEnd() const { return QAbstractSocket::atEnd(); }
inline bool  promoted_canReadLine() const { return QAbstractSocket::canReadLine(); }
};

class PythonQtWrapper_QAbstractSocket : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SocketType SocketError NetworkLayerProtocol SocketOption SocketState )
enum SocketType{
  TcpSocket = QAbstractSocket::TcpSocket,   UdpSocket = QAbstractSocket::UdpSocket,   UnknownSocketType = QAbstractSocket::UnknownSocketType};
enum SocketError{
  ConnectionRefusedError = QAbstractSocket::ConnectionRefusedError,   RemoteHostClosedError = QAbstractSocket::RemoteHostClosedError,   HostNotFoundError = QAbstractSocket::HostNotFoundError,   SocketAccessError = QAbstractSocket::SocketAccessError,   SocketResourceError = QAbstractSocket::SocketResourceError,   SocketTimeoutError = QAbstractSocket::SocketTimeoutError,   DatagramTooLargeError = QAbstractSocket::DatagramTooLargeError,   NetworkError = QAbstractSocket::NetworkError,   AddressInUseError = QAbstractSocket::AddressInUseError,   SocketAddressNotAvailableError = QAbstractSocket::SocketAddressNotAvailableError,   UnsupportedSocketOperationError = QAbstractSocket::UnsupportedSocketOperationError,   UnfinishedSocketOperationError = QAbstractSocket::UnfinishedSocketOperationError,   ProxyAuthenticationRequiredError = QAbstractSocket::ProxyAuthenticationRequiredError,   SslHandshakeFailedError = QAbstractSocket::SslHandshakeFailedError,   ProxyConnectionRefusedError = QAbstractSocket::ProxyConnectionRefusedError,   ProxyConnectionClosedError = QAbstractSocket::ProxyConnectionClosedError,   ProxyConnectionTimeoutError = QAbstractSocket::ProxyConnectionTimeoutError,   ProxyNotFoundError = QAbstractSocket::ProxyNotFoundError,   ProxyProtocolError = QAbstractSocket::ProxyProtocolError,   UnknownSocketError = QAbstractSocket::UnknownSocketError};
enum NetworkLayerProtocol{
  IPv4Protocol = QAbstractSocket::IPv4Protocol,   IPv6Protocol = QAbstractSocket::IPv6Protocol,   UnknownNetworkLayerProtocol = QAbstractSocket::UnknownNetworkLayerProtocol};
enum SocketOption{
  LowDelayOption = QAbstractSocket::LowDelayOption,   KeepAliveOption = QAbstractSocket::KeepAliveOption};
enum SocketState{
  UnconnectedState = QAbstractSocket::UnconnectedState,   HostLookupState = QAbstractSocket::HostLookupState,   ConnectingState = QAbstractSocket::ConnectingState,   ConnectedState = QAbstractSocket::ConnectedState,   BoundState = QAbstractSocket::BoundState,   ListeningState = QAbstractSocket::ListeningState,   ClosingState = QAbstractSocket::ClosingState};
public slots:
QAbstractSocket* new_QAbstractSocket(QAbstractSocket::SocketType  socketType, QObject*  parent);
void delete_QAbstractSocket(QAbstractSocket* obj) { delete obj; } 
   QNetworkProxy  proxy(QAbstractSocket* theWrappedObject) const;
   bool  isValid(QAbstractSocket* theWrappedObject) const;
   QHostAddress  peerAddress(QAbstractSocket* theWrappedObject) const;
   bool  waitForBytesWritten(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   void connectToHost(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void abort(QAbstractSocket* theWrappedObject);
   QAbstractSocket::SocketError  error(QAbstractSocket* theWrappedObject) const;
   int  socketDescriptor(QAbstractSocket* theWrappedObject) const;
   qint64  readLineData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen);
   void close(QAbstractSocket* theWrappedObject);
   bool  flush(QAbstractSocket* theWrappedObject);
   QString  peerName(QAbstractSocket* theWrappedObject) const;
   bool  waitForDisconnected(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   void setSocketOption(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketOption  option, const QVariant&  value);
   bool  waitForConnected(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   qint64  bytesToWrite(QAbstractSocket* theWrappedObject) const;
   void setReadBufferSize(QAbstractSocket* theWrappedObject, qint64  size);
   bool  waitForReadyRead(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   QHostAddress  localAddress(QAbstractSocket* theWrappedObject) const;
   qint64  readData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen);
   void connectToHost(QAbstractSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void disconnectFromHost(QAbstractSocket* theWrappedObject);
   bool  isSequential(QAbstractSocket* theWrappedObject) const;
   qint64  bytesAvailable(QAbstractSocket* theWrappedObject) const;
   unsigned short  localPort(QAbstractSocket* theWrappedObject) const;
   void setProxy(QAbstractSocket* theWrappedObject, const QNetworkProxy&  networkProxy);
   unsigned short  peerPort(QAbstractSocket* theWrappedObject) const;
   qint64  readBufferSize(QAbstractSocket* theWrappedObject) const;
   QAbstractSocket::SocketType  socketType(QAbstractSocket* theWrappedObject) const;
   bool  setSocketDescriptor(QAbstractSocket* theWrappedObject, int  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   qint64  writeData(QAbstractSocket* theWrappedObject, const char*  data, qint64  len);
   bool  atEnd(QAbstractSocket* theWrappedObject) const;
   QAbstractSocket::SocketState  state(QAbstractSocket* theWrappedObject) const;
   bool  canReadLine(QAbstractSocket* theWrappedObject) const;
   QVariant  socketOption(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketOption  option);
};

#endif // PYTHONQTWRAPPER_QABSTRACTSOCKET_H
