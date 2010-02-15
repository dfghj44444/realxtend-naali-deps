#ifndef PYTHONQTWRAPPER_QFONT_H
#define PYTHONQTWRAPPER_QFONT_H

#include <qfont.h>
#include <QObject>

#include <PythonQt.h>

#include <QStringList>
#include <QVariant>
#include <qdatastream.h>
#include <qfont.h>
#include <qpaintdevice.h>
#include <qstringlist.h>

class PythonQtWrapper_QFont : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleStrategy SpacingType StyleHint Weight Capitalization Stretch Style )
enum StyleStrategy{
  PreferDefault = QFont::PreferDefault,   PreferBitmap = QFont::PreferBitmap,   PreferDevice = QFont::PreferDevice,   PreferOutline = QFont::PreferOutline,   ForceOutline = QFont::ForceOutline,   PreferMatch = QFont::PreferMatch,   PreferQuality = QFont::PreferQuality,   PreferAntialias = QFont::PreferAntialias,   NoAntialias = QFont::NoAntialias,   OpenGLCompatible = QFont::OpenGLCompatible,   NoFontMerging = QFont::NoFontMerging};
enum SpacingType{
  PercentageSpacing = QFont::PercentageSpacing,   AbsoluteSpacing = QFont::AbsoluteSpacing};
enum StyleHint{
  Helvetica = QFont::Helvetica,   SansSerif = QFont::SansSerif,   Times = QFont::Times,   Serif = QFont::Serif,   Courier = QFont::Courier,   TypeWriter = QFont::TypeWriter,   OldEnglish = QFont::OldEnglish,   Decorative = QFont::Decorative,   System = QFont::System,   AnyStyle = QFont::AnyStyle};
enum Weight{
  Light = QFont::Light,   Normal = QFont::Normal,   DemiBold = QFont::DemiBold,   Bold = QFont::Bold,   Black = QFont::Black};
enum Capitalization{
  MixedCase = QFont::MixedCase,   AllUppercase = QFont::AllUppercase,   AllLowercase = QFont::AllLowercase,   SmallCaps = QFont::SmallCaps,   Capitalize = QFont::Capitalize};
enum Stretch{
  UltraCondensed = QFont::UltraCondensed,   ExtraCondensed = QFont::ExtraCondensed,   Condensed = QFont::Condensed,   SemiCondensed = QFont::SemiCondensed,   Unstretched = QFont::Unstretched,   SemiExpanded = QFont::SemiExpanded,   Expanded = QFont::Expanded,   ExtraExpanded = QFont::ExtraExpanded,   UltraExpanded = QFont::UltraExpanded};
enum Style{
  StyleNormal = QFont::StyleNormal,   StyleItalic = QFont::StyleItalic,   StyleOblique = QFont::StyleOblique};
public slots:
QFont* new_QFont();
QFont* new_QFont(const QFont&  arg__1);
QFont* new_QFont(const QFont&  arg__1, QPaintDevice*  pd);
QFont* new_QFont(const QString&  family, int  pointSize = -1, int  weight = -1, bool  italic = false);
void delete_QFont(QFont* obj) { delete obj; } 
   qreal  pointSizeF(QFont* theWrappedObject) const;
   void setKerning(QFont* theWrappedObject, bool  arg__1);
   void setStyleHint(QFont* theWrappedObject, QFont::StyleHint  arg__1, QFont::StyleStrategy  arg__2 = QFont::PreferDefault);
   uint  resolve(QFont* theWrappedObject) const;
   void setPointSizeF(QFont* theWrappedObject, qreal  arg__1);
   QString  static_QFont_substitute(const QString&  arg__1);
   bool  kerning(QFont* theWrappedObject) const;
   QString  defaultFamily(QFont* theWrappedObject) const;
   void setRawMode(QFont* theWrappedObject, bool  arg__1);
   void static_QFont_initialize();
   bool  bold(QFont* theWrappedObject) const;
   void setWeight(QFont* theWrappedObject, int  arg__1);
   qreal  letterSpacing(QFont* theWrappedObject) const;
   void setPointSize(QFont* theWrappedObject, int  arg__1);
   QFont::Capitalization  capitalization(QFont* theWrappedObject) const;
   void setPixelSize(QFont* theWrappedObject, int  arg__1);
   bool  italic(QFont* theWrappedObject) const;
   int  pixelSize(QFont* theWrappedObject) const;
   void readFrom(QFont* theWrappedObject, QDataStream&  arg__1);
   void static_QFont_cacheStatistics();
   QStringList  static_QFont_substitutions();
   QString  lastResortFamily(QFont* theWrappedObject) const;
   bool  isCopyOf(QFont* theWrappedObject, const QFont&  arg__1) const;
   void setFixedPitch(QFont* theWrappedObject, bool  arg__1);
   QFont::SpacingType  letterSpacingType(QFont* theWrappedObject) const;
   void writeTo(QFont* theWrappedObject, QDataStream&  arg__1);
   QFont  resolve(QFont* theWrappedObject, const QFont&  arg__1) const;
   bool  operator_equal(QFont* theWrappedObject, const QFont&  arg__1) const;
   void setItalic(QFont* theWrappedObject, bool  b);
   void static_QFont_insertSubstitutions(const QString&  arg__1, const QStringList&  arg__2);
   void setFamily(QFont* theWrappedObject, const QString&  arg__1);
   QFont::StyleHint  styleHint(QFont* theWrappedObject) const;
   bool  exactMatch(QFont* theWrappedObject) const;
   void setUnderline(QFont* theWrappedObject, bool  arg__1);
   void setOverline(QFont* theWrappedObject, bool  arg__1);
   bool  fromString(QFont* theWrappedObject, const QString&  arg__1);
   void setStyleStrategy(QFont* theWrappedObject, QFont::StyleStrategy  s);
   void setStretch(QFont* theWrappedObject, int  arg__1);
   QString  lastResortFont(QFont* theWrappedObject) const;
   bool  fixedPitch(QFont* theWrappedObject) const;
   void setBold(QFont* theWrappedObject, bool  arg__1);
   void setStrikeOut(QFont* theWrappedObject, bool  arg__1);
   void static_QFont_insertSubstitution(const QString&  arg__1, const QString&  arg__2);
   void static_QFont_removeSubstitution(const QString&  arg__1);
   QString  key(QFont* theWrappedObject) const;
   bool  operator_less(QFont* theWrappedObject, const QFont&  arg__1) const;
   bool  rawMode(QFont* theWrappedObject) const;
   void setLetterSpacing(QFont* theWrappedObject, QFont::SpacingType  type, qreal  spacing);
   int  stretch(QFont* theWrappedObject) const;
   QFont::Style  style(QFont* theWrappedObject) const;
   int  pointSize(QFont* theWrappedObject) const;
   void resolve(QFont* theWrappedObject, uint  mask);
   qreal  wordSpacing(QFont* theWrappedObject) const;
   QString  rawName(QFont* theWrappedObject) const;
   bool  overline(QFont* theWrappedObject) const;
   void static_QFont_cleanup();
   void setWordSpacing(QFont* theWrappedObject, qreal  spacing);
   Qt::HANDLE  handle(QFont* theWrappedObject) const;
   void setCapitalization(QFont* theWrappedObject, QFont::Capitalization  arg__1);
   QStringList  static_QFont_substitutes(const QString&  arg__1);
   bool  underline(QFont* theWrappedObject) const;
   void setRawName(QFont* theWrappedObject, const QString&  arg__1);
   void setStyle(QFont* theWrappedObject, QFont::Style  style);
   QFont::StyleStrategy  styleStrategy(QFont* theWrappedObject) const;
   int  weight(QFont* theWrappedObject) const;
   bool  strikeOut(QFont* theWrappedObject) const;
   QString  toString(QFont* theWrappedObject) const;
   QString  family(QFont* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QFONT_H
