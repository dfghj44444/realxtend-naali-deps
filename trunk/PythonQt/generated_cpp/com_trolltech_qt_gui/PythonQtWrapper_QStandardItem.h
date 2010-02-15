#ifndef PYTHONQTWRAPPER_QSTANDARDITEM_H
#define PYTHONQTWRAPPER_QSTANDARDITEM_H

#include <qstandarditemmodel.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qlist.h>
#include <qsize.h>
#include <qstandarditemmodel.h>

class PythonQtShell_QStandardItem : public QStandardItem
{
public:
    PythonQtShell_QStandardItem():QStandardItem(),_wrapper(NULL) {};
    PythonQtShell_QStandardItem(const QIcon&  icon, const QString&  text):QStandardItem(icon, text),_wrapper(NULL) {};
    PythonQtShell_QStandardItem(const QStandardItem&  other):QStandardItem(other),_wrapper(NULL) {};
    PythonQtShell_QStandardItem(const QString&  text):QStandardItem(text),_wrapper(NULL) {};
    PythonQtShell_QStandardItem(int  rows, int  columns = 1):QStandardItem(rows, columns),_wrapper(NULL) {};

virtual QStandardItem*  clone() const;
virtual QVariant  data(int  role = Qt::UserRole + 1) const;
virtual bool  operator_less(const QStandardItem&  other) const;
virtual void read(QDataStream&  in);
virtual void setData(const QVariant&  value, int  role = Qt::UserRole + 1);
virtual int  type() const;
virtual void write(QDataStream&  out) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStandardItem : public QStandardItem
{ public:
inline int  promoted_type() const { return QStandardItem::type(); }
inline void promoted_setData(const QVariant&  value, int  role = Qt::UserRole + 1) { QStandardItem::setData(value, role); }
inline QVariant  promoted_data(int  role = Qt::UserRole + 1) const { return QStandardItem::data(role); }
inline QStandardItem*  promoted_clone() const { return QStandardItem::clone(); }
};

class PythonQtWrapper_QStandardItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QStandardItem::Type,   UserType = QStandardItem::UserType};
public slots:
QStandardItem* new_QStandardItem();
QStandardItem* new_QStandardItem(const QIcon&  icon, const QString&  text);
QStandardItem* new_QStandardItem(const QString&  text);
QStandardItem* new_QStandardItem(int  rows, int  columns = 1);
void delete_QStandardItem(QStandardItem* obj) { delete obj; } 
   void setAccessibleDescription(QStandardItem* theWrappedObject, const QString&  accessibleDescription);
   QString  statusTip(QStandardItem* theWrappedObject) const;
   int  type(QStandardItem* theWrappedObject) const;
   void setSelectable(QStandardItem* theWrappedObject, bool  selectable);
   void removeRows(QStandardItem* theWrappedObject, int  row, int  count);
   void setSizeHint(QStandardItem* theWrappedObject, const QSize&  sizeHint);
   QIcon  icon(QStandardItem* theWrappedObject) const;
   QSize  sizeHint(QStandardItem* theWrappedObject) const;
   void setData(QStandardItem* theWrappedObject, const QVariant&  value, int  role = Qt::UserRole + 1);
   QList<QStandardItem* >  takeRow(QStandardItem* theWrappedObject, int  row);
   void insertRows(QStandardItem* theWrappedObject, int  row, int  count);
   void removeColumn(QStandardItem* theWrappedObject, int  column);
   void appendColumn(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items);
   bool  isSelectable(QStandardItem* theWrappedObject) const;
   void insertRows(QStandardItem* theWrappedObject, int  row, const QList<QStandardItem* >&  items);
   void appendRows(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items);
   int  rowCount(QStandardItem* theWrappedObject) const;
   void setColumnCount(QStandardItem* theWrappedObject, int  columns);
   QString  accessibleDescription(QStandardItem* theWrappedObject) const;
   void setRowCount(QStandardItem* theWrappedObject, int  rows);
   Qt::Alignment  textAlignment(QStandardItem* theWrappedObject) const;
   QBrush  foreground(QStandardItem* theWrappedObject) const;
   Qt::CheckState  checkState(QStandardItem* theWrappedObject) const;
   Qt::ItemFlags  flags(QStandardItem* theWrappedObject) const;
   void removeRow(QStandardItem* theWrappedObject, int  row);
   int  columnCount(QStandardItem* theWrappedObject) const;
   void setAccessibleText(QStandardItem* theWrappedObject, const QString&  accessibleText);
   void setBackground(QStandardItem* theWrappedObject, const QBrush&  brush);
   void readFrom(QStandardItem* theWrappedObject, QDataStream&  in);
   void setChild(QStandardItem* theWrappedObject, int  row, QStandardItem*  item);
   bool  isEnabled(QStandardItem* theWrappedObject) const;
   void setStatusTip(QStandardItem* theWrappedObject, const QString&  statusTip);
   QStandardItem*  parent(QStandardItem* theWrappedObject) const;
   void appendRow(QStandardItem* theWrappedObject, QStandardItem*  item);
   QStandardItemModel*  model(QStandardItem* theWrappedObject) const;
   void setForeground(QStandardItem* theWrappedObject, const QBrush&  brush);
   void writeTo(QStandardItem* theWrappedObject, QDataStream&  out);
   void removeColumns(QStandardItem* theWrappedObject, int  column, int  count);
   void setIcon(QStandardItem* theWrappedObject, const QIcon&  icon);
   void setText(QStandardItem* theWrappedObject, const QString&  text);
   void setToolTip(QStandardItem* theWrappedObject, const QString&  toolTip);
   bool  isDropEnabled(QStandardItem* theWrappedObject) const;
   int  row(QStandardItem* theWrappedObject) const;
   void setDragEnabled(QStandardItem* theWrappedObject, bool  dragEnabled);
   QString  whatsThis(QStandardItem* theWrappedObject) const;
   int  column(QStandardItem* theWrappedObject) const;
   void setFont(QStandardItem* theWrappedObject, const QFont&  font);
   QModelIndex  index(QStandardItem* theWrappedObject) const;
   void setCheckable(QStandardItem* theWrappedObject, bool  checkable);
   void setEditable(QStandardItem* theWrappedObject, bool  editable);
   QString  text(QStandardItem* theWrappedObject) const;
   void insertColumns(QStandardItem* theWrappedObject, int  column, int  count);
   void setChild(QStandardItem* theWrappedObject, int  row, int  column, QStandardItem*  item);
   bool  isTristate(QStandardItem* theWrappedObject) const;
   void setCheckState(QStandardItem* theWrappedObject, Qt::CheckState  checkState);
   void insertRow(QStandardItem* theWrappedObject, int  row, QStandardItem*  item);
   QBrush  background(QStandardItem* theWrappedObject) const;
   bool  hasChildren(QStandardItem* theWrappedObject) const;
   QVariant  data(QStandardItem* theWrappedObject, int  role = Qt::UserRole + 1) const;
   void setTristate(QStandardItem* theWrappedObject, bool  tristate);
   QStandardItem*  child(QStandardItem* theWrappedObject, int  row, int  column = 0) const;
   bool  isDragEnabled(QStandardItem* theWrappedObject) const;
   QFont  font(QStandardItem* theWrappedObject) const;
   void appendRow(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items);
   void setTextAlignment(QStandardItem* theWrappedObject, Qt::Alignment  textAlignment);
   QString  accessibleText(QStandardItem* theWrappedObject) const;
   void insertRow(QStandardItem* theWrappedObject, int  row, const QList<QStandardItem* >&  items);
   void setDropEnabled(QStandardItem* theWrappedObject, bool  dropEnabled);
   QStandardItem*  takeChild(QStandardItem* theWrappedObject, int  row, int  column = 0);
   QList<QStandardItem* >  takeColumn(QStandardItem* theWrappedObject, int  column);
   QString  toolTip(QStandardItem* theWrappedObject) const;
   void setWhatsThis(QStandardItem* theWrappedObject, const QString&  whatsThis);
   void setEnabled(QStandardItem* theWrappedObject, bool  enabled);
   bool  isCheckable(QStandardItem* theWrappedObject) const;
   QStandardItem*  clone(QStandardItem* theWrappedObject) const;
   void sortChildren(QStandardItem* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   void insertColumn(QStandardItem* theWrappedObject, int  column, const QList<QStandardItem* >&  items);
   bool  isEditable(QStandardItem* theWrappedObject) const;
   void setFlags(QStandardItem* theWrappedObject, Qt::ItemFlags  flags);
};

#endif // PYTHONQTWRAPPER_QSTANDARDITEM_H
