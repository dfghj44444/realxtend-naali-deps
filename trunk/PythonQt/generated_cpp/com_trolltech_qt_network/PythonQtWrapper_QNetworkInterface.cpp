#include "PythonQtWrapper_QNetworkInterface.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkinterface.h>

QNetworkInterface* PythonQtWrapper_QNetworkInterface::new_QNetworkInterface()
{ 
return new QNetworkInterface(); }

QNetworkInterface* PythonQtWrapper_QNetworkInterface::new_QNetworkInterface(const QNetworkInterface&  other)
{ 
return new QNetworkInterface(other); }

bool  PythonQtWrapper_QNetworkInterface::isValid(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QList<QNetworkAddressEntry >  PythonQtWrapper_QNetworkInterface::addressEntries(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->addressEntries());
}

QList<QHostAddress >  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_allAddresses()
{
  return (QNetworkInterface::allAddresses());
}

QNetworkInterface  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_interfaceFromIndex(int  index)
{
  return (QNetworkInterface::interfaceFromIndex(index));
}

QNetworkInterface  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_interfaceFromName(const QString&  name)
{
  return (QNetworkInterface::interfaceFromName(name));
}

QNetworkInterface::InterfaceFlags  PythonQtWrapper_QNetworkInterface::flags(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QList<QNetworkInterface >  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_allInterfaces()
{
  return (QNetworkInterface::allInterfaces());
}

QString  PythonQtWrapper_QNetworkInterface::name(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

int  PythonQtWrapper_QNetworkInterface::index(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->index());
}

QString  PythonQtWrapper_QNetworkInterface::humanReadableName(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->humanReadableName());
}

QString  PythonQtWrapper_QNetworkInterface::hardwareAddress(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->hardwareAddress());
}

QString PythonQtWrapper_QNetworkInterface::toString(QNetworkInterface* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

