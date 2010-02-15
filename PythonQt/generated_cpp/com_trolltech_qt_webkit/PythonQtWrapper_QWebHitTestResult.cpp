#include "PythonQtWrapper_QWebHitTestResult.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qurl.h>
#include <qwebelement.h>
#include <qwebframe.h>

QWebHitTestResult* PythonQtWrapper_QWebHitTestResult::new_QWebHitTestResult()
{ 
return new QWebHitTestResult(); }

QWebHitTestResult* PythonQtWrapper_QWebHitTestResult::new_QWebHitTestResult(const QWebHitTestResult&  other)
{ 
return new QWebHitTestResult(other); }

QWebElement  PythonQtWrapper_QWebHitTestResult::linkElement(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->linkElement());
}

bool  PythonQtWrapper_QWebHitTestResult::isNull(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QString  PythonQtWrapper_QWebHitTestResult::alternateText(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->alternateText());
}

QRect  PythonQtWrapper_QWebHitTestResult::boundingRect(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

QUrl  PythonQtWrapper_QWebHitTestResult::linkTitle(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->linkTitle());
}

QString  PythonQtWrapper_QWebHitTestResult::linkText(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->linkText());
}

QPixmap  PythonQtWrapper_QWebHitTestResult::pixmap(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->pixmap());
}

QWebFrame*  PythonQtWrapper_QWebHitTestResult::frame(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->frame());
}

bool  PythonQtWrapper_QWebHitTestResult::isContentEditable(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->isContentEditable());
}

QPoint  PythonQtWrapper_QWebHitTestResult::pos(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QWebElement  PythonQtWrapper_QWebHitTestResult::element(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->element());
}

QString  PythonQtWrapper_QWebHitTestResult::title(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

bool  PythonQtWrapper_QWebHitTestResult::isContentSelected(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->isContentSelected());
}

QWebFrame*  PythonQtWrapper_QWebHitTestResult::linkTargetFrame(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->linkTargetFrame());
}

QUrl  PythonQtWrapper_QWebHitTestResult::linkUrl(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->linkUrl());
}

QWebElement  PythonQtWrapper_QWebHitTestResult::enclosingBlockElement(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->enclosingBlockElement());
}

QUrl  PythonQtWrapper_QWebHitTestResult::imageUrl(QWebHitTestResult* theWrappedObject) const
{
  return ( theWrappedObject->imageUrl());
}

