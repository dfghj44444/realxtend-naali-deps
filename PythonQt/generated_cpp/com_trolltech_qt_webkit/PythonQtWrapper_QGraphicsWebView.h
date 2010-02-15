#ifndef PYTHONQTWRAPPER_QGRAPHICSWEBVIEW_H
#define PYTHONQTWRAPPER_QGRAPHICSWEBVIEW_H

#include <qgraphicswebview.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicslayout.h>
#include <qgraphicssceneevent.h>
#include <qgraphicswidget.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qurl.h>
#include <qwebpage.h>
#include <qwebsettings.h>
#include <qwidget.h>

class PythonQtShell_QGraphicsWebView : public QGraphicsWebView
{
public:
    PythonQtShell_QGraphicsWebView(QGraphicsItem*  parent = 0):QGraphicsWebView(parent),_wrapper(NULL) {};

virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  arg__1);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  arg__1);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  arg__1);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void grabKeyboardEvent(QEvent*  event);
virtual void grabMouseEvent(QEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  arg__1);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  arg__1);
virtual void initStyleOption(QStyleOption*  option) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  arg__1);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  arg__1);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  arg__1);
virtual void moveEvent(QGraphicsSceneMoveEvent*  event);
virtual void paint(QPainter*  arg__1, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0);
virtual void paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual void polishEvent();
virtual QVariant  propertyChange(const QString&  propertyName, const QVariant&  value);
virtual void resizeEvent(QGraphicsSceneResizeEvent*  event);
virtual bool  sceneEvent(QEvent*  arg__1);
virtual void setGeometry(const QRectF&  rect);
virtual void showEvent(QShowEvent*  event);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void ungrabKeyboardEvent(QEvent*  event);
virtual void ungrabMouseEvent(QEvent*  event);
virtual void updateGeometry();
virtual void wheelEvent(QGraphicsSceneWheelEvent*  arg__1);
virtual bool  windowFrameEvent(QEvent*  e);
virtual Qt::WindowFrameSection  windowFrameSectionAt(const QPointF&  pos) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsWebView : public QGraphicsWebView
{ public:
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  arg__1) { QGraphicsWebView::mouseReleaseEvent(arg__1); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  arg__1) { QGraphicsWebView::dragMoveEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QGraphicsWebView::event(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QGraphicsWebView::focusOutEvent(arg__1); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  arg__1) { QGraphicsWebView::dropEvent(arg__1); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const { return QGraphicsWebView::sizeHint(which, constraint); }
inline bool  promoted_sceneEvent(QEvent*  arg__1) { return QGraphicsWebView::sceneEvent(arg__1); }
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsWebView::itemChange(change, value); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QGraphicsWebView::focusInEvent(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsWebView::inputMethodQuery(query); }
inline void promoted_setGeometry(const QRectF&  rect) { QGraphicsWebView::setGeometry(rect); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  arg__1) { QGraphicsWebView::dragLeaveEvent(arg__1); }
inline void promoted_paint(QPainter*  arg__1, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0) { QGraphicsWebView::paint(arg__1, options, widget); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  arg__1) { QGraphicsWebView::hoverMoveEvent(arg__1); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  arg__1) { QGraphicsWebView::dragEnterEvent(arg__1); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  arg__1) { QGraphicsWebView::wheelEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { QGraphicsWebView::keyReleaseEvent(arg__1); }
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  arg__1) { QGraphicsWebView::contextMenuEvent(arg__1); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  arg__1) { QGraphicsWebView::mousePressEvent(arg__1); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QGraphicsWebView::inputMethodEvent(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QGraphicsWebView::focusNextPrevChild(next); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  arg__1) { QGraphicsWebView::hoverLeaveEvent(arg__1); }
inline void promoted_updateGeometry() { QGraphicsWebView::updateGeometry(); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QGraphicsWebView::keyPressEvent(arg__1); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  arg__1) { QGraphicsWebView::mouseMoveEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  arg__1) { QGraphicsWebView::mouseDoubleClickEvent(arg__1); }
};

class PythonQtWrapper_QGraphicsWebView : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsWebView* new_QGraphicsWebView(QGraphicsItem*  parent = 0);
void delete_QGraphicsWebView(QGraphicsWebView* obj) { delete obj; } 
   void mouseReleaseEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneMouseEvent*  arg__1);
   void triggerPageAction(QGraphicsWebView* theWrappedObject, QWebPage::WebAction  action, bool  checked = false);
   void dragMoveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneDragDropEvent*  arg__1);
   bool  event(QGraphicsWebView* theWrappedObject, QEvent*  arg__1);
   void focusOutEvent(QGraphicsWebView* theWrappedObject, QFocusEvent*  arg__1);
   void dropEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneDragDropEvent*  arg__1);
   QWebSettings*  settings(QGraphicsWebView* theWrappedObject) const;
   QSizeF  sizeHint(QGraphicsWebView* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const;
   bool  isModified(QGraphicsWebView* theWrappedObject) const;
   bool  sceneEvent(QGraphicsWebView* theWrappedObject, QEvent*  arg__1);
   QVariant  itemChange(QGraphicsWebView* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
   void focusInEvent(QGraphicsWebView* theWrappedObject, QFocusEvent*  arg__1);
   void load(QGraphicsWebView* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation = QNetworkAccessManager::GetOperation, const QByteArray&  body = QByteArray());
   QIcon  icon(QGraphicsWebView* theWrappedObject) const;
   QVariant  inputMethodQuery(QGraphicsWebView* theWrappedObject, Qt::InputMethodQuery  query) const;
   QUrl  url(QGraphicsWebView* theWrappedObject) const;
   QAction*  pageAction(QGraphicsWebView* theWrappedObject, QWebPage::WebAction  action) const;
   void setGeometry(QGraphicsWebView* theWrappedObject, const QRectF&  rect);
   void setUrl(QGraphicsWebView* theWrappedObject, const QUrl&  arg__1);
   void dragLeaveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneDragDropEvent*  arg__1);
   void paint(QGraphicsWebView* theWrappedObject, QPainter*  arg__1, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0);
   void hoverMoveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneHoverEvent*  arg__1);
   void dragEnterEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneDragDropEvent*  arg__1);
   void setPage(QGraphicsWebView* theWrappedObject, QWebPage*  arg__1);
   void wheelEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneWheelEvent*  arg__1);
   bool  findText(QGraphicsWebView* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options = 0);
   qreal  zoomFactor(QGraphicsWebView* theWrappedObject) const;
   void load(QGraphicsWebView* theWrappedObject, const QUrl&  url);
   void setHtml(QGraphicsWebView* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   void keyReleaseEvent(QGraphicsWebView* theWrappedObject, QKeyEvent*  arg__1);
   void contextMenuEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneContextMenuEvent*  arg__1);
   void mousePressEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneMouseEvent*  arg__1);
   void setContent(QGraphicsWebView* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   QWebPage*  page(QGraphicsWebView* theWrappedObject) const;
   void inputMethodEvent(QGraphicsWebView* theWrappedObject, QInputMethodEvent*  arg__1);
   void setZoomFactor(QGraphicsWebView* theWrappedObject, qreal  arg__1);
   bool  focusNextPrevChild(QGraphicsWebView* theWrappedObject, bool  next);
   void hoverLeaveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneHoverEvent*  arg__1);
   void updateGeometry(QGraphicsWebView* theWrappedObject);
   QWebHistory*  history(QGraphicsWebView* theWrappedObject) const;
   void keyPressEvent(QGraphicsWebView* theWrappedObject, QKeyEvent*  arg__1);
   void mouseMoveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneMouseEvent*  arg__1);
   QString  title(QGraphicsWebView* theWrappedObject) const;
   void mouseDoubleClickEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneMouseEvent*  arg__1);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSWEBVIEW_H
