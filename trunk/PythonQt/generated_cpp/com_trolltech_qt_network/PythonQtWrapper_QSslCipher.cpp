#include "PythonQtWrapper_QSslCipher.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qsslcipher.h>

QSslCipher* PythonQtWrapper_QSslCipher::new_QSslCipher()
{ 
return new QSslCipher(); }

QSslCipher* PythonQtWrapper_QSslCipher::new_QSslCipher(const QSslCipher&  other)
{ 
return new QSslCipher(other); }

QSslCipher* PythonQtWrapper_QSslCipher::new_QSslCipher(const QString&  name, QSsl::SslProtocol  protocol)
{ 
return new QSslCipher(name, protocol); }

QString  PythonQtWrapper_QSslCipher::encryptionMethod(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->encryptionMethod());
}

QString  PythonQtWrapper_QSslCipher::authenticationMethod(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->authenticationMethod());
}

bool  PythonQtWrapper_QSslCipher::operator_equal(QSslCipher* theWrappedObject, const QSslCipher&  other) const
{
  return ( (*theWrappedObject)== other);
}

QString  PythonQtWrapper_QSslCipher::protocolString(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->protocolString());
}

QString  PythonQtWrapper_QSslCipher::keyExchangeMethod(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->keyExchangeMethod());
}

QSsl::SslProtocol  PythonQtWrapper_QSslCipher::protocol(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->protocol());
}

bool  PythonQtWrapper_QSslCipher::isNull(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

int  PythonQtWrapper_QSslCipher::usedBits(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->usedBits());
}

int  PythonQtWrapper_QSslCipher::supportedBits(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->supportedBits());
}

QString  PythonQtWrapper_QSslCipher::name(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QSslCipher*  PythonQtWrapper_QSslCipher::operator_assign(QSslCipher* theWrappedObject, const QSslCipher&  other)
{
  return &( (*theWrappedObject)= other);
}

QString PythonQtWrapper_QSslCipher::toString(QSslCipher* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

