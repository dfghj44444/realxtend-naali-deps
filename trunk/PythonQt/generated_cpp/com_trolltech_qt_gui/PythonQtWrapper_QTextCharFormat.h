#ifndef PYTHONQTWRAPPER_QTEXTCHARFORMAT_H
#define PYTHONQTWRAPPER_QTEXTCHARFORMAT_H

#include <qtextformat.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qpen.h>
#include <qstringlist.h>
#include <qtextformat.h>
#include <qvector.h>

class PythonQtShell_QTextCharFormat : public QTextCharFormat
{
public:
    PythonQtShell_QTextCharFormat():QTextCharFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextCharFormat(const QTextFormat&  fmt):QTextCharFormat(fmt),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextCharFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(VerticalAlignment UnderlineStyle )
enum VerticalAlignment{
  AlignNormal = QTextCharFormat::AlignNormal,   AlignSuperScript = QTextCharFormat::AlignSuperScript,   AlignSubScript = QTextCharFormat::AlignSubScript,   AlignMiddle = QTextCharFormat::AlignMiddle,   AlignTop = QTextCharFormat::AlignTop,   AlignBottom = QTextCharFormat::AlignBottom};
enum UnderlineStyle{
  NoUnderline = QTextCharFormat::NoUnderline,   SingleUnderline = QTextCharFormat::SingleUnderline,   DashUnderline = QTextCharFormat::DashUnderline,   DotLine = QTextCharFormat::DotLine,   DashDotLine = QTextCharFormat::DashDotLine,   DashDotDotLine = QTextCharFormat::DashDotDotLine,   WaveUnderline = QTextCharFormat::WaveUnderline,   SpellCheckUnderline = QTextCharFormat::SpellCheckUnderline};
public slots:
QTextCharFormat* new_QTextCharFormat();
QTextCharFormat* new_QTextCharFormat(const QTextCharFormat& other) {
PythonQtShell_QTextCharFormat* a = new PythonQtShell_QTextCharFormat();
*((QTextCharFormat*)a) = other;
return a; }
void delete_QTextCharFormat(QTextCharFormat* obj) { delete obj; } 
   void setVerticalAlignment(QTextCharFormat* theWrappedObject, QTextCharFormat::VerticalAlignment  alignment);
   void setFontStyleHint(QTextCharFormat* theWrappedObject, QFont::StyleHint  hint, QFont::StyleStrategy  strategy = QFont::PreferDefault);
   void setFontWeight(QTextCharFormat* theWrappedObject, int  weight);
   void setAnchorHref(QTextCharFormat* theWrappedObject, const QString&  value);
   void setFontLetterSpacing(QTextCharFormat* theWrappedObject, qreal  spacing);
   QStringList  anchorNames(QTextCharFormat* theWrappedObject) const;
   bool  fontFixedPitch(QTextCharFormat* theWrappedObject) const;
   QString  toolTip(QTextCharFormat* theWrappedObject) const;
   bool  fontUnderline(QTextCharFormat* theWrappedObject) const;
   void setFontWordSpacing(QTextCharFormat* theWrappedObject, qreal  spacing);
   void setTableCellColumnSpan(QTextCharFormat* theWrappedObject, int  tableCellColumnSpan);
   void setUnderlineStyle(QTextCharFormat* theWrappedObject, QTextCharFormat::UnderlineStyle  style);
   QFont::StyleHint  fontStyleHint(QTextCharFormat* theWrappedObject) const;
   void setFontCapitalization(QTextCharFormat* theWrappedObject, QFont::Capitalization  capitalization);
   QTextCharFormat::VerticalAlignment  verticalAlignment(QTextCharFormat* theWrappedObject) const;
   QFont::Capitalization  fontCapitalization(QTextCharFormat* theWrappedObject) const;
   void setAnchor(QTextCharFormat* theWrappedObject, bool  anchor);
   int  tableCellColumnSpan(QTextCharFormat* theWrappedObject) const;
   int  fontWeight(QTextCharFormat* theWrappedObject) const;
   void setFontKerning(QTextCharFormat* theWrappedObject, bool  enable);
   void setAnchorNames(QTextCharFormat* theWrappedObject, const QStringList&  names);
   void setFontStyleStrategy(QTextCharFormat* theWrappedObject, QFont::StyleStrategy  strategy);
   void setTableCellRowSpan(QTextCharFormat* theWrappedObject, int  tableCellRowSpan);
   void setUnderlineColor(QTextCharFormat* theWrappedObject, const QColor&  color);
   QColor  underlineColor(QTextCharFormat* theWrappedObject) const;
   void setToolTip(QTextCharFormat* theWrappedObject, const QString&  tip);
   bool  isAnchor(QTextCharFormat* theWrappedObject) const;
   void setFontOverline(QTextCharFormat* theWrappedObject, bool  overline);
   bool  fontItalic(QTextCharFormat* theWrappedObject) const;
   QFont::StyleStrategy  fontStyleStrategy(QTextCharFormat* theWrappedObject) const;
   bool  isValid(QTextCharFormat* theWrappedObject) const;
   QTextCharFormat::UnderlineStyle  underlineStyle(QTextCharFormat* theWrappedObject) const;
   bool  fontOverline(QTextCharFormat* theWrappedObject) const;
   void setFontFamily(QTextCharFormat* theWrappedObject, const QString&  family);
   int  tableCellRowSpan(QTextCharFormat* theWrappedObject) const;
   void setFont(QTextCharFormat* theWrappedObject, const QFont&  font);
   void setFontFixedPitch(QTextCharFormat* theWrappedObject, bool  fixedPitch);
   qreal  fontPointSize(QTextCharFormat* theWrappedObject) const;
   void setFontPointSize(QTextCharFormat* theWrappedObject, qreal  size);
   void setTextOutline(QTextCharFormat* theWrappedObject, const QPen&  pen);
   qreal  fontLetterSpacing(QTextCharFormat* theWrappedObject) const;
   QFont  font(QTextCharFormat* theWrappedObject) const;
   void setFontUnderline(QTextCharFormat* theWrappedObject, bool  underline);
   QPen  textOutline(QTextCharFormat* theWrappedObject) const;
   QString  fontFamily(QTextCharFormat* theWrappedObject) const;
   void setFontStrikeOut(QTextCharFormat* theWrappedObject, bool  strikeOut);
   bool  fontKerning(QTextCharFormat* theWrappedObject) const;
   QString  anchorHref(QTextCharFormat* theWrappedObject) const;
   qreal  fontWordSpacing(QTextCharFormat* theWrappedObject) const;
   void setFontItalic(QTextCharFormat* theWrappedObject, bool  italic);
   bool  fontStrikeOut(QTextCharFormat* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTCHARFORMAT_H
