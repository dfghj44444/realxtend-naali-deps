#ifndef PYTHONQTWRAPPER_QREGEXP_H
#define PYTHONQTWRAPPER_QREGEXP_H

#include <qregexp.h>
#include <QObject>

#include <PythonQt.h>

#include <QStringList>
#include <QVariant>
#include <qdatastream.h>
#include <qregexp.h>
#include <qstringlist.h>

class PythonQtWrapper_QRegExp : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PatternSyntax CaretMode )
enum PatternSyntax{
  RegExp = QRegExp::RegExp,   Wildcard = QRegExp::Wildcard,   FixedString = QRegExp::FixedString,   RegExp2 = QRegExp::RegExp2,   WildcardUnix = QRegExp::WildcardUnix,   W3CXmlSchema11 = QRegExp::W3CXmlSchema11};
enum CaretMode{
  CaretAtZero = QRegExp::CaretAtZero,   CaretAtOffset = QRegExp::CaretAtOffset,   CaretWontMatch = QRegExp::CaretWontMatch};
public slots:
QRegExp* new_QRegExp();
QRegExp* new_QRegExp(const QRegExp&  rx);
QRegExp* new_QRegExp(const QString&  pattern, Qt::CaseSensitivity  cs = Qt::CaseSensitive, QRegExp::PatternSyntax  syntax = QRegExp::RegExp);
void delete_QRegExp(QRegExp* obj) { delete obj; } 
   QStringList  capturedTexts(QRegExp* theWrappedObject) const;
   void setPatternSyntax(QRegExp* theWrappedObject, QRegExp::PatternSyntax  syntax);
   bool  isMinimal(QRegExp* theWrappedObject) const;
   QString  pattern(QRegExp* theWrappedObject) const;
   Qt::CaseSensitivity  caseSensitivity(QRegExp* theWrappedObject) const;
   int  pos(QRegExp* theWrappedObject, int  nth = 0) const;
   int  lastIndexIn(QRegExp* theWrappedObject, const QString&  str, int  offset = -1, QRegExp::CaretMode  caretMode = QRegExp::CaretAtZero) const;
   QString  errorString(QRegExp* theWrappedObject) const;
   int  indexIn(QRegExp* theWrappedObject, const QString&  str, int  offset = 0, QRegExp::CaretMode  caretMode = QRegExp::CaretAtZero) const;
   bool  isValid(QRegExp* theWrappedObject) const;
   void setMinimal(QRegExp* theWrappedObject, bool  minimal);
   bool  isEmpty(QRegExp* theWrappedObject) const;
   int  matchedLength(QRegExp* theWrappedObject) const;
   void writeTo(QRegExp* theWrappedObject, QDataStream&  out);
   QRegExp::PatternSyntax  patternSyntax(QRegExp* theWrappedObject) const;
   void readFrom(QRegExp* theWrappedObject, QDataStream&  in);
   void setPattern(QRegExp* theWrappedObject, const QString&  pattern);
   QString  static_QRegExp_escape(const QString&  str);
   bool  exactMatch(QRegExp* theWrappedObject, const QString&  str) const;
   int  captureCount(QRegExp* theWrappedObject) const;
   int  numCaptures(QRegExp* theWrappedObject) const;
   bool  operator_equal(QRegExp* theWrappedObject, const QRegExp&  rx) const;
   QString  cap(QRegExp* theWrappedObject, int  nth = 0) const;
   void setCaseSensitivity(QRegExp* theWrappedObject, Qt::CaseSensitivity  cs);
};

#endif // PYTHONQTWRAPPER_QREGEXP_H
