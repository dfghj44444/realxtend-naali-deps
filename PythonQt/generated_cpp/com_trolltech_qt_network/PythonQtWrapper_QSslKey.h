#ifndef PYTHONQTWRAPPER_QSSLKEY_H
#define PYTHONQTWRAPPER_QSSLKEY_H

#include <qsslkey.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qsslkey.h>

class PythonQtWrapper_QSslKey : public QObject
{ Q_OBJECT
public:
public slots:
QSslKey* new_QSslKey();
QSslKey* new_QSslKey(QIODevice*  device, QSsl::KeyAlgorithm  algorithm, QSsl::EncodingFormat  format = QSsl::Pem, QSsl::KeyType  type = QSsl::PrivateKey, const QByteArray&  passPhrase = QByteArray());
QSslKey* new_QSslKey(const QByteArray&  encoded, QSsl::KeyAlgorithm  algorithm, QSsl::EncodingFormat  format = QSsl::Pem, QSsl::KeyType  type = QSsl::PrivateKey, const QByteArray&  passPhrase = QByteArray());
QSslKey* new_QSslKey(const QSslKey&  other);
void delete_QSslKey(QSslKey* obj) { delete obj; } 
   void clear(QSslKey* theWrappedObject);
   QByteArray  toDer(QSslKey* theWrappedObject, const QByteArray&  passPhrase = QByteArray()) const;
   bool  isNull(QSslKey* theWrappedObject) const;
   QSsl::KeyAlgorithm  algorithm(QSslKey* theWrappedObject) const;
   int  length(QSslKey* theWrappedObject) const;
   QByteArray  toPem(QSslKey* theWrappedObject, const QByteArray&  passPhrase = QByteArray()) const;
   Qt::HANDLE  handle(QSslKey* theWrappedObject) const;
   QSsl::KeyType  type(QSslKey* theWrappedObject) const;
   QSslKey*  operator_assign(QSslKey* theWrappedObject, const QSslKey&  other);
   bool  operator_equal(QSslKey* theWrappedObject, const QSslKey&  key) const;
    QString toString(QSslKey*);
};

#endif // PYTHONQTWRAPPER_QSSLKEY_H
