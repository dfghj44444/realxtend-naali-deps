#ifndef PYTHONQTWRAPPER_QSSLSOCKET_H
#define PYTHONQTWRAPPER_QSSLSOCKET_H

#include <qsslsocket.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qsslcertificate.h>
#include <qsslcipher.h>
#include <qsslconfiguration.h>
#include <qsslerror.h>
#include <qsslkey.h>
#include <qsslsocket.h>

class PythonQtShell_QSslSocket : public QSslSocket
{
public:
    PythonQtShell_QSslSocket(QObject*  parent = 0):QSslSocket(parent),_wrapper(NULL) {};

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

class PythonQtPublicPromoter_QSslSocket : public QSslSocket
{ public:
inline bool  promoted_waitForBytesWritten(int  msecs = 30000) { return QSslSocket::waitForBytesWritten(msecs); }
inline qint64  promoted_bytesAvailable() const { return QSslSocket::bytesAvailable(); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return QSslSocket::readData(data, maxlen); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QSslSocket::writeData(data, len); }
inline qint64  promoted_bytesToWrite() const { return QSslSocket::bytesToWrite(); }
inline bool  promoted_canReadLine() const { return QSslSocket::canReadLine(); }
inline bool  promoted_waitForReadyRead(int  msecs = 30000) { return QSslSocket::waitForReadyRead(msecs); }
inline bool  promoted_atEnd() const { return QSslSocket::atEnd(); }
inline void promoted_close() { QSslSocket::close(); }
};

class PythonQtWrapper_QSslSocket : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SslMode PeerVerifyMode )
enum SslMode{
  UnencryptedMode = QSslSocket::UnencryptedMode,   SslClientMode = QSslSocket::SslClientMode,   SslServerMode = QSslSocket::SslServerMode};
enum PeerVerifyMode{
  VerifyNone = QSslSocket::VerifyNone,   QueryPeer = QSslSocket::QueryPeer,   VerifyPeer = QSslSocket::VerifyPeer,   AutoVerifyPeer = QSslSocket::AutoVerifyPeer};
public slots:
QSslSocket* new_QSslSocket(QObject*  parent = 0);
void delete_QSslSocket(QSslSocket* obj) { delete obj; } 
   void static_QSslSocket_addDefaultCaCertificates(const QList<QSslCertificate >&  certificates);
   QList<QSslCertificate >  caCertificates(QSslSocket* theWrappedObject) const;
   QList<QSslCertificate >  static_QSslSocket_defaultCaCertificates();
   QSslCertificate  localCertificate(QSslSocket* theWrappedObject) const;
   QVariant  socketOption(QSslSocket* theWrappedObject, QAbstractSocket::SocketOption  option);
   void static_QSslSocket_setDefaultCaCertificates(const QList<QSslCertificate >&  certificates);
   QList<QSslCipher >  static_QSslSocket_defaultCiphers();
   QSslCipher  sessionCipher(QSslSocket* theWrappedObject) const;
   bool  setSocketDescriptor(QSslSocket* theWrappedObject, int  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   bool  waitForEncrypted(QSslSocket* theWrappedObject, int  msecs = 30000);
   bool  static_QSslSocket_addDefaultCaCertificates(const QString&  path, QSsl::EncodingFormat  format = QSsl::Pem, QRegExp::PatternSyntax  syntax = QRegExp::FixedString);
   void connectToHostEncrypted(QSslSocket* theWrappedObject, const QString&  hostName, unsigned short  port, const QString&  sslPeerName, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void static_QSslSocket_setDefaultCiphers(const QList<QSslCipher >&  ciphers);
   void setLocalCertificate(QSslSocket* theWrappedObject, const QSslCertificate&  certificate);
   void setPeerVerifyMode(QSslSocket* theWrappedObject, QSslSocket::PeerVerifyMode  mode);
   void setPeerVerifyDepth(QSslSocket* theWrappedObject, int  depth);
   QSsl::SslProtocol  protocol(QSslSocket* theWrappedObject) const;
   bool  waitForBytesWritten(QSslSocket* theWrappedObject, int  msecs = 30000);
   qint64  bytesAvailable(QSslSocket* theWrappedObject) const;
   QList<QSslCipher >  ciphers(QSslSocket* theWrappedObject) const;
   qint64  readData(QSslSocket* theWrappedObject, char*  data, qint64  maxlen);
   qint64  writeData(QSslSocket* theWrappedObject, const char*  data, qint64  len);
   void addCaCertificate(QSslSocket* theWrappedObject, const QSslCertificate&  certificate);
   void addCaCertificates(QSslSocket* theWrappedObject, const QList<QSslCertificate >&  certificates);
   qint64  bytesToWrite(QSslSocket* theWrappedObject) const;
   void setLocalCertificate(QSslSocket* theWrappedObject, const QString&  fileName, QSsl::EncodingFormat  format = QSsl::Pem);
   void setCiphers(QSslSocket* theWrappedObject, const QString&  ciphers);
   void static_QSslSocket_addDefaultCaCertificate(const QSslCertificate&  certificate);
   int  peerVerifyDepth(QSslSocket* theWrappedObject) const;
   void setPrivateKey(QSslSocket* theWrappedObject, const QString&  fileName, QSsl::KeyAlgorithm  algorithm = QSsl::Rsa, QSsl::EncodingFormat  format = QSsl::Pem, const QByteArray&  passPhrase = QByteArray());
   bool  canReadLine(QSslSocket* theWrappedObject) const;
   QList<QSslCertificate >  peerCertificateChain(QSslSocket* theWrappedObject) const;
   void setPrivateKey(QSslSocket* theWrappedObject, const QSslKey&  key);
   bool  waitForReadyRead(QSslSocket* theWrappedObject, int  msecs = 30000);
   void connectToHostEncrypted(QSslSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   bool  atEnd(QSslSocket* theWrappedObject) const;
   void setCaCertificates(QSslSocket* theWrappedObject, const QList<QSslCertificate >&  certificates);
   void setSslConfiguration(QSslSocket* theWrappedObject, const QSslConfiguration&  config);
   bool  static_QSslSocket_supportsSsl();
   qint64  encryptedBytesToWrite(QSslSocket* theWrappedObject) const;
   void abort(QSslSocket* theWrappedObject);
   QSslConfiguration  sslConfiguration(QSslSocket* theWrappedObject) const;
   qint64  encryptedBytesAvailable(QSslSocket* theWrappedObject) const;
   void setReadBufferSize(QSslSocket* theWrappedObject, qint64  size);
   QList<QSslCipher >  static_QSslSocket_supportedCiphers();
   void setProtocol(QSslSocket* theWrappedObject, QSsl::SslProtocol  protocol);
   void close(QSslSocket* theWrappedObject);
   void setSocketOption(QSslSocket* theWrappedObject, QAbstractSocket::SocketOption  option, const QVariant&  value);
   void setCiphers(QSslSocket* theWrappedObject, const QList<QSslCipher >&  ciphers);
   bool  waitForConnected(QSslSocket* theWrappedObject, int  msecs = 30000);
   QSslSocket::SslMode  mode(QSslSocket* theWrappedObject) const;
   QSslSocket::PeerVerifyMode  peerVerifyMode(QSslSocket* theWrappedObject) const;
   bool  isEncrypted(QSslSocket* theWrappedObject) const;
   bool  flush(QSslSocket* theWrappedObject);
   QSslCertificate  peerCertificate(QSslSocket* theWrappedObject) const;
   QList<QSslCertificate >  static_QSslSocket_systemCaCertificates();
   bool  waitForDisconnected(QSslSocket* theWrappedObject, int  msecs = 30000);
   void ignoreSslErrors(QSslSocket* theWrappedObject, const QList<QSslError >&  errors);
   QList<QSslError >  sslErrors(QSslSocket* theWrappedObject) const;
   bool  addCaCertificates(QSslSocket* theWrappedObject, const QString&  path, QSsl::EncodingFormat  format = QSsl::Pem, QRegExp::PatternSyntax  syntax = QRegExp::FixedString);
   QSslKey  privateKey(QSslSocket* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSSLSOCKET_H
