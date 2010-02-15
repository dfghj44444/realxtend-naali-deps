#ifndef PYTHONQTWRAPPER_QTEXTDOCUMENTWRITER_H
#define PYTHONQTWRAPPER_QTEXTDOCUMENTWRITER_H

#include <qtextdocumentwriter.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qtextcodec.h>
#include <qtextdocument.h>
#include <qtextdocumentfragment.h>
#include <qtextdocumentwriter.h>

class PythonQtWrapper_QTextDocumentWriter : public QObject
{ Q_OBJECT
public:
public slots:
QTextDocumentWriter* new_QTextDocumentWriter();
QTextDocumentWriter* new_QTextDocumentWriter(QIODevice*  device, const QByteArray&  format);
QTextDocumentWriter* new_QTextDocumentWriter(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QTextDocumentWriter(QTextDocumentWriter* obj) { delete obj; } 
   void setFileName(QTextDocumentWriter* theWrappedObject, const QString&  fileName);
   QTextCodec*  codec(QTextDocumentWriter* theWrappedObject) const;
   QList<QByteArray >  static_QTextDocumentWriter_supportedDocumentFormats();
   void setCodec(QTextDocumentWriter* theWrappedObject, QTextCodec*  codec);
   QString  fileName(QTextDocumentWriter* theWrappedObject) const;
   QByteArray  format(QTextDocumentWriter* theWrappedObject) const;
   bool  write(QTextDocumentWriter* theWrappedObject, const QTextDocument*  document);
   QIODevice*  device(QTextDocumentWriter* theWrappedObject) const;
   void setFormat(QTextDocumentWriter* theWrappedObject, const QByteArray&  format);
   void setDevice(QTextDocumentWriter* theWrappedObject, QIODevice*  device);
   bool  write(QTextDocumentWriter* theWrappedObject, const QTextDocumentFragment&  fragment);
};

#endif // PYTHONQTWRAPPER_QTEXTDOCUMENTWRITER_H
