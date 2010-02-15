#ifndef PYTHONQTWRAPPER_QGRAPHICSSCENE_H
#define PYTHONQTWRAPPER_QGRAPHICSSCENE_H

#include <qgraphicsscene.h>
#include <QObject>

#include <PythonQt.h>

#include <QVarLengthArray>
#include <QVariant>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicsview.h>
#include <qgraphicswidget.h>
#include <qline.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

class PythonQtShell_QGraphicsScene : public QGraphicsScene
{
public:
    PythonQtShell_QGraphicsScene(QObject*  parent = 0):QGraphicsScene(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent = 0):QGraphicsScene(sceneRect, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent = 0):QGraphicsScene(x, y, width, height, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void drawBackground(QPainter*  painter, const QRectF&  rect);
virtual void drawForeground(QPainter*  painter, const QRectF&  rect);
virtual void drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void helpEvent(QGraphicsSceneHelpEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsScene : public QGraphicsScene
{ public:
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dropEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QGraphicsScene::keyReleaseEvent(event); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragLeaveEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsScene::inputMethodEvent(event); }
inline void promoted_drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0) { QGraphicsScene::drawItems(painter, numItems, items, options, widget); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsScene::focusInEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QGraphicsScene::event(event); }
inline void promoted_drawBackground(QPainter*  painter, const QRectF&  rect) { QGraphicsScene::drawBackground(painter, rect); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mousePressEvent(event); }
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsScene::contextMenuEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseDoubleClickEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsScene::inputMethodQuery(query); }
inline void promoted_helpEvent(QGraphicsSceneHelpEvent*  event) { QGraphicsScene::helpEvent(event); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseMoveEvent(event); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragEnterEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsScene::dragMoveEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsScene::focusOutEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsScene::mouseReleaseEvent(event); }
inline bool  promoted_eventFilter(QObject*  watched, QEvent*  event) { return QGraphicsScene::eventFilter(watched, event); }
inline void promoted_drawForeground(QPainter*  painter, const QRectF&  rect) { QGraphicsScene::drawForeground(painter, rect); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QGraphicsScene::keyPressEvent(event); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  event) { QGraphicsScene::wheelEvent(event); }
};

class PythonQtWrapper_QGraphicsScene : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SceneLayer ItemIndexMethod )
Q_FLAGS(SceneLayers )
enum SceneLayer{
  ItemLayer = QGraphicsScene::ItemLayer,   BackgroundLayer = QGraphicsScene::BackgroundLayer,   ForegroundLayer = QGraphicsScene::ForegroundLayer,   AllLayers = QGraphicsScene::AllLayers};
enum ItemIndexMethod{
  BspTreeIndex = QGraphicsScene::BspTreeIndex,   NoIndex = QGraphicsScene::NoIndex};
Q_DECLARE_FLAGS(SceneLayers, SceneLayer)
public slots:
QGraphicsScene* new_QGraphicsScene(QObject*  parent = 0);
QGraphicsScene* new_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent = 0);
QGraphicsScene* new_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent = 0);
void delete_QGraphicsScene(QGraphicsScene* obj) { delete obj; } 
   QGraphicsWidget*  activeWindow(QGraphicsScene* theWrappedObject) const;
   QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, qreal  x, qreal  y) const;
   void dropEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   QFont  font(QGraphicsScene* theWrappedObject) const;
   QGraphicsItemGroup*  createItemGroup(QGraphicsScene* theWrappedObject, const QList<QGraphicsItem* >&  items);
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QRectF&  rect, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  collidingItems(QGraphicsScene* theWrappedObject, const QGraphicsItem*  item, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QGraphicsLineItem*  addLine(QGraphicsScene* theWrappedObject, const QLineF&  line, const QPen&  pen = QPen());
   void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QTransform&  deviceTransform);
   void keyReleaseEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event);
   bool  isSortCacheEnabled(QGraphicsScene* theWrappedObject) const;
   QGraphicsProxyWidget*  addWidget(QGraphicsScene* theWrappedObject, QWidget*  widget, Qt::WindowFlags  wFlags = 0);
   qreal  height(QGraphicsScene* theWrappedObject) const;
   void dragLeaveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   bool  hasFocus(QGraphicsScene* theWrappedObject) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QGraphicsItem*  activePanel(QGraphicsScene* theWrappedObject) const;
   QGraphicsTextItem*  addText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font = QFont());
   QGraphicsItem*  mouseGrabberItem(QGraphicsScene* theWrappedObject) const;
   QGraphicsEllipseItem*  addEllipse(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform = QTransform()) const;
   QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, const QTransform&  deviceTransform) const;
   bool  sendEvent(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, QEvent*  event);
   void setActivePanel(QGraphicsScene* theWrappedObject, QGraphicsItem*  item);
   void render(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  target = QRectF(), const QRectF&  source = QRectF(), Qt::AspectRatioMode  aspectRatioMode = Qt::KeepAspectRatio);
   QGraphicsPathItem*  addPath(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   void setForegroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush);
   void inputMethodEvent(QGraphicsScene* theWrappedObject, QInputMethodEvent*  event);
   void setSceneRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setItemIndexMethod(QGraphicsScene* theWrappedObject, QGraphicsScene::ItemIndexMethod  method);
   void setBackgroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush);
   void drawItems(QGraphicsScene* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0);
   QGraphicsLineItem*  addLine(QGraphicsScene* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2, const QPen&  pen = QPen());
   QGraphicsPixmapItem*  addPixmap(QGraphicsScene* theWrappedObject, const QPixmap&  pixmap);
   void focusInEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event);
   bool  event(QGraphicsScene* theWrappedObject, QEvent*  event);
   void removeItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item);
   int  bspTreeDepth(QGraphicsScene* theWrappedObject) const;
   void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode, const QTransform&  deviceTransform);
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, Qt::SortOrder  order) const;
   QGraphicsScene::ItemIndexMethod  itemIndexMethod(QGraphicsScene* theWrappedObject) const;
   void drawBackground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   void destroyItemGroup(QGraphicsScene* theWrappedObject, QGraphicsItemGroup*  group);
   QBrush  foregroundBrush(QGraphicsScene* theWrappedObject) const;
   void mousePressEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode);
   void addItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item);
   void setFocus(QGraphicsScene* theWrappedObject, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPointF&  pos, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform = QTransform()) const;
   void setFocusItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   void setBspTreeDepth(QGraphicsScene* theWrappedObject, int  depth);
   void setFont(QGraphicsScene* theWrappedObject, const QFont&  font);
   void invalidate(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsScene::SceneLayers  layers = QGraphicsScene::AllLayers);
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void contextMenuEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform = QTransform()) const;
   void mouseDoubleClickEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void setActiveWindow(QGraphicsScene* theWrappedObject, QGraphicsWidget*  widget);
   QVariant  inputMethodQuery(QGraphicsScene* theWrappedObject, Qt::InputMethodQuery  query) const;
   void helpEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneHelpEvent*  event);
   QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, const QPointF&  pos, const QTransform&  deviceTransform) const;
   QList<QGraphicsItem* >  selectedItems(QGraphicsScene* theWrappedObject) const;
   void mouseMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   QGraphicsSimpleTextItem*  addSimpleText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font = QFont());
   QPainterPath  selectionArea(QGraphicsScene* theWrappedObject) const;
   QGraphicsEllipseItem*  addEllipse(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   void dragEnterEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform = QTransform()) const;
   void setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path);
   QGraphicsItem*  itemAt(QGraphicsScene* theWrappedObject, const QPointF&  pos) const;
   void setStyle(QGraphicsScene* theWrappedObject, QStyle*  style);
   void setSceneRect(QGraphicsScene* theWrappedObject, const QRectF&  rect);
   void clearFocus(QGraphicsScene* theWrappedObject);
   QRectF  sceneRect(QGraphicsScene* theWrappedObject) const;
   QGraphicsPolygonItem*  addPolygon(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   void dragMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QPointF&  pos) const;
   QList<QGraphicsItem* >  items(QGraphicsScene* theWrappedObject, const QRectF&  rect, Qt::ItemSelectionMode  mode, Qt::SortOrder  order, const QTransform&  deviceTransform = QTransform()) const;
   void setPalette(QGraphicsScene* theWrappedObject, const QPalette&  palette);
   void focusOutEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event);
   bool  isActive(QGraphicsScene* theWrappedObject) const;
   void update(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   qreal  width(QGraphicsScene* theWrappedObject) const;
   void mouseReleaseEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   bool  eventFilter(QGraphicsScene* theWrappedObject, QObject*  watched, QEvent*  event);
   QBrush  backgroundBrush(QGraphicsScene* theWrappedObject) const;
   void setSortCacheEnabled(QGraphicsScene* theWrappedObject, bool  enabled);
   QGraphicsRectItem*  addRect(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   QPalette  palette(QGraphicsScene* theWrappedObject) const;
   void drawForeground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect);
   QStyle*  style(QGraphicsScene* theWrappedObject) const;
   void keyPressEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event);
   QGraphicsRectItem*  addRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen = QPen(), const QBrush&  brush = QBrush());
   void setStickyFocus(QGraphicsScene* theWrappedObject, bool  enabled);
   QList<QGraphicsView* >  views(QGraphicsScene* theWrappedObject) const;
   QRectF  itemsBoundingRect(QGraphicsScene* theWrappedObject) const;
   void wheelEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneWheelEvent*  event);
   QGraphicsItem*  focusItem(QGraphicsScene* theWrappedObject) const;
   bool  stickyFocus(QGraphicsScene* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSSCENE_H
