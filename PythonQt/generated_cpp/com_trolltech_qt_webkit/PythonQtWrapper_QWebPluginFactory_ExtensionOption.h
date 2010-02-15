#ifndef PYTHONQTWRAPPER_QWEBPLUGINFACTORY_EXTENSIONOPTION_H
#define PYTHONQTWRAPPER_QWEBPLUGINFACTORY_EXTENSIONOPTION_H

#include <qwebpluginfactory.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QWebPluginFactory_ExtensionOption : public QWebPluginFactory::ExtensionOption
{
public:
    PythonQtShell_QWebPluginFactory_ExtensionOption():QWebPluginFactory::ExtensionOption(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPluginFactory_ExtensionOption : public QObject
{ Q_OBJECT
public:
public slots:
QWebPluginFactory::ExtensionOption* new_QWebPluginFactory_ExtensionOption();
void delete_QWebPluginFactory_ExtensionOption(QWebPluginFactory::ExtensionOption* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QWEBPLUGINFACTORY_EXTENSIONOPTION_H
