#include "PythonQtWrapper_QWebPluginFactory_MimeType.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qwebpluginfactory.h>

QWebPluginFactory::MimeType* PythonQtWrapper_QWebPluginFactory_MimeType::new_QWebPluginFactory_MimeType()
{ 
return new PythonQtShell_QWebPluginFactory_MimeType(); }

bool  PythonQtWrapper_QWebPluginFactory_MimeType::operator_equal(QWebPluginFactory::MimeType* theWrappedObject, const QWebPluginFactory::MimeType&  other) const
{
  return ( (*theWrappedObject)== other);
}

