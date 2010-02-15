#ifndef PYTHONQTWRAPPER_QGRAPHICSWIDGET_H
#define PYTHONQTWRAPPER_QGRAPHICSWIDGET_H

#include <qgraphicswidget.h>
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
#include <qgraphicslayoutitem.h>
#include <qgraphicssceneevent.h>
#include <qgraphicswidget.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QGraphicsWidget : public QGraphicsWidget
{
public:
    PythonQtShell_QGraphicsWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0):QGraphicsWidget(parent, wFlags),_wrapper(NULL) {};

virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  focusNextPrevChild(bool  next);
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void grabKeyboardEvent(QEvent*  event);
virtual void grabMouseEvent(QEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void initStyleOption(QStyleOption*  option) const;
virtual void moveEvent(QGraphicsSceneMoveEvent*  event);
virtual void paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual void polishEvent();
virtual QVariant  propertyChange(const QString&  propertyName, const QVariant&  value);
virtual void resizeEvent(QGraphicsSceneResizeEvent*  event);
virtual void setGeometry(const QRectF&  rect);
virtual void showEvent(QShowEvent*  event);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void ungrabKeyboardEvent(QEvent*  event);
virtual void ungrabMouseEvent(QEvent*  event);
virtual void updateGeometry();
virtual bool  windowFrameEvent(QEvent*  e);
virtual Qt::WindowFrameSection  windowFrameSectionAt(const QPointF&  pos) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsWidget : public QGraphicsWidget
{ public:
inline void promoted_hideEvent(QHideEvent*  event) { QGraphicsWidget::hideEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { QGraphicsWidget::closeEvent(event); }
inline void promoted_setGeometry(const QRectF&  rect) { QGraphicsWidget::setGeometry(rect); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsWidget::sizeHint(which, constraint); }
inline void promoted_paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0) { QGraphicsWidget::paintWindowFrame(painter, option, widget); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsWidget::hoverLeaveEvent(event); }
inline void promoted_polishEvent() { QGraphicsWidget::polishEvent(); }
inline bool  promoted_windowFrameEvent(QEvent*  e) { return QGraphicsWidget::windowFrameEvent(e); }
inline QVariant  promoted_propertyChange(const QString&  propertyName, const QVariant&  value) { return QGraphicsWidget::propertyChange(propertyName, value); }
inline void promoted_grabKeyboardEvent(QEvent*  event) { QGraphicsWidget::grabKeyboardEvent(event); }
inline void promoted_changeEvent(QEvent*  event) { QGraphicsWidget::changeEvent(event); }
inline void promoted_initStyleOption(QStyleOption*  option) const { QGraphicsWidget::initStyleOption(option); }
inline void promoted_moveEvent(QGraphicsSceneMoveEvent*  event) { QGraphicsWidget::moveEvent(event); }
inline bool  promoted_event(QEvent*  event) { return QGraphicsWidget::event(event); }
inline void promoted_grabMouseEvent(QEvent*  event) { QGraphicsWidget::grabMouseEvent(event); }
inline void promoted_resizeEvent(QGraphicsSceneResizeEvent*  event) { QGraphicsWidget::resizeEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsWidget::hoverMoveEvent(event); }
inline void promoted_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsWidget::getContentsMargins(left, top, right, bottom); }
inline void promoted_updateGeometry() { QGraphicsWidget::updateGeometry(); }
inline void promoted_showEvent(QShowEvent*  event) { QGraphicsWidget::showEvent(event); }
inline void promoted_ungrabMouseEvent(QEvent*  event) { QGraphicsWidget::ungrabMouseEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QGraphicsWidget::focusNextPrevChild(next); }
inline void promoted_ungrabKeyboardEvent(QEvent*  event) { QGraphicsWidget::ungrabKeyboardEvent(event); }
inline Qt::WindowFrameSection  promoted_windowFrameSectionAt(const QPointF&  pos) const { return QGraphicsWidget::windowFrameSectionAt(pos); }
};

class PythonQtWrapper_QGraphicsWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsWidget::Type};
public slots:
QGraphicsWidget* new_QGraphicsWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0);
void delete_QGraphicsWidget(QGraphicsWidget* obj) { delete obj; } 
   void setWindowTitle(QGraphicsWidget* theWrappedObject, const QString&  title);
   void addAction(QGraphicsWidget* theWrappedObject, QAction*  action);
   void hideEvent(QGraphicsWidget* theWrappedObject, QHideEvent*  event);
   QFont  font(QGraphicsWidget* theWrappedObject) const;
   QPainterPath  shape(QGraphicsWidget* theWrappedObject) const;
   int  grabShortcut(QGraphicsWidget* theWrappedObject, const QKeySequence&  sequence, Qt::ShortcutContext  context = Qt::WindowShortcut);
   void paint(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   bool  isActiveWindow(QGraphicsWidget* theWrappedObject) const;
   QGraphicsWidget*  focusWidget(QGraphicsWidget* theWrappedObject) const;
   void closeEvent(QGraphicsWidget* theWrappedObject, QCloseEvent*  event);
   void setGeometry(QGraphicsWidget* theWrappedObject, const QRectF&  rect);
   QList<QAction* >  actions(QGraphicsWidget* theWrappedObject) const;
   QSizeF  sizeHint(QGraphicsWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   void setFocusPolicy(QGraphicsWidget* theWrappedObject, Qt::FocusPolicy  policy);
   void paintWindowFrame(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   void getWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void hoverLeaveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void polishEvent(QGraphicsWidget* theWrappedObject);
   void setFont(QGraphicsWidget* theWrappedObject, const QFont&  font);
   void setShortcutEnabled(QGraphicsWidget* theWrappedObject, int  id, bool  enabled = true);
   bool  windowFrameEvent(QGraphicsWidget* theWrappedObject, QEvent*  e);
   QVariant  propertyChange(QGraphicsWidget* theWrappedObject, const QString&  propertyName, const QVariant&  value);
   int  type(QGraphicsWidget* theWrappedObject) const;
   void setWindowFlags(QGraphicsWidget* theWrappedObject, Qt::WindowFlags  wFlags);
   Qt::WindowType  windowType(QGraphicsWidget* theWrappedObject) const;
   void grabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void changeEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void initStyleOption(QGraphicsWidget* theWrappedObject, QStyleOption*  option) const;
   void adjustSize(QGraphicsWidget* theWrappedObject);
   void setGeometry(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   QRectF  boundingRect(QGraphicsWidget* theWrappedObject) const;
   QRectF  rect(QGraphicsWidget* theWrappedObject) const;
   void setAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute, bool  on = true);
   void moveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneMoveEvent*  event);
   void setWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   QStyle*  style(QGraphicsWidget* theWrappedObject) const;
   void setShortcutAutoRepeat(QGraphicsWidget* theWrappedObject, int  id, bool  enabled = true);
   void addActions(QGraphicsWidget* theWrappedObject, QList<QAction* >  actions);
   void removeAction(QGraphicsWidget* theWrappedObject, QAction*  action);
   bool  event(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void setPalette(QGraphicsWidget* theWrappedObject, const QPalette&  palette);
   void setContentsMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   QRectF  windowFrameGeometry(QGraphicsWidget* theWrappedObject) const;
   void grabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void static_QGraphicsWidget_setTabOrder(QGraphicsWidget*  first, QGraphicsWidget*  second);
   QString  windowTitle(QGraphicsWidget* theWrappedObject) const;
   QGraphicsLayout*  layout(QGraphicsWidget* theWrappedObject) const;
   void resizeEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event);
   void resize(QGraphicsWidget* theWrappedObject, const QSizeF&  size);
   QPalette  palette(QGraphicsWidget* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QGraphicsWidget* theWrappedObject) const;
   QRectF  windowFrameRect(QGraphicsWidget* theWrappedObject) const;
   void hoverMoveEvent(QGraphicsWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   Qt::FocusPolicy  focusPolicy(QGraphicsWidget* theWrappedObject) const;
   void getContentsMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void insertAction(QGraphicsWidget* theWrappedObject, QAction*  before, QAction*  action);
   bool  testAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute) const;
   void updateGeometry(QGraphicsWidget* theWrappedObject);
   void unsetLayoutDirection(QGraphicsWidget* theWrappedObject);
   void setLayoutDirection(QGraphicsWidget* theWrappedObject, Qt::LayoutDirection  direction);
   void resize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h);
   void insertActions(QGraphicsWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions);
   QSizeF  size(QGraphicsWidget* theWrappedObject) const;
   void showEvent(QGraphicsWidget* theWrappedObject, QShowEvent*  event);
   void releaseShortcut(QGraphicsWidget* theWrappedObject, int  id);
   void ungrabMouseEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   bool  focusNextPrevChild(QGraphicsWidget* theWrappedObject, bool  next);
   void setLayout(QGraphicsWidget* theWrappedObject, QGraphicsLayout*  layout);
   Qt::WindowFlags  windowFlags(QGraphicsWidget* theWrappedObject) const;
   void ungrabKeyboardEvent(QGraphicsWidget* theWrappedObject, QEvent*  event);
   void setStyle(QGraphicsWidget* theWrappedObject, QStyle*  style);
   Qt::WindowFrameSection  windowFrameSectionAt(QGraphicsWidget* theWrappedObject, const QPointF&  pos) const;
   void unsetWindowFrameMargins(QGraphicsWidget* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSWIDGET_H
