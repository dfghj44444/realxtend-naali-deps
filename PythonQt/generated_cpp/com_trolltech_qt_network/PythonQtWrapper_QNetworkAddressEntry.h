#ifndef PYTHONQTWRAPPER_QNETWORKADDRESSENTRY_H
#define PYTHONQTWRAPPER_QNETWORKADDRESSENTRY_H

#include <qnetworkinterface.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qhostaddress.h>
#include <qnetworkinterface.h>

class PythonQtWrapper_QNetworkAddressEntry : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkAddressEntry* new_QNetworkAddressEntry();
QNetworkAddressEntry* new_QNetworkAddressEntry(const QNetworkAddressEntry&  other);
void delete_QNetworkAddressEntry(QNetworkAddressEntry* obj) { delete obj; } 
   int  prefixLength(QNetworkAddressEntry* theWrappedObject) const;
   QHostAddress  ip(QNetworkAddressEntry* theWrappedObject) const;
   void setBroadcast(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newBroadcast);
   QHostAddress  netmask(QNetworkAddressEntry* theWrappedObject) const;
   bool  operator_equal(QNetworkAddressEntry* theWrappedObject, const QNetworkAddressEntry&  other) const;
   QHostAddress  broadcast(QNetworkAddressEntry* theWrappedObject) const;
   void setIp(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newIp);
   void setNetmask(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newNetmask);
   void setPrefixLength(QNetworkAddressEntry* theWrappedObject, int  length);
};

#endif // PYTHONQTWRAPPER_QNETWORKADDRESSENTRY_H
