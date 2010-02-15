#ifndef PYTHONQTWRAPPER_QTEXTCURSOR_H
#define PYTHONQTWRAPPER_QTEXTCURSOR_H

#include <qtextcursor.h>
#include <QObject>

#include <PythonQt.h>

#include <QTextBlock>
#include <QTextDocumentFragment>
#include <QVariant>
#include <qimage.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextdocumentfragment.h>
#include <qtextformat.h>
#include <qtextlist.h>
#include <qtextobject.h>
#include <qtexttable.h>

class PythonQtWrapper_QTextCursor : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MoveMode MoveOperation SelectionType )
enum MoveMode{
  MoveAnchor = QTextCursor::MoveAnchor,   KeepAnchor = QTextCursor::KeepAnchor};
enum MoveOperation{
  NoMove = QTextCursor::NoMove,   Start = QTextCursor::Start,   Up = QTextCursor::Up,   StartOfLine = QTextCursor::StartOfLine,   StartOfBlock = QTextCursor::StartOfBlock,   StartOfWord = QTextCursor::StartOfWord,   PreviousBlock = QTextCursor::PreviousBlock,   PreviousCharacter = QTextCursor::PreviousCharacter,   PreviousWord = QTextCursor::PreviousWord,   Left = QTextCursor::Left,   WordLeft = QTextCursor::WordLeft,   End = QTextCursor::End,   Down = QTextCursor::Down,   EndOfLine = QTextCursor::EndOfLine,   EndOfWord = QTextCursor::EndOfWord,   EndOfBlock = QTextCursor::EndOfBlock,   NextBlock = QTextCursor::NextBlock,   NextCharacter = QTextCursor::NextCharacter,   NextWord = QTextCursor::NextWord,   Right = QTextCursor::Right,   WordRight = QTextCursor::WordRight,   NextCell = QTextCursor::NextCell,   PreviousCell = QTextCursor::PreviousCell,   NextRow = QTextCursor::NextRow,   PreviousRow = QTextCursor::PreviousRow};
enum SelectionType{
  WordUnderCursor = QTextCursor::WordUnderCursor,   LineUnderCursor = QTextCursor::LineUnderCursor,   BlockUnderCursor = QTextCursor::BlockUnderCursor,   Document = QTextCursor::Document};
public slots:
QTextCursor* new_QTextCursor();
QTextCursor* new_QTextCursor(QTextDocument*  document);
QTextCursor* new_QTextCursor(QTextFrame*  frame);
QTextCursor* new_QTextCursor(const QTextBlock&  block);
QTextCursor* new_QTextCursor(const QTextCursor&  cursor);
void delete_QTextCursor(QTextCursor* obj) { delete obj; } 
   void insertHtml(QTextCursor* theWrappedObject, const QString&  html);
   bool  hasComplexSelection(QTextCursor* theWrappedObject) const;
   void setCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format);
   void insertImage(QTextCursor* theWrappedObject, const QString&  name);
   void select(QTextCursor* theWrappedObject, QTextCursor::SelectionType  selection);
   void selectedTableCells(QTextCursor* theWrappedObject, int*  firstRow, int*  numRows, int*  firstColumn, int*  numColumns) const;
   bool  atBlockStart(QTextCursor* theWrappedObject) const;
   void setPosition(QTextCursor* theWrappedObject, int  pos, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   bool  atBlockEnd(QTextCursor* theWrappedObject) const;
   void insertText(QTextCursor* theWrappedObject, const QString&  text);
   void insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format, QTextFrameFormat::Position  alignment);
   QTextList*  insertList(QTextCursor* theWrappedObject, const QTextListFormat&  format);
   void setVisualNavigation(QTextCursor* theWrappedObject, bool  b);
   bool  atStart(QTextCursor* theWrappedObject) const;
   bool  movePosition(QTextCursor* theWrappedObject, QTextCursor::MoveOperation  op, QTextCursor::MoveMode  arg__2 = QTextCursor::MoveAnchor, int  n = 1);
   void setBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  format);
   QTextList*  createList(QTextCursor* theWrappedObject, QTextListFormat::Style  style);
   QTextList*  currentList(QTextCursor* theWrappedObject) const;
   QTextFrame*  insertFrame(QTextCursor* theWrappedObject, const QTextFrameFormat&  format);
   bool  hasSelection(QTextCursor* theWrappedObject) const;
   QTextList*  createList(QTextCursor* theWrappedObject, const QTextListFormat&  format);
   void setBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format);
   void joinPreviousEditBlock(QTextCursor* theWrappedObject);
   void removeSelectedText(QTextCursor* theWrappedObject);
   QTextBlock  block(QTextCursor* theWrappedObject) const;
   QString  selectedText(QTextCursor* theWrappedObject) const;
   bool  visualNavigation(QTextCursor* theWrappedObject) const;
   void clearSelection(QTextCursor* theWrappedObject);
   void insertFragment(QTextCursor* theWrappedObject, const QTextDocumentFragment&  fragment);
   void mergeCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier);
   void insertText(QTextCursor* theWrappedObject, const QString&  text, const QTextCharFormat&  format);
   bool  isCopyOf(QTextCursor* theWrappedObject, const QTextCursor&  other) const;
   void insertBlock(QTextCursor* theWrappedObject);
   QTextCharFormat  blockCharFormat(QTextCursor* theWrappedObject) const;
   void insertImage(QTextCursor* theWrappedObject, const QImage&  image, const QString&  name = QString());
   bool  atEnd(QTextCursor* theWrappedObject) const;
   QTextTable*  insertTable(QTextCursor* theWrappedObject, int  rows, int  cols, const QTextTableFormat&  format);
   int  selectionEnd(QTextCursor* theWrappedObject) const;
   QTextList*  insertList(QTextCursor* theWrappedObject, QTextListFormat::Style  style);
   QTextTable*  insertTable(QTextCursor* theWrappedObject, int  rows, int  cols);
   QTextDocumentFragment  selection(QTextCursor* theWrappedObject) const;
   void insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format);
   int  selectionStart(QTextCursor* theWrappedObject) const;
   int  anchor(QTextCursor* theWrappedObject) const;
   QTextTable*  currentTable(QTextCursor* theWrappedObject) const;
   void insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format, const QTextCharFormat&  charFormat);
   int  position(QTextCursor* theWrappedObject) const;
   void insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format);
   bool  operator_less(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   void deletePreviousChar(QTextCursor* theWrappedObject);
   void mergeBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  modifier);
   QTextFrame*  currentFrame(QTextCursor* theWrappedObject) const;
   void endEditBlock(QTextCursor* theWrappedObject);
   void beginEditBlock(QTextCursor* theWrappedObject);
   void deleteChar(QTextCursor* theWrappedObject);
   int  columnNumber(QTextCursor* theWrappedObject) const;
   QTextDocument*  document(QTextCursor* theWrappedObject) const;
   QTextBlockFormat  blockFormat(QTextCursor* theWrappedObject) const;
   int  blockNumber(QTextCursor* theWrappedObject) const;
   void mergeBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier);
   bool  operator_equal(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const;
   QTextCharFormat  charFormat(QTextCursor* theWrappedObject) const;
   bool  isNull(QTextCursor* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTCURSOR_H
