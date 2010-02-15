#include "PythonQtWrapper_QGraphicsAnchorLayout.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qcoreevent.h>
#include <qgraphicsanchorlayout.h>
#include <qgraphicslayoutitem.h>
#include <qrect.h>
#include <qsize.h>

int  PythonQtShell_QGraphicsAnchorLayout::count() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "count");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("count", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsAnchorLayout::count();
}
void PythonQtShell_QGraphicsAnchorLayout::getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getContentsMargins");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qreal*" , "qreal*" , "qreal*" , "qreal*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&left, (void*)&top, (void*)&right, (void*)&bottom};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsAnchorLayout::getContentsMargins(left, top, right, bottom);
}
void PythonQtShell_QGraphicsAnchorLayout::invalidate()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "invalidate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsAnchorLayout::invalidate();
}
QGraphicsLayoutItem*  PythonQtShell_QGraphicsAnchorLayout::itemAt(int  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QGraphicsLayoutItem*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QGraphicsLayoutItem* returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemAt", methodInfo, result);
        } else {
          returnValue = *((QGraphicsLayoutItem**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsAnchorLayout::itemAt(index);
}
void PythonQtShell_QGraphicsAnchorLayout::removeAt(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsAnchorLayout::removeAt(index);
}
void PythonQtShell_QGraphicsAnchorLayout::updateGeometry()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsAnchorLayout::updateGeometry();
}
void PythonQtShell_QGraphicsAnchorLayout::widgetEvent(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "widgetEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsAnchorLayout::widgetEvent(e);
}
QGraphicsAnchorLayout* PythonQtWrapper_QGraphicsAnchorLayout::new_QGraphicsAnchorLayout(QGraphicsLayoutItem*  parent)
{ 
return new PythonQtShell_QGraphicsAnchorLayout(parent); }

void PythonQtWrapper_QGraphicsAnchorLayout::addCornerAnchors(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::Corner  firstCorner, QGraphicsLayoutItem*  secondItem, Qt::Corner  secondCorner)
{
  ( theWrappedObject->addCornerAnchors(firstItem, firstCorner, secondItem, secondCorner));
}

void PythonQtWrapper_QGraphicsAnchorLayout::invalidate(QGraphicsAnchorLayout* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsAnchorLayout*)theWrappedObject)->promoted_invalidate());
}

void PythonQtWrapper_QGraphicsAnchorLayout::setHorizontalSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setHorizontalSpacing(spacing));
}

void PythonQtWrapper_QGraphicsAnchorLayout::setVerticalSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setVerticalSpacing(spacing));
}

QGraphicsAnchor*  PythonQtWrapper_QGraphicsAnchorLayout::addAnchor(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::AnchorPoint  firstEdge, QGraphicsLayoutItem*  secondItem, Qt::AnchorPoint  secondEdge)
{
  return ( theWrappedObject->addAnchor(firstItem, firstEdge, secondItem, secondEdge));
}

void PythonQtWrapper_QGraphicsAnchorLayout::addAnchors(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, QGraphicsLayoutItem*  secondItem, Qt::Orientations  orientations)
{
  ( theWrappedObject->addAnchors(firstItem, secondItem, orientations));
}

void PythonQtWrapper_QGraphicsAnchorLayout::setSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setSpacing(spacing));
}

void PythonQtWrapper_QGraphicsAnchorLayout::removeAt(QGraphicsAnchorLayout* theWrappedObject, int  index)
{
  ( ((PythonQtPublicPromoter_QGraphicsAnchorLayout*)theWrappedObject)->promoted_removeAt(index));
}

qreal  PythonQtWrapper_QGraphicsAnchorLayout::horizontalSpacing(QGraphicsAnchorLayout* theWrappedObject) const
{
  return ( theWrappedObject->horizontalSpacing());
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsAnchorLayout::itemAt(QGraphicsAnchorLayout* theWrappedObject, int  index) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsAnchorLayout*)theWrappedObject)->promoted_itemAt(index));
}

QGraphicsAnchor*  PythonQtWrapper_QGraphicsAnchorLayout::anchor(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::AnchorPoint  firstEdge, QGraphicsLayoutItem*  secondItem, Qt::AnchorPoint  secondEdge)
{
  return ( theWrappedObject->anchor(firstItem, firstEdge, secondItem, secondEdge));
}

int  PythonQtWrapper_QGraphicsAnchorLayout::count(QGraphicsAnchorLayout* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsAnchorLayout*)theWrappedObject)->promoted_count());
}

qreal  PythonQtWrapper_QGraphicsAnchorLayout::verticalSpacing(QGraphicsAnchorLayout* theWrappedObject) const
{
  return ( theWrappedObject->verticalSpacing());
}

void PythonQtWrapper_QGraphicsAnchorLayout::setGeometry(QGraphicsAnchorLayout* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->setGeometry(rect));
}

