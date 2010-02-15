#include "PythonQtWrapper_QFileOpenEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qurl.h>

QFileOpenEvent* PythonQtWrapper_QFileOpenEvent::new_QFileOpenEvent(const QString&  file)
{ 
return new QFileOpenEvent(file); }

QFileOpenEvent* PythonQtWrapper_QFileOpenEvent::new_QFileOpenEvent(const QUrl&  url)
{ 
return new QFileOpenEvent(url); }

QUrl  PythonQtWrapper_QFileOpenEvent::url(QFileOpenEvent* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

QString  PythonQtWrapper_QFileOpenEvent::file(QFileOpenEvent* theWrappedObject) const
{
  return ( theWrappedObject->file());
}

