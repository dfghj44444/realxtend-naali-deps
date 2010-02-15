#ifndef PYTHONQTWRAPPER_QWEBFRAME_H
#define PYTHONQTWRAPPER_QWEBFRAME_H

#include <qwebframe.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtPublicPromoter_QWebFrame : public QWebFrame
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QWebFrame::event(arg__1); }
};

class PythonQtWrapper_QWebFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RenderLayer )
enum RenderLayer{
  ContentsLayer = QWebFrame::ContentsLayer,   ScrollBarLayer = QWebFrame::ScrollBarLayer,   PanIconLayer = QWebFrame::PanIconLayer,   AllLayers = QWebFrame::AllLayers};
public slots:
   void scroll(QWebFrame* theWrappedObject, int  arg__1, int  arg__2);
   QWebElement  documentElement(QWebFrame* theWrappedObject) const;
   void setFocus(QWebFrame* theWrappedObject);
   Qt::ScrollBarPolicy  scrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   void load(QWebFrame* theWrappedObject, const QUrl&  url);
   void setScrollPosition(QWebFrame* theWrappedObject, const QPoint&  pos);
   QWebHitTestResult  hitTestContent(QWebFrame* theWrappedObject, const QPoint&  pos) const;
   int  scrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   void setHtml(QWebFrame* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   qreal  zoomFactor(QWebFrame* theWrappedObject) const;
   QList<QWebFrame* >  childFrames(QWebFrame* theWrappedObject) const;
   void render(QWebFrame* theWrappedObject, QPainter*  arg__1);
   QUrl  baseUrl(QWebFrame* theWrappedObject) const;
   qreal  textSizeMultiplier(QWebFrame* theWrappedObject) const;
   bool  hasFocus(QWebFrame* theWrappedObject) const;
   QMultiMap<QString , QString >  metaData(QWebFrame* theWrappedObject) const;
   QPoint  pos(QWebFrame* theWrappedObject) const;
   QWebElement  findFirstElement(QWebFrame* theWrappedObject, const QString&  selectorQuery) const;
   QSize  contentsSize(QWebFrame* theWrappedObject) const;
   QString  frameName(QWebFrame* theWrappedObject) const;
   QIcon  icon(QWebFrame* theWrappedObject) const;
   QRect  scrollBarGeometry(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   QString  title(QWebFrame* theWrappedObject) const;
   void render(QWebFrame* theWrappedObject, QPainter*  arg__1, QWebFrame::RenderLayer  layer, const QRegion&  clip = QRegion());
   QPoint  scrollPosition(QWebFrame* theWrappedObject) const;
   int  scrollBarMaximum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   void load(QWebFrame* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation = QNetworkAccessManager::GetOperation, const QByteArray&  body = QByteArray());
   void addToJavaScriptWindowObject(QWebFrame* theWrappedObject, const QString&  name, QObject*  object);
   QString  toHtml(QWebFrame* theWrappedObject) const;
   QUrl  requestedUrl(QWebFrame* theWrappedObject) const;
   void render(QWebFrame* theWrappedObject, QPainter*  arg__1, const QRegion&  clip);
   QString  renderTreeDump(QWebFrame* theWrappedObject) const;
   void setScrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation, Qt::ScrollBarPolicy  policy);
   QWebFrame*  parentFrame(QWebFrame* theWrappedObject) const;
   void setUrl(QWebFrame* theWrappedObject, const QUrl&  url);
   int  scrollBarMinimum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   QWebPage*  page(QWebFrame* theWrappedObject) const;
   void setTextSizeMultiplier(QWebFrame* theWrappedObject, qreal  factor);
   QRect  geometry(QWebFrame* theWrappedObject) const;
   QUrl  url(QWebFrame* theWrappedObject) const;
   void setZoomFactor(QWebFrame* theWrappedObject, qreal  factor);
   QString  toPlainText(QWebFrame* theWrappedObject) const;
   bool  event(QWebFrame* theWrappedObject, QEvent*  arg__1);
   void setContent(QWebFrame* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   void setScrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation, int  value);
};

#endif // PYTHONQTWRAPPER_QWEBFRAME_H
