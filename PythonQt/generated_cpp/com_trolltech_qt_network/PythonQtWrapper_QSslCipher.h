#ifndef PYTHONQTWRAPPER_QSSLCIPHER_H
#define PYTHONQTWRAPPER_QSSLCIPHER_H

#include <qsslcipher.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qsslcipher.h>

class PythonQtWrapper_QSslCipher : public QObject
{ Q_OBJECT
public:
public slots:
QSslCipher* new_QSslCipher();
QSslCipher* new_QSslCipher(const QSslCipher&  other);
QSslCipher* new_QSslCipher(const QString&  name, QSsl::SslProtocol  protocol);
void delete_QSslCipher(QSslCipher* obj) { delete obj; } 
   QString  encryptionMethod(QSslCipher* theWrappedObject) const;
   QString  authenticationMethod(QSslCipher* theWrappedObject) const;
   bool  operator_equal(QSslCipher* theWrappedObject, const QSslCipher&  other) const;
   QString  protocolString(QSslCipher* theWrappedObject) const;
   QString  keyExchangeMethod(QSslCipher* theWrappedObject) const;
   QSsl::SslProtocol  protocol(QSslCipher* theWrappedObject) const;
   bool  isNull(QSslCipher* theWrappedObject) const;
   int  usedBits(QSslCipher* theWrappedObject) const;
   int  supportedBits(QSslCipher* theWrappedObject) const;
   QString  name(QSslCipher* theWrappedObject) const;
   QSslCipher*  operator_assign(QSslCipher* theWrappedObject, const QSslCipher&  other);
    QString toString(QSslCipher*);
};

#endif // PYTHONQTWRAPPER_QSSLCIPHER_H
