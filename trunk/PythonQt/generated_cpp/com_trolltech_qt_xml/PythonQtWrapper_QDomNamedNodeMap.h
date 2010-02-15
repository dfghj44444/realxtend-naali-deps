#ifndef PYTHONQTWRAPPER_QDOMNAMEDNODEMAP_H
#define PYTHONQTWRAPPER_QDOMNAMEDNODEMAP_H

#include <qdom.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdom.h>

class PythonQtWrapper_QDomNamedNodeMap : public QObject
{ Q_OBJECT
public:
public slots:
QDomNamedNodeMap* new_QDomNamedNodeMap();
QDomNamedNodeMap* new_QDomNamedNodeMap(const QDomNamedNodeMap&  arg__1);
void delete_QDomNamedNodeMap(QDomNamedNodeMap* obj) { delete obj; } 
   int  size(QDomNamedNodeMap* theWrappedObject) const;
   bool  contains(QDomNamedNodeMap* theWrappedObject, const QString&  name) const;
   QDomNode  setNamedItem(QDomNamedNodeMap* theWrappedObject, const QDomNode&  newNode);
   QDomNode  namedItemNS(QDomNamedNodeMap* theWrappedObject, const QString&  nsURI, const QString&  localName) const;
   int  count(QDomNamedNodeMap* theWrappedObject) const;
   uint  length(QDomNamedNodeMap* theWrappedObject) const;
   QDomNode  namedItem(QDomNamedNodeMap* theWrappedObject, const QString&  name) const;
   QDomNode  removeNamedItem(QDomNamedNodeMap* theWrappedObject, const QString&  name);
   QDomNode  removeNamedItemNS(QDomNamedNodeMap* theWrappedObject, const QString&  nsURI, const QString&  localName);
   bool  operator_equal(QDomNamedNodeMap* theWrappedObject, const QDomNamedNodeMap&  arg__1) const;
   QDomNode  item(QDomNamedNodeMap* theWrappedObject, int  index) const;
   bool  isEmpty(QDomNamedNodeMap* theWrappedObject) const;
   QDomNode  setNamedItemNS(QDomNamedNodeMap* theWrappedObject, const QDomNode&  newNode);
};

#endif // PYTHONQTWRAPPER_QDOMNAMEDNODEMAP_H
