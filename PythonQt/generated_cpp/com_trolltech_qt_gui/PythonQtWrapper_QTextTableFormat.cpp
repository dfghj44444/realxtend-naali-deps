#include "PythonQtWrapper_QTextTableFormat.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvector.h>

QTextTableFormat* PythonQtWrapper_QTextTableFormat::new_QTextTableFormat()
{ 
return new PythonQtShell_QTextTableFormat(); }

QVector<QTextLength >  PythonQtWrapper_QTextTableFormat::columnWidthConstraints(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->columnWidthConstraints());
}

void PythonQtWrapper_QTextTableFormat::setCellPadding(QTextTableFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setCellPadding(padding));
}

int  PythonQtWrapper_QTextTableFormat::headerRowCount(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->headerRowCount());
}

bool  PythonQtWrapper_QTextTableFormat::isValid(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QTextTableFormat::setHeaderRowCount(QTextTableFormat* theWrappedObject, int  count)
{
  ( theWrappedObject->setHeaderRowCount(count));
}

void PythonQtWrapper_QTextTableFormat::setAlignment(QTextTableFormat* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(alignment));
}

void PythonQtWrapper_QTextTableFormat::setColumnWidthConstraints(QTextTableFormat* theWrappedObject, const QVector<QTextLength >&  constraints)
{
  ( theWrappedObject->setColumnWidthConstraints(constraints));
}

void PythonQtWrapper_QTextTableFormat::setCellSpacing(QTextTableFormat* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setCellSpacing(spacing));
}

Qt::Alignment  PythonQtWrapper_QTextTableFormat::alignment(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

void PythonQtWrapper_QTextTableFormat::setColumns(QTextTableFormat* theWrappedObject, int  columns)
{
  ( theWrappedObject->setColumns(columns));
}

qreal  PythonQtWrapper_QTextTableFormat::cellSpacing(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->cellSpacing());
}

void PythonQtWrapper_QTextTableFormat::clearColumnWidthConstraints(QTextTableFormat* theWrappedObject)
{
  ( theWrappedObject->clearColumnWidthConstraints());
}

qreal  PythonQtWrapper_QTextTableFormat::cellPadding(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->cellPadding());
}

int  PythonQtWrapper_QTextTableFormat::columns(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->columns());
}

