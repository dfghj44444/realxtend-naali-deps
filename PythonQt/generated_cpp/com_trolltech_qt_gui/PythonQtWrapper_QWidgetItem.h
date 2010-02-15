#ifndef PYTHONQTWRAPPER_QWIDGETITEM_H
#define PYTHONQTWRAPPER_QWIDGETITEM_H

#include <qlayoutitem.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

class PythonQtShell_QWidgetItem : public QWidgetItem
{
public:
    PythonQtShell_QWidgetItem(QWidget*  w):QWidgetItem(w),_wrapper(NULL) {};

virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QSize  sizeHint() const;
virtual QSpacerItem*  spacerItem();
virtual QWidget*  widget();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidgetItem : public QWidgetItem
{ public:
inline bool  promoted_hasHeightForWidth() const { return QWidgetItem::hasHeightForWidth(); }
inline void promoted_setGeometry(const QRect&  arg__1) { QWidgetItem::setGeometry(arg__1); }
inline QSize  promoted_minimumSize() const { return QWidgetItem::minimumSize(); }
inline QSize  promoted_maximumSize() const { return QWidgetItem::maximumSize(); }
inline Qt::Orientations  promoted_expandingDirections() const { return QWidgetItem::expandingDirections(); }
inline bool  promoted_isEmpty() const { return QWidgetItem::isEmpty(); }
inline QRect  promoted_geometry() const { return QWidgetItem::geometry(); }
inline int  promoted_heightForWidth(int  arg__1) const { return QWidgetItem::heightForWidth(arg__1); }
inline QWidget*  promoted_widget() { return QWidgetItem::widget(); }
inline QSize  promoted_sizeHint() const { return QWidgetItem::sizeHint(); }
};

class PythonQtWrapper_QWidgetItem : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetItem* new_QWidgetItem(QWidget*  w);
void delete_QWidgetItem(QWidgetItem* obj) { delete obj; } 
   bool  hasHeightForWidth(QWidgetItem* theWrappedObject) const;
   void setGeometry(QWidgetItem* theWrappedObject, const QRect&  arg__1);
   QSize  minimumSize(QWidgetItem* theWrappedObject) const;
   QSize  maximumSize(QWidgetItem* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QWidgetItem* theWrappedObject) const;
   bool  isEmpty(QWidgetItem* theWrappedObject) const;
   QRect  geometry(QWidgetItem* theWrappedObject) const;
   int  heightForWidth(QWidgetItem* theWrappedObject, int  arg__1) const;
   QWidget*  widget(QWidgetItem* theWrappedObject);
   QSize  sizeHint(QWidgetItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QWIDGETITEM_H
