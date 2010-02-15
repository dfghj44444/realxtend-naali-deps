#ifndef PYTHONQTWRAPPER_QXMLPARSEEXCEPTION_H
#define PYTHONQTWRAPPER_QXMLPARSEEXCEPTION_H

#include <qxml.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qxml.h>

class PythonQtWrapper_QXmlParseException : public QObject
{ Q_OBJECT
public:
public slots:
QXmlParseException* new_QXmlParseException(const QString&  name = QString(), int  c = -1, int  l = -1, const QString&  p = QString(), const QString&  s = QString());
QXmlParseException* new_QXmlParseException(const QXmlParseException&  other);
void delete_QXmlParseException(QXmlParseException* obj) { delete obj; } 
   int  columnNumber(QXmlParseException* theWrappedObject) const;
   int  lineNumber(QXmlParseException* theWrappedObject) const;
   QString  systemId(QXmlParseException* theWrappedObject) const;
   QString  message(QXmlParseException* theWrappedObject) const;
   QString  publicId(QXmlParseException* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QXMLPARSEEXCEPTION_H
