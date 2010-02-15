#ifndef PYTHONQTWRAPPER_QTEXTFORMAT_H
#define PYTHONQTWRAPPER_QTEXTFORMAT_H

#include <qtextformat.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvector.h>

class PythonQtWrapper_QTextFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Property FormatType ObjectTypes PageBreakFlag )
Q_FLAGS(PageBreakFlags )
enum Property{
  ObjectIndex = QTextFormat::ObjectIndex,   CssFloat = QTextFormat::CssFloat,   LayoutDirection = QTextFormat::LayoutDirection,   OutlinePen = QTextFormat::OutlinePen,   BackgroundBrush = QTextFormat::BackgroundBrush,   ForegroundBrush = QTextFormat::ForegroundBrush,   BackgroundImageUrl = QTextFormat::BackgroundImageUrl,   BlockAlignment = QTextFormat::BlockAlignment,   BlockTopMargin = QTextFormat::BlockTopMargin,   BlockBottomMargin = QTextFormat::BlockBottomMargin,   BlockLeftMargin = QTextFormat::BlockLeftMargin,   BlockRightMargin = QTextFormat::BlockRightMargin,   TextIndent = QTextFormat::TextIndent,   TabPositions = QTextFormat::TabPositions,   BlockIndent = QTextFormat::BlockIndent,   BlockNonBreakableLines = QTextFormat::BlockNonBreakableLines,   BlockTrailingHorizontalRulerWidth = QTextFormat::BlockTrailingHorizontalRulerWidth,   FirstFontProperty = QTextFormat::FirstFontProperty,   FontCapitalization = QTextFormat::FontCapitalization,   FontLetterSpacing = QTextFormat::FontLetterSpacing,   FontWordSpacing = QTextFormat::FontWordSpacing,   FontStyleHint = QTextFormat::FontStyleHint,   FontStyleStrategy = QTextFormat::FontStyleStrategy,   FontKerning = QTextFormat::FontKerning,   FontFamily = QTextFormat::FontFamily,   FontPointSize = QTextFormat::FontPointSize,   FontSizeAdjustment = QTextFormat::FontSizeAdjustment,   FontSizeIncrement = QTextFormat::FontSizeIncrement,   FontWeight = QTextFormat::FontWeight,   FontItalic = QTextFormat::FontItalic,   FontUnderline = QTextFormat::FontUnderline,   FontOverline = QTextFormat::FontOverline,   FontStrikeOut = QTextFormat::FontStrikeOut,   FontFixedPitch = QTextFormat::FontFixedPitch,   FontPixelSize = QTextFormat::FontPixelSize,   LastFontProperty = QTextFormat::LastFontProperty,   TextUnderlineColor = QTextFormat::TextUnderlineColor,   TextVerticalAlignment = QTextFormat::TextVerticalAlignment,   TextOutline = QTextFormat::TextOutline,   TextUnderlineStyle = QTextFormat::TextUnderlineStyle,   TextToolTip = QTextFormat::TextToolTip,   IsAnchor = QTextFormat::IsAnchor,   AnchorHref = QTextFormat::AnchorHref,   AnchorName = QTextFormat::AnchorName,   ObjectType = QTextFormat::ObjectType,   ListStyle = QTextFormat::ListStyle,   ListIndent = QTextFormat::ListIndent,   FrameBorder = QTextFormat::FrameBorder,   FrameMargin = QTextFormat::FrameMargin,   FramePadding = QTextFormat::FramePadding,   FrameWidth = QTextFormat::FrameWidth,   FrameHeight = QTextFormat::FrameHeight,   FrameTopMargin = QTextFormat::FrameTopMargin,   FrameBottomMargin = QTextFormat::FrameBottomMargin,   FrameLeftMargin = QTextFormat::FrameLeftMargin,   FrameRightMargin = QTextFormat::FrameRightMargin,   FrameBorderBrush = QTextFormat::FrameBorderBrush,   FrameBorderStyle = QTextFormat::FrameBorderStyle,   TableColumns = QTextFormat::TableColumns,   TableColumnWidthConstraints = QTextFormat::TableColumnWidthConstraints,   TableCellSpacing = QTextFormat::TableCellSpacing,   TableCellPadding = QTextFormat::TableCellPadding,   TableHeaderRowCount = QTextFormat::TableHeaderRowCount,   TableCellRowSpan = QTextFormat::TableCellRowSpan,   TableCellColumnSpan = QTextFormat::TableCellColumnSpan,   TableCellTopPadding = QTextFormat::TableCellTopPadding,   TableCellBottomPadding = QTextFormat::TableCellBottomPadding,   TableCellLeftPadding = QTextFormat::TableCellLeftPadding,   TableCellRightPadding = QTextFormat::TableCellRightPadding,   ImageName = QTextFormat::ImageName,   ImageWidth = QTextFormat::ImageWidth,   ImageHeight = QTextFormat::ImageHeight,   FullWidthSelection = QTextFormat::FullWidthSelection,   PageBreakPolicy = QTextFormat::PageBreakPolicy,   UserProperty = QTextFormat::UserProperty};
enum FormatType{
  InvalidFormat = QTextFormat::InvalidFormat,   BlockFormat = QTextFormat::BlockFormat,   CharFormat = QTextFormat::CharFormat,   ListFormat = QTextFormat::ListFormat,   TableFormat = QTextFormat::TableFormat,   FrameFormat = QTextFormat::FrameFormat,   UserFormat = QTextFormat::UserFormat};
enum ObjectTypes{
  NoObject = QTextFormat::NoObject,   ImageObject = QTextFormat::ImageObject,   TableObject = QTextFormat::TableObject,   TableCellObject = QTextFormat::TableCellObject,   UserObject = QTextFormat::UserObject};
enum PageBreakFlag{
  PageBreak_Auto = QTextFormat::PageBreak_Auto,   PageBreak_AlwaysBefore = QTextFormat::PageBreak_AlwaysBefore,   PageBreak_AlwaysAfter = QTextFormat::PageBreak_AlwaysAfter};
Q_DECLARE_FLAGS(PageBreakFlags, PageBreakFlag)
public slots:
QTextFormat* new_QTextFormat();
QTextFormat* new_QTextFormat(const QTextFormat&  rhs);
QTextFormat* new_QTextFormat(int  type);
void delete_QTextFormat(QTextFormat* obj) { delete obj; } 
   QPen  penProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QMap<int , QVariant >  properties(QTextFormat* theWrappedObject) const;
   QBrush  background(QTextFormat* theWrappedObject) const;
   bool  boolProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   void merge(QTextFormat* theWrappedObject, const QTextFormat&  other);
   void setForeground(QTextFormat* theWrappedObject, const QBrush&  brush);
   bool  isListFormat(QTextFormat* theWrappedObject) const;
   QBrush  foreground(QTextFormat* theWrappedObject) const;
   int  intProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QVariant  property(QTextFormat* theWrappedObject, int  propertyId) const;
   void clearProperty(QTextFormat* theWrappedObject, int  propertyId);
   void setBackground(QTextFormat* theWrappedObject, const QBrush&  brush);
   Qt::LayoutDirection  layoutDirection(QTextFormat* theWrappedObject) const;
   QTextLength  lengthProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QVector<QTextLength >  lengthVectorProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QTextListFormat  toListFormat(QTextFormat* theWrappedObject) const;
   void setProperty(QTextFormat* theWrappedObject, int  propertyId, const QVector<QTextLength >&  lengths);
   bool  isCharFormat(QTextFormat* theWrappedObject) const;
   qreal  doubleProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QTextBlockFormat  toBlockFormat(QTextFormat* theWrappedObject) const;
   void setObjectIndex(QTextFormat* theWrappedObject, int  object);
   QTextTableFormat  toTableFormat(QTextFormat* theWrappedObject) const;
   bool  hasProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   int  type(QTextFormat* theWrappedObject) const;
   QBrush  brushProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QString  stringProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   void setLayoutDirection(QTextFormat* theWrappedObject, Qt::LayoutDirection  direction);
   QTextTableCellFormat  toTableCellFormat(QTextFormat* theWrappedObject) const;
   QTextFrameFormat  toFrameFormat(QTextFormat* theWrappedObject) const;
   bool  isFrameFormat(QTextFormat* theWrappedObject) const;
   QTextCharFormat  toCharFormat(QTextFormat* theWrappedObject) const;
   void readFrom(QTextFormat* theWrappedObject, QDataStream&  arg__1);
   bool  isValid(QTextFormat* theWrappedObject) const;
   int  objectIndex(QTextFormat* theWrappedObject) const;
   void setProperty(QTextFormat* theWrappedObject, int  propertyId, const QVariant&  value);
   int  objectType(QTextFormat* theWrappedObject) const;
   bool  operator_equal(QTextFormat* theWrappedObject, const QTextFormat&  rhs) const;
   void clearForeground(QTextFormat* theWrappedObject);
   bool  isImageFormat(QTextFormat* theWrappedObject) const;
   QColor  colorProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   int  propertyCount(QTextFormat* theWrappedObject) const;
   void clearBackground(QTextFormat* theWrappedObject);
   bool  isTableFormat(QTextFormat* theWrappedObject) const;
   void setObjectType(QTextFormat* theWrappedObject, int  type);
   bool  isTableCellFormat(QTextFormat* theWrappedObject) const;
   QTextImageFormat  toImageFormat(QTextFormat* theWrappedObject) const;
   void writeTo(QTextFormat* theWrappedObject, QDataStream&  arg__1);
   bool  isBlockFormat(QTextFormat* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTFORMAT_H
