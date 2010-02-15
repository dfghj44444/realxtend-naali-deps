#include "PythonQtWrapper_QSslCertificate.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QDateTime>
#include <QVariant>
#include <qbytearray.h>
#include <qdatetime.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qsslcertificate.h>
#include <qsslkey.h>

QSslCertificate* PythonQtWrapper_QSslCertificate::new_QSslCertificate(QIODevice*  device, QSsl::EncodingFormat  format)
{ 
return new QSslCertificate(device, format); }

QSslCertificate* PythonQtWrapper_QSslCertificate::new_QSslCertificate(const QByteArray&  encoded, QSsl::EncodingFormat  format)
{ 
return new QSslCertificate(encoded, format); }

QSslCertificate* PythonQtWrapper_QSslCertificate::new_QSslCertificate(const QSslCertificate&  other)
{ 
return new QSslCertificate(other); }

bool  PythonQtWrapper_QSslCertificate::isValid(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QByteArray  PythonQtWrapper_QSslCertificate::toDer(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->toDer());
}

QString  PythonQtWrapper_QSslCertificate::subjectInfo(QSslCertificate* theWrappedObject, const QByteArray&  tag) const
{
  return ( theWrappedObject->subjectInfo(tag));
}

void PythonQtWrapper_QSslCertificate::clear(QSslCertificate* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QList<QSslCertificate >  PythonQtWrapper_QSslCertificate::static_QSslCertificate_fromDevice(QIODevice*  device, QSsl::EncodingFormat  format)
{
  return (QSslCertificate::fromDevice(device, format));
}

QList<QSslCertificate >  PythonQtWrapper_QSslCertificate::static_QSslCertificate_fromData(const QByteArray&  data, QSsl::EncodingFormat  format)
{
  return (QSslCertificate::fromData(data, format));
}

QList<QSslCertificate >  PythonQtWrapper_QSslCertificate::static_QSslCertificate_fromPath(const QString&  path, QSsl::EncodingFormat  format, QRegExp::PatternSyntax  syntax)
{
  return (QSslCertificate::fromPath(path, format, syntax));
}

QDateTime  PythonQtWrapper_QSslCertificate::expiryDate(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->expiryDate());
}

bool  PythonQtWrapper_QSslCertificate::operator_equal(QSslCertificate* theWrappedObject, const QSslCertificate&  other) const
{
  return ( (*theWrappedObject)== other);
}

QString  PythonQtWrapper_QSslCertificate::issuerInfo(QSslCertificate* theWrappedObject, const QByteArray&  tag) const
{
  return ( theWrappedObject->issuerInfo(tag));
}

QString  PythonQtWrapper_QSslCertificate::subjectInfo(QSslCertificate* theWrappedObject, QSslCertificate::SubjectInfo  info) const
{
  return ( theWrappedObject->subjectInfo(info));
}

bool  PythonQtWrapper_QSslCertificate::isNull(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QMultiMap<QSsl::AlternateNameEntryType , QString >  PythonQtWrapper_QSslCertificate::alternateSubjectNames(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->alternateSubjectNames());
}

Qt::HANDLE  PythonQtWrapper_QSslCertificate::handle(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->handle());
}

QString  PythonQtWrapper_QSslCertificate::issuerInfo(QSslCertificate* theWrappedObject, QSslCertificate::SubjectInfo  info) const
{
  return ( theWrappedObject->issuerInfo(info));
}

QSslKey  PythonQtWrapper_QSslCertificate::publicKey(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->publicKey());
}

QSslCertificate*  PythonQtWrapper_QSslCertificate::operator_assign(QSslCertificate* theWrappedObject, const QSslCertificate&  other)
{
  return &( (*theWrappedObject)= other);
}

QByteArray  PythonQtWrapper_QSslCertificate::version(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->version());
}

QByteArray  PythonQtWrapper_QSslCertificate::serialNumber(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->serialNumber());
}

QByteArray  PythonQtWrapper_QSslCertificate::toPem(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->toPem());
}

QByteArray  PythonQtWrapper_QSslCertificate::digest(QSslCertificate* theWrappedObject, QCryptographicHash::Algorithm  algorithm) const
{
  return ( theWrappedObject->digest(algorithm));
}

QDateTime  PythonQtWrapper_QSslCertificate::effectiveDate(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->effectiveDate());
}

QString PythonQtWrapper_QSslCertificate::toString(QSslCertificate* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

