#ifndef PYTHONQTWRAPPER_QWEBPLUGINFACTORY_PLUGIN_H
#define PYTHONQTWRAPPER_QWEBPLUGINFACTORY_PLUGIN_H

#include <qwebpluginfactory.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QWebPluginFactory_Plugin : public QWebPluginFactory::Plugin
{
public:
    PythonQtShell_QWebPluginFactory_Plugin():QWebPluginFactory::Plugin(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPluginFactory_Plugin : public QObject
{ Q_OBJECT
public:
public slots:
QWebPluginFactory::Plugin* new_QWebPluginFactory_Plugin();
QWebPluginFactory::Plugin* new_QWebPluginFactory_Plugin(const QWebPluginFactory::Plugin& other) {
PythonQtShell_QWebPluginFactory_Plugin* a = new PythonQtShell_QWebPluginFactory_Plugin();
*((QWebPluginFactory::Plugin*)a) = other;
return a; }
void delete_QWebPluginFactory_Plugin(QWebPluginFactory::Plugin* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QWEBPLUGINFACTORY_PLUGIN_H
