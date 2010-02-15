#ifndef PYTHONQTWRAPPER_QHOSTADDRESS_H
#define PYTHONQTWRAPPER_QHOSTADDRESS_H

#include <qhostaddress.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qhostaddress.h>
#include <qpair.h>

class PythonQtWrapper_QHostAddress : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SpecialAddress )
enum SpecialAddress{
  Null = QHostAddress::Null,   Broadcast = QHostAddress::Broadcast,   LocalHost = QHostAddress::LocalHost,   LocalHostIPv6 = QHostAddress::LocalHostIPv6,   Any = QHostAddress::Any,   AnyIPv6 = QHostAddress::AnyIPv6};
public slots:
QHostAddress* new_QHostAddress();
QHostAddress* new_QHostAddress(QHostAddress::SpecialAddress  address);
QHostAddress* new_QHostAddress(const QHostAddress&  copy);
QHostAddress* new_QHostAddress(const QIPv6Address&  ip6Addr);
QHostAddress* new_QHostAddress(const QString&  address);
QHostAddress* new_QHostAddress(unsigned int  ip4Addr);
void delete_QHostAddress(QHostAddress* obj) { delete obj; } 
   bool  operator_equal(QHostAddress* theWrappedObject, const QHostAddress&  address) const;
   unsigned int  toIPv4Address(QHostAddress* theWrappedObject) const;
   void clear(QHostAddress* theWrappedObject);
   void setAddress(QHostAddress* theWrappedObject, unsigned int  ip4Addr);
   bool  isInSubnet(QHostAddress* theWrappedObject, const QPair<QHostAddress , int >&  subnet) const;
   void readFrom(QHostAddress* theWrappedObject, QDataStream&  arg__1);
   void setScopeId(QHostAddress* theWrappedObject, const QString&  id);
   bool  setAddress(QHostAddress* theWrappedObject, const QString&  address);
   bool  isInSubnet(QHostAddress* theWrappedObject, const QHostAddress&  subnet, int  netmask) const;
   QPair<QHostAddress , int >  static_QHostAddress_parseSubnet(const QString&  subnet);
   void setAddress(QHostAddress* theWrappedObject, const QIPv6Address&  ip6Addr);
   QIPv6Address  toIPv6Address(QHostAddress* theWrappedObject) const;
   QString  scopeId(QHostAddress* theWrappedObject) const;
   bool  isNull(QHostAddress* theWrappedObject) const;
   bool  operator_equal(QHostAddress* theWrappedObject, QHostAddress::SpecialAddress  address) const;
   QAbstractSocket::NetworkLayerProtocol  protocol(QHostAddress* theWrappedObject) const;
   QString  toString(QHostAddress* theWrappedObject) const;
   void writeTo(QHostAddress* theWrappedObject, QDataStream&  arg__1);
};

#endif // PYTHONQTWRAPPER_QHOSTADDRESS_H
