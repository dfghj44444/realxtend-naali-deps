#ifndef PYTHONQTWRAPPER_QSSLCERTIFICATE_H
#define PYTHONQTWRAPPER_QSSLCERTIFICATE_H

#include <qsslcertificate.h>
#include <QObject>

#include <PythonQt.h>

#include <QDateTime>
#include <QVariant>
#include <qbytearray.h>
#include <qdatetime.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qsslcertificate.h>
#include <qsslkey.h>

class PythonQtWrapper_QSslCertificate : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SubjectInfo )
enum SubjectInfo{
  Organization = QSslCertificate::Organization,   CommonName = QSslCertificate::CommonName,   LocalityName = QSslCertificate::LocalityName,   OrganizationalUnitName = QSslCertificate::OrganizationalUnitName,   CountryName = QSslCertificate::CountryName,   StateOrProvinceName = QSslCertificate::StateOrProvinceName};
public slots:
QSslCertificate* new_QSslCertificate(QIODevice*  device, QSsl::EncodingFormat  format = QSsl::Pem);
QSslCertificate* new_QSslCertificate(const QByteArray&  encoded = QByteArray(), QSsl::EncodingFormat  format = QSsl::Pem);
QSslCertificate* new_QSslCertificate(const QSslCertificate&  other);
void delete_QSslCertificate(QSslCertificate* obj) { delete obj; } 
   bool  isValid(QSslCertificate* theWrappedObject) const;
   QByteArray  toDer(QSslCertificate* theWrappedObject) const;
   QString  subjectInfo(QSslCertificate* theWrappedObject, const QByteArray&  tag) const;
   void clear(QSslCertificate* theWrappedObject);
   QList<QSslCertificate >  static_QSslCertificate_fromDevice(QIODevice*  device, QSsl::EncodingFormat  format = QSsl::Pem);
   QList<QSslCertificate >  static_QSslCertificate_fromData(const QByteArray&  data, QSsl::EncodingFormat  format = QSsl::Pem);
   QList<QSslCertificate >  static_QSslCertificate_fromPath(const QString&  path, QSsl::EncodingFormat  format = QSsl::Pem, QRegExp::PatternSyntax  syntax = QRegExp::FixedString);
   QDateTime  expiryDate(QSslCertificate* theWrappedObject) const;
   bool  operator_equal(QSslCertificate* theWrappedObject, const QSslCertificate&  other) const;
   QString  issuerInfo(QSslCertificate* theWrappedObject, const QByteArray&  tag) const;
   QString  subjectInfo(QSslCertificate* theWrappedObject, QSslCertificate::SubjectInfo  info) const;
   bool  isNull(QSslCertificate* theWrappedObject) const;
   QMultiMap<QSsl::AlternateNameEntryType , QString >  alternateSubjectNames(QSslCertificate* theWrappedObject) const;
   Qt::HANDLE  handle(QSslCertificate* theWrappedObject) const;
   QString  issuerInfo(QSslCertificate* theWrappedObject, QSslCertificate::SubjectInfo  info) const;
   QSslKey  publicKey(QSslCertificate* theWrappedObject) const;
   QSslCertificate*  operator_assign(QSslCertificate* theWrappedObject, const QSslCertificate&  other);
   QByteArray  version(QSslCertificate* theWrappedObject) const;
   QByteArray  serialNumber(QSslCertificate* theWrappedObject) const;
   QByteArray  toPem(QSslCertificate* theWrappedObject) const;
   QByteArray  digest(QSslCertificate* theWrappedObject, QCryptographicHash::Algorithm  algorithm = QCryptographicHash::Md5) const;
   QDateTime  effectiveDate(QSslCertificate* theWrappedObject) const;
    QString toString(QSslCertificate*);
};

#endif // PYTHONQTWRAPPER_QSSLCERTIFICATE_H
