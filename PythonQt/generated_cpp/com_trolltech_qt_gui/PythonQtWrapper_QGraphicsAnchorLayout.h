#ifndef PYTHONQTWRAPPER_QGRAPHICSANCHORLAYOUT_H
#define PYTHONQTWRAPPER_QGRAPHICSANCHORLAYOUT_H

#include <qgraphicsanchorlayout.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qcoreevent.h>
#include <qgraphicsanchorlayout.h>
#include <qgraphicslayoutitem.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtShell_QGraphicsAnchorLayout : public QGraphicsAnchorLayout
{
public:
    PythonQtShell_QGraphicsAnchorLayout(QGraphicsLayoutItem*  parent = 0):QGraphicsAnchorLayout(parent),_wrapper(NULL) {};

virtual int  count() const;
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void invalidate();
virtual QGraphicsLayoutItem*  itemAt(int  index) const;
virtual void removeAt(int  index);
virtual void updateGeometry();
virtual void widgetEvent(QEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsAnchorLayout : public QGraphicsAnchorLayout
{ public:
inline void promoted_invalidate() { QGraphicsAnchorLayout::invalidate(); }
inline void promoted_removeAt(int  index) { QGraphicsAnchorLayout::removeAt(index); }
inline QGraphicsLayoutItem*  promoted_itemAt(int  index) const { return QGraphicsAnchorLayout::itemAt(index); }
inline int  promoted_count() const { return QGraphicsAnchorLayout::count(); }
};

class PythonQtWrapper_QGraphicsAnchorLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsAnchorLayout* new_QGraphicsAnchorLayout(QGraphicsLayoutItem*  parent = 0);
void delete_QGraphicsAnchorLayout(QGraphicsAnchorLayout* obj) { delete obj; } 
   void addCornerAnchors(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::Corner  firstCorner, QGraphicsLayoutItem*  secondItem, Qt::Corner  secondCorner);
   void invalidate(QGraphicsAnchorLayout* theWrappedObject);
   void setHorizontalSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing);
   void setVerticalSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing);
   QGraphicsAnchor*  addAnchor(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::AnchorPoint  firstEdge, QGraphicsLayoutItem*  secondItem, Qt::AnchorPoint  secondEdge);
   void addAnchors(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, QGraphicsLayoutItem*  secondItem, Qt::Orientations  orientations = Qt::Horizontal | Qt::Vertical);
   void setSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing);
   void removeAt(QGraphicsAnchorLayout* theWrappedObject, int  index);
   qreal  horizontalSpacing(QGraphicsAnchorLayout* theWrappedObject) const;
   QGraphicsLayoutItem*  itemAt(QGraphicsAnchorLayout* theWrappedObject, int  index) const;
   QGraphicsAnchor*  anchor(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::AnchorPoint  firstEdge, QGraphicsLayoutItem*  secondItem, Qt::AnchorPoint  secondEdge);
   int  count(QGraphicsAnchorLayout* theWrappedObject) const;
   qreal  verticalSpacing(QGraphicsAnchorLayout* theWrappedObject) const;
   void setGeometry(QGraphicsAnchorLayout* theWrappedObject, const QRectF&  rect);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSANCHORLAYOUT_H
