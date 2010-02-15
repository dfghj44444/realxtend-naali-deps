#ifndef PYTHONQTWRAPPER_QTEXTTABLE_H
#define PYTHONQTWRAPPER_QTEXTTABLE_H

#include <qtexttable.h>
#include <QObject>

#include <PythonQt.h>

#include <QTextCursor>
#include <QTextFrame>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qtexttable.h>

class PythonQtShell_QTextTable : public QTextTable
{
public:
    PythonQtShell_QTextTable(QTextDocument*  doc):QTextTable(doc),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextTable : public QObject
{ Q_OBJECT
public:
public slots:
QTextTable* new_QTextTable(QTextDocument*  doc);
void delete_QTextTable(QTextTable* obj) { delete obj; } 
   QTextCursor  rowEnd(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   int  columns(QTextTable* theWrappedObject) const;
   void mergeCells(QTextTable* theWrappedObject, const QTextCursor&  cursor);
   QTextTableFormat  format(QTextTable* theWrappedObject) const;
   QTextCursor  rowStart(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   QTextTableCell  cellAt(QTextTable* theWrappedObject, int  row, int  col) const;
   QTextTableCell  cellAt(QTextTable* theWrappedObject, int  position) const;
   QTextTableCell  cellAt(QTextTable* theWrappedObject, const QTextCursor&  c) const;
   void resize(QTextTable* theWrappedObject, int  rows, int  cols);
   void insertColumns(QTextTable* theWrappedObject, int  pos, int  num);
   void splitCell(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols);
   void appendColumns(QTextTable* theWrappedObject, int  count);
   void appendRows(QTextTable* theWrappedObject, int  count);
   int  rows(QTextTable* theWrappedObject) const;
   void setFormat(QTextTable* theWrappedObject, const QTextTableFormat&  format);
   void mergeCells(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols);
   void removeRows(QTextTable* theWrappedObject, int  pos, int  num);
   void insertRows(QTextTable* theWrappedObject, int  pos, int  num);
   void removeColumns(QTextTable* theWrappedObject, int  pos, int  num);
};

#endif // PYTHONQTWRAPPER_QTEXTTABLE_H
