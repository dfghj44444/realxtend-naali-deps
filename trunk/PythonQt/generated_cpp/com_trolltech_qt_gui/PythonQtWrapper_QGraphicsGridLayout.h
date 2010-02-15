#ifndef PYTHONQTWRAPPER_QGRAPHICSGRIDLAYOUT_H
#define PYTHONQTWRAPPER_QGRAPHICSGRIDLAYOUT_H

#include <qgraphicsgridlayout.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qcoreevent.h>
#include <qgraphicsgridlayout.h>
#include <qgraphicslayoutitem.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtShell_QGraphicsGridLayout : public QGraphicsGridLayout
{
public:
    PythonQtShell_QGraphicsGridLayout(QGraphicsLayoutItem*  parent = 0):QGraphicsGridLayout(parent),_wrapper(NULL) {};

virtual int  count() const;
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void invalidate();
virtual QGraphicsLayoutItem*  itemAt(int  index) const;
virtual void removeAt(int  index);
virtual void updateGeometry();
virtual void widgetEvent(QEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsGridLayout : public QGraphicsGridLayout
{ public:
inline int  promoted_count() const { return QGraphicsGridLayout::count(); }
inline void promoted_removeAt(int  index) { QGraphicsGridLayout::removeAt(index); }
inline QGraphicsLayoutItem*  promoted_itemAt(int  index) const { return QGraphicsGridLayout::itemAt(index); }
inline void promoted_invalidate() { QGraphicsGridLayout::invalidate(); }
};

class PythonQtWrapper_QGraphicsGridLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsGridLayout* new_QGraphicsGridLayout(QGraphicsLayoutItem*  parent = 0);
void delete_QGraphicsGridLayout(QGraphicsGridLayout* obj) { delete obj; } 
   void setColumnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   qreal  columnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
   qreal  rowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void setRowSpacing(QGraphicsGridLayout* theWrappedObject, int  row, qreal  spacing);
   void setColumnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   qreal  columnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
   void setColumnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   qreal  rowSpacing(QGraphicsGridLayout* theWrappedObject, int  row) const;
   int  count(QGraphicsGridLayout* theWrappedObject) const;
   int  rowCount(QGraphicsGridLayout* theWrappedObject) const;
   void setVerticalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   void removeAt(QGraphicsGridLayout* theWrappedObject, int  index);
   Qt::Alignment  columnAlignment(QGraphicsGridLayout* theWrappedObject, int  column) const;
   qreal  columnSpacing(QGraphicsGridLayout* theWrappedObject, int  column) const;
   void setHorizontalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   Qt::Alignment  alignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
   QGraphicsLayoutItem*  itemAt(QGraphicsGridLayout* theWrappedObject, int  index) const;
   void addItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  alignment = 0);
   qreal  horizontalSpacing(QGraphicsGridLayout* theWrappedObject) const;
   qreal  rowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void setColumnSpacing(QGraphicsGridLayout* theWrappedObject, int  column, qreal  spacing);
   QSizeF  sizeHint(QGraphicsGridLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   Qt::Alignment  rowAlignment(QGraphicsGridLayout* theWrappedObject, int  row) const;
   QGraphicsLayoutItem*  itemAt(QGraphicsGridLayout* theWrappedObject, int  row, int  column) const;
   qreal  rowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void setColumnFixedWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   void setRowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   void setRowAlignment(QGraphicsGridLayout* theWrappedObject, int  row, Qt::Alignment  alignment);
   void setRowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row, int  stretch);
   int  columnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column) const;
   void setColumnAlignment(QGraphicsGridLayout* theWrappedObject, int  column, Qt::Alignment  alignment);
   void setRowFixedHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   qreal  columnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
   int  rowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void setGeometry(QGraphicsGridLayout* theWrappedObject, const QRectF&  rect);
   qreal  verticalSpacing(QGraphicsGridLayout* theWrappedObject) const;
   void addItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  row, int  column, Qt::Alignment  alignment = 0);
   void invalidate(QGraphicsGridLayout* theWrappedObject);
   void setColumnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column, int  stretch);
   void setSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   void setRowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   int  columnCount(QGraphicsGridLayout* theWrappedObject) const;
   void setAlignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment);
   void setRowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSGRIDLAYOUT_H
