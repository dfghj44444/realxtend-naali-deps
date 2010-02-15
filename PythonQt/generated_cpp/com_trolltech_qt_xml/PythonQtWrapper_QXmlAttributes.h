#ifndef PYTHONQTWRAPPER_QXMLATTRIBUTES_H
#define PYTHONQTWRAPPER_QXMLATTRIBUTES_H

#include <qxml.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QXmlAttributes : public QXmlAttributes
{
public:
    PythonQtShell_QXmlAttributes():QXmlAttributes(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlAttributes : public QObject
{ Q_OBJECT
public:
public slots:
QXmlAttributes* new_QXmlAttributes();
QXmlAttributes* new_QXmlAttributes(const QXmlAttributes& other) {
PythonQtShell_QXmlAttributes* a = new PythonQtShell_QXmlAttributes();
*((QXmlAttributes*)a) = other;
return a; }
void delete_QXmlAttributes(QXmlAttributes* obj) { delete obj; } 
   QString  type(QXmlAttributes* theWrappedObject, const QString&  qName) const;
   QString  type(QXmlAttributes* theWrappedObject, int  index) const;
   QString  localName(QXmlAttributes* theWrappedObject, int  index) const;
   QString  qName(QXmlAttributes* theWrappedObject, int  index) const;
   int  length(QXmlAttributes* theWrappedObject) const;
   QString  type(QXmlAttributes* theWrappedObject, const QString&  uri, const QString&  localName) const;
   QString  value(QXmlAttributes* theWrappedObject, const QString&  qName) const;
   void clear(QXmlAttributes* theWrappedObject);
   void append(QXmlAttributes* theWrappedObject, const QString&  qName, const QString&  uri, const QString&  localPart, const QString&  value);
   int  count(QXmlAttributes* theWrappedObject) const;
   int  index(QXmlAttributes* theWrappedObject, const QString&  uri, const QString&  localPart) const;
   QString  uri(QXmlAttributes* theWrappedObject, int  index) const;
   QString  value(QXmlAttributes* theWrappedObject, int  index) const;
   int  index(QXmlAttributes* theWrappedObject, const QString&  qName) const;
   QString  value(QXmlAttributes* theWrappedObject, const QString&  uri, const QString&  localName) const;
};

#endif // PYTHONQTWRAPPER_QXMLATTRIBUTES_H
