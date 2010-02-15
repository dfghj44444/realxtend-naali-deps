#ifndef PYTHONQTWRAPPER_QSSLCONFIGURATION_H
#define PYTHONQTWRAPPER_QSSLCONFIGURATION_H

#include <qsslconfiguration.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qlist.h>
#include <qsslcertificate.h>
#include <qsslcipher.h>
#include <qsslconfiguration.h>
#include <qsslkey.h>

class PythonQtWrapper_QSslConfiguration : public QObject
{ Q_OBJECT
public:
public slots:
QSslConfiguration* new_QSslConfiguration();
QSslConfiguration* new_QSslConfiguration(const QSslConfiguration&  other);
void delete_QSslConfiguration(QSslConfiguration* obj) { delete obj; } 
   void setCiphers(QSslConfiguration* theWrappedObject, const QList<QSslCipher >&  ciphers);
   QSsl::SslProtocol  protocol(QSslConfiguration* theWrappedObject) const;
   QSslConfiguration*  operator_assign(QSslConfiguration* theWrappedObject, const QSslConfiguration&  other);
   QList<QSslCertificate >  caCertificates(QSslConfiguration* theWrappedObject) const;
   QSslCertificate  peerCertificate(QSslConfiguration* theWrappedObject) const;
   void setProtocol(QSslConfiguration* theWrappedObject, QSsl::SslProtocol  protocol);
   QSslConfiguration  static_QSslConfiguration_defaultConfiguration();
   void setLocalCertificate(QSslConfiguration* theWrappedObject, const QSslCertificate&  certificate);
   QSslCipher  sessionCipher(QSslConfiguration* theWrappedObject) const;
   void setPeerVerifyDepth(QSslConfiguration* theWrappedObject, int  depth);
   bool  isNull(QSslConfiguration* theWrappedObject) const;
   QSslKey  privateKey(QSslConfiguration* theWrappedObject) const;
   void setCaCertificates(QSslConfiguration* theWrappedObject, const QList<QSslCertificate >&  certificates);
   QSslCertificate  localCertificate(QSslConfiguration* theWrappedObject) const;
   QSslSocket::PeerVerifyMode  peerVerifyMode(QSslConfiguration* theWrappedObject) const;
   int  peerVerifyDepth(QSslConfiguration* theWrappedObject) const;
   void setPeerVerifyMode(QSslConfiguration* theWrappedObject, QSslSocket::PeerVerifyMode  mode);
   QList<QSslCipher >  ciphers(QSslConfiguration* theWrappedObject) const;
   QList<QSslCertificate >  peerCertificateChain(QSslConfiguration* theWrappedObject) const;
   void setPrivateKey(QSslConfiguration* theWrappedObject, const QSslKey&  key);
   void static_QSslConfiguration_setDefaultConfiguration(const QSslConfiguration&  configuration);
   bool  operator_equal(QSslConfiguration* theWrappedObject, const QSslConfiguration&  other) const;
};

#endif // PYTHONQTWRAPPER_QSSLCONFIGURATION_H
