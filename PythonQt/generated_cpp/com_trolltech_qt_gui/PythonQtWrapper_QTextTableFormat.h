#ifndef PYTHONQTWRAPPER_QTEXTTABLEFORMAT_H
#define PYTHONQTWRAPPER_QTEXTTABLEFORMAT_H

#include <qtextformat.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvector.h>

class PythonQtShell_QTextTableFormat : public QTextTableFormat
{
public:
    PythonQtShell_QTextTableFormat():QTextTableFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextTableFormat(const QTextFormat&  fmt):QTextTableFormat(fmt),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextTableFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextTableFormat* new_QTextTableFormat();
QTextTableFormat* new_QTextTableFormat(const QTextTableFormat& other) {
PythonQtShell_QTextTableFormat* a = new PythonQtShell_QTextTableFormat();
*((QTextTableFormat*)a) = other;
return a; }
void delete_QTextTableFormat(QTextTableFormat* obj) { delete obj; } 
   qreal  cellSpacing(QTextTableFormat* theWrappedObject) const;
   void setHeaderRowCount(QTextTableFormat* theWrappedObject, int  count);
   int  headerRowCount(QTextTableFormat* theWrappedObject) const;
   void setAlignment(QTextTableFormat* theWrappedObject, Qt::Alignment  alignment);
   bool  isValid(QTextTableFormat* theWrappedObject) const;
   void setCellSpacing(QTextTableFormat* theWrappedObject, qreal  spacing);
   int  columns(QTextTableFormat* theWrappedObject) const;
   void setCellPadding(QTextTableFormat* theWrappedObject, qreal  padding);
   Qt::Alignment  alignment(QTextTableFormat* theWrappedObject) const;
   void setColumnWidthConstraints(QTextTableFormat* theWrappedObject, const QVector<QTextLength >&  constraints);
   void setColumns(QTextTableFormat* theWrappedObject, int  columns);
   void clearColumnWidthConstraints(QTextTableFormat* theWrappedObject);
   QVector<QTextLength >  columnWidthConstraints(QTextTableFormat* theWrappedObject) const;
   qreal  cellPadding(QTextTableFormat* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTTABLEFORMAT_H
