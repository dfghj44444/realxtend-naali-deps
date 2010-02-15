#ifndef PYTHONQTWRAPPER_QGRAPHICSLINEARLAYOUT_H
#define PYTHONQTWRAPPER_QGRAPHICSLINEARLAYOUT_H

#include <qgraphicslinearlayout.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qcoreevent.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicslinearlayout.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtShell_QGraphicsLinearLayout : public QGraphicsLinearLayout
{
public:
    PythonQtShell_QGraphicsLinearLayout(QGraphicsLayoutItem*  parent = 0):QGraphicsLinearLayout(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsLinearLayout(Qt::Orientation  orientation, QGraphicsLayoutItem*  parent = 0):QGraphicsLinearLayout(orientation, parent),_wrapper(NULL) {};

virtual int  count() const;
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void invalidate();
virtual QGraphicsLayoutItem*  itemAt(int  index) const;
virtual void removeAt(int  index);
virtual void updateGeometry();
virtual void widgetEvent(QEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLinearLayout : public QGraphicsLinearLayout
{ public:
inline void promoted_removeAt(int  index) { QGraphicsLinearLayout::removeAt(index); }
inline void promoted_invalidate() { QGraphicsLinearLayout::invalidate(); }
inline int  promoted_count() const { return QGraphicsLinearLayout::count(); }
inline QGraphicsLayoutItem*  promoted_itemAt(int  index) const { return QGraphicsLinearLayout::itemAt(index); }
};

class PythonQtWrapper_QGraphicsLinearLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsLinearLayout* new_QGraphicsLinearLayout(QGraphicsLayoutItem*  parent = 0);
QGraphicsLinearLayout* new_QGraphicsLinearLayout(Qt::Orientation  orientation, QGraphicsLayoutItem*  parent = 0);
void delete_QGraphicsLinearLayout(QGraphicsLinearLayout* obj) { delete obj; } 
   void insertItem(QGraphicsLinearLayout* theWrappedObject, int  index, QGraphicsLayoutItem*  item);
   void insertStretch(QGraphicsLinearLayout* theWrappedObject, int  index, int  stretch = 1);
   void removeAt(QGraphicsLinearLayout* theWrappedObject, int  index);
   void setGeometry(QGraphicsLinearLayout* theWrappedObject, const QRectF&  rect);
   void addStretch(QGraphicsLinearLayout* theWrappedObject, int  stretch = 1);
   qreal  spacing(QGraphicsLinearLayout* theWrappedObject) const;
   void dump(QGraphicsLinearLayout* theWrappedObject, int  indent = 0) const;
   void removeItem(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item);
   int  stretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
   Qt::Orientation  orientation(QGraphicsLinearLayout* theWrappedObject) const;
   void setStretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  stretch);
   void setItemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index, qreal  spacing);
   void invalidate(QGraphicsLinearLayout* theWrappedObject);
   Qt::Alignment  alignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
   void setOrientation(QGraphicsLinearLayout* theWrappedObject, Qt::Orientation  orientation);
   qreal  itemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index) const;
   int  count(QGraphicsLinearLayout* theWrappedObject) const;
   void addItem(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item);
   void setAlignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment);
   QSizeF  sizeHint(QGraphicsLinearLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   QGraphicsLayoutItem*  itemAt(QGraphicsLinearLayout* theWrappedObject, int  index) const;
   void setSpacing(QGraphicsLinearLayout* theWrappedObject, qreal  spacing);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSLINEARLAYOUT_H
