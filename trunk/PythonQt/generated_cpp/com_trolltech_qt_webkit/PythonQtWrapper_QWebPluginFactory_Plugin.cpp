#include "PythonQtWrapper_QWebPluginFactory_Plugin.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>

QWebPluginFactory::Plugin* PythonQtWrapper_QWebPluginFactory_Plugin::new_QWebPluginFactory_Plugin()
{ 
return new PythonQtShell_QWebPluginFactory_Plugin(); }

