#ifndef PYTHONQTWRAPPER_QLAYOUT_H
#define PYTHONQTWRAPPER_QLAYOUT_H

#include <qlayout.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qmargins.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

class PythonQtShell_QLayout : public QLayout
{
public:
    PythonQtShell_QLayout():QLayout(),_wrapper(NULL) {};
    PythonQtShell_QLayout(QWidget*  parent):QLayout(parent),_wrapper(NULL) {};

virtual void addItem(QLayoutItem*  arg__1);
virtual void childEvent(QChildEvent*  e);
virtual int  count() const;
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayoutItem*  itemAt(int  index) const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QSize  sizeHint() const;
virtual QSpacerItem*  spacerItem();
virtual QLayoutItem*  takeAt(int  index);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual QWidget*  widget();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLayout : public QLayout
{ public:
inline void promoted_setGeometry(const QRect&  arg__1) { QLayout::setGeometry(arg__1); }
inline bool  promoted_isEmpty() const { return QLayout::isEmpty(); }
inline void promoted_childEvent(QChildEvent*  e) { QLayout::childEvent(e); }
inline void promoted_invalidate() { QLayout::invalidate(); }
inline QSize  promoted_maximumSize() const { return QLayout::maximumSize(); }
inline Qt::Orientations  promoted_expandingDirections() const { return QLayout::expandingDirections(); }
inline QRect  promoted_geometry() const { return QLayout::geometry(); }
inline QLayout*  promoted_layout() { return QLayout::layout(); }
inline int  promoted_indexOf(QWidget*  arg__1) const { return QLayout::indexOf(arg__1); }
inline QSize  promoted_minimumSize() const { return QLayout::minimumSize(); }
};

class PythonQtWrapper_QLayout : public QObject
{ Q_OBJECT
public:
public slots:
QLayout* new_QLayout();
QLayout* new_QLayout(QWidget*  parent);
void delete_QLayout(QLayout* obj) { delete obj; } 
   bool  setAlignment(QLayout* theWrappedObject, QWidget*  w, Qt::Alignment  alignment);
   void update(QLayout* theWrappedObject);
   void addWidget(QLayout* theWrappedObject, QWidget*  w);
   void getContentsMargins(QLayout* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const;
   void setGeometry(QLayout* theWrappedObject, const QRect&  arg__1);
   void setAlignment(QLayout* theWrappedObject, Qt::Alignment  alignment);
   bool  isEmpty(QLayout* theWrappedObject) const;
   int  totalHeightForWidth(QLayout* theWrappedObject, int  w) const;
   QSize  static_QLayout_closestAcceptableSize(const QWidget*  w, const QSize&  s);
   void setSpacing(QLayout* theWrappedObject, int  arg__1);
   void childEvent(QLayout* theWrappedObject, QChildEvent*  e);
   bool  isEnabled(QLayout* theWrappedObject) const;
   void removeItem(QLayout* theWrappedObject, QLayoutItem*  arg__1);
   QMargins  contentsMargins(QLayout* theWrappedObject) const;
   void setContentsMargins(QLayout* theWrappedObject, const QMargins&  margins);
   void invalidate(QLayout* theWrappedObject);
   QSize  maximumSize(QLayout* theWrappedObject) const;
   void removeWidget(QLayout* theWrappedObject, QWidget*  w);
   bool  activate(QLayout* theWrappedObject);
   Qt::Orientations  expandingDirections(QLayout* theWrappedObject) const;
   QRect  contentsRect(QLayout* theWrappedObject) const;
   void setEnabled(QLayout* theWrappedObject, bool  arg__1);
   QRect  geometry(QLayout* theWrappedObject) const;
   void setMargin(QLayout* theWrappedObject, int  arg__1);
   QSize  totalMinimumSize(QLayout* theWrappedObject) const;
   QWidget*  parentWidget(QLayout* theWrappedObject) const;
   void setSizeConstraint(QLayout* theWrappedObject, QLayout::SizeConstraint  arg__1);
   QLayout*  layout(QLayout* theWrappedObject);
   QSize  totalSizeHint(QLayout* theWrappedObject) const;
   int  indexOf(QLayout* theWrappedObject, QWidget*  arg__1) const;
   QSize  totalMaximumSize(QLayout* theWrappedObject) const;
   QWidget*  menuBar(QLayout* theWrappedObject) const;
   int  spacing(QLayout* theWrappedObject) const;
   QLayout::SizeConstraint  sizeConstraint(QLayout* theWrappedObject) const;
   QSize  minimumSize(QLayout* theWrappedObject) const;
   void setContentsMargins(QLayout* theWrappedObject, int  left, int  top, int  right, int  bottom);
   bool  setAlignment(QLayout* theWrappedObject, QLayout*  l, Qt::Alignment  alignment);
   void setMenuBar(QLayout* theWrappedObject, QWidget*  w);
};

#endif // PYTHONQTWRAPPER_QLAYOUT_H
