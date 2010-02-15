#include "PythonQtWrapper_QTextFormat.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvector.h>

QTextFormat* PythonQtWrapper_QTextFormat::new_QTextFormat()
{ 
return new QTextFormat(); }

QTextFormat* PythonQtWrapper_QTextFormat::new_QTextFormat(const QTextFormat&  rhs)
{ 
return new QTextFormat(rhs); }

QTextFormat* PythonQtWrapper_QTextFormat::new_QTextFormat(int  type)
{ 
return new QTextFormat(type); }

QPen  PythonQtWrapper_QTextFormat::penProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->penProperty(propertyId));
}

QMap<int , QVariant >  PythonQtWrapper_QTextFormat::properties(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->properties());
}

QBrush  PythonQtWrapper_QTextFormat::background(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->background());
}

bool  PythonQtWrapper_QTextFormat::boolProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->boolProperty(propertyId));
}

void PythonQtWrapper_QTextFormat::merge(QTextFormat* theWrappedObject, const QTextFormat&  other)
{
  ( theWrappedObject->merge(other));
}

void PythonQtWrapper_QTextFormat::setForeground(QTextFormat* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setForeground(brush));
}

bool  PythonQtWrapper_QTextFormat::isListFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->isListFormat());
}

QBrush  PythonQtWrapper_QTextFormat::foreground(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->foreground());
}

int  PythonQtWrapper_QTextFormat::intProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->intProperty(propertyId));
}

QVariant  PythonQtWrapper_QTextFormat::property(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->property(propertyId));
}

void PythonQtWrapper_QTextFormat::clearProperty(QTextFormat* theWrappedObject, int  propertyId)
{
  ( theWrappedObject->clearProperty(propertyId));
}

void PythonQtWrapper_QTextFormat::setBackground(QTextFormat* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBackground(brush));
}

Qt::LayoutDirection  PythonQtWrapper_QTextFormat::layoutDirection(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->layoutDirection());
}

QTextLength  PythonQtWrapper_QTextFormat::lengthProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->lengthProperty(propertyId));
}

QVector<QTextLength >  PythonQtWrapper_QTextFormat::lengthVectorProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->lengthVectorProperty(propertyId));
}

QTextListFormat  PythonQtWrapper_QTextFormat::toListFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->toListFormat());
}

void PythonQtWrapper_QTextFormat::setProperty(QTextFormat* theWrappedObject, int  propertyId, const QVector<QTextLength >&  lengths)
{
  ( theWrappedObject->setProperty(propertyId, lengths));
}

bool  PythonQtWrapper_QTextFormat::isCharFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->isCharFormat());
}

qreal  PythonQtWrapper_QTextFormat::doubleProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->doubleProperty(propertyId));
}

QTextBlockFormat  PythonQtWrapper_QTextFormat::toBlockFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->toBlockFormat());
}

void PythonQtWrapper_QTextFormat::setObjectIndex(QTextFormat* theWrappedObject, int  object)
{
  ( theWrappedObject->setObjectIndex(object));
}

QTextTableFormat  PythonQtWrapper_QTextFormat::toTableFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->toTableFormat());
}

bool  PythonQtWrapper_QTextFormat::hasProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->hasProperty(propertyId));
}

int  PythonQtWrapper_QTextFormat::type(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QBrush  PythonQtWrapper_QTextFormat::brushProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->brushProperty(propertyId));
}

QString  PythonQtWrapper_QTextFormat::stringProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->stringProperty(propertyId));
}

void PythonQtWrapper_QTextFormat::setLayoutDirection(QTextFormat* theWrappedObject, Qt::LayoutDirection  direction)
{
  ( theWrappedObject->setLayoutDirection(direction));
}

QTextTableCellFormat  PythonQtWrapper_QTextFormat::toTableCellFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->toTableCellFormat());
}

QTextFrameFormat  PythonQtWrapper_QTextFormat::toFrameFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->toFrameFormat());
}

bool  PythonQtWrapper_QTextFormat::isFrameFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->isFrameFormat());
}

QTextCharFormat  PythonQtWrapper_QTextFormat::toCharFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->toCharFormat());
}

void PythonQtWrapper_QTextFormat::readFrom(QTextFormat* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

bool  PythonQtWrapper_QTextFormat::isValid(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QTextFormat::objectIndex(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->objectIndex());
}

void PythonQtWrapper_QTextFormat::setProperty(QTextFormat* theWrappedObject, int  propertyId, const QVariant&  value)
{
  ( theWrappedObject->setProperty(propertyId, value));
}

int  PythonQtWrapper_QTextFormat::objectType(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->objectType());
}

bool  PythonQtWrapper_QTextFormat::operator_equal(QTextFormat* theWrappedObject, const QTextFormat&  rhs) const
{
  return ( (*theWrappedObject)== rhs);
}

void PythonQtWrapper_QTextFormat::clearForeground(QTextFormat* theWrappedObject)
{
  ( theWrappedObject->clearForeground());
}

bool  PythonQtWrapper_QTextFormat::isImageFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->isImageFormat());
}

QColor  PythonQtWrapper_QTextFormat::colorProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->colorProperty(propertyId));
}

int  PythonQtWrapper_QTextFormat::propertyCount(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->propertyCount());
}

void PythonQtWrapper_QTextFormat::clearBackground(QTextFormat* theWrappedObject)
{
  ( theWrappedObject->clearBackground());
}

bool  PythonQtWrapper_QTextFormat::isTableFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->isTableFormat());
}

void PythonQtWrapper_QTextFormat::setObjectType(QTextFormat* theWrappedObject, int  type)
{
  ( theWrappedObject->setObjectType(type));
}

bool  PythonQtWrapper_QTextFormat::isTableCellFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->isTableCellFormat());
}

QTextImageFormat  PythonQtWrapper_QTextFormat::toImageFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->toImageFormat());
}

void PythonQtWrapper_QTextFormat::writeTo(QTextFormat* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QTextFormat::isBlockFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->isBlockFormat());
}

