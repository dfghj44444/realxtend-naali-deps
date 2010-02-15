#include "PythonQtWrapper_QLibraryInfo.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatetime.h>

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_licensedProducts()
{
  return (QLibraryInfo::licensedProducts());
}

QDate  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_buildDate()
{
  return (QLibraryInfo::buildDate());
}

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_buildKey()
{
  return (QLibraryInfo::buildKey());
}

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_licensee()
{
  return (QLibraryInfo::licensee());
}

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_location(QLibraryInfo::LibraryLocation  arg__1)
{
  return (QLibraryInfo::location(arg__1));
}

