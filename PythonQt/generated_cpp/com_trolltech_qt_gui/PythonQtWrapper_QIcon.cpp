#include "PythonQtWrapper_QIcon.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qicon.h>
#include <qiconengine.h>
#include <qlist.h>
#include <qpainter.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qsize.h>
#include <qstringlist.h>

QIcon* PythonQtWrapper_QIcon::new_QIcon()
{ 
return new QIcon(); }

QIcon* PythonQtWrapper_QIcon::new_QIcon(QIconEngine*  engine)
{ 
return new QIcon(engine); }

QIcon* PythonQtWrapper_QIcon::new_QIcon(QIconEngineV2*  engine)
{ 
return new QIcon(engine); }

QIcon* PythonQtWrapper_QIcon::new_QIcon(const QIcon&  other)
{ 
return new QIcon(other); }

QIcon* PythonQtWrapper_QIcon::new_QIcon(const QPixmap&  pixmap)
{ 
return new QIcon(pixmap); }

QIcon* PythonQtWrapper_QIcon::new_QIcon(const QString&  fileName)
{ 
return new QIcon(fileName); }

QString  PythonQtWrapper_QIcon::static_QIcon_themeName()
{
  return (QIcon::themeName());
}

void PythonQtWrapper_QIcon::paint(QIcon* theWrappedObject, QPainter*  painter, const QRect&  rect, Qt::Alignment  alignment, QIcon::Mode  mode, QIcon::State  state) const
{
  ( theWrappedObject->paint(painter, rect, alignment, mode, state));
}

qint64  PythonQtWrapper_QIcon::cacheKey(QIcon* theWrappedObject) const
{
  return ( theWrappedObject->cacheKey());
}

QIcon  PythonQtWrapper_QIcon::static_QIcon_fromTheme(const QString&  name, const QIcon&  fallback)
{
  return (QIcon::fromTheme(name, fallback));
}

void PythonQtWrapper_QIcon::addFile(QIcon* theWrappedObject, const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state)
{
  ( theWrappedObject->addFile(fileName, size, mode, state));
}

QList<QSize >  PythonQtWrapper_QIcon::availableSizes(QIcon* theWrappedObject, QIcon::Mode  mode, QIcon::State  state) const
{
  return ( theWrappedObject->availableSizes(mode, state));
}

bool  PythonQtWrapper_QIcon::isNull(QIcon* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

void PythonQtWrapper_QIcon::readFrom(QIcon* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

void PythonQtWrapper_QIcon::paint(QIcon* theWrappedObject, QPainter*  painter, int  x, int  y, int  w, int  h, Qt::Alignment  alignment, QIcon::Mode  mode, QIcon::State  state) const
{
  ( theWrappedObject->paint(painter, x, y, w, h, alignment, mode, state));
}

QSize  PythonQtWrapper_QIcon::actualSize(QIcon* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state) const
{
  return ( theWrappedObject->actualSize(size, mode, state));
}

bool  PythonQtWrapper_QIcon::static_QIcon_hasThemeIcon(const QString&  name)
{
  return (QIcon::hasThemeIcon(name));
}

QPixmap  PythonQtWrapper_QIcon::pixmap(QIcon* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state) const
{
  return ( theWrappedObject->pixmap(size, mode, state));
}

void PythonQtWrapper_QIcon::addPixmap(QIcon* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state)
{
  ( theWrappedObject->addPixmap(pixmap, mode, state));
}

void PythonQtWrapper_QIcon::static_QIcon_setThemeName(const QString&  path)
{
  (QIcon::setThemeName(path));
}

QPixmap  PythonQtWrapper_QIcon::pixmap(QIcon* theWrappedObject, int  extent, QIcon::Mode  mode, QIcon::State  state) const
{
  return ( theWrappedObject->pixmap(extent, mode, state));
}

void PythonQtWrapper_QIcon::writeTo(QIcon* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QIcon::static_QIcon_setThemeSearchPaths(const QStringList&  searchpath)
{
  (QIcon::setThemeSearchPaths(searchpath));
}

QPixmap  PythonQtWrapper_QIcon::pixmap(QIcon* theWrappedObject, int  w, int  h, QIcon::Mode  mode, QIcon::State  state) const
{
  return ( theWrappedObject->pixmap(w, h, mode, state));
}

QStringList  PythonQtWrapper_QIcon::static_QIcon_themeSearchPaths()
{
  return (QIcon::themeSearchPaths());
}

