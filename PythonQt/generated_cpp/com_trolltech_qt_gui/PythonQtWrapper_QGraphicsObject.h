#ifndef PYTHONQTWRAPPER_QGRAPHICSOBJECT_H
#define PYTHONQTWRAPPER_QGRAPHICSOBJECT_H

#include <qgraphicsitem.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
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
#include <qobject.h>
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

class PythonQtShell_QGraphicsObject : public QGraphicsObject
{
public:
    PythonQtShell_QGraphicsObject(QGraphicsItem*  parent = 0):QGraphicsObject(parent),_wrapper(NULL) {};

virtual void advance(int  phase);
virtual QRectF  boundingRect() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
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
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual int  type() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGraphicsObject : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsObject* new_QGraphicsObject(QGraphicsItem*  parent = 0);
void delete_QGraphicsObject(QGraphicsObject* obj) { delete obj; } 
   void ungrabGesture(QGraphicsObject* theWrappedObject, Qt::GestureType  type);
   void grabGesture(QGraphicsObject* theWrappedObject, Qt::GestureType  type, Qt::GestureFlags  flags = Qt::GestureFlags());
    QString toString(QGraphicsObject*);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSOBJECT_H
