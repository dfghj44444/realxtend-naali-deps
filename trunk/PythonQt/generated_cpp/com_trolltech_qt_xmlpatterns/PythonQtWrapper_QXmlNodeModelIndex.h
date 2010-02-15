#ifndef PYTHONQTWRAPPER_QXMLNODEMODELINDEX_H
#define PYTHONQTWRAPPER_QXMLNODEMODELINDEX_H

#include <qabstractxmlnodemodel.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractxmlnodemodel.h>

class PythonQtWrapper_QXmlNodeModelIndex : public QObject
{ Q_OBJECT
public:
Q_ENUMS(NodeKind DocumentOrder )
enum NodeKind{
  Attribute = QXmlNodeModelIndex::Attribute,   Comment = QXmlNodeModelIndex::Comment,   Document = QXmlNodeModelIndex::Document,   Element = QXmlNodeModelIndex::Element,   Namespace = QXmlNodeModelIndex::Namespace,   ProcessingInstruction = QXmlNodeModelIndex::ProcessingInstruction,   Text = QXmlNodeModelIndex::Text};
enum DocumentOrder{
  Precedes = QXmlNodeModelIndex::Precedes,   Is = QXmlNodeModelIndex::Is,   Follows = QXmlNodeModelIndex::Follows};
public slots:
QXmlNodeModelIndex* new_QXmlNodeModelIndex();
QXmlNodeModelIndex* new_QXmlNodeModelIndex(const QXmlNodeModelIndex&  other);
void delete_QXmlNodeModelIndex(QXmlNodeModelIndex* obj) { delete obj; } 
   qint64  additionalData(QXmlNodeModelIndex* theWrappedObject) const;
   const QAbstractXmlNodeModel*  model(QXmlNodeModelIndex* theWrappedObject) const;
   bool  operator_equal(QXmlNodeModelIndex* theWrappedObject, const QXmlNodeModelIndex&  other) const;
   qint64  data(QXmlNodeModelIndex* theWrappedObject) const;
   bool  isNull(QXmlNodeModelIndex* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QXMLNODEMODELINDEX_H
