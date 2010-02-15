#ifndef PYTHONQTWRAPPER_QTREEWIDGETITEM_H
#define PYTHONQTWRAPPER_QTREEWIDGETITEM_H

#include <qtreewidget.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qlist.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qtreewidget.h>

class PythonQtShell_QTreeWidgetItem : public QTreeWidgetItem
{
public:
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  view, QTreeWidgetItem*  after, int  type = Type):QTreeWidgetItem(view, after, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  view, const QStringList&  strings, int  type = Type):QTreeWidgetItem(view, strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  view, int  type = Type):QTreeWidgetItem(view, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, QTreeWidgetItem*  after, int  type = Type):QTreeWidgetItem(parent, after, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, const QStringList&  strings, int  type = Type):QTreeWidgetItem(parent, strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, int  type = Type):QTreeWidgetItem(parent, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(const QStringList&  strings, int  type = Type):QTreeWidgetItem(strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(int  type = Type):QTreeWidgetItem(type),_wrapper(NULL) {};

virtual QTreeWidgetItem*  clone() const;
virtual QVariant  data(int  column, int  role) const;
virtual bool  operator_less(const QTreeWidgetItem&  other) const;
virtual void read(QDataStream&  in);
virtual void setData(int  column, int  role, const QVariant&  value);
virtual void write(QDataStream&  out) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTreeWidgetItem : public QTreeWidgetItem
{ public:
inline QVariant  promoted_data(int  column, int  role) const { return QTreeWidgetItem::data(column, role); }
inline void promoted_setData(int  column, int  role, const QVariant&  value) { QTreeWidgetItem::setData(column, role, value); }
inline QTreeWidgetItem*  promoted_clone() const { return QTreeWidgetItem::clone(); }
};

class PythonQtWrapper_QTreeWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType ChildIndicatorPolicy )
enum ItemType{
  Type = QTreeWidgetItem::Type,   UserType = QTreeWidgetItem::UserType};
enum ChildIndicatorPolicy{
  ShowIndicator = QTreeWidgetItem::ShowIndicator,   DontShowIndicator = QTreeWidgetItem::DontShowIndicator,   DontShowIndicatorWhenChildless = QTreeWidgetItem::DontShowIndicatorWhenChildless};
public slots:
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidget*  view, QTreeWidgetItem*  after, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidget*  view, const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidget*  view, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidgetItem*  parent, QTreeWidgetItem*  after, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidgetItem*  parent, const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(QTreeWidgetItem*  parent, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(int  type = Type);
void delete_QTreeWidgetItem(QTreeWidgetItem* obj) { delete obj; } 
bool hasOwner(QTreeWidgetItem* theWrappedObject) { return theWrappedObject->treeWidget()!=NULL || theWrappedObject->parent()!=NULL; }
   QBrush  foreground(QTreeWidgetItem* theWrappedObject, int  column) const;
   bool  isSelected(QTreeWidgetItem* theWrappedObject) const;
   void setWhatsThis(QTreeWidgetItem* theWrappedObject, int  column, const QString&  whatsThis);
   void removeChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child);
   void setSizeHint(QTreeWidgetItem* theWrappedObject, int  column, const QSize&  size);
   void writeTo(QTreeWidgetItem* theWrappedObject, QDataStream&  out);
   void setChildIndicatorPolicy(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem::ChildIndicatorPolicy  policy);
   QTreeWidgetItem::ChildIndicatorPolicy  childIndicatorPolicy(QTreeWidgetItem* theWrappedObject) const;
   QString  statusTip(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setTextAlignment(QTreeWidgetItem* theWrappedObject, int  column, int  alignment);
   void readFrom(QTreeWidgetItem* theWrappedObject, QDataStream&  in);
   QString  whatsThis(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setHidden(QTreeWidgetItem* theWrappedObject, bool  hide);
   void setStatusTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  statusTip);
   QTreeWidget*  treeWidget(QTreeWidgetItem* theWrappedObject) const;
   QIcon  icon(QTreeWidgetItem* theWrappedObject, int  column) const;
   QVariant  data(QTreeWidgetItem* theWrappedObject, int  column, int  role) const;
   bool  isFirstColumnSpanned(QTreeWidgetItem* theWrappedObject) const;
   void setCheckState(QTreeWidgetItem* theWrappedObject, int  column, Qt::CheckState  state);
   void setBackground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   QString  text(QTreeWidgetItem* theWrappedObject, int  column) const;
   void insertChild(QTreeWidgetItem* theWrappedObject, int  index, QTreeWidgetItem*  child);
   QList<QTreeWidgetItem* >  takeChildren(QTreeWidgetItem* theWrappedObject);
   bool  isHidden(QTreeWidgetItem* theWrappedObject) const;
   QTreeWidgetItem*  parent(QTreeWidgetItem* theWrappedObject) const;
   void setDisabled(QTreeWidgetItem* theWrappedObject, bool  disabled);
   void setFlags(QTreeWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   int  columnCount(QTreeWidgetItem* theWrappedObject) const;
   void setExpanded(QTreeWidgetItem* theWrappedObject, bool  expand);
   void setData(QTreeWidgetItem* theWrappedObject, int  column, int  role, const QVariant&  value);
   void setForeground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   int  childCount(QTreeWidgetItem* theWrappedObject) const;
   QTreeWidgetItem*  clone(QTreeWidgetItem* theWrappedObject) const;
   Qt::CheckState  checkState(QTreeWidgetItem* theWrappedObject, int  column) const;
   void insertChildren(QTreeWidgetItem* theWrappedObject, int  index, const QList<QTreeWidgetItem* >&  children);
   void setToolTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  toolTip);
   QString  toolTip(QTreeWidgetItem* theWrappedObject, int  column) const;
   bool  isDisabled(QTreeWidgetItem* theWrappedObject) const;
   void addChildren(QTreeWidgetItem* theWrappedObject, const QList<QTreeWidgetItem* >&  children);
   QTreeWidgetItem*  takeChild(QTreeWidgetItem* theWrappedObject, int  index);
   QTreeWidgetItem*  child(QTreeWidgetItem* theWrappedObject, int  index) const;
   bool  isExpanded(QTreeWidgetItem* theWrappedObject) const;
   QBrush  background(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setIcon(QTreeWidgetItem* theWrappedObject, int  column, const QIcon&  icon);
   QSize  sizeHint(QTreeWidgetItem* theWrappedObject, int  column) const;
   int  indexOfChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child) const;
   void setFirstColumnSpanned(QTreeWidgetItem* theWrappedObject, bool  span);
   void setSelected(QTreeWidgetItem* theWrappedObject, bool  select);
   void sortChildren(QTreeWidgetItem* theWrappedObject, int  column, Qt::SortOrder  order);
   void setFont(QTreeWidgetItem* theWrappedObject, int  column, const QFont&  font);
   QFont  font(QTreeWidgetItem* theWrappedObject, int  column) const;
   void setText(QTreeWidgetItem* theWrappedObject, int  column, const QString&  text);
   void addChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child);
   Qt::ItemFlags  flags(QTreeWidgetItem* theWrappedObject) const;
   int  type(QTreeWidgetItem* theWrappedObject) const;
   int  textAlignment(QTreeWidgetItem* theWrappedObject, int  column) const;
};

#endif // PYTHONQTWRAPPER_QTREEWIDGETITEM_H
