#ifndef PYTHONQTWRAPPER_QXMLSTREAMREADER_H
#define PYTHONQTWRAPPER_QXMLSTREAMREADER_H

#include <qxmlstream.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qvector.h>
#include <qxmlstream.h>

class PythonQtWrapper_QXmlStreamReader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error TokenType ReadElementTextBehaviour )
enum Error{
  NoError = QXmlStreamReader::NoError,   UnexpectedElementError = QXmlStreamReader::UnexpectedElementError,   CustomError = QXmlStreamReader::CustomError,   NotWellFormedError = QXmlStreamReader::NotWellFormedError,   PrematureEndOfDocumentError = QXmlStreamReader::PrematureEndOfDocumentError};
enum TokenType{
  NoToken = QXmlStreamReader::NoToken,   Invalid = QXmlStreamReader::Invalid,   StartDocument = QXmlStreamReader::StartDocument,   EndDocument = QXmlStreamReader::EndDocument,   StartElement = QXmlStreamReader::StartElement,   EndElement = QXmlStreamReader::EndElement,   Characters = QXmlStreamReader::Characters,   Comment = QXmlStreamReader::Comment,   DTD = QXmlStreamReader::DTD,   EntityReference = QXmlStreamReader::EntityReference,   ProcessingInstruction = QXmlStreamReader::ProcessingInstruction};
enum ReadElementTextBehaviour{
  ErrorOnUnexpectedElement = QXmlStreamReader::ErrorOnUnexpectedElement,   IncludeChildElements = QXmlStreamReader::IncludeChildElements,   SkipChildElements = QXmlStreamReader::SkipChildElements};
public slots:
QXmlStreamReader* new_QXmlStreamReader();
QXmlStreamReader* new_QXmlStreamReader(QIODevice*  device);
QXmlStreamReader* new_QXmlStreamReader(const QByteArray&  data);
QXmlStreamReader* new_QXmlStreamReader(const QString&  data);
void delete_QXmlStreamReader(QXmlStreamReader* obj) { delete obj; } 
   QStringRef  namespaceUri(QXmlStreamReader* theWrappedObject) const;
   QString  errorString(QXmlStreamReader* theWrappedObject) const;
   QStringRef  name(QXmlStreamReader* theWrappedObject) const;
   QString  tokenString(QXmlStreamReader* theWrappedObject) const;
   bool  isStandaloneDocument(QXmlStreamReader* theWrappedObject) const;
   void skipCurrentElement(QXmlStreamReader* theWrappedObject);
   qint64  characterOffset(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamEntityResolver*  entityResolver(QXmlStreamReader* theWrappedObject) const;
   bool  isDTD(QXmlStreamReader* theWrappedObject) const;
   QIODevice*  device(QXmlStreamReader* theWrappedObject) const;
   void setEntityResolver(QXmlStreamReader* theWrappedObject, QXmlStreamEntityResolver*  resolver);
   QStringRef  processingInstructionTarget(QXmlStreamReader* theWrappedObject) const;
   void clear(QXmlStreamReader* theWrappedObject);
   QString  readElementText(QXmlStreamReader* theWrappedObject, QXmlStreamReader::ReadElementTextBehaviour  behaviour);
   QStringRef  documentVersion(QXmlStreamReader* theWrappedObject) const;
   QStringRef  documentEncoding(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamReader::Error  error(QXmlStreamReader* theWrappedObject) const;
   bool  isCharacters(QXmlStreamReader* theWrappedObject) const;
   QStringRef  dtdSystemId(QXmlStreamReader* theWrappedObject) const;
   bool  hasError(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamAttributes  attributes(QXmlStreamReader* theWrappedObject) const;
   qint64  lineNumber(QXmlStreamReader* theWrappedObject) const;
   bool  isEndElement(QXmlStreamReader* theWrappedObject) const;
   QStringRef  prefix(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamReader::TokenType  readNext(QXmlStreamReader* theWrappedObject);
   QStringRef  text(QXmlStreamReader* theWrappedObject) const;
   QVector<QXmlStreamNotationDeclaration >  notationDeclarations(QXmlStreamReader* theWrappedObject) const;
   QStringRef  dtdName(QXmlStreamReader* theWrappedObject) const;
   bool  isStartDocument(QXmlStreamReader* theWrappedObject) const;
   bool  atEnd(QXmlStreamReader* theWrappedObject) const;
   QStringRef  qualifiedName(QXmlStreamReader* theWrappedObject) const;
   bool  isEntityReference(QXmlStreamReader* theWrappedObject) const;
   bool  readNextStartElement(QXmlStreamReader* theWrappedObject);
   bool  isWhitespace(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamReader::TokenType  tokenType(QXmlStreamReader* theWrappedObject) const;
   qint64  columnNumber(QXmlStreamReader* theWrappedObject) const;
   bool  isEndDocument(QXmlStreamReader* theWrappedObject) const;
   bool  isStartElement(QXmlStreamReader* theWrappedObject) const;
   bool  isCDATA(QXmlStreamReader* theWrappedObject) const;
   QStringRef  dtdPublicId(QXmlStreamReader* theWrappedObject) const;
   QString  readElementText(QXmlStreamReader* theWrappedObject);
   QVector<QXmlStreamNamespaceDeclaration >  namespaceDeclarations(QXmlStreamReader* theWrappedObject) const;
   QVector<QXmlStreamEntityDeclaration >  entityDeclarations(QXmlStreamReader* theWrappedObject) const;
   void addData(QXmlStreamReader* theWrappedObject, const QString&  data);
   void setDevice(QXmlStreamReader* theWrappedObject, QIODevice*  device);
   void addExtraNamespaceDeclaration(QXmlStreamReader* theWrappedObject, const QXmlStreamNamespaceDeclaration&  extraNamespaceDeclaraction);
   void raiseError(QXmlStreamReader* theWrappedObject, const QString&  message = QString());
   void setNamespaceProcessing(QXmlStreamReader* theWrappedObject, bool  arg__1);
   void addData(QXmlStreamReader* theWrappedObject, const QByteArray&  data);
   bool  namespaceProcessing(QXmlStreamReader* theWrappedObject) const;
   QStringRef  processingInstructionData(QXmlStreamReader* theWrappedObject) const;
   void addExtraNamespaceDeclarations(QXmlStreamReader* theWrappedObject, const QVector<QXmlStreamNamespaceDeclaration >&  extraNamespaceDeclaractions);
   bool  isComment(QXmlStreamReader* theWrappedObject) const;
   bool  isProcessingInstruction(QXmlStreamReader* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QXMLSTREAMREADER_H
