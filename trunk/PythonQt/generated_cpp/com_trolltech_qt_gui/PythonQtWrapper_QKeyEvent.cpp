#include "PythonQtWrapper_QKeyEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qevent.h>

QKeyEvent* PythonQtWrapper_QKeyEvent::new_QKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, const QString&  text, bool  autorep, ushort  count)
{ 
return new PythonQtShell_QKeyEvent(type, key, modifiers, text, autorep, count); }

unsigned int  PythonQtWrapper_QKeyEvent::nativeModifiers(QKeyEvent* theWrappedObject) const
{
  return ( theWrappedObject->nativeModifiers());
}

unsigned int  PythonQtWrapper_QKeyEvent::nativeScanCode(QKeyEvent* theWrappedObject) const
{
  return ( theWrappedObject->nativeScanCode());
}

Qt::KeyboardModifiers  PythonQtWrapper_QKeyEvent::modifiers(QKeyEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

QKeyEvent*  PythonQtWrapper_QKeyEvent::static_QKeyEvent_createExtendedKeyEvent(QEvent::Type  type, int  key, Qt::KeyboardModifiers  modifiers, unsigned int  nativeScanCode, unsigned int  nativeVirtualKey, unsigned int  nativeModifiers, const QString&  text, bool  autorep, ushort  count)
{
  return (QKeyEvent::createExtendedKeyEvent(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count));
}

unsigned int  PythonQtWrapper_QKeyEvent::nativeVirtualKey(QKeyEvent* theWrappedObject) const
{
  return ( theWrappedObject->nativeVirtualKey());
}

int  PythonQtWrapper_QKeyEvent::count(QKeyEvent* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

int  PythonQtWrapper_QKeyEvent::key(QKeyEvent* theWrappedObject) const
{
  return ( theWrappedObject->key());
}

QString  PythonQtWrapper_QKeyEvent::text(QKeyEvent* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

bool  PythonQtWrapper_QKeyEvent::hasExtendedInfo(QKeyEvent* theWrappedObject) const
{
  return ( theWrappedObject->hasExtendedInfo());
}

bool  PythonQtWrapper_QKeyEvent::isAutoRepeat(QKeyEvent* theWrappedObject) const
{
  return ( theWrappedObject->isAutoRepeat());
}

bool  PythonQtWrapper_QKeyEvent::matches(QKeyEvent* theWrappedObject, QKeySequence::StandardKey  key) const
{
  return ( theWrappedObject->matches(key));
}

