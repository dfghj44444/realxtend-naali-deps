#include "PythonQtWrapper_QAccessible.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qaccessible.h>
#include <qobject.h>

QAccessible* PythonQtWrapper_QAccessible::new_QAccessible()
{ 
return new PythonQtShell_QAccessible(); }

void PythonQtWrapper_QAccessible::static_QAccessible_updateAccessibility(QObject*  arg__1, int  who, QAccessible::Event  reason)
{
  (QAccessible::updateAccessibility(arg__1, who, reason));
}

void PythonQtWrapper_QAccessible::static_QAccessible_setRootObject(QObject*  arg__1)
{
  (QAccessible::setRootObject(arg__1));
}

bool  PythonQtWrapper_QAccessible::static_QAccessible_isActive()
{
  return (QAccessible::isActive());
}

QAccessibleInterface*  PythonQtWrapper_QAccessible::static_QAccessible_queryAccessibleInterface(QObject*  arg__1)
{
  return (QAccessible::queryAccessibleInterface(arg__1));
}

