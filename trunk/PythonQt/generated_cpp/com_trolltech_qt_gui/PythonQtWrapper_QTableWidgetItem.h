#ifndef PYTHONQTWRAPPER_QTABLEWIDGETITEM_H
#define PYTHONQTWRAPPER_QTABLEWIDGETITEM_H

#include <qtablewidget.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qsize.h>
#include <qtablewidget.h>

class PythonQtShell_QTableWidgetItem : public QTableWidgetItem
{
public:
    PythonQtShell_QTableWidgetItem(const QIcon&  icon, const QString&  text, int  type = Type):QTableWidgetItem(icon, text, type),_wrapper(NULL) {};
    PythonQtShell_QTableWidgetItem(const QString&  text, int  type = Type):QTableWidgetItem(text, type),_wrapper(NULL) {};
    PythonQtShell_QTableWidgetItem(int  type = Type):QTableWidgetItem(type),_wrapper(NULL) {};

virtual QTableWidgetItem*  clone() const;
virtual QVariant  data(int  role) const;
virtual bool  operator_less(const QTableWidgetItem&  other) const;
virtual void read(QDataStream&  in);
virtual void setData(int  role, const QVariant&  value);
virtual void write(QDataStream&  out) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTableWidgetItem : public QTableWidgetItem
{ public:
inline QVariant  promoted_data(int  role) const { return QTableWidgetItem::data(role); }
inline void promoted_setData(int  role, const QVariant&  value) { QTableWidgetItem::setData(role, value); }
inline QTableWidgetItem*  promoted_clone() const { return QTableWidgetItem::clone(); }
};

class PythonQtWrapper_QTableWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QTableWidgetItem::Type,   UserType = QTableWidgetItem::UserType};
public slots:
QTableWidgetItem* new_QTableWidgetItem(const QIcon&  icon, const QString&  text, int  type = Type);
QTableWidgetItem* new_QTableWidgetItem(const QString&  text, int  type = Type);
QTableWidgetItem* new_QTableWidgetItem(int  type = Type);
void delete_QTableWidgetItem(QTableWidgetItem* obj) { delete obj; } 
   QFont  font(QTableWidgetItem* theWrappedObject) const;
   QIcon  icon(QTableWidgetItem* theWrappedObject) const;
   void setWhatsThis(QTableWidgetItem* theWrappedObject, const QString&  whatsThis);
   Qt::ItemFlags  flags(QTableWidgetItem* theWrappedObject) const;
   QVariant  data(QTableWidgetItem* theWrappedObject, int  role) const;
   QString  statusTip(QTableWidgetItem* theWrappedObject) const;
   QBrush  background(QTableWidgetItem* theWrappedObject) const;
   void setSelected(QTableWidgetItem* theWrappedObject, bool  select);
   Qt::CheckState  checkState(QTableWidgetItem* theWrappedObject) const;
   QBrush  foreground(QTableWidgetItem* theWrappedObject) const;
   QString  toolTip(QTableWidgetItem* theWrappedObject) const;
   void setCheckState(QTableWidgetItem* theWrappedObject, Qt::CheckState  state);
   QSize  sizeHint(QTableWidgetItem* theWrappedObject) const;
   void setData(QTableWidgetItem* theWrappedObject, int  role, const QVariant&  value);
   QTableWidgetItem*  clone(QTableWidgetItem* theWrappedObject) const;
   int  column(QTableWidgetItem* theWrappedObject) const;
   QString  text(QTableWidgetItem* theWrappedObject) const;
   void writeTo(QTableWidgetItem* theWrappedObject, QDataStream&  out);
   void setIcon(QTableWidgetItem* theWrappedObject, const QIcon&  icon);
   void setToolTip(QTableWidgetItem* theWrappedObject, const QString&  toolTip);
   void readFrom(QTableWidgetItem* theWrappedObject, QDataStream&  in);
   int  textAlignment(QTableWidgetItem* theWrappedObject) const;
   void setText(QTableWidgetItem* theWrappedObject, const QString&  text);
   void setTextAlignment(QTableWidgetItem* theWrappedObject, int  alignment);
   int  type(QTableWidgetItem* theWrappedObject) const;
   QString  whatsThis(QTableWidgetItem* theWrappedObject) const;
   void setStatusTip(QTableWidgetItem* theWrappedObject, const QString&  statusTip);
   bool  isSelected(QTableWidgetItem* theWrappedObject) const;
   void setFont(QTableWidgetItem* theWrappedObject, const QFont&  font);
   void setForeground(QTableWidgetItem* theWrappedObject, const QBrush&  brush);
   void setSizeHint(QTableWidgetItem* theWrappedObject, const QSize&  size);
   QTableWidget*  tableWidget(QTableWidgetItem* theWrappedObject) const;
   void setBackground(QTableWidgetItem* theWrappedObject, const QBrush&  brush);
   int  row(QTableWidgetItem* theWrappedObject) const;
   void setFlags(QTableWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
};

#endif // PYTHONQTWRAPPER_QTABLEWIDGETITEM_H
