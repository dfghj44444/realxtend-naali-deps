#ifndef PYTHONQTWRAPPER_QGRAPHICSITEM_H
#define PYTHONQTWRAPPER_QGRAPHICSITEM_H

#include <qgraphicsitem.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicstransform.h>
#include <qgraphicswidget.h>
#include <qlist.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

class PythonQtShell_QGraphicsItem : public QGraphicsItem
{
public:
    PythonQtShell_QGraphicsItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsItem(parent, scene),_wrapper(NULL) {};

virtual void advance(int  phase);
virtual QRectF  boundingRect() const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual int  type() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsItem : public QGraphicsItem
{ public:
inline bool  promoted_collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const { return QGraphicsItem::collidesWithPath(path, mode); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsItem::focusInEvent(event); }
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsItem::itemChange(change, value); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragLeaveEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverMoveEvent(event); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsItem::isObscuredBy(item); }
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsItem::contextMenuEvent(event); }
inline bool  promoted_collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const { return QGraphicsItem::collidesWithItem(other, mode); }
inline void promoted_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverEnterEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mousePressEvent(event); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseMoveEvent(event); }
inline int  promoted_type() const { return QGraphicsItem::type(); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverLeaveEvent(event); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dropEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseReleaseEvent(event); }
inline QPainterPath  promoted_shape() const { return QGraphicsItem::shape(); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return QGraphicsItem::extension(variant); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseDoubleClickEvent(event); }
inline void promoted_advance(int  phase) { QGraphicsItem::advance(phase); }
inline bool  promoted_sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) { return QGraphicsItem::sceneEventFilter(watched, event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsItem::inputMethodQuery(query); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QGraphicsItem::keyReleaseEvent(event); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  event) { QGraphicsItem::wheelEvent(event); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsItem::opaqueArea(); }
inline bool  promoted_sceneEvent(QEvent*  event) { return QGraphicsItem::sceneEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragMoveEvent(event); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragEnterEvent(event); }
inline bool  promoted_contains(const QPointF&  point) const { return QGraphicsItem::contains(point); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QGraphicsItem::keyPressEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsItem::focusOutEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsItem::inputMethodEvent(event); }
};

class PythonQtWrapper_QGraphicsItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CacheMode PanelModality enum_1 GraphicsItemFlag GraphicsItemChange )
Q_FLAGS(GraphicsItemFlags )
enum CacheMode{
  NoCache = QGraphicsItem::NoCache,   ItemCoordinateCache = QGraphicsItem::ItemCoordinateCache,   DeviceCoordinateCache = QGraphicsItem::DeviceCoordinateCache};
enum PanelModality{
  NonModal = QGraphicsItem::NonModal,   PanelModal = QGraphicsItem::PanelModal,   SceneModal = QGraphicsItem::SceneModal};
enum enum_1{
  Type = QGraphicsItem::Type,   UserType = QGraphicsItem::UserType};
enum GraphicsItemFlag{
  ItemIsMovable = QGraphicsItem::ItemIsMovable,   ItemIsSelectable = QGraphicsItem::ItemIsSelectable,   ItemIsFocusable = QGraphicsItem::ItemIsFocusable,   ItemClipsToShape = QGraphicsItem::ItemClipsToShape,   ItemClipsChildrenToShape = QGraphicsItem::ItemClipsChildrenToShape,   ItemIgnoresTransformations = QGraphicsItem::ItemIgnoresTransformations,   ItemIgnoresParentOpacity = QGraphicsItem::ItemIgnoresParentOpacity,   ItemDoesntPropagateOpacityToChildren = QGraphicsItem::ItemDoesntPropagateOpacityToChildren,   ItemStacksBehindParent = QGraphicsItem::ItemStacksBehindParent,   ItemUsesExtendedStyleOption = QGraphicsItem::ItemUsesExtendedStyleOption,   ItemHasNoContents = QGraphicsItem::ItemHasNoContents,   ItemSendsGeometryChanges = QGraphicsItem::ItemSendsGeometryChanges,   ItemAcceptsInputMethod = QGraphicsItem::ItemAcceptsInputMethod,   ItemNegativeZStacksBehindParent = QGraphicsItem::ItemNegativeZStacksBehindParent,   ItemIsPanel = QGraphicsItem::ItemIsPanel,   ItemIsFocusScope = QGraphicsItem::ItemIsFocusScope,   ItemSendsScenePositionChanges = QGraphicsItem::ItemSendsScenePositionChanges};
enum GraphicsItemChange{
  ItemPositionChange = QGraphicsItem::ItemPositionChange,   ItemMatrixChange = QGraphicsItem::ItemMatrixChange,   ItemVisibleChange = QGraphicsItem::ItemVisibleChange,   ItemEnabledChange = QGraphicsItem::ItemEnabledChange,   ItemSelectedChange = QGraphicsItem::ItemSelectedChange,   ItemParentChange = QGraphicsItem::ItemParentChange,   ItemChildAddedChange = QGraphicsItem::ItemChildAddedChange,   ItemChildRemovedChange = QGraphicsItem::ItemChildRemovedChange,   ItemTransformChange = QGraphicsItem::ItemTransformChange,   ItemPositionHasChanged = QGraphicsItem::ItemPositionHasChanged,   ItemTransformHasChanged = QGraphicsItem::ItemTransformHasChanged,   ItemSceneChange = QGraphicsItem::ItemSceneChange,   ItemVisibleHasChanged = QGraphicsItem::ItemVisibleHasChanged,   ItemEnabledHasChanged = QGraphicsItem::ItemEnabledHasChanged,   ItemSelectedHasChanged = QGraphicsItem::ItemSelectedHasChanged,   ItemParentHasChanged = QGraphicsItem::ItemParentHasChanged,   ItemSceneHasChanged = QGraphicsItem::ItemSceneHasChanged,   ItemCursorChange = QGraphicsItem::ItemCursorChange,   ItemCursorHasChanged = QGraphicsItem::ItemCursorHasChanged,   ItemToolTipChange = QGraphicsItem::ItemToolTipChange,   ItemToolTipHasChanged = QGraphicsItem::ItemToolTipHasChanged,   ItemFlagsChange = QGraphicsItem::ItemFlagsChange,   ItemFlagsHaveChanged = QGraphicsItem::ItemFlagsHaveChanged,   ItemZValueChange = QGraphicsItem::ItemZValueChange,   ItemZValueHasChanged = QGraphicsItem::ItemZValueHasChanged,   ItemOpacityChange = QGraphicsItem::ItemOpacityChange,   ItemOpacityHasChanged = QGraphicsItem::ItemOpacityHasChanged,   ItemScenePositionHasChanged = QGraphicsItem::ItemScenePositionHasChanged};
Q_DECLARE_FLAGS(GraphicsItemFlags, GraphicsItemFlag)
public slots:
QGraphicsItem* new_QGraphicsItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsItem(QGraphicsItem* obj) { delete obj; } 
bool hasOwner(QGraphicsItem* theWrappedObject) { return theWrappedObject->scene()!=NULL || theWrappedObject->parentItem()!=NULL; }
   void setEnabled(QGraphicsItem* theWrappedObject, bool  enabled);
   void setFiltersChildEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   bool  collidesWithPath(QGraphicsItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void hide(QGraphicsItem* theWrappedObject);
   void setX(QGraphicsItem* theWrappedObject, qreal  x);
   qreal  effectiveOpacity(QGraphicsItem* theWrappedObject) const;
   void setAcceptTouchEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   void show(QGraphicsItem* theWrappedObject);
   bool  isSelected(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem*  panel(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   void removeSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem);
   void focusInEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event);
   void ensureVisible(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin = 50, int  ymargin = 50);
   QVariant  itemChange(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
   bool  hasCursor(QGraphicsItem* theWrappedObject) const;
   void setFlags(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags);
   void update(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height);
   qreal  opacity(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QRectF  mapRectFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void dragLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   bool  acceptDrops(QGraphicsItem* theWrappedObject) const;
   void rotate(QGraphicsItem* theWrappedObject, qreal  angle);
   QPointF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   bool  isVisibleTo(QGraphicsItem* theWrappedObject, const QGraphicsItem*  parent) const;
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void setCacheMode(QGraphicsItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize = QSize());
   void setFlag(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled = true);
   void setScale(QGraphicsItem* theWrappedObject, qreal  scale);
   void setTransform(QGraphicsItem* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   QGraphicsItemGroup*  group(QGraphicsItem* theWrappedObject) const;
   bool  isObscured(QGraphicsItem* theWrappedObject) const;
   void hoverMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   bool  isObscured(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPointF  mapToScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   void setRotation(QGraphicsItem* theWrappedObject, qreal  angle);
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  transformOriginPoint(QGraphicsItem* theWrappedObject) const;
   bool  isObscuredBy(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item) const;
   void setOpacity(QGraphicsItem* theWrappedObject, qreal  opacity);
   bool  acceptsHoverEvents(QGraphicsItem* theWrappedObject) const;
   void setGraphicsEffect(QGraphicsItem* theWrappedObject, QGraphicsEffect*  effect);
   void contextMenuEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   bool  collidesWithItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QCursor  cursor(QGraphicsItem* theWrappedObject) const;
   void setFocusProxy(QGraphicsItem* theWrappedObject, QGraphicsItem*  item);
   void setPanelModality(QGraphicsItem* theWrappedObject, QGraphicsItem::PanelModality  panelModality);
   void translate(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy);
   QRectF  mapRectFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   void setY(QGraphicsItem* theWrappedObject, qreal  y);
   QList<QGraphicsItem* >  childItems(QGraphicsItem* theWrappedObject) const;
   void hoverEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   QPainterPath  mapToParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   void mousePressEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void clearFocus(QGraphicsItem* theWrappedObject);
   void setZValue(QGraphicsItem* theWrappedObject, qreal  z);
   QRectF  mapRectToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   void unsetCursor(QGraphicsItem* theWrappedObject);
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QGraphicsWidget*  window(QGraphicsItem* theWrappedObject) const;
   void mouseMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void grabKeyboard(QGraphicsItem* theWrappedObject);
   int  type(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem::CacheMode  cacheMode(QGraphicsItem* theWrappedObject) const;
   void setAcceptHoverEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QTransform  transform(QGraphicsItem* theWrappedObject) const;
   Qt::MouseButtons  acceptedMouseButtons(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem*  focusScopeItem(QGraphicsItem* theWrappedObject) const;
   void setGroup(QGraphicsItem* theWrappedObject, QGraphicsItemGroup*  group);
   void hoverLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   bool  isWidget(QGraphicsItem* theWrappedObject) const;
   void setTransformOriginPoint(QGraphicsItem* theWrappedObject, const QPointF&  origin);
   void dropEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   QVariant  data(QGraphicsItem* theWrappedObject, int  key) const;
   void installSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem);
   void setTransformOriginPoint(QGraphicsItem* theWrappedObject, qreal  ax, qreal  ay);
   QGraphicsObject*  parentObject(QGraphicsItem* theWrappedObject) const;
   QGraphicsWidget*  topLevelWidget(QGraphicsItem* theWrappedObject) const;
   QPointF  pos(QGraphicsItem* theWrappedObject) const;
   QPointF  mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   QPointF  scenePos(QGraphicsItem* theWrappedObject) const;
   bool  isPanel(QGraphicsItem* theWrappedObject) const;
   QPainterPath  clipPath(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem*  parentItem(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QGraphicsItem*  commonAncestorItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other) const;
   void resetTransform(QGraphicsItem* theWrappedObject);
   QGraphicsObject*  toGraphicsObject(QGraphicsItem* theWrappedObject);
   bool  acceptHoverEvents(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem::PanelModality  panelModality(QGraphicsItem* theWrappedObject) const;
   QRectF  mapRectFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QRectF  mapRectFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void setAcceptDrops(QGraphicsItem* theWrappedObject, bool  on);
   qreal  boundingRegionGranularity(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPointF  mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   void mouseReleaseEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   QTransform  deviceTransform(QGraphicsItem* theWrappedObject, const QTransform&  viewportTransform) const;
   QGraphicsItem*  focusItem(QGraphicsItem* theWrappedObject) const;
   QPainterPath  mapFromParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   bool  isWindow(QGraphicsItem* theWrappedObject) const;
   QRectF  childrenBoundingRect(QGraphicsItem* theWrappedObject) const;
   bool  handlesChildEvents(QGraphicsItem* theWrappedObject) const;
   bool  filtersChildEvents(QGraphicsItem* theWrappedObject) const;
   QGraphicsEffect*  graphicsEffect(QGraphicsItem* theWrappedObject) const;
   qreal  y(QGraphicsItem* theWrappedObject) const;
   QPainterPath  shape(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QVariant  extension(QGraphicsItem* theWrappedObject, const QVariant&  variant) const;
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   void setVisible(QGraphicsItem* theWrappedObject, bool  visible);
   void ungrabKeyboard(QGraphicsItem* theWrappedObject);
   void setData(QGraphicsItem* theWrappedObject, int  key, const QVariant&  value);
   qreal  zValue(QGraphicsItem* theWrappedObject) const;
   QList<QGraphicsItem* >  collidingItems(QGraphicsItem* theWrappedObject, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QTransform  itemTransform(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, bool*  ok = 0) const;
   void mouseDoubleClickEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   bool  isUnderMouse(QGraphicsItem* theWrappedObject) const;
   void advance(QGraphicsItem* theWrappedObject, int  phase);
   QPainterPath  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QRectF  mapRectToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   bool  sceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  watched, QEvent*  event);
   QVariant  inputMethodQuery(QGraphicsItem* theWrappedObject, Qt::InputMethodQuery  query) const;
   void setParentItem(QGraphicsItem* theWrappedObject, QGraphicsItem*  parent);
   QGraphicsItem*  topLevelItem(QGraphicsItem* theWrappedObject) const;
   QGraphicsWidget*  parentWidget(QGraphicsItem* theWrappedObject) const;
   void keyReleaseEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event);
   bool  isAncestorOf(QGraphicsItem* theWrappedObject, const QGraphicsItem*  child) const;
   void ungrabMouse(QGraphicsItem* theWrappedObject);
   qreal  x(QGraphicsItem* theWrappedObject) const;
   void wheelEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneWheelEvent*  event);
   void setFocus(QGraphicsItem* theWrappedObject, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   QList<QGraphicsTransform* >  transformations(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QRectF  mapRectToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QGraphicsItem::GraphicsItemFlags  flags(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void update(QGraphicsItem* theWrappedObject, const QRectF&  rect = QRectF());
   QPointF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   bool  isVisible(QGraphicsItem* theWrappedObject) const;
   void scroll(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect = QRectF());
   QTransform  sceneTransform(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem*  focusProxy(QGraphicsItem* theWrappedObject) const;
   void setAcceptsHoverEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPointF  mapFromScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   bool  isObscured(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QString  toolTip(QGraphicsItem* theWrappedObject) const;
   void setCursor(QGraphicsItem* theWrappedObject, const QCursor&  cursor);
   QRectF  mapRectToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   void setActive(QGraphicsItem* theWrappedObject, bool  active);
   void setToolTip(QGraphicsItem* theWrappedObject, const QString&  toolTip);
   void setAcceptedMouseButtons(QGraphicsItem* theWrappedObject, Qt::MouseButtons  buttons);
   qreal  scale(QGraphicsItem* theWrappedObject) const;
   bool  acceptTouchEvents(QGraphicsItem* theWrappedObject) const;
   QRectF  mapRectFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   bool  isEnabled(QGraphicsItem* theWrappedObject) const;
   QPainterPath  opaqueArea(QGraphicsItem* theWrappedObject) const;
   bool  hasFocus(QGraphicsItem* theWrappedObject) const;
   void ensureVisible(QGraphicsItem* theWrappedObject, const QRectF&  rect = QRectF(), int  xmargin = 50, int  ymargin = 50);
   bool  sceneEvent(QGraphicsItem* theWrappedObject, QEvent*  event);
   bool  isActive(QGraphicsItem* theWrappedObject) const;
   void dragMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   QRegion  boundingRegion(QGraphicsItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const;
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   void scale(QGraphicsItem* theWrappedObject, qreal  sx, qreal  sy);
   void setTransformations(QGraphicsItem* theWrappedObject, const QList<QGraphicsTransform* >&  transformations);
   Qt::InputMethodHints  inputMethodHints(QGraphicsItem* theWrappedObject) const;
   QPointF  mapFromParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   void setPos(QGraphicsItem* theWrappedObject, qreal  x, qreal  y);
   void grabMouse(QGraphicsItem* theWrappedObject);
   void setPos(QGraphicsItem* theWrappedObject, const QPointF&  pos);
   void setBoundingRegionGranularity(QGraphicsItem* theWrappedObject, qreal  granularity);
   QRectF  mapRectFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QGraphicsScene*  scene(QGraphicsItem* theWrappedObject) const;
   QRectF  sceneBoundingRect(QGraphicsItem* theWrappedObject) const;
   QRectF  mapRectToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QRectF  mapRectToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void dragEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPainterPath  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPainterPath  mapToScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   void shear(QGraphicsItem* theWrappedObject, qreal  sh, qreal  sv);
   bool  contains(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   void setInputMethodHints(QGraphicsItem* theWrappedObject, Qt::InputMethodHints  hints);
   void stackBefore(QGraphicsItem* theWrappedObject, const QGraphicsItem*  sibling);
   void keyPressEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event);
   QPointF  mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   bool  isClipped(QGraphicsItem* theWrappedObject) const;
   qreal  rotation(QGraphicsItem* theWrappedObject) const;
   void focusOutEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event);
   void moveBy(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy);
   QPainterPath  mapFromScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   void setHandlesChildEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   bool  isBlockedByModalPanel(QGraphicsItem* theWrappedObject, QGraphicsItem**  blockingPanel = 0) const;
   QPointF  mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   void inputMethodEvent(QGraphicsItem* theWrappedObject, QInputMethodEvent*  event);
   void setSelected(QGraphicsItem* theWrappedObject, bool  selected);
    QString toString(QGraphicsItem*);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSITEM_H
