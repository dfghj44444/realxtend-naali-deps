#ifndef PYTHONQTWRAPPER_QTEXTBLOCKFORMAT_H
#define PYTHONQTWRAPPER_QTEXTBLOCKFORMAT_H

#include <qtextformat.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qlist.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvector.h>

class PythonQtShell_QTextBlockFormat : public QTextBlockFormat
{
public:
    PythonQtShell_QTextBlockFormat():QTextBlockFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextBlockFormat(const QTextFormat&  fmt):QTextBlockFormat(fmt),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextBlockFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextBlockFormat* new_QTextBlockFormat();
QTextBlockFormat* new_QTextBlockFormat(const QTextBlockFormat& other) {
PythonQtShell_QTextBlockFormat* a = new PythonQtShell_QTextBlockFormat();
*((QTextBlockFormat*)a) = other;
return a; }
void delete_QTextBlockFormat(QTextBlockFormat* obj) { delete obj; } 
   qreal  textIndent(QTextBlockFormat* theWrappedObject) const;
   Qt::Alignment  alignment(QTextBlockFormat* theWrappedObject) const;
   int  indent(QTextBlockFormat* theWrappedObject) const;
   void setNonBreakableLines(QTextBlockFormat* theWrappedObject, bool  b);
   bool  nonBreakableLines(QTextBlockFormat* theWrappedObject) const;
   void setPageBreakPolicy(QTextBlockFormat* theWrappedObject, QTextFormat::PageBreakFlags  flags);
   void setIndent(QTextBlockFormat* theWrappedObject, int  indent);
   void setLeftMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   qreal  bottomMargin(QTextBlockFormat* theWrappedObject) const;
   void setRightMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   void setTabPositions(QTextBlockFormat* theWrappedObject, const QList<QTextOption::Tab >&  tabs);
   QTextFormat::PageBreakFlags  pageBreakPolicy(QTextBlockFormat* theWrappedObject) const;
   QList<QTextOption::Tab >  tabPositions(QTextBlockFormat* theWrappedObject) const;
   qreal  leftMargin(QTextBlockFormat* theWrappedObject) const;
   qreal  topMargin(QTextBlockFormat* theWrappedObject) const;
   void setTopMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   bool  isValid(QTextBlockFormat* theWrappedObject) const;
   void setAlignment(QTextBlockFormat* theWrappedObject, Qt::Alignment  alignment);
   qreal  rightMargin(QTextBlockFormat* theWrappedObject) const;
   void setBottomMargin(QTextBlockFormat* theWrappedObject, qreal  margin);
   void setTextIndent(QTextBlockFormat* theWrappedObject, qreal  aindent);
};

#endif // PYTHONQTWRAPPER_QTEXTBLOCKFORMAT_H
