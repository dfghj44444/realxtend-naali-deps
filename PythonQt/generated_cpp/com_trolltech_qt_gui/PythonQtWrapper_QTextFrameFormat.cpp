#include "PythonQtWrapper_QTextFrameFormat.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvector.h>

QTextFrameFormat* PythonQtWrapper_QTextFrameFormat::new_QTextFrameFormat()
{ 
return new PythonQtShell_QTextFrameFormat(); }

bool  PythonQtWrapper_QTextFrameFormat::isValid(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QTextFrameFormat::margin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->margin());
}

void PythonQtWrapper_QTextFrameFormat::setWidth(QTextFrameFormat* theWrappedObject, const QTextLength&  length)
{
  ( theWrappedObject->setWidth(length));
}

QTextFrameFormat::BorderStyle  PythonQtWrapper_QTextFrameFormat::borderStyle(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->borderStyle());
}

qreal  PythonQtWrapper_QTextFrameFormat::leftMargin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->leftMargin());
}

QTextLength  PythonQtWrapper_QTextFrameFormat::height(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

void PythonQtWrapper_QTextFrameFormat::setBorderStyle(QTextFrameFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style)
{
  ( theWrappedObject->setBorderStyle(style));
}

void PythonQtWrapper_QTextFrameFormat::setTopMargin(QTextFrameFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setTopMargin(margin));
}

void PythonQtWrapper_QTextFrameFormat::setBorder(QTextFrameFormat* theWrappedObject, qreal  border)
{
  ( theWrappedObject->setBorder(border));
}

void PythonQtWrapper_QTextFrameFormat::setPageBreakPolicy(QTextFrameFormat* theWrappedObject, QTextFormat::PageBreakFlags  flags)
{
  ( theWrappedObject->setPageBreakPolicy(flags));
}

void PythonQtWrapper_QTextFrameFormat::setBorderBrush(QTextFrameFormat* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBorderBrush(brush));
}

QBrush  PythonQtWrapper_QTextFrameFormat::borderBrush(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->borderBrush());
}

qreal  PythonQtWrapper_QTextFrameFormat::rightMargin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->rightMargin());
}

qreal  PythonQtWrapper_QTextFrameFormat::topMargin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->topMargin());
}

void PythonQtWrapper_QTextFrameFormat::setPadding(QTextFrameFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setPadding(padding));
}

void PythonQtWrapper_QTextFrameFormat::setMargin(QTextFrameFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setMargin(margin));
}

QTextLength  PythonQtWrapper_QTextFrameFormat::width(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

void PythonQtWrapper_QTextFrameFormat::setRightMargin(QTextFrameFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setRightMargin(margin));
}

QTextFormat::PageBreakFlags  PythonQtWrapper_QTextFrameFormat::pageBreakPolicy(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->pageBreakPolicy());
}

void PythonQtWrapper_QTextFrameFormat::setHeight(QTextFrameFormat* theWrappedObject, const QTextLength&  height)
{
  ( theWrappedObject->setHeight(height));
}

qreal  PythonQtWrapper_QTextFrameFormat::bottomMargin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->bottomMargin());
}

void PythonQtWrapper_QTextFrameFormat::setLeftMargin(QTextFrameFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setLeftMargin(margin));
}

void PythonQtWrapper_QTextFrameFormat::setBottomMargin(QTextFrameFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setBottomMargin(margin));
}

qreal  PythonQtWrapper_QTextFrameFormat::border(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->border());
}

void PythonQtWrapper_QTextFrameFormat::setHeight(QTextFrameFormat* theWrappedObject, qreal  height)
{
  ( theWrappedObject->setHeight(height));
}

qreal  PythonQtWrapper_QTextFrameFormat::padding(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->padding());
}

void PythonQtWrapper_QTextFrameFormat::setPosition(QTextFrameFormat* theWrappedObject, QTextFrameFormat::Position  f)
{
  ( theWrappedObject->setPosition(f));
}

QTextFrameFormat::Position  PythonQtWrapper_QTextFrameFormat::position(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

void PythonQtWrapper_QTextFrameFormat::setWidth(QTextFrameFormat* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setWidth(width));
}

