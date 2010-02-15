#ifndef PYTHONQTWRAPPER_QSSLERROR_H
#define PYTHONQTWRAPPER_QSSLERROR_H

#include <qsslerror.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qsslcertificate.h>
#include <qsslerror.h>

class PythonQtWrapper_QSslError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SslError )
enum SslError{
  NoError = QSslError::NoError,   UnableToGetIssuerCertificate = QSslError::UnableToGetIssuerCertificate,   UnableToDecryptCertificateSignature = QSslError::UnableToDecryptCertificateSignature,   UnableToDecodeIssuerPublicKey = QSslError::UnableToDecodeIssuerPublicKey,   CertificateSignatureFailed = QSslError::CertificateSignatureFailed,   CertificateNotYetValid = QSslError::CertificateNotYetValid,   CertificateExpired = QSslError::CertificateExpired,   InvalidNotBeforeField = QSslError::InvalidNotBeforeField,   InvalidNotAfterField = QSslError::InvalidNotAfterField,   SelfSignedCertificate = QSslError::SelfSignedCertificate,   SelfSignedCertificateInChain = QSslError::SelfSignedCertificateInChain,   UnableToGetLocalIssuerCertificate = QSslError::UnableToGetLocalIssuerCertificate,   UnableToVerifyFirstCertificate = QSslError::UnableToVerifyFirstCertificate,   CertificateRevoked = QSslError::CertificateRevoked,   InvalidCaCertificate = QSslError::InvalidCaCertificate,   PathLengthExceeded = QSslError::PathLengthExceeded,   InvalidPurpose = QSslError::InvalidPurpose,   CertificateUntrusted = QSslError::CertificateUntrusted,   CertificateRejected = QSslError::CertificateRejected,   SubjectIssuerMismatch = QSslError::SubjectIssuerMismatch,   AuthorityIssuerSerialNumberMismatch = QSslError::AuthorityIssuerSerialNumberMismatch,   NoPeerCertificate = QSslError::NoPeerCertificate,   HostNameMismatch = QSslError::HostNameMismatch,   NoSslSupport = QSslError::NoSslSupport,   UnspecifiedError = QSslError::UnspecifiedError};
public slots:
QSslError* new_QSslError();
QSslError* new_QSslError(QSslError::SslError  error);
QSslError* new_QSslError(QSslError::SslError  error, const QSslCertificate&  certificate);
QSslError* new_QSslError(const QSslError&  other);
void delete_QSslError(QSslError* obj) { delete obj; } 
   QSslError*  operator_assign(QSslError* theWrappedObject, const QSslError&  other);
   QString  errorString(QSslError* theWrappedObject) const;
   bool  operator_equal(QSslError* theWrappedObject, const QSslError&  other) const;
   QSslCertificate  certificate(QSslError* theWrappedObject) const;
   QSslError::SslError  error(QSslError* theWrappedObject) const;
    QString toString(QSslError*);
};

#endif // PYTHONQTWRAPPER_QSSLERROR_H
