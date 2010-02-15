#ifndef PYTHONQTWRAPPER_QTEXTBOUNDARYFINDER_H
#define PYTHONQTWRAPPER_QTEXTBOUNDARYFINDER_H

#include <qtextboundaryfinder.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qtextboundaryfinder.h>

class PythonQtWrapper_QTextBoundaryFinder : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BoundaryReason BoundaryType )
Q_FLAGS(BoundaryReasons )
enum BoundaryReason{
  NotAtBoundary = QTextBoundaryFinder::NotAtBoundary,   StartWord = QTextBoundaryFinder::StartWord,   EndWord = QTextBoundaryFinder::EndWord};
enum BoundaryType{
  Grapheme = QTextBoundaryFinder::Grapheme,   Word = QTextBoundaryFinder::Word,   Line = QTextBoundaryFinder::Line,   Sentence = QTextBoundaryFinder::Sentence};
Q_DECLARE_FLAGS(BoundaryReasons, BoundaryReason)
public slots:
QTextBoundaryFinder* new_QTextBoundaryFinder();
QTextBoundaryFinder* new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, const QString&  string);
QTextBoundaryFinder* new_QTextBoundaryFinder(const QTextBoundaryFinder&  other);
void delete_QTextBoundaryFinder(QTextBoundaryFinder* obj) { delete obj; } 
   void toEnd(QTextBoundaryFinder* theWrappedObject);
   bool  isAtBoundary(QTextBoundaryFinder* theWrappedObject) const;
   QTextBoundaryFinder::BoundaryType  type(QTextBoundaryFinder* theWrappedObject) const;
   int  position(QTextBoundaryFinder* theWrappedObject) const;
   void setPosition(QTextBoundaryFinder* theWrappedObject, int  position);
   QTextBoundaryFinder::BoundaryReasons  boundaryReasons(QTextBoundaryFinder* theWrappedObject) const;
   bool  isValid(QTextBoundaryFinder* theWrappedObject) const;
   QString  string(QTextBoundaryFinder* theWrappedObject) const;
   void toStart(QTextBoundaryFinder* theWrappedObject);
   int  toPreviousBoundary(QTextBoundaryFinder* theWrappedObject);
   int  toNextBoundary(QTextBoundaryFinder* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QTEXTBOUNDARYFINDER_H
