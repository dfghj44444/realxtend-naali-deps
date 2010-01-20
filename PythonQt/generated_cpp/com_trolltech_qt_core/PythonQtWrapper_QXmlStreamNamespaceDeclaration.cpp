#include "PythonQtWrapper_QXmlStreamNamespaceDeclaration.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qxmlstream.h>

QXmlStreamNamespaceDeclaration* PythonQtWrapper_QXmlStreamNamespaceDeclaration::new_QXmlStreamNamespaceDeclaration()
{ 
return new QXmlStreamNamespaceDeclaration(); }

QXmlStreamNamespaceDeclaration* PythonQtWrapper_QXmlStreamNamespaceDeclaration::new_QXmlStreamNamespaceDeclaration(const QString&  prefix, const QString&  namespaceUri)
{ 
return new QXmlStreamNamespaceDeclaration(prefix, namespaceUri); }

QXmlStreamNamespaceDeclaration* PythonQtWrapper_QXmlStreamNamespaceDeclaration::new_QXmlStreamNamespaceDeclaration(const QXmlStreamNamespaceDeclaration&  arg__1)
{ 
return new QXmlStreamNamespaceDeclaration(arg__1); }

bool  PythonQtWrapper_QXmlStreamNamespaceDeclaration::operator_equal(QXmlStreamNamespaceDeclaration* theWrappedObject, const QXmlStreamNamespaceDeclaration&  other) const
{
  return ( (*theWrappedObject)== other);
}

QStringRef  PythonQtWrapper_QXmlStreamNamespaceDeclaration::prefix(QXmlStreamNamespaceDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->prefix());
}

QStringRef  PythonQtWrapper_QXmlStreamNamespaceDeclaration::namespaceUri(QXmlStreamNamespaceDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->namespaceUri());
}

