#include "PythonQtWrapper_QNetworkAddressEntry.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qhostaddress.h>
#include <qnetworkinterface.h>

QNetworkAddressEntry* PythonQtWrapper_QNetworkAddressEntry::new_QNetworkAddressEntry()
{ 
return new QNetworkAddressEntry(); }

QNetworkAddressEntry* PythonQtWrapper_QNetworkAddressEntry::new_QNetworkAddressEntry(const QNetworkAddressEntry&  other)
{ 
return new QNetworkAddressEntry(other); }

int  PythonQtWrapper_QNetworkAddressEntry::prefixLength(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->prefixLength());
}

QHostAddress  PythonQtWrapper_QNetworkAddressEntry::ip(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->ip());
}

void PythonQtWrapper_QNetworkAddressEntry::setBroadcast(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newBroadcast)
{
  ( theWrappedObject->setBroadcast(newBroadcast));
}

QHostAddress  PythonQtWrapper_QNetworkAddressEntry::netmask(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->netmask());
}

bool  PythonQtWrapper_QNetworkAddressEntry::operator_equal(QNetworkAddressEntry* theWrappedObject, const QNetworkAddressEntry&  other) const
{
  return ( (*theWrappedObject)== other);
}

QHostAddress  PythonQtWrapper_QNetworkAddressEntry::broadcast(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->broadcast());
}

void PythonQtWrapper_QNetworkAddressEntry::setIp(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newIp)
{
  ( theWrappedObject->setIp(newIp));
}

void PythonQtWrapper_QNetworkAddressEntry::setNetmask(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newNetmask)
{
  ( theWrappedObject->setNetmask(newNetmask));
}

void PythonQtWrapper_QNetworkAddressEntry::setPrefixLength(QNetworkAddressEntry* theWrappedObject, int  length)
{
  ( theWrappedObject->setPrefixLength(length));
}

