#ifndef PYTHONQTWRAPPER_QGRIDLAYOUT_H
#define PYTHONQTWRAPPER_QGRIDLAYOUT_H

#include <qgridlayout.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qgridlayout.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qmargins.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

class PythonQtShell_QGridLayout : public QGridLayout
{
public:
    PythonQtShell_QGridLayout():QGridLayout(),_wrapper(NULL) {};
    PythonQtShell_QGridLayout(QWidget*  parent):QGridLayout(parent),_wrapper(NULL) {};

virtual void addItem(QLayoutItem*  arg__1);
virtual void childEvent(QChildEvent*  e);
virtual int  count() const;
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayoutItem*  itemAt(int  index) const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QLayoutItem*  takeAt(int  index);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGridLayout : public QGridLayout
{ public:
inline QSize  promoted_maximumSize() const { return QGridLayout::maximumSize(); }
inline void promoted_addItem(QLayoutItem*  arg__1) { QGridLayout::addItem(arg__1); }
inline Qt::Orientations  promoted_expandingDirections() const { return QGridLayout::expandingDirections(); }
inline QLayoutItem*  promoted_takeAt(int  index) { return QGridLayout::takeAt(index); }
inline QLayoutItem*  promoted_itemAt(int  index) const { return QGridLayout::itemAt(index); }
inline int  promoted_count() const { return QGridLayout::count(); }
inline QSize  promoted_minimumSize() const { return QGridLayout::minimumSize(); }
inline void promoted_setGeometry(const QRect&  arg__1) { QGridLayout::setGeometry(arg__1); }
inline void promoted_invalidate() { QGridLayout::invalidate(); }
};

class PythonQtWrapper_QGridLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGridLayout* new_QGridLayout();
QGridLayout* new_QGridLayout(QWidget*  parent);
void delete_QGridLayout(QGridLayout* obj) { delete obj; } 
   void setVerticalSpacing(QGridLayout* theWrappedObject, int  spacing);
   int  horizontalSpacing(QGridLayout* theWrappedObject) const;
   void setHorizontalSpacing(QGridLayout* theWrappedObject, int  spacing);
   QSize  maximumSize(QGridLayout* theWrappedObject) const;
   void addItem(QGridLayout* theWrappedObject, QLayoutItem*  arg__1);
   void addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = 0);
   Qt::Orientations  expandingDirections(QGridLayout* theWrappedObject) const;
   QLayoutItem*  takeAt(QGridLayout* theWrappedObject, int  index);
   QRect  cellRect(QGridLayout* theWrappedObject, int  row, int  column) const;
   QLayoutItem*  itemAt(QGridLayout* theWrappedObject, int  index) const;
   int  minimumHeightForWidth(QGridLayout* theWrappedObject, int  arg__1) const;
   int  columnMinimumWidth(QGridLayout* theWrappedObject, int  column) const;
   int  count(QGridLayout* theWrappedObject) const;
   int  verticalSpacing(QGridLayout* theWrappedObject) const;
   void addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = 0);
   void addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, Qt::Alignment  arg__4 = 0);
   Qt::Corner  originCorner(QGridLayout* theWrappedObject) const;
   int  rowMinimumHeight(QGridLayout* theWrappedObject, int  row) const;
   void setRowStretch(QGridLayout* theWrappedObject, int  row, int  stretch);
   void getItemPosition(QGridLayout* theWrappedObject, int  idx, int*  row, int*  column, int*  rowSpan, int*  columnSpan);
   void setSpacing(QGridLayout* theWrappedObject, int  spacing);
   void setDefaultPositioning(QGridLayout* theWrappedObject, int  n, Qt::Orientation  orient);
   void setOriginCorner(QGridLayout* theWrappedObject, Qt::Corner  arg__1);
   int  rowStretch(QGridLayout* theWrappedObject, int  row) const;
   QSize  sizeHint(QGridLayout* theWrappedObject) const;
   void addItem(QGridLayout* theWrappedObject, QLayoutItem*  item, int  row, int  column, int  rowSpan = 1, int  columnSpan = 1, Qt::Alignment  arg__6 = 0);
   int  columnCount(QGridLayout* theWrappedObject) const;
   void addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, Qt::Alignment  arg__4 = 0);
   QSize  minimumSize(QGridLayout* theWrappedObject) const;
   int  rowCount(QGridLayout* theWrappedObject) const;
   bool  hasHeightForWidth(QGridLayout* theWrappedObject) const;
   void setColumnMinimumWidth(QGridLayout* theWrappedObject, int  column, int  minSize);
   void setGeometry(QGridLayout* theWrappedObject, const QRect&  arg__1);
   int  columnStretch(QGridLayout* theWrappedObject, int  column) const;
   void invalidate(QGridLayout* theWrappedObject);
   int  spacing(QGridLayout* theWrappedObject) const;
   QLayoutItem*  itemAtPosition(QGridLayout* theWrappedObject, int  row, int  column) const;
   int  heightForWidth(QGridLayout* theWrappedObject, int  arg__1) const;
   void setColumnStretch(QGridLayout* theWrappedObject, int  column, int  stretch);
   void setRowMinimumHeight(QGridLayout* theWrappedObject, int  row, int  minSize);
};

#endif // PYTHONQTWRAPPER_QGRIDLAYOUT_H
