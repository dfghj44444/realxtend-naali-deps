#include "PythonQtWrapper_QWebFrame.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qurl.h>
#include <qwebelement.h>
#include <qwebframe.h>
#include <qwebpage.h>

void PythonQtWrapper_QWebFrame::scroll(QWebFrame* theWrappedObject, int  arg__1, int  arg__2)
{
  ( theWrappedObject->scroll(arg__1, arg__2));
}

QWebElement  PythonQtWrapper_QWebFrame::documentElement(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->documentElement());
}

void PythonQtWrapper_QWebFrame::setFocus(QWebFrame* theWrappedObject)
{
  ( theWrappedObject->setFocus());
}

Qt::ScrollBarPolicy  PythonQtWrapper_QWebFrame::scrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
  return ( theWrappedObject->scrollBarPolicy(orientation));
}

void PythonQtWrapper_QWebFrame::load(QWebFrame* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->load(url));
}

void PythonQtWrapper_QWebFrame::setScrollPosition(QWebFrame* theWrappedObject, const QPoint&  pos)
{
  ( theWrappedObject->setScrollPosition(pos));
}

QWebHitTestResult  PythonQtWrapper_QWebFrame::hitTestContent(QWebFrame* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->hitTestContent(pos));
}

int  PythonQtWrapper_QWebFrame::scrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
  return ( theWrappedObject->scrollBarValue(orientation));
}

void PythonQtWrapper_QWebFrame::setHtml(QWebFrame* theWrappedObject, const QString&  html, const QUrl&  baseUrl)
{
  ( theWrappedObject->setHtml(html, baseUrl));
}

qreal  PythonQtWrapper_QWebFrame::zoomFactor(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->zoomFactor());
}

QList<QWebFrame* >  PythonQtWrapper_QWebFrame::childFrames(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->childFrames());
}

void PythonQtWrapper_QWebFrame::render(QWebFrame* theWrappedObject, QPainter*  arg__1)
{
  ( theWrappedObject->render(arg__1));
}

QUrl  PythonQtWrapper_QWebFrame::baseUrl(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->baseUrl());
}

qreal  PythonQtWrapper_QWebFrame::textSizeMultiplier(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->textSizeMultiplier());
}

bool  PythonQtWrapper_QWebFrame::hasFocus(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->hasFocus());
}

QMultiMap<QString , QString >  PythonQtWrapper_QWebFrame::metaData(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->metaData());
}

QPoint  PythonQtWrapper_QWebFrame::pos(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QWebElement  PythonQtWrapper_QWebFrame::findFirstElement(QWebFrame* theWrappedObject, const QString&  selectorQuery) const
{
  return ( theWrappedObject->findFirstElement(selectorQuery));
}

QSize  PythonQtWrapper_QWebFrame::contentsSize(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->contentsSize());
}

QString  PythonQtWrapper_QWebFrame::frameName(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->frameName());
}

QIcon  PythonQtWrapper_QWebFrame::icon(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->icon());
}

QRect  PythonQtWrapper_QWebFrame::scrollBarGeometry(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
  return ( theWrappedObject->scrollBarGeometry(orientation));
}

QString  PythonQtWrapper_QWebFrame::title(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->title());
}

void PythonQtWrapper_QWebFrame::render(QWebFrame* theWrappedObject, QPainter*  arg__1, QWebFrame::RenderLayer  layer, const QRegion&  clip)
{
  ( theWrappedObject->render(arg__1, layer, clip));
}

QPoint  PythonQtWrapper_QWebFrame::scrollPosition(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->scrollPosition());
}

int  PythonQtWrapper_QWebFrame::scrollBarMaximum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
  return ( theWrappedObject->scrollBarMaximum(orientation));
}

void PythonQtWrapper_QWebFrame::load(QWebFrame* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation, const QByteArray&  body)
{
  ( theWrappedObject->load(request, operation, body));
}

void PythonQtWrapper_QWebFrame::addToJavaScriptWindowObject(QWebFrame* theWrappedObject, const QString&  name, QObject*  object)
{
  ( theWrappedObject->addToJavaScriptWindowObject(name, object));
}

QString  PythonQtWrapper_QWebFrame::toHtml(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->toHtml());
}

QUrl  PythonQtWrapper_QWebFrame::requestedUrl(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->requestedUrl());
}

void PythonQtWrapper_QWebFrame::render(QWebFrame* theWrappedObject, QPainter*  arg__1, const QRegion&  clip)
{
  ( theWrappedObject->render(arg__1, clip));
}

QString  PythonQtWrapper_QWebFrame::renderTreeDump(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->renderTreeDump());
}

void PythonQtWrapper_QWebFrame::setScrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation, Qt::ScrollBarPolicy  policy)
{
  ( theWrappedObject->setScrollBarPolicy(orientation, policy));
}

QWebFrame*  PythonQtWrapper_QWebFrame::parentFrame(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->parentFrame());
}

void PythonQtWrapper_QWebFrame::setUrl(QWebFrame* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

int  PythonQtWrapper_QWebFrame::scrollBarMinimum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const
{
  return ( theWrappedObject->scrollBarMinimum(orientation));
}

QWebPage*  PythonQtWrapper_QWebFrame::page(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->page());
}

void PythonQtWrapper_QWebFrame::setTextSizeMultiplier(QWebFrame* theWrappedObject, qreal  factor)
{
  ( theWrappedObject->setTextSizeMultiplier(factor));
}

QRect  PythonQtWrapper_QWebFrame::geometry(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->geometry());
}

QUrl  PythonQtWrapper_QWebFrame::url(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

void PythonQtWrapper_QWebFrame::setZoomFactor(QWebFrame* theWrappedObject, qreal  factor)
{
  ( theWrappedObject->setZoomFactor(factor));
}

QString  PythonQtWrapper_QWebFrame::toPlainText(QWebFrame* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}

bool  PythonQtWrapper_QWebFrame::event(QWebFrame* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QWebFrame*)theWrappedObject)->promoted_event(arg__1));
}

void PythonQtWrapper_QWebFrame::setContent(QWebFrame* theWrappedObject, const QByteArray&  data, const QString&  mimeType, const QUrl&  baseUrl)
{
  ( theWrappedObject->setContent(data, mimeType, baseUrl));
}

void PythonQtWrapper_QWebFrame::setScrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation, int  value)
{
  ( theWrappedObject->setScrollBarValue(orientation, value));
}

