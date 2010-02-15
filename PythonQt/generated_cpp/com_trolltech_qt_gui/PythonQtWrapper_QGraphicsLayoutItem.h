#ifndef PYTHONQTWRAPPER_QGRAPHICSLAYOUTITEM_H
#define PYTHONQTWRAPPER_QGRAPHICSLAYOUTITEM_H

#include <qgraphicslayoutitem.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qgraphicsitem.h>
#include <qgraphicslayoutitem.h>
#include <qrect.h>
#include <qsize.h>
#include <qsizepolicy.h>

class PythonQtShell_QGraphicsLayoutItem : public QGraphicsLayoutItem
{
public:
    PythonQtShell_QGraphicsLayoutItem(QGraphicsLayoutItem*  parent = 0, bool  isLayout = false):QGraphicsLayoutItem(parent, isLayout),_wrapper(NULL) {};

virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void setGeometry(const QRectF&  rect);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual void updateGeometry();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLayoutItem : public QGraphicsLayoutItem
{ public:
inline void promoted_updateGeometry() { QGraphicsLayoutItem::updateGeometry(); }
inline void promoted_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsLayoutItem::getContentsMargins(left, top, right, bottom); }
inline void promoted_setGeometry(const QRectF&  rect) { QGraphicsLayoutItem::setGeometry(rect); }
};

class PythonQtWrapper_QGraphicsLayoutItem : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsLayoutItem* new_QGraphicsLayoutItem(QGraphicsLayoutItem*  parent = 0, bool  isLayout = false);
void delete_QGraphicsLayoutItem(QGraphicsLayoutItem* obj) { delete obj; } 
   void setSizePolicy(QGraphicsLayoutItem* theWrappedObject, QSizePolicy::Policy  hPolicy, QSizePolicy::Policy  vPolicy, QSizePolicy::ControlType  controlType = QSizePolicy::DefaultType);
   void setSizePolicy(QGraphicsLayoutItem* theWrappedObject, const QSizePolicy&  policy);
   QSizePolicy  sizePolicy(QGraphicsLayoutItem* theWrappedObject) const;
   void setMaximumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   void updateGeometry(QGraphicsLayoutItem* theWrappedObject);
   qreal  minimumHeight(QGraphicsLayoutItem* theWrappedObject) const;
   bool  isLayout(QGraphicsLayoutItem* theWrappedObject) const;
   QGraphicsLayoutItem*  parentLayoutItem(QGraphicsLayoutItem* theWrappedObject) const;
   void setMaximumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   void setPreferredSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   qreal  maximumWidth(QGraphicsLayoutItem* theWrappedObject) const;
   void setMaximumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   void setPreferredWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   QRectF  contentsRect(QGraphicsLayoutItem* theWrappedObject) const;
   QRectF  geometry(QGraphicsLayoutItem* theWrappedObject) const;
   QGraphicsItem*  graphicsItem(QGraphicsLayoutItem* theWrappedObject) const;
   bool  ownedByLayout(QGraphicsLayoutItem* theWrappedObject) const;
   void getContentsMargins(QGraphicsLayoutItem* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void setMinimumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   QSizeF  preferredSize(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  preferredWidth(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  minimumWidth(QGraphicsLayoutItem* theWrappedObject) const;
   void setMinimumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   QSizeF  maximumSize(QGraphicsLayoutItem* theWrappedObject) const;
   void setPreferredHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   qreal  maximumHeight(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  minimumSize(QGraphicsLayoutItem* theWrappedObject) const;
   void setMaximumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   void setPreferredSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   QSizeF  effectiveSizeHint(QGraphicsLayoutItem* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   void setMinimumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   void setParentLayoutItem(QGraphicsLayoutItem* theWrappedObject, QGraphicsLayoutItem*  parent);
   qreal  preferredHeight(QGraphicsLayoutItem* theWrappedObject) const;
   void setMinimumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   void setGeometry(QGraphicsLayoutItem* theWrappedObject, const QRectF&  rect);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSLAYOUTITEM_H
