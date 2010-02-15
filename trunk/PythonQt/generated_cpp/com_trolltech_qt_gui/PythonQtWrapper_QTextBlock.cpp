#include "PythonQtWrapper_QTextBlock.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QTextBlock>
#include <QVariant>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlayout.h>
#include <qtextlist.h>
#include <qtextobject.h>

QTextBlock* PythonQtWrapper_QTextBlock::new_QTextBlock()
{ 
return new QTextBlock(); }

QTextBlock* PythonQtWrapper_QTextBlock::new_QTextBlock(const QTextBlock&  o)
{ 
return new QTextBlock(o); }

int  PythonQtWrapper_QTextBlock::blockFormatIndex(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->blockFormatIndex());
}

void PythonQtWrapper_QTextBlock::setLineCount(QTextBlock* theWrappedObject, int  count)
{
  ( theWrappedObject->setLineCount(count));
}

const QTextDocument*  PythonQtWrapper_QTextBlock::document(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

QTextBlock::iterator  PythonQtWrapper_QTextBlock::end(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->end());
}

QString  PythonQtWrapper_QTextBlock::text(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

QTextCharFormat  PythonQtWrapper_QTextBlock::charFormat(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->charFormat());
}

QTextBlock::iterator  PythonQtWrapper_QTextBlock::begin(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->begin());
}

void PythonQtWrapper_QTextBlock::setUserState(QTextBlock* theWrappedObject, int  state)
{
  ( theWrappedObject->setUserState(state));
}

int  PythonQtWrapper_QTextBlock::blockNumber(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->blockNumber());
}

int  PythonQtWrapper_QTextBlock::charFormatIndex(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->charFormatIndex());
}

bool  PythonQtWrapper_QTextBlock::isVisible(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->isVisible());
}

int  PythonQtWrapper_QTextBlock::revision(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->revision());
}

int  PythonQtWrapper_QTextBlock::userState(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->userState());
}

void PythonQtWrapper_QTextBlock::clearLayout(QTextBlock* theWrappedObject)
{
  ( theWrappedObject->clearLayout());
}

bool  PythonQtWrapper_QTextBlock::operator_less(QTextBlock* theWrappedObject, const QTextBlock&  o) const
{
  return ( (*theWrappedObject)< o);
}

void PythonQtWrapper_QTextBlock::setUserData(QTextBlock* theWrappedObject, QTextBlockUserData*  data)
{
  ( theWrappedObject->setUserData(data));
}

int  PythonQtWrapper_QTextBlock::position(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

int  PythonQtWrapper_QTextBlock::firstLineNumber(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->firstLineNumber());
}

QTextLayout*  PythonQtWrapper_QTextBlock::layout(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->layout());
}

bool  PythonQtWrapper_QTextBlock::isValid(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QTextBlock::setRevision(QTextBlock* theWrappedObject, int  rev)
{
  ( theWrappedObject->setRevision(rev));
}

QTextBlock  PythonQtWrapper_QTextBlock::next(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->next());
}

void PythonQtWrapper_QTextBlock::setVisible(QTextBlock* theWrappedObject, bool  visible)
{
  ( theWrappedObject->setVisible(visible));
}

QTextList*  PythonQtWrapper_QTextBlock::textList(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->textList());
}

bool  PythonQtWrapper_QTextBlock::contains(QTextBlock* theWrappedObject, int  position) const
{
  return ( theWrappedObject->contains(position));
}

QTextBlockUserData*  PythonQtWrapper_QTextBlock::userData(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->userData());
}

QTextBlock  PythonQtWrapper_QTextBlock::previous(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->previous());
}

int  PythonQtWrapper_QTextBlock::fragmentIndex(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->fragmentIndex());
}

int  PythonQtWrapper_QTextBlock::lineCount(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->lineCount());
}

int  PythonQtWrapper_QTextBlock::length(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QTextBlockFormat  PythonQtWrapper_QTextBlock::blockFormat(QTextBlock* theWrappedObject) const
{
  return ( theWrappedObject->blockFormat());
}

bool  PythonQtWrapper_QTextBlock::operator_equal(QTextBlock* theWrappedObject, const QTextBlock&  o) const
{
  return ( (*theWrappedObject)== o);
}

