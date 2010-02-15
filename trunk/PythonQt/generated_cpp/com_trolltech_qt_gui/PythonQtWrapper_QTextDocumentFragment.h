#ifndef PYTHONQTWRAPPER_QTEXTDOCUMENTFRAGMENT_H
#define PYTHONQTWRAPPER_QTEXTDOCUMENTFRAGMENT_H

#include <qtextdocumentfragment.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextdocumentfragment.h>

class PythonQtWrapper_QTextDocumentFragment : public QObject
{ Q_OBJECT
public:
public slots:
QTextDocumentFragment* new_QTextDocumentFragment();
QTextDocumentFragment* new_QTextDocumentFragment(const QTextCursor&  range);
QTextDocumentFragment* new_QTextDocumentFragment(const QTextDocument*  document);
QTextDocumentFragment* new_QTextDocumentFragment(const QTextDocumentFragment&  rhs);
void delete_QTextDocumentFragment(QTextDocumentFragment* obj) { delete obj; } 
   QString  toPlainText(QTextDocumentFragment* theWrappedObject) const;
   QString  toHtml(QTextDocumentFragment* theWrappedObject, const QByteArray&  encoding) const;
   QTextDocumentFragment  static_QTextDocumentFragment_fromPlainText(const QString&  plainText);
   bool  isEmpty(QTextDocumentFragment* theWrappedObject) const;
   QString  toHtml(QTextDocumentFragment* theWrappedObject) const;
   QTextDocumentFragment  static_QTextDocumentFragment_fromHtml(const QString&  html);
   QTextDocumentFragment  static_QTextDocumentFragment_fromHtml(const QString&  html, const QTextDocument*  resourceProvider);
};

#endif // PYTHONQTWRAPPER_QTEXTDOCUMENTFRAGMENT_H
