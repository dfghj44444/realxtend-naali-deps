#ifndef PYTHONQTWRAPPER_QWEBPLUGINFACTORY_EXTENSIONRETURN_H
#define PYTHONQTWRAPPER_QWEBPLUGINFACTORY_EXTENSIONRETURN_H

#include <qwebpluginfactory.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QWebPluginFactory_ExtensionReturn : public QWebPluginFactory::ExtensionReturn
{
public:
    PythonQtShell_QWebPluginFactory_ExtensionReturn():QWebPluginFactory::ExtensionReturn(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPluginFactory_ExtensionReturn : public QObject
{ Q_OBJECT
public:
public slots:
QWebPluginFactory::ExtensionReturn* new_QWebPluginFactory_ExtensionReturn();
void delete_QWebPluginFactory_ExtensionReturn(QWebPluginFactory::ExtensionReturn* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QWEBPLUGINFACTORY_EXTENSIONRETURN_H
