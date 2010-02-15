#ifndef PYTHONQTWRAPPER_QXMLSTREAMATTRIBUTES_H
#define PYTHONQTWRAPPER_QXMLSTREAMATTRIBUTES_H

#include <qxmlstream.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qlist.h>
#include <qvector.h>
#include <qxmlstream.h>

class PythonQtShell_QXmlStreamAttributes : public QXmlStreamAttributes
{
public:
    PythonQtShell_QXmlStreamAttributes():QXmlStreamAttributes(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlStreamAttributes : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamAttributes* new_QXmlStreamAttributes();
QXmlStreamAttributes* new_QXmlStreamAttributes(const QXmlStreamAttributes& other) {
PythonQtShell_QXmlStreamAttributes* a = new PythonQtShell_QXmlStreamAttributes();
*((QXmlStreamAttributes*)a) = other;
return a; }
void delete_QXmlStreamAttributes(QXmlStreamAttributes* obj) { delete obj; } 
   void remove(QXmlStreamAttributes* theWrappedObject, int  i);
   int  lastIndexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const;
   void append(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName, const QString&  value);
   QVector<QXmlStreamAttribute >*  fill(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  size);
   const QXmlStreamAttribute*  last(QXmlStreamAttributes* theWrappedObject) const;
   QVector<QXmlStreamAttribute >  static_QXmlStreamAttributes_fromList(const QList<QXmlStreamAttribute >&  list);
   QStringRef  value(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const;
   void replace(QXmlStreamAttributes* theWrappedObject, int  i, const QXmlStreamAttribute&  t);
   bool  contains(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
   const QXmlStreamAttribute*  first(QXmlStreamAttributes* theWrappedObject) const;
   int  count(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
   QVector<QXmlStreamAttribute >  mid(QXmlStreamAttributes* theWrappedObject, int  pos, int  length) const;
   QList<QXmlStreamAttribute >  toList(QXmlStreamAttributes* theWrappedObject) const;
   bool  endsWith(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
   int  capacity(QXmlStreamAttributes* theWrappedObject) const;
   int  size(QXmlStreamAttributes* theWrappedObject) const;
   void clear(QXmlStreamAttributes* theWrappedObject);
   void append(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  attribute);
   bool  hasAttribute(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const;
   void reserve(QXmlStreamAttributes* theWrappedObject, int  size);
   void setSharable(QXmlStreamAttributes* theWrappedObject, bool  sharable);
   bool  operator_equal(QXmlStreamAttributes* theWrappedObject, const QVector<QXmlStreamAttribute >&  v) const;
   bool  hasAttribute(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const;
   void resize(QXmlStreamAttributes* theWrappedObject, int  size);
   bool  isEmpty(QXmlStreamAttributes* theWrappedObject) const;
   bool  startsWith(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
   QStringRef  value(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const;
   void squeeze(QXmlStreamAttributes* theWrappedObject);
   void append(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
   int  count(QXmlStreamAttributes* theWrappedObject) const;
   const QXmlStreamAttribute*  at(QXmlStreamAttributes* theWrappedObject, int  i) const;
   bool  empty(QXmlStreamAttributes* theWrappedObject) const;
   void prepend(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t);
   int  indexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const;
   void remove(QXmlStreamAttributes* theWrappedObject, int  i, int  n);
};

#endif // PYTHONQTWRAPPER_QXMLSTREAMATTRIBUTES_H
