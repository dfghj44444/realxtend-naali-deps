#ifndef PYTHONQTWRAPPER_QNETWORKPROXYFACTORY_H
#define PYTHONQTWRAPPER_QNETWORKPROXYFACTORY_H

#include <qnetworkproxy.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qlist.h>
#include <qnetworkproxy.h>

class PythonQtShell_QNetworkProxyFactory : public QNetworkProxyFactory
{
public:
    PythonQtShell_QNetworkProxyFactory():QNetworkProxyFactory(),_wrapper(NULL) {};

virtual QList<QNetworkProxy >  queryProxy(const QNetworkProxyQuery&  query = QNetworkProxyQuery());

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QNetworkProxyFactory : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkProxyFactory* new_QNetworkProxyFactory();
void delete_QNetworkProxyFactory(QNetworkProxyFactory* obj) { delete obj; } 
   QList<QNetworkProxy >  static_QNetworkProxyFactory_systemProxyForQuery(const QNetworkProxyQuery&  query = QNetworkProxyQuery());
   void static_QNetworkProxyFactory_setApplicationProxyFactory(QNetworkProxyFactory*  factory);
   void static_QNetworkProxyFactory_setUseSystemConfiguration(bool  enable);
   QList<QNetworkProxy >  static_QNetworkProxyFactory_proxyForQuery(const QNetworkProxyQuery&  query);
};

#endif // PYTHONQTWRAPPER_QNETWORKPROXYFACTORY_H
