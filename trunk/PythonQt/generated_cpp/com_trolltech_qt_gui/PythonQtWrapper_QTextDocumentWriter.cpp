#include "PythonQtWrapper_QTextDocumentWriter.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qtextcodec.h>
#include <qtextdocument.h>
#include <qtextdocumentfragment.h>
#include <qtextdocumentwriter.h>

QTextDocumentWriter* PythonQtWrapper_QTextDocumentWriter::new_QTextDocumentWriter()
{ 
return new QTextDocumentWriter(); }

QTextDocumentWriter* PythonQtWrapper_QTextDocumentWriter::new_QTextDocumentWriter(QIODevice*  device, const QByteArray&  format)
{ 
return new QTextDocumentWriter(device, format); }

QTextDocumentWriter* PythonQtWrapper_QTextDocumentWriter::new_QTextDocumentWriter(const QString&  fileName, const QByteArray&  format)
{ 
return new QTextDocumentWriter(fileName, format); }

void PythonQtWrapper_QTextDocumentWriter::setFileName(QTextDocumentWriter* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setFileName(fileName));
}

QTextCodec*  PythonQtWrapper_QTextDocumentWriter::codec(QTextDocumentWriter* theWrappedObject) const
{
  return ( theWrappedObject->codec());
}

QList<QByteArray >  PythonQtWrapper_QTextDocumentWriter::static_QTextDocumentWriter_supportedDocumentFormats()
{
  return (QTextDocumentWriter::supportedDocumentFormats());
}

void PythonQtWrapper_QTextDocumentWriter::setCodec(QTextDocumentWriter* theWrappedObject, QTextCodec*  codec)
{
  ( theWrappedObject->setCodec(codec));
}

QString  PythonQtWrapper_QTextDocumentWriter::fileName(QTextDocumentWriter* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QByteArray  PythonQtWrapper_QTextDocumentWriter::format(QTextDocumentWriter* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

bool  PythonQtWrapper_QTextDocumentWriter::write(QTextDocumentWriter* theWrappedObject, const QTextDocument*  document)
{
  return ( theWrappedObject->write(document));
}

QIODevice*  PythonQtWrapper_QTextDocumentWriter::device(QTextDocumentWriter* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

void PythonQtWrapper_QTextDocumentWriter::setFormat(QTextDocumentWriter* theWrappedObject, const QByteArray&  format)
{
  ( theWrappedObject->setFormat(format));
}

void PythonQtWrapper_QTextDocumentWriter::setDevice(QTextDocumentWriter* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

bool  PythonQtWrapper_QTextDocumentWriter::write(QTextDocumentWriter* theWrappedObject, const QTextDocumentFragment&  fragment)
{
  return ( theWrappedObject->write(fragment));
}

