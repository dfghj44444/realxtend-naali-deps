#include "PythonQtWrapper_QTextCursor.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QTextBlock>
#include <QTextDocumentFragment>
#include <QVariant>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextdocumentfragment.h>
#include <qtextformat.h>
#include <qtextlist.h>
#include <qtextobject.h>
#include <qtexttable.h>

QTextCursor* PythonQtWrapper_QTextCursor::new_QTextCursor()
{ 
return new QTextCursor(); }

QTextCursor* PythonQtWrapper_QTextCursor::new_QTextCursor(QTextDocument*  document)
{ 
return new QTextCursor(document); }

QTextCursor* PythonQtWrapper_QTextCursor::new_QTextCursor(QTextFrame*  frame)
{ 
return new QTextCursor(frame); }

QTextCursor* PythonQtWrapper_QTextCursor::new_QTextCursor(const QTextBlock&  block)
{ 
return new QTextCursor(block); }

QTextCursor* PythonQtWrapper_QTextCursor::new_QTextCursor(const QTextCursor&  cursor)
{ 
return new QTextCursor(cursor); }

void PythonQtWrapper_QTextCursor::insertText(QTextCursor* theWrappedObject, const QString&  text, const QTextCharFormat&  format)
{
  ( theWrappedObject->insertText(text, format));
}

int  PythonQtWrapper_QTextCursor::position(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QTextList*  PythonQtWrapper_QTextCursor::createList(QTextCursor* theWrappedObject, QTextListFormat::Style  style)
{
  return ( theWrappedObject->createList(style));
}

int  PythonQtWrapper_QTextCursor::selectionStart(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->selectionStart());
}

bool  PythonQtWrapper_QTextCursor::isNull(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QTextTable*  PythonQtWrapper_QTextCursor::insertTable(QTextCursor* theWrappedObject, int  rows, int  cols, const QTextTableFormat&  format)
{
  return ( theWrappedObject->insertTable(rows, cols, format));
}

void PythonQtWrapper_QTextCursor::insertText(QTextCursor* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->insertText(text));
}

QTextCharFormat  PythonQtWrapper_QTextCursor::charFormat(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->charFormat());
}

QTextTable*  PythonQtWrapper_QTextCursor::currentTable(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->currentTable());
}

bool  PythonQtWrapper_QTextCursor::atEnd(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->atEnd());
}

void PythonQtWrapper_QTextCursor::insertHtml(QTextCursor* theWrappedObject, const QString&  html)
{
  ( theWrappedObject->insertHtml(html));
}

void PythonQtWrapper_QTextCursor::insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format, const QTextCharFormat&  charFormat)
{
  ( theWrappedObject->insertBlock(format, charFormat));
}

void PythonQtWrapper_QTextCursor::setCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format)
{
  ( theWrappedObject->setCharFormat(format));
}

bool  PythonQtWrapper_QTextCursor::visualNavigation(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->visualNavigation());
}

void PythonQtWrapper_QTextCursor::insertFragment(QTextCursor* theWrappedObject, const QTextDocumentFragment&  fragment)
{
  ( theWrappedObject->insertFragment(fragment));
}

void PythonQtWrapper_QTextCursor::setVisualNavigation(QTextCursor* theWrappedObject, bool  b)
{
  ( theWrappedObject->setVisualNavigation(b));
}

void PythonQtWrapper_QTextCursor::setPosition(QTextCursor* theWrappedObject, int  pos, QTextCursor::MoveMode  mode)
{
  ( theWrappedObject->setPosition(pos, mode));
}

QTextBlock  PythonQtWrapper_QTextCursor::block(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->block());
}

bool  PythonQtWrapper_QTextCursor::atBlockStart(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->atBlockStart());
}

int  PythonQtWrapper_QTextCursor::columnNumber(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->columnNumber());
}

void PythonQtWrapper_QTextCursor::mergeBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  modifier)
{
  ( theWrappedObject->mergeBlockFormat(modifier));
}

QTextBlockFormat  PythonQtWrapper_QTextCursor::blockFormat(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->blockFormat());
}

QTextTable*  PythonQtWrapper_QTextCursor::insertTable(QTextCursor* theWrappedObject, int  rows, int  cols)
{
  return ( theWrappedObject->insertTable(rows, cols));
}

int  PythonQtWrapper_QTextCursor::anchor(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->anchor());
}

bool  PythonQtWrapper_QTextCursor::movePosition(QTextCursor* theWrappedObject, QTextCursor::MoveOperation  op, QTextCursor::MoveMode  arg__2, int  n)
{
  return ( theWrappedObject->movePosition(op, arg__2, n));
}

int  PythonQtWrapper_QTextCursor::blockNumber(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->blockNumber());
}

void PythonQtWrapper_QTextCursor::insertBlock(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->insertBlock());
}

bool  PythonQtWrapper_QTextCursor::isCopyOf(QTextCursor* theWrappedObject, const QTextCursor&  other) const
{
  return ( theWrappedObject->isCopyOf(other));
}

void PythonQtWrapper_QTextCursor::insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format, QTextFrameFormat::Position  alignment)
{
  ( theWrappedObject->insertImage(format, alignment));
}

QString  PythonQtWrapper_QTextCursor::selectedText(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->selectedText());
}

bool  PythonQtWrapper_QTextCursor::hasSelection(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->hasSelection());
}

void PythonQtWrapper_QTextCursor::insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format)
{
  ( theWrappedObject->insertBlock(format));
}

void PythonQtWrapper_QTextCursor::insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format)
{
  ( theWrappedObject->insertImage(format));
}

bool  PythonQtWrapper_QTextCursor::operator_equal(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const
{
  return ( (*theWrappedObject)== rhs);
}

void PythonQtWrapper_QTextCursor::deleteChar(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->deleteChar());
}

void PythonQtWrapper_QTextCursor::insertImage(QTextCursor* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->insertImage(name));
}

void PythonQtWrapper_QTextCursor::endEditBlock(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->endEditBlock());
}

void PythonQtWrapper_QTextCursor::joinPreviousEditBlock(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->joinPreviousEditBlock());
}

void PythonQtWrapper_QTextCursor::select(QTextCursor* theWrappedObject, QTextCursor::SelectionType  selection)
{
  ( theWrappedObject->select(selection));
}

QTextCharFormat  PythonQtWrapper_QTextCursor::blockCharFormat(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->blockCharFormat());
}

bool  PythonQtWrapper_QTextCursor::atStart(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->atStart());
}

bool  PythonQtWrapper_QTextCursor::hasComplexSelection(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->hasComplexSelection());
}

void PythonQtWrapper_QTextCursor::selectedTableCells(QTextCursor* theWrappedObject, int*  firstRow, int*  numRows, int*  firstColumn, int*  numColumns) const
{
  ( theWrappedObject->selectedTableCells(firstRow, numRows, firstColumn, numColumns));
}

void PythonQtWrapper_QTextCursor::removeSelectedText(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->removeSelectedText());
}

QTextList*  PythonQtWrapper_QTextCursor::insertList(QTextCursor* theWrappedObject, const QTextListFormat&  format)
{
  return ( theWrappedObject->insertList(format));
}

QTextFrame*  PythonQtWrapper_QTextCursor::insertFrame(QTextCursor* theWrappedObject, const QTextFrameFormat&  format)
{
  return ( theWrappedObject->insertFrame(format));
}

void PythonQtWrapper_QTextCursor::mergeBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier)
{
  ( theWrappedObject->mergeBlockCharFormat(modifier));
}

bool  PythonQtWrapper_QTextCursor::atBlockEnd(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->atBlockEnd());
}

void PythonQtWrapper_QTextCursor::clearSelection(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->clearSelection());
}

void PythonQtWrapper_QTextCursor::setBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  format)
{
  ( theWrappedObject->setBlockFormat(format));
}

QTextList*  PythonQtWrapper_QTextCursor::currentList(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->currentList());
}

QTextList*  PythonQtWrapper_QTextCursor::createList(QTextCursor* theWrappedObject, const QTextListFormat&  format)
{
  return ( theWrappedObject->createList(format));
}

QTextFrame*  PythonQtWrapper_QTextCursor::currentFrame(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->currentFrame());
}

void PythonQtWrapper_QTextCursor::deletePreviousChar(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->deletePreviousChar());
}

void PythonQtWrapper_QTextCursor::beginEditBlock(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->beginEditBlock());
}

void PythonQtWrapper_QTextCursor::mergeCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier)
{
  ( theWrappedObject->mergeCharFormat(modifier));
}

int  PythonQtWrapper_QTextCursor::selectionEnd(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->selectionEnd());
}

QTextList*  PythonQtWrapper_QTextCursor::insertList(QTextCursor* theWrappedObject, QTextListFormat::Style  style)
{
  return ( theWrappedObject->insertList(style));
}

bool  PythonQtWrapper_QTextCursor::operator_less(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const
{
  return ( (*theWrappedObject)< rhs);
}

QTextDocumentFragment  PythonQtWrapper_QTextCursor::selection(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->selection());
}

void PythonQtWrapper_QTextCursor::setBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format)
{
  ( theWrappedObject->setBlockCharFormat(format));
}

