#ifndef PYTHONQTWRAPPER_QGRAPHICSPOLYGONITEM_H
#define PYTHONQTWRAPPER_QGRAPHICSPOLYGONITEM_H

#include <qgraphicsitem.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpen.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QGraphicsPolygonItem : public QGraphicsPolygonItem
{
public:
    PythonQtShell_QGraphicsPolygonItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsPolygonItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsPolygonItem(polygon, parent, scene),_wrapper(NULL) {};

virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsPolygonItem : public QGraphicsPolygonItem
{ public:
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsPolygonItem::opaqueArea(); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPolygonItem::isObscuredBy(item); }
};

class PythonQtWrapper_QGraphicsPolygonItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsPolygonItem::Type};
public slots:
QGraphicsPolygonItem* new_QGraphicsPolygonItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsPolygonItem* new_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsPolygonItem(QGraphicsPolygonItem* obj) { delete obj; } 
   void paint(QGraphicsPolygonItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   Qt::FillRule  fillRule(QGraphicsPolygonItem* theWrappedObject) const;
   bool  contains(QGraphicsPolygonItem* theWrappedObject, const QPointF&  point) const;
   QRectF  boundingRect(QGraphicsPolygonItem* theWrappedObject) const;
   QPainterPath  opaqueArea(QGraphicsPolygonItem* theWrappedObject) const;
   bool  isObscuredBy(QGraphicsPolygonItem* theWrappedObject, const QGraphicsItem*  item) const;
   QPolygonF  polygon(QGraphicsPolygonItem* theWrappedObject) const;
   QPainterPath  shape(QGraphicsPolygonItem* theWrappedObject) const;
   void setFillRule(QGraphicsPolygonItem* theWrappedObject, Qt::FillRule  rule);
   void setPolygon(QGraphicsPolygonItem* theWrappedObject, const QPolygonF&  polygon);
   int  type(QGraphicsPolygonItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSPOLYGONITEM_H
