#ifndef PYTHONQTWRAPPER_QGRAPHICSTEXTITEM_H
#define PYTHONQTWRAPPER_QGRAPHICSTEXTITEM_H

#include <qgraphicsitem.h>
#include <QObject>

#include <PythonQt.h>

#include <QTextCursor>
#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpoint.h>
#include <qrect.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qwidget.h>

class PythonQtShell_QGraphicsTextItem : public QGraphicsTextItem
{
public:
    PythonQtShell_QGraphicsTextItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsTextItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsTextItem(text, parent, scene),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGraphicsTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsTextItem::Type};
public slots:
QGraphicsTextItem* new_QGraphicsTextItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsTextItem* new_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsTextItem(QGraphicsTextItem* obj) { delete obj; } 
   void setDocument(QGraphicsTextItem* theWrappedObject, QTextDocument*  document);
   void setPlainText(QGraphicsTextItem* theWrappedObject, const QString&  text);
   QPainterPath  shape(QGraphicsTextItem* theWrappedObject) const;
   QString  toHtml(QGraphicsTextItem* theWrappedObject) const;
   bool  openExternalLinks(QGraphicsTextItem* theWrappedObject) const;
   QColor  defaultTextColor(QGraphicsTextItem* theWrappedObject) const;
   QFont  font(QGraphicsTextItem* theWrappedObject) const;
   QTextDocument*  document(QGraphicsTextItem* theWrappedObject) const;
   void paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   void adjustSize(QGraphicsTextItem* theWrappedObject);
   void setTabChangesFocus(QGraphicsTextItem* theWrappedObject, bool  b);
   QTextCursor  textCursor(QGraphicsTextItem* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsTextItem* theWrappedObject) const;
   int  type(QGraphicsTextItem* theWrappedObject) const;
   void setFont(QGraphicsTextItem* theWrappedObject, const QFont&  font);
   void setDefaultTextColor(QGraphicsTextItem* theWrappedObject, const QColor&  c);
   bool  contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const;
   QPainterPath  opaqueArea(QGraphicsTextItem* theWrappedObject) const;
   void setTextCursor(QGraphicsTextItem* theWrappedObject, const QTextCursor&  cursor);
   void setHtml(QGraphicsTextItem* theWrappedObject, const QString&  html);
   void setTextWidth(QGraphicsTextItem* theWrappedObject, qreal  width);
   qreal  textWidth(QGraphicsTextItem* theWrappedObject) const;
   QString  toPlainText(QGraphicsTextItem* theWrappedObject) const;
   void setOpenExternalLinks(QGraphicsTextItem* theWrappedObject, bool  open);
   void setTextInteractionFlags(QGraphicsTextItem* theWrappedObject, Qt::TextInteractionFlags  flags);
   bool  isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const;
   bool  tabChangesFocus(QGraphicsTextItem* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QGraphicsTextItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSTEXTITEM_H
