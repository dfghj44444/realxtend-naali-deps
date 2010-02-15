#ifndef PYTHONQTWRAPPER_QXMLSTREAMWRITER_H
#define PYTHONQTWRAPPER_QXMLSTREAMWRITER_H

#include <qxmlstream.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qtextcodec.h>
#include <qxmlstream.h>

class PythonQtWrapper_QXmlStreamWriter : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamWriter* new_QXmlStreamWriter();
QXmlStreamWriter* new_QXmlStreamWriter(QByteArray*  array);
QXmlStreamWriter* new_QXmlStreamWriter(QIODevice*  device);
void delete_QXmlStreamWriter(QXmlStreamWriter* obj) { delete obj; } 
   void writeProcessingInstruction(QXmlStreamWriter* theWrappedObject, const QString&  target, const QString&  data = QString());
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
   void writeNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  prefix = QString());
   bool  autoFormatting(QXmlStreamWriter* theWrappedObject) const;
   QIODevice*  device(QXmlStreamWriter* theWrappedObject) const;
   void writeAttributes(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttributes&  attributes);
   void writeEndElement(QXmlStreamWriter* theWrappedObject);
   void writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  text);
   void writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName);
   void writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName);
   void writeEntityReference(QXmlStreamWriter* theWrappedObject, const QString&  name);
   void writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  text);
   void setAutoFormatting(QXmlStreamWriter* theWrappedObject, bool  arg__1);
   void setDevice(QXmlStreamWriter* theWrappedObject, QIODevice*  device);
   void writeCDATA(QXmlStreamWriter* theWrappedObject, const QString&  text);
   void writeComment(QXmlStreamWriter* theWrappedObject, const QString&  text);
   void writeStartDocument(QXmlStreamWriter* theWrappedObject, const QString&  version, bool  standalone);
   void writeStartDocument(QXmlStreamWriter* theWrappedObject);
   void setAutoFormattingIndent(QXmlStreamWriter* theWrappedObject, int  spacesOrTabs);
   int  autoFormattingIndent(QXmlStreamWriter* theWrappedObject) const;
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttribute&  attribute);
   void writeCurrentToken(QXmlStreamWriter* theWrappedObject, const QXmlStreamReader&  reader);
   void writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name);
   void writeStartDocument(QXmlStreamWriter* theWrappedObject, const QString&  version);
   void setCodec(QXmlStreamWriter* theWrappedObject, const char*  codecName);
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  value);
   void setCodec(QXmlStreamWriter* theWrappedObject, QTextCodec*  codec);
   void writeEndDocument(QXmlStreamWriter* theWrappedObject);
   void writeDTD(QXmlStreamWriter* theWrappedObject, const QString&  dtd);
   void writeDefaultNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri);
   QTextCodec*  codec(QXmlStreamWriter* theWrappedObject) const;
   void writeCharacters(QXmlStreamWriter* theWrappedObject, const QString&  text);
   void writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name);
};

#endif // PYTHONQTWRAPPER_QXMLSTREAMWRITER_H
