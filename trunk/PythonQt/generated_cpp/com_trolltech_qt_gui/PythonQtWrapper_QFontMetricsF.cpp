#include "PythonQtWrapper_QFontMetricsF.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qfont.h>
#include <qpaintdevice.h>
#include <qrect.h>
#include <qsize.h>

QFontMetricsF* PythonQtWrapper_QFontMetricsF::new_QFontMetricsF(const QFont&  arg__1)
{ 
return new QFontMetricsF(arg__1); }

QFontMetricsF* PythonQtWrapper_QFontMetricsF::new_QFontMetricsF(const QFont&  arg__1, QPaintDevice*  pd)
{ 
return new QFontMetricsF(arg__1, pd); }

qreal  PythonQtWrapper_QFontMetricsF::minRightBearing(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->minRightBearing());
}

QRectF  PythonQtWrapper_QFontMetricsF::boundingRect(QFontMetricsF* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->boundingRect(arg__1));
}

qreal  PythonQtWrapper_QFontMetricsF::strikeOutPos(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->strikeOutPos());
}

qreal  PythonQtWrapper_QFontMetricsF::descent(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->descent());
}

QString  PythonQtWrapper_QFontMetricsF::elidedText(QFontMetricsF* theWrappedObject, const QString&  text, Qt::TextElideMode  mode, qreal  width, int  flags) const
{
  return ( theWrappedObject->elidedText(text, mode, width, flags));
}

QRectF  PythonQtWrapper_QFontMetricsF::boundingRect(QFontMetricsF* theWrappedObject, const QRectF&  r, int  flags, const QString&  string, int  tabstops, int*  tabarray) const
{
  return ( theWrappedObject->boundingRect(r, flags, string, tabstops, tabarray));
}

qreal  PythonQtWrapper_QFontMetricsF::overlinePos(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->overlinePos());
}

QRectF  PythonQtWrapper_QFontMetricsF::tightBoundingRect(QFontMetricsF* theWrappedObject, const QString&  text) const
{
  return ( theWrappedObject->tightBoundingRect(text));
}

qreal  PythonQtWrapper_QFontMetricsF::width(QFontMetricsF* theWrappedObject, const QString&  string) const
{
  return ( theWrappedObject->width(string));
}

qreal  PythonQtWrapper_QFontMetricsF::lineWidth(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->lineWidth());
}

qreal  PythonQtWrapper_QFontMetricsF::ascent(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->ascent());
}

qreal  PythonQtWrapper_QFontMetricsF::lineSpacing(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->lineSpacing());
}

qreal  PythonQtWrapper_QFontMetricsF::rightBearing(QFontMetricsF* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->rightBearing(arg__1));
}

qreal  PythonQtWrapper_QFontMetricsF::xHeight(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->xHeight());
}

qreal  PythonQtWrapper_QFontMetricsF::averageCharWidth(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->averageCharWidth());
}

QSizeF  PythonQtWrapper_QFontMetricsF::size(QFontMetricsF* theWrappedObject, int  flags, const QString&  str, int  tabstops, int*  tabarray) const
{
  return ( theWrappedObject->size(flags, str, tabstops, tabarray));
}

QRectF  PythonQtWrapper_QFontMetricsF::boundingRect(QFontMetricsF* theWrappedObject, const QString&  string) const
{
  return ( theWrappedObject->boundingRect(string));
}

qreal  PythonQtWrapper_QFontMetricsF::underlinePos(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->underlinePos());
}

qreal  PythonQtWrapper_QFontMetricsF::leftBearing(QFontMetricsF* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->leftBearing(arg__1));
}

qreal  PythonQtWrapper_QFontMetricsF::maxWidth(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->maxWidth());
}

bool  PythonQtWrapper_QFontMetricsF::inFont(QFontMetricsF* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->inFont(arg__1));
}

qreal  PythonQtWrapper_QFontMetricsF::leading(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->leading());
}

qreal  PythonQtWrapper_QFontMetricsF::width(QFontMetricsF* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->width(arg__1));
}

qreal  PythonQtWrapper_QFontMetricsF::height(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

qreal  PythonQtWrapper_QFontMetricsF::minLeftBearing(QFontMetricsF* theWrappedObject) const
{
  return ( theWrappedObject->minLeftBearing());
}

