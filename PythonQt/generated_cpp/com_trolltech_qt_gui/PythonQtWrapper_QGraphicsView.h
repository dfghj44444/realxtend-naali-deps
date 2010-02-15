#ifndef PYTHONQTWRAPPER_QGRAPHICSVIEW_H
#define PYTHONQTWRAPPER_QGRAPHICSVIEW_H

#include <qgraphicsview.h>
#include <QObject>

#include <PythonQt.h>

#include <QPainterPath>
#include <QVarLengthArray>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicsview.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qobject.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

class PythonQtShell_QGraphicsView : public QGraphicsView
{
public:
    PythonQtShell_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent = 0):QGraphicsView(scene, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsView(QWidget*  parent = 0):QGraphicsView(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void drawBackground(QPainter*  painter, const QRectF&  rect);
virtual void drawForeground(QPainter*  painter, const QRectF&  rect);
virtual void drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  viewportEvent(QEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsView : public QGraphicsView
{ public:
inline void promoted_scrollContentsBy(int  dx, int  dy) { QGraphicsView::scrollContentsBy(dx, dy); }
inline void promoted_showEvent(QShowEvent*  event) { QGraphicsView::showEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QGraphicsView::focusNextPrevChild(next); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { QGraphicsView::contextMenuEvent(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsView::focusInEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QGraphicsView::event(event); }
inline void promoted_dropEvent(QDropEvent*  event) { QGraphicsView::dropEvent(event); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { QGraphicsView::mouseDoubleClickEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QGraphicsView::resizeEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QGraphicsView::mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QGraphicsView::mousePressEvent(event); }
inline void promoted_drawForeground(QPainter*  painter, const QRectF&  rect) { QGraphicsView::drawForeground(painter, rect); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsView::focusOutEvent(event); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { QGraphicsView::dragMoveEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QGraphicsView::keyReleaseEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsView::inputMethodQuery(query); }
inline bool  promoted_viewportEvent(QEvent*  event) { return QGraphicsView::viewportEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsView::inputMethodEvent(event); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  event) { QGraphicsView::dragLeaveEvent(event); }
inline void promoted_drawBackground(QPainter*  painter, const QRectF&  rect) { QGraphicsView::drawBackground(painter, rect); }
inline void promoted_paintEvent(QPaintEvent*  event) { QGraphicsView::paintEvent(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QGraphicsView::keyPressEvent(event); }
inline void promoted_wheelEvent(QWheelEvent*  event) { QGraphicsView::wheelEvent(event); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  event) { QGraphicsView::dragEnterEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QGraphicsView::mouseReleaseEvent(event); }
inline void promoted_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options) { QGraphicsView::drawItems(painter, numItems, items, options); }
};

class PythonQtWrapper_QGraphicsView : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OptimizationFlag CacheModeFlag )
Q_FLAGS(OptimizationFlags CacheMode )
enum OptimizationFlag{
  DontClipPainter = QGraphicsView::DontClipPainter,   DontSavePainterState = QGraphicsView::DontSavePainterState,   DontAdjustForAntialiasing = QGraphicsView::DontAdjustForAntialiasing,   IndirectPainting = QGraphicsView::IndirectPainting};
enum CacheModeFlag{
  CacheNone = QGraphicsView::CacheNone,   CacheBackground = QGraphicsView::CacheBackground};
Q_DECLARE_FLAGS(OptimizationFlags, OptimizationFlag)
Q_DECLARE_FLAGS(CacheMode, CacheModeFlag)
public slots:
QGraphicsView* new_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent = 0);
QGraphicsView* new_QGraphicsView(QWidget*  parent = 0);
void delete_QGraphicsView(QGraphicsView* obj) { delete obj; } 
   void scrollContentsBy(QGraphicsView* theWrappedObject, int  dx, int  dy);
   void showEvent(QGraphicsView* theWrappedObject, QShowEvent*  event);
   bool  focusNextPrevChild(QGraphicsView* theWrappedObject, bool  next);
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject) const;
   void setOptimizationFlag(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlag  flag, bool  enabled = true);
   QPainterPath  mapFromScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const;
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, const QPolygon&  polygon) const;
   void setRenderHint(QGraphicsView* theWrappedObject, QPainter::RenderHint  hint, bool  enabled = true);
   void contextMenuEvent(QGraphicsView* theWrappedObject, QContextMenuEvent*  event);
   QTransform  transform(QGraphicsView* theWrappedObject) const;
   void focusInEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event);
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h) const;
   bool  event(QGraphicsView* theWrappedObject, QEvent*  event);
   void centerOn(QGraphicsView* theWrappedObject, const QPointF&  pos);
   void dropEvent(QGraphicsView* theWrappedObject, QDropEvent*  event);
   void mouseDoubleClickEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QRect&  rect, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void render(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  target = QRectF(), const QRect&  source = QRect(), Qt::AspectRatioMode  aspectRatioMode = Qt::KeepAspectRatio);
   void setScene(QGraphicsView* theWrappedObject, QGraphicsScene*  scene);
   QGraphicsView::ViewportAnchor  transformationAnchor(QGraphicsView* theWrappedObject) const;
   void resizeEvent(QGraphicsView* theWrappedObject, QResizeEvent*  event);
   void fitInView(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   Qt::ItemSelectionMode  rubberBandSelectionMode(QGraphicsView* theWrappedObject) const;
   void fitInView(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   void mouseMoveEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void setInteractive(QGraphicsView* theWrappedObject, bool  allowed);
   void setForegroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush);
   QGraphicsView::CacheMode  cacheMode(QGraphicsView* theWrappedObject) const;
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPolygon&  polygon, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, const QRectF&  rect) const;
   QGraphicsView::OptimizationFlags  optimizationFlags(QGraphicsView* theWrappedObject) const;
   void fitInView(QGraphicsView* theWrappedObject, const QRectF&  rect, Qt::AspectRatioMode  aspectRadioMode = Qt::IgnoreAspectRatio);
   void mousePressEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   QPainter::RenderHints  renderHints(QGraphicsView* theWrappedObject) const;
   void drawForeground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void setAlignment(QGraphicsView* theWrappedObject, Qt::Alignment  alignment);
   void focusOutEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event);
   void setViewportUpdateMode(QGraphicsView* theWrappedObject, QGraphicsView::ViewportUpdateMode  mode);
   void centerOn(QGraphicsView* theWrappedObject, qreal  x, qreal  y);
   void dragMoveEvent(QGraphicsView* theWrappedObject, QDragMoveEvent*  event);
   void rotate(QGraphicsView* theWrappedObject, qreal  angle);
   QBrush  foregroundBrush(QGraphicsView* theWrappedObject) const;
   bool  isTransformed(QGraphicsView* theWrappedObject) const;
   void resetMatrix(QGraphicsView* theWrappedObject);
   void setSceneRect(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setResizeAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor);
   QSize  sizeHint(QGraphicsView* theWrappedObject) const;
   void keyReleaseEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event);
   void setSceneRect(QGraphicsView* theWrappedObject, const QRectF&  rect);
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, int  x, int  y) const;
   void ensureVisible(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin = 50, int  ymargin = 50);
   QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
   void setMatrix(QGraphicsView* theWrappedObject, const QMatrix&  matrix, bool  combine = false);
   bool  isInteractive(QGraphicsView* theWrappedObject) const;
   void resetTransform(QGraphicsView* theWrappedObject);
   QRectF  sceneRect(QGraphicsView* theWrappedObject) const;
   void shear(QGraphicsView* theWrappedObject, qreal  sh, qreal  sv);
   QVariant  inputMethodQuery(QGraphicsView* theWrappedObject, Qt::InputMethodQuery  query) const;
   bool  viewportEvent(QGraphicsView* theWrappedObject, QEvent*  event);
   void setBackgroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush);
   void inputMethodEvent(QGraphicsView* theWrappedObject, QInputMethodEvent*  event);
   QPoint  mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y) const;
   void setOptimizationFlags(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlags  flags);
   void setDragMode(QGraphicsView* theWrappedObject, QGraphicsView::DragMode  mode);
   void dragLeaveEvent(QGraphicsView* theWrappedObject, QDragLeaveEvent*  event);
   void drawBackground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void paintEvent(QGraphicsView* theWrappedObject, QPaintEvent*  event);
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void keyPressEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event);
   void wheelEvent(QGraphicsView* theWrappedObject, QWheelEvent*  event);
   QPainterPath  mapToScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const;
   QPolygonF  mapToScene(QGraphicsView* theWrappedObject, const QRect&  rect) const;
   QPointF  mapToScene(QGraphicsView* theWrappedObject, int  x, int  y) const;
   void setRubberBandSelectionMode(QGraphicsView* theWrappedObject, Qt::ItemSelectionMode  mode);
   QGraphicsView::ViewportUpdateMode  viewportUpdateMode(QGraphicsView* theWrappedObject) const;
   QGraphicsView::ViewportAnchor  resizeAnchor(QGraphicsView* theWrappedObject) const;
   QPoint  mapFromScene(QGraphicsView* theWrappedObject, const QPointF&  point) const;
   QGraphicsView::DragMode  dragMode(QGraphicsView* theWrappedObject) const;
   void ensureVisible(QGraphicsView* theWrappedObject, const QRectF&  rect, int  xmargin = 50, int  ymargin = 50);
   QList<QGraphicsItem* >  items(QGraphicsView* theWrappedObject, const QPoint&  pos) const;
   QGraphicsScene*  scene(QGraphicsView* theWrappedObject) const;
   void setCacheMode(QGraphicsView* theWrappedObject, QGraphicsView::CacheMode  mode);
   void setTransformationAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor);
   void dragEnterEvent(QGraphicsView* theWrappedObject, QDragEnterEvent*  event);
   void setRenderHints(QGraphicsView* theWrappedObject, QPainter::RenderHints  hints);
   void ensureVisible(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, int  xmargin = 50, int  ymargin = 50);
   QMatrix  matrix(QGraphicsView* theWrappedObject) const;
   QPointF  mapToScene(QGraphicsView* theWrappedObject, const QPoint&  point) const;
   void setTransform(QGraphicsView* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   QTransform  viewportTransform(QGraphicsView* theWrappedObject) const;
   QGraphicsItem*  itemAt(QGraphicsView* theWrappedObject, int  x, int  y) const;
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QBrush  backgroundBrush(QGraphicsView* theWrappedObject) const;
   void centerOn(QGraphicsView* theWrappedObject, const QGraphicsItem*  item);
   QPolygon  mapFromScene(QGraphicsView* theWrappedObject, const QPolygonF&  polygon) const;
   void translate(QGraphicsView* theWrappedObject, qreal  dx, qreal  dy);
   void mouseReleaseEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event);
   Qt::Alignment  alignment(QGraphicsView* theWrappedObject) const;
   void drawItems(QGraphicsView* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options);
   void resetCachedContent(QGraphicsView* theWrappedObject);
   void scale(QGraphicsView* theWrappedObject, qreal  sx, qreal  sy);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSVIEW_H
