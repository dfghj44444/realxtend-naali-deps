#ifndef PYTHONQTWRAPPER_QTEXTBLOCK_H
#define PYTHONQTWRAPPER_QTEXTBLOCK_H

#include <qtextobject.h>
#include <QObject>

#include <PythonQt.h>

#include <QTextBlock>
#include <QVariant>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextlist.h>
#include <qtextobject.h>

class PythonQtWrapper_QTextBlock : public QObject
{ Q_OBJECT
public:
public slots:
QTextBlock* new_QTextBlock();
QTextBlock* new_QTextBlock(const QTextBlock&  o);
void delete_QTextBlock(QTextBlock* obj) { delete obj; } 
   int  blockFormatIndex(QTextBlock* theWrappedObject) const;
   void setLineCount(QTextBlock* theWrappedObject, int  count);
   const QTextDocument*  document(QTextBlock* theWrappedObject) const;
   QTextBlock::iterator  end(QTextBlock* theWrappedObject) const;
   QString  text(QTextBlock* theWrappedObject) const;
   QTextCharFormat  charFormat(QTextBlock* theWrappedObject) const;
   QTextBlock::iterator  begin(QTextBlock* theWrappedObject) const;
   void setUserState(QTextBlock* theWrappedObject, int  state);
   int  blockNumber(QTextBlock* theWrappedObject) const;
   int  charFormatIndex(QTextBlock* theWrappedObject) const;
   bool  isVisible(QTextBlock* theWrappedObject) const;
   int  revision(QTextBlock* theWrappedObject) const;
   int  userState(QTextBlock* theWrappedObject) const;
   void clearLayout(QTextBlock* theWrappedObject);
   bool  operator_less(QTextBlock* theWrappedObject, const QTextBlock&  o) const;
   void setUserData(QTextBlock* theWrappedObject, QTextBlockUserData*  data);
   int  position(QTextBlock* theWrappedObject) const;
   int  firstLineNumber(QTextBlock* theWrappedObject) const;
   QTextLayout*  layout(QTextBlock* theWrappedObject) const;
   bool  isValid(QTextBlock* theWrappedObject) const;
   void setRevision(QTextBlock* theWrappedObject, int  rev);
   QTextBlock  next(QTextBlock* theWrappedObject) const;
   void setVisible(QTextBlock* theWrappedObject, bool  visible);
   QTextList*  textList(QTextBlock* theWrappedObject) const;
   bool  contains(QTextBlock* theWrappedObject, int  position) const;
   QTextBlockUserData*  userData(QTextBlock* theWrappedObject) const;
   QTextBlock  previous(QTextBlock* theWrappedObject) const;
   int  fragmentIndex(QTextBlock* theWrappedObject) const;
   int  lineCount(QTextBlock* theWrappedObject) const;
   int  length(QTextBlock* theWrappedObject) const;
   QTextBlockFormat  blockFormat(QTextBlock* theWrappedObject) const;
   bool  operator_equal(QTextBlock* theWrappedObject, const QTextBlock&  o) const;
};

#endif // PYTHONQTWRAPPER_QTEXTBLOCK_H
