#ifndef PYTHONQTWRAPPER_QSIMPLEXMLNODEMODEL_H
#define PYTHONQTWRAPPER_QSIMPLEXMLNODEMODEL_H

#include <qsimplexmlnodemodel.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qsourcelocation.h>
#include <qurl.h>
#include <qvector.h>
#include <qxmlname.h>
#include <qxmlnamepool.h>

class PythonQtShell_QSimpleXmlNodeModel : public QSimpleXmlNodeModel
{
public:
    PythonQtShell_QSimpleXmlNodeModel(const QXmlNamePool&  namePool):QSimpleXmlNodeModel(namePool),_wrapper(NULL) {};

virtual QVector<QXmlNodeModelIndex >  attributes(const QXmlNodeModelIndex&  element) const;
virtual QUrl  baseUri(const QXmlNodeModelIndex&  node) const;
virtual QXmlNodeModelIndex::DocumentOrder  compareOrder(const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const;
virtual QUrl  documentUri(const QXmlNodeModelIndex&  ni) const;
virtual QXmlNodeModelIndex  elementById(const QXmlName&  id) const;
virtual QXmlNodeModelIndex::NodeKind  kind(const QXmlNodeModelIndex&  ni) const;
virtual QXmlName  name(const QXmlNodeModelIndex&  ni) const;
virtual QVector<QXmlName >  namespaceBindings(const QXmlNodeModelIndex&  arg__1) const;
virtual QXmlNodeModelIndex  nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis  axis, const QXmlNodeModelIndex&  origin) const;
virtual QVector<QXmlNodeModelIndex >  nodesByIdref(const QXmlName&  idref) const;
virtual QXmlNodeModelIndex  root(const QXmlNodeModelIndex&  n) const;
virtual QString  stringValue(const QXmlNodeModelIndex&  node) const;
virtual QVariant  typedValue(const QXmlNodeModelIndex&  n) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSimpleXmlNodeModel : public QSimpleXmlNodeModel
{ public:
inline QXmlNodeModelIndex  promoted_elementById(const QXmlName&  id) const { return QSimpleXmlNodeModel::elementById(id); }
inline QVector<QXmlName >  promoted_namespaceBindings(const QXmlNodeModelIndex&  arg__1) const { return QSimpleXmlNodeModel::namespaceBindings(arg__1); }
inline QString  promoted_stringValue(const QXmlNodeModelIndex&  node) const { return QSimpleXmlNodeModel::stringValue(node); }
inline QVector<QXmlNodeModelIndex >  promoted_nodesByIdref(const QXmlName&  idref) const { return QSimpleXmlNodeModel::nodesByIdref(idref); }
inline QUrl  promoted_baseUri(const QXmlNodeModelIndex&  node) const { return QSimpleXmlNodeModel::baseUri(node); }
};

class PythonQtWrapper_QSimpleXmlNodeModel : public QObject
{ Q_OBJECT
public:
public slots:
QSimpleXmlNodeModel* new_QSimpleXmlNodeModel(const QXmlNamePool&  namePool);
void delete_QSimpleXmlNodeModel(QSimpleXmlNodeModel* obj) { delete obj; } 
   QXmlNodeModelIndex  elementById(QSimpleXmlNodeModel* theWrappedObject, const QXmlName&  id) const;
   QVector<QXmlName >  namespaceBindings(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  arg__1) const;
   QString  stringValue(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  node) const;
   QVector<QXmlNodeModelIndex >  nodesByIdref(QSimpleXmlNodeModel* theWrappedObject, const QXmlName&  idref) const;
   QXmlNamePool*  namePool(QSimpleXmlNodeModel* theWrappedObject) const;
   QUrl  baseUri(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  node) const;
};

#endif // PYTHONQTWRAPPER_QSIMPLEXMLNODEMODEL_H
