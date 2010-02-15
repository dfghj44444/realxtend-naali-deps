#ifndef PYTHONQTWRAPPER_QXMLNAME_H
#define PYTHONQTWRAPPER_QXMLNAME_H

#include <qxmlname.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qxmlname.h>
#include <qxmlnamepool.h>

class PythonQtWrapper_QXmlName : public QObject
{ Q_OBJECT
public:
public slots:
QXmlName* new_QXmlName();
QXmlName* new_QXmlName(QXmlNamePool&  namePool, const QString&  localName, const QString&  namespaceURI = QString(), const QString&  prefix = QString());
QXmlName* new_QXmlName(const QXmlName& other) {
QXmlName* a = new QXmlName();
*((QXmlName*)a) = other;
return a; }
void delete_QXmlName(QXmlName* obj) { delete obj; } 
   bool  static_QXmlName_isNCName(const QString&  candidate);
   QString  toClarkName(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
   QXmlName  static_QXmlName_fromClarkName(const QString&  clarkName, const QXmlNamePool&  namePool);
   QString  localName(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
   bool  operator_equal(QXmlName* theWrappedObject, const QXmlName&  other) const;
   QString  namespaceUri(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
   QString  prefix(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
   bool  isNull(QXmlName* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QXMLNAME_H
