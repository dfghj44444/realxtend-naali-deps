#include "PythonQtWrapper_QNetworkProxyFactory.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qlist.h>
#include <qnetworkproxy.h>

QList<QNetworkProxy >  PythonQtShell_QNetworkProxyFactory::queryProxy(const QNetworkProxyQuery&  query)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "queryProxy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<QNetworkProxy >" , "const QNetworkProxyQuery&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QList<QNetworkProxy > returnValue;
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("queryProxy", methodInfo, result);
        } else {
          returnValue = *((QList<QNetworkProxy >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QList<QNetworkProxy > result;
return result;
}
QNetworkProxyFactory* PythonQtWrapper_QNetworkProxyFactory::new_QNetworkProxyFactory()
{ 
return new PythonQtShell_QNetworkProxyFactory(); }

QList<QNetworkProxy >  PythonQtWrapper_QNetworkProxyFactory::static_QNetworkProxyFactory_systemProxyForQuery(const QNetworkProxyQuery&  query)
{
  return (QNetworkProxyFactory::systemProxyForQuery(query));
}

void PythonQtWrapper_QNetworkProxyFactory::static_QNetworkProxyFactory_setApplicationProxyFactory(QNetworkProxyFactory*  factory)
{
  (QNetworkProxyFactory::setApplicationProxyFactory(factory));
}

void PythonQtWrapper_QNetworkProxyFactory::static_QNetworkProxyFactory_setUseSystemConfiguration(bool  enable)
{
  (QNetworkProxyFactory::setUseSystemConfiguration(enable));
}

QList<QNetworkProxy >  PythonQtWrapper_QNetworkProxyFactory::static_QNetworkProxyFactory_proxyForQuery(const QNetworkProxyQuery&  query)
{
  return (QNetworkProxyFactory::proxyForQuery(query));
}

