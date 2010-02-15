#ifndef PYTHONQTWRAPPER_QGRAPHICSPROXYWIDGET_H
#define PYTHONQTWRAPPER_QGRAPHICSPROXYWIDGET_H

#include <qgraphicsproxywidget.h>
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
#include <qgraphicsproxywidget.h>
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
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QGraphicsProxyWidget : public QGraphicsProxyWidget
{
public:
    PythonQtShell_QGraphicsProxyWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0):QGraphicsProxyWidget(parent, wFlags),_wrapper(NULL) {};

virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void grabKeyboardEvent(QEvent*  event);
virtual void grabMouseEvent(QEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void initStyleOption(QStyleOption*  option) const;
virtual void moveEvent(QGraphicsSceneMoveEvent*  event);
virtual void paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
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

class PythonQtPublicPromoter_QGraphicsProxyWidget : public QGraphicsProxyWidget
{ public:
inline bool  promoted_focusNextPrevChild(bool  next) { return QGraphicsProxyWidget::focusNextPrevChild(next); }
inline void promoted_resizeEvent(QGraphicsSceneResizeEvent*  event) { QGraphicsProxyWidget::resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QGraphicsProxyWidget::showEvent(event); }
inline void promoted_hideEvent(QHideEvent*  event) { QGraphicsProxyWidget::hideEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsProxyWidget::hoverMoveEvent(event); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsProxyWidget::sizeHint(which, constraint); }
inline void promoted_grabMouseEvent(QEvent*  event) { QGraphicsProxyWidget::grabMouseEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsProxyWidget::hoverLeaveEvent(event); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QGraphicsProxyWidget::eventFilter(object, event); }
inline bool  promoted_event(QEvent*  event) { return QGraphicsProxyWidget::event(event); }
inline void promoted_setGeometry(const QRectF&  rect) { QGraphicsProxyWidget::setGeometry(rect); }
inline void promoted_ungrabMouseEvent(QEvent*  event) { QGraphicsProxyWidget::ungrabMouseEvent(event); }
};

class PythonQtWrapper_QGraphicsProxyWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsProxyWidget::Type};
public slots:
QGraphicsProxyWidget* new_QGraphicsProxyWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0);
void delete_QGraphicsProxyWidget(QGraphicsProxyWidget* obj) { delete obj; } 
   bool  focusNextPrevChild(QGraphicsProxyWidget* theWrappedObject, bool  next);
   void paint(QGraphicsProxyWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   void resizeEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event);
   void showEvent(QGraphicsProxyWidget* theWrappedObject, QShowEvent*  event);
   int  type(QGraphicsProxyWidget* theWrappedObject) const;
   void hideEvent(QGraphicsProxyWidget* theWrappedObject, QHideEvent*  event);
   void hoverMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   QSizeF  sizeHint(QGraphicsProxyWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   void grabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event);
   QGraphicsProxyWidget*  createProxyForChildWidget(QGraphicsProxyWidget* theWrappedObject, QWidget*  child);
   void hoverLeaveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   bool  eventFilter(QGraphicsProxyWidget* theWrappedObject, QObject*  object, QEvent*  event);
   void setWidget(QGraphicsProxyWidget* theWrappedObject, QWidget*  widget);
   QWidget*  widget(QGraphicsProxyWidget* theWrappedObject) const;
   QRectF  subWidgetRect(QGraphicsProxyWidget* theWrappedObject, const QWidget*  widget) const;
   bool  event(QGraphicsProxyWidget* theWrappedObject, QEvent*  event);
   void setGeometry(QGraphicsProxyWidget* theWrappedObject, const QRectF&  rect);
   void ungrabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSPROXYWIDGET_H
