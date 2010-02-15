#include "PythonQtWrapper_QGraphicsItem.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicstransform.h>
#include <qgraphicswidget.h>
#include <qlist.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

void PythonQtShell_QGraphicsItem::advance(int  phase)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "advance");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&phase};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::advance(phase);
}
QRectF  PythonQtShell_QGraphicsItem::boundingRect() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "boundingRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QRectF"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
        } else {
          returnValue = *((QRectF*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QRectF result;
return result;
}
bool  PythonQtShell_QGraphicsItem::collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&other, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithItem", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::collidesWithItem(other, mode);
}
bool  PythonQtShell_QGraphicsItem::collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithPath");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPainterPath&" , "Qt::ItemSelectionMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&path, (void*)&mode};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("collidesWithPath", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::collidesWithPath(path, mode);
}
bool  PythonQtShell_QGraphicsItem::contains(const QPointF&  point) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contains");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPointF&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&point};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::contains(point);
}
void PythonQtShell_QGraphicsItem::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::contextMenuEvent(event);
}
void PythonQtShell_QGraphicsItem::dragEnterEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::dragEnterEvent(event);
}
void PythonQtShell_QGraphicsItem::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::dragLeaveEvent(event);
}
void PythonQtShell_QGraphicsItem::dragMoveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::dragMoveEvent(event);
}
void PythonQtShell_QGraphicsItem::dropEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::dropEvent(event);
}
QVariant  PythonQtShell_QGraphicsItem::extension(const QVariant&  variant) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "extension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&variant};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::extension(variant);
}
void PythonQtShell_QGraphicsItem::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::focusInEvent(event);
}
void PythonQtShell_QGraphicsItem::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::focusOutEvent(event);
}
void PythonQtShell_QGraphicsItem::hoverEnterEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::hoverEnterEvent(event);
}
void PythonQtShell_QGraphicsItem::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::hoverLeaveEvent(event);
}
void PythonQtShell_QGraphicsItem::hoverMoveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::hoverMoveEvent(event);
}
void PythonQtShell_QGraphicsItem::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::inputMethodEvent(event);
}
QVariant  PythonQtShell_QGraphicsItem::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::inputMethodQuery(query);
}
bool  PythonQtShell_QGraphicsItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::isObscuredBy(item);
}
QVariant  PythonQtShell_QGraphicsItem::itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "QGraphicsItem::GraphicsItemChange" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&change, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemChange", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::itemChange(change, value);
}
void PythonQtShell_QGraphicsItem::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::keyPressEvent(event);
}
void PythonQtShell_QGraphicsItem::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::keyReleaseEvent(event);
}
void PythonQtShell_QGraphicsItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::mouseDoubleClickEvent(event);
}
void PythonQtShell_QGraphicsItem::mouseMoveEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::mouseMoveEvent(event);
}
void PythonQtShell_QGraphicsItem::mousePressEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::mousePressEvent(event);
}
void PythonQtShell_QGraphicsItem::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::mouseReleaseEvent(event);
}
QPainterPath  PythonQtShell_QGraphicsItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::opaqueArea();
}
void PythonQtShell_QGraphicsItem::paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
bool  PythonQtShell_QGraphicsItem::sceneEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEvent", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::sceneEvent(event);
}
bool  PythonQtShell_QGraphicsItem::sceneEventFilter(QGraphicsItem*  watched, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QGraphicsItem*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&watched, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sceneEventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::sceneEventFilter(watched, event);
}
void PythonQtShell_QGraphicsItem::setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setExtension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsItem::Extension" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&extension, (void*)&variant};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::setExtension(extension, variant);
}
QPainterPath  PythonQtShell_QGraphicsItem::shape() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "shape");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPainterPath"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
        } else {
          returnValue = *((QPainterPath*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::shape();
}
bool  PythonQtShell_QGraphicsItem::supportsExtension(QGraphicsItem::Extension  extension) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "supportsExtension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QGraphicsItem::Extension"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&extension};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportsExtension", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsItem::supportsExtension(extension);
}
int  PythonQtShell_QGraphicsItem::type() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "type");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
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
  return QGraphicsItem::type();
}
void PythonQtShell_QGraphicsItem::wheelEvent(QGraphicsSceneWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QGraphicsSceneWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItem::wheelEvent(event);
}
QGraphicsItem* PythonQtWrapper_QGraphicsItem::new_QGraphicsItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsItem(parent, scene); }

void PythonQtWrapper_QGraphicsItem::setEnabled(QGraphicsItem* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setEnabled(enabled));
}

void PythonQtWrapper_QGraphicsItem::setFiltersChildEvents(QGraphicsItem* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setFiltersChildEvents(enabled));
}

bool  PythonQtWrapper_QGraphicsItem::collidesWithPath(QGraphicsItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_collidesWithPath(path, mode));
}

void PythonQtWrapper_QGraphicsItem::hide(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->hide());
}

void PythonQtWrapper_QGraphicsItem::setX(QGraphicsItem* theWrappedObject, qreal  x)
{
  ( theWrappedObject->setX(x));
}

qreal  PythonQtWrapper_QGraphicsItem::effectiveOpacity(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->effectiveOpacity());
}

void PythonQtWrapper_QGraphicsItem::setAcceptTouchEvents(QGraphicsItem* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAcceptTouchEvents(enabled));
}

void PythonQtWrapper_QGraphicsItem::show(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->show());
}

bool  PythonQtWrapper_QGraphicsItem::isSelected(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isSelected());
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::panel(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->panel());
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapFromParent(polygon));
}

void PythonQtWrapper_QGraphicsItem::removeSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem)
{
  ( theWrappedObject->removeSceneEventFilter(filterItem));
}

void PythonQtWrapper_QGraphicsItem::focusInEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_focusInEvent(event));
}

void PythonQtWrapper_QGraphicsItem::ensureVisible(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin)
{
  ( theWrappedObject->ensureVisible(x, y, w, h, xmargin, ymargin));
}

QVariant  PythonQtWrapper_QGraphicsItem::itemChange(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value)
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_itemChange(change, value));
}

bool  PythonQtWrapper_QGraphicsItem::hasCursor(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->hasCursor());
}

void PythonQtWrapper_QGraphicsItem::setFlags(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags)
{
  ( theWrappedObject->setFlags(flags));
}

void PythonQtWrapper_QGraphicsItem::update(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height)
{
  ( theWrappedObject->update(x, y, width, height));
}

qreal  PythonQtWrapper_QGraphicsItem::opacity(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->opacity());
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapToScene(x, y, w, h));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectFromItem(item, x, y, w, h));
}

void PythonQtWrapper_QGraphicsItem::dragLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_dragLeaveEvent(event));
}

bool  PythonQtWrapper_QGraphicsItem::acceptDrops(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->acceptDrops());
}

void PythonQtWrapper_QGraphicsItem::rotate(QGraphicsItem* theWrappedObject, qreal  angle)
{
  ( theWrappedObject->rotate(angle));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
  return ( theWrappedObject->mapFromItem(item, point));
}

bool  PythonQtWrapper_QGraphicsItem::isVisibleTo(QGraphicsItem* theWrappedObject, const QGraphicsItem*  parent) const
{
  return ( theWrappedObject->isVisibleTo(parent));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapFromParent(x, y, w, h));
}

void PythonQtWrapper_QGraphicsItem::setCacheMode(QGraphicsItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize)
{
  ( theWrappedObject->setCacheMode(mode, cacheSize));
}

void PythonQtWrapper_QGraphicsItem::setFlag(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled)
{
  ( theWrappedObject->setFlag(flag, enabled));
}

void PythonQtWrapper_QGraphicsItem::setScale(QGraphicsItem* theWrappedObject, qreal  scale)
{
  ( theWrappedObject->setScale(scale));
}

void PythonQtWrapper_QGraphicsItem::setTransform(QGraphicsItem* theWrappedObject, const QTransform&  matrix, bool  combine)
{
  ( theWrappedObject->setTransform(matrix, combine));
}

QGraphicsItemGroup*  PythonQtWrapper_QGraphicsItem::group(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->group());
}

bool  PythonQtWrapper_QGraphicsItem::isObscured(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isObscured());
}

void PythonQtWrapper_QGraphicsItem::hoverMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_hoverMoveEvent(event));
}

bool  PythonQtWrapper_QGraphicsItem::isObscured(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->isObscured(x, y, w, h));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->mapToScene(point));
}

void PythonQtWrapper_QGraphicsItem::setRotation(QGraphicsItem* theWrappedObject, qreal  angle)
{
  ( theWrappedObject->setRotation(angle));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapFromScene(rect));
}

QPointF  PythonQtWrapper_QGraphicsItem::transformOriginPoint(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->transformOriginPoint());
}

bool  PythonQtWrapper_QGraphicsItem::isObscuredBy(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_isObscuredBy(item));
}

void PythonQtWrapper_QGraphicsItem::setOpacity(QGraphicsItem* theWrappedObject, qreal  opacity)
{
  ( theWrappedObject->setOpacity(opacity));
}

bool  PythonQtWrapper_QGraphicsItem::acceptsHoverEvents(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->acceptsHoverEvents());
}

void PythonQtWrapper_QGraphicsItem::setGraphicsEffect(QGraphicsItem* theWrappedObject, QGraphicsEffect*  effect)
{
  ( theWrappedObject->setGraphicsEffect(effect));
}

void PythonQtWrapper_QGraphicsItem::contextMenuEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_contextMenuEvent(event));
}

bool  PythonQtWrapper_QGraphicsItem::collidesWithItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_collidesWithItem(other, mode));
}

QCursor  PythonQtWrapper_QGraphicsItem::cursor(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->cursor());
}

void PythonQtWrapper_QGraphicsItem::setFocusProxy(QGraphicsItem* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->setFocusProxy(item));
}

void PythonQtWrapper_QGraphicsItem::setPanelModality(QGraphicsItem* theWrappedObject, QGraphicsItem::PanelModality  panelModality)
{
  ( theWrappedObject->setPanelModality(panelModality));
}

void PythonQtWrapper_QGraphicsItem::translate(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectFromItem(item, rect));
}

void PythonQtWrapper_QGraphicsItem::setY(QGraphicsItem* theWrappedObject, qreal  y)
{
  ( theWrappedObject->setY(y));
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsItem::childItems(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->childItems());
}

void PythonQtWrapper_QGraphicsItem::hoverEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_hoverEnterEvent(event));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapToParent(path));
}

void PythonQtWrapper_QGraphicsItem::mousePressEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_mousePressEvent(event));
}

void PythonQtWrapper_QGraphicsItem::clearFocus(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->clearFocus());
}

void PythonQtWrapper_QGraphicsItem::setZValue(QGraphicsItem* theWrappedObject, qreal  z)
{
  ( theWrappedObject->setZValue(z));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectToScene(rect));
}

void PythonQtWrapper_QGraphicsItem::unsetCursor(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->unsetCursor());
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapFromScene(polygon));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapToParent(polygon));
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsItem::window(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->window());
}

void PythonQtWrapper_QGraphicsItem::mouseMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_mouseMoveEvent(event));
}

void PythonQtWrapper_QGraphicsItem::grabKeyboard(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->grabKeyboard());
}

int  PythonQtWrapper_QGraphicsItem::type(QGraphicsItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_type());
}

QGraphicsItem::CacheMode  PythonQtWrapper_QGraphicsItem::cacheMode(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->cacheMode());
}

void PythonQtWrapper_QGraphicsItem::setAcceptHoverEvents(QGraphicsItem* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAcceptHoverEvents(enabled));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
  return ( theWrappedObject->mapToItem(item, rect));
}

QTransform  PythonQtWrapper_QGraphicsItem::transform(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->transform());
}

Qt::MouseButtons  PythonQtWrapper_QGraphicsItem::acceptedMouseButtons(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->acceptedMouseButtons());
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::focusScopeItem(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->focusScopeItem());
}

void PythonQtWrapper_QGraphicsItem::setGroup(QGraphicsItem* theWrappedObject, QGraphicsItemGroup*  group)
{
  ( theWrappedObject->setGroup(group));
}

void PythonQtWrapper_QGraphicsItem::hoverLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_hoverLeaveEvent(event));
}

bool  PythonQtWrapper_QGraphicsItem::isWidget(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isWidget());
}

void PythonQtWrapper_QGraphicsItem::setTransformOriginPoint(QGraphicsItem* theWrappedObject, const QPointF&  origin)
{
  ( theWrappedObject->setTransformOriginPoint(origin));
}

void PythonQtWrapper_QGraphicsItem::dropEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_dropEvent(event));
}

QVariant  PythonQtWrapper_QGraphicsItem::data(QGraphicsItem* theWrappedObject, int  key) const
{
  return ( theWrappedObject->data(key));
}

void PythonQtWrapper_QGraphicsItem::installSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem)
{
  ( theWrappedObject->installSceneEventFilter(filterItem));
}

void PythonQtWrapper_QGraphicsItem::setTransformOriginPoint(QGraphicsItem* theWrappedObject, qreal  ax, qreal  ay)
{
  ( theWrappedObject->setTransformOriginPoint(ax, ay));
}

QGraphicsObject*  PythonQtWrapper_QGraphicsItem::parentObject(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->parentObject());
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsItem::topLevelWidget(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->topLevelWidget());
}

QPointF  PythonQtWrapper_QGraphicsItem::pos(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapFromScene(x, y));
}

QPointF  PythonQtWrapper_QGraphicsItem::scenePos(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->scenePos());
}

bool  PythonQtWrapper_QGraphicsItem::isPanel(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isPanel());
}

QPainterPath  PythonQtWrapper_QGraphicsItem::clipPath(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->clipPath());
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::parentItem(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->parentItem());
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapFromItem(item, polygon));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::commonAncestorItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other) const
{
  return ( theWrappedObject->commonAncestorItem(other));
}

void PythonQtWrapper_QGraphicsItem::resetTransform(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->resetTransform());
}

QGraphicsObject*  PythonQtWrapper_QGraphicsItem::toGraphicsObject(QGraphicsItem* theWrappedObject)
{
  return ( theWrappedObject->toGraphicsObject());
}

bool  PythonQtWrapper_QGraphicsItem::acceptHoverEvents(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->acceptHoverEvents());
}

QGraphicsItem::PanelModality  PythonQtWrapper_QGraphicsItem::panelModality(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->panelModality());
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectFromParent(rect));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectFromParent(x, y, w, h));
}

void PythonQtWrapper_QGraphicsItem::setAcceptDrops(QGraphicsItem* theWrappedObject, bool  on)
{
  ( theWrappedObject->setAcceptDrops(on));
}

qreal  PythonQtWrapper_QGraphicsItem::boundingRegionGranularity(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRegionGranularity());
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapToParent(x, y, w, h));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapToScene(x, y));
}

void PythonQtWrapper_QGraphicsItem::mouseReleaseEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_mouseReleaseEvent(event));
}

QTransform  PythonQtWrapper_QGraphicsItem::deviceTransform(QGraphicsItem* theWrappedObject, const QTransform&  viewportTransform) const
{
  return ( theWrappedObject->deviceTransform(viewportTransform));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::focusItem(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->focusItem());
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapFromParent(path));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
  return ( theWrappedObject->mapToItem(item, point));
}

bool  PythonQtWrapper_QGraphicsItem::isWindow(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isWindow());
}

QRectF  PythonQtWrapper_QGraphicsItem::childrenBoundingRect(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->childrenBoundingRect());
}

bool  PythonQtWrapper_QGraphicsItem::handlesChildEvents(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->handlesChildEvents());
}

bool  PythonQtWrapper_QGraphicsItem::filtersChildEvents(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->filtersChildEvents());
}

QGraphicsEffect*  PythonQtWrapper_QGraphicsItem::graphicsEffect(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->graphicsEffect());
}

qreal  PythonQtWrapper_QGraphicsItem::y(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

QPainterPath  PythonQtWrapper_QGraphicsItem::shape(QGraphicsItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_shape());
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
  return ( theWrappedObject->mapFromItem(item, rect));
}

QVariant  PythonQtWrapper_QGraphicsItem::extension(QGraphicsItem* theWrappedObject, const QVariant&  variant) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_extension(variant));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapToParent(rect));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapToItem(item, x, y));
}

void PythonQtWrapper_QGraphicsItem::setVisible(QGraphicsItem* theWrappedObject, bool  visible)
{
  ( theWrappedObject->setVisible(visible));
}

void PythonQtWrapper_QGraphicsItem::ungrabKeyboard(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->ungrabKeyboard());
}

void PythonQtWrapper_QGraphicsItem::setData(QGraphicsItem* theWrappedObject, int  key, const QVariant&  value)
{
  ( theWrappedObject->setData(key, value));
}

qreal  PythonQtWrapper_QGraphicsItem::zValue(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->zValue());
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsItem::collidingItems(QGraphicsItem* theWrappedObject, Qt::ItemSelectionMode  mode) const
{
  return ( theWrappedObject->collidingItems(mode));
}

QTransform  PythonQtWrapper_QGraphicsItem::itemTransform(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, bool*  ok) const
{
  return ( theWrappedObject->itemTransform(other, ok));
}

void PythonQtWrapper_QGraphicsItem::mouseDoubleClickEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_mouseDoubleClickEvent(event));
}

bool  PythonQtWrapper_QGraphicsItem::isUnderMouse(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isUnderMouse());
}

void PythonQtWrapper_QGraphicsItem::advance(QGraphicsItem* theWrappedObject, int  phase)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_advance(phase));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapToItem(item, path));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectToParent(x, y, w, h));
}

bool  PythonQtWrapper_QGraphicsItem::sceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  watched, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_sceneEventFilter(watched, event));
}

QVariant  PythonQtWrapper_QGraphicsItem::inputMethodQuery(QGraphicsItem* theWrappedObject, Qt::InputMethodQuery  query) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_inputMethodQuery(query));
}

void PythonQtWrapper_QGraphicsItem::setParentItem(QGraphicsItem* theWrappedObject, QGraphicsItem*  parent)
{
  ( theWrappedObject->setParentItem(parent));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::topLevelItem(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->topLevelItem());
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsItem::parentWidget(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->parentWidget());
}

void PythonQtWrapper_QGraphicsItem::keyReleaseEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_keyReleaseEvent(event));
}

bool  PythonQtWrapper_QGraphicsItem::isAncestorOf(QGraphicsItem* theWrappedObject, const QGraphicsItem*  child) const
{
  return ( theWrappedObject->isAncestorOf(child));
}

void PythonQtWrapper_QGraphicsItem::ungrabMouse(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->ungrabMouse());
}

qreal  PythonQtWrapper_QGraphicsItem::x(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

void PythonQtWrapper_QGraphicsItem::wheelEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneWheelEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_wheelEvent(event));
}

void PythonQtWrapper_QGraphicsItem::setFocus(QGraphicsItem* theWrappedObject, Qt::FocusReason  focusReason)
{
  ( theWrappedObject->setFocus(focusReason));
}

QList<QGraphicsTransform* >  PythonQtWrapper_QGraphicsItem::transformations(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->transformations());
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapFromParent(rect));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectToParent(rect));
}

QGraphicsItem::GraphicsItemFlags  PythonQtWrapper_QGraphicsItem::flags(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapFromScene(x, y, w, h));
}

void PythonQtWrapper_QGraphicsItem::update(QGraphicsItem* theWrappedObject, const QRectF&  rect)
{
  ( theWrappedObject->update(rect));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapFromItem(item, x, y));
}

bool  PythonQtWrapper_QGraphicsItem::isVisible(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isVisible());
}

void PythonQtWrapper_QGraphicsItem::scroll(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect)
{
  ( theWrappedObject->scroll(dx, dy, rect));
}

QTransform  PythonQtWrapper_QGraphicsItem::sceneTransform(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->sceneTransform());
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItem::focusProxy(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->focusProxy());
}

void PythonQtWrapper_QGraphicsItem::setAcceptsHoverEvents(QGraphicsItem* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAcceptsHoverEvents(enabled));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapFromItem(item, x, y, w, h));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->mapFromScene(point));
}

bool  PythonQtWrapper_QGraphicsItem::isObscured(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->isObscured(rect));
}

QString  PythonQtWrapper_QGraphicsItem::toolTip(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->toolTip());
}

void PythonQtWrapper_QGraphicsItem::setCursor(QGraphicsItem* theWrappedObject, const QCursor&  cursor)
{
  ( theWrappedObject->setCursor(cursor));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectToItem(item, rect));
}

void PythonQtWrapper_QGraphicsItem::setActive(QGraphicsItem* theWrappedObject, bool  active)
{
  ( theWrappedObject->setActive(active));
}

void PythonQtWrapper_QGraphicsItem::setToolTip(QGraphicsItem* theWrappedObject, const QString&  toolTip)
{
  ( theWrappedObject->setToolTip(toolTip));
}

void PythonQtWrapper_QGraphicsItem::setAcceptedMouseButtons(QGraphicsItem* theWrappedObject, Qt::MouseButtons  buttons)
{
  ( theWrappedObject->setAcceptedMouseButtons(buttons));
}

qreal  PythonQtWrapper_QGraphicsItem::scale(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->scale());
}

bool  PythonQtWrapper_QGraphicsItem::acceptTouchEvents(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->acceptTouchEvents());
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapRectFromScene(rect));
}

bool  PythonQtWrapper_QGraphicsItem::isEnabled(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isEnabled());
}

QPainterPath  PythonQtWrapper_QGraphicsItem::opaqueArea(QGraphicsItem* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_opaqueArea());
}

bool  PythonQtWrapper_QGraphicsItem::hasFocus(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->hasFocus());
}

void PythonQtWrapper_QGraphicsItem::ensureVisible(QGraphicsItem* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin)
{
  ( theWrappedObject->ensureVisible(rect, xmargin, ymargin));
}

bool  PythonQtWrapper_QGraphicsItem::sceneEvent(QGraphicsItem* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_sceneEvent(event));
}

bool  PythonQtWrapper_QGraphicsItem::isActive(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

void PythonQtWrapper_QGraphicsItem::dragMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_dragMoveEvent(event));
}

QRegion  PythonQtWrapper_QGraphicsItem::boundingRegion(QGraphicsItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const
{
  return ( theWrappedObject->boundingRegion(itemToDeviceTransform));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapToItem(item, polygon));
}

void PythonQtWrapper_QGraphicsItem::scale(QGraphicsItem* theWrappedObject, qreal  sx, qreal  sy)
{
  ( theWrappedObject->scale(sx, sy));
}

void PythonQtWrapper_QGraphicsItem::setTransformations(QGraphicsItem* theWrappedObject, const QList<QGraphicsTransform* >&  transformations)
{
  ( theWrappedObject->setTransformations(transformations));
}

Qt::InputMethodHints  PythonQtWrapper_QGraphicsItem::inputMethodHints(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->inputMethodHints());
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->mapFromParent(point));
}

void PythonQtWrapper_QGraphicsItem::setPos(QGraphicsItem* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->setPos(x, y));
}

void PythonQtWrapper_QGraphicsItem::grabMouse(QGraphicsItem* theWrappedObject)
{
  ( theWrappedObject->grabMouse());
}

void PythonQtWrapper_QGraphicsItem::setPos(QGraphicsItem* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPos(pos));
}

void PythonQtWrapper_QGraphicsItem::setBoundingRegionGranularity(QGraphicsItem* theWrappedObject, qreal  granularity)
{
  ( theWrappedObject->setBoundingRegionGranularity(granularity));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectFromScene(x, y, w, h));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapToItem(item, x, y, w, h));
}

QGraphicsScene*  PythonQtWrapper_QGraphicsItem::scene(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->scene());
}

QRectF  PythonQtWrapper_QGraphicsItem::sceneBoundingRect(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->sceneBoundingRect());
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectToItem(item, x, y, w, h));
}

QRectF  PythonQtWrapper_QGraphicsItem::mapRectToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
  return ( theWrappedObject->mapRectToScene(x, y, w, h));
}

void PythonQtWrapper_QGraphicsItem::dragEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_dragEnterEvent(event));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const
{
  return ( theWrappedObject->mapToScene(rect));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->mapToParent(point));
}

QPolygonF  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const
{
  return ( theWrappedObject->mapToScene(polygon));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapFromItem(item, path));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapToScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapToScene(path));
}

void PythonQtWrapper_QGraphicsItem::shear(QGraphicsItem* theWrappedObject, qreal  sh, qreal  sv)
{
  ( theWrappedObject->shear(sh, sv));
}

bool  PythonQtWrapper_QGraphicsItem::contains(QGraphicsItem* theWrappedObject, const QPointF&  point) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_contains(point));
}

void PythonQtWrapper_QGraphicsItem::setInputMethodHints(QGraphicsItem* theWrappedObject, Qt::InputMethodHints  hints)
{
  ( theWrappedObject->setInputMethodHints(hints));
}

void PythonQtWrapper_QGraphicsItem::stackBefore(QGraphicsItem* theWrappedObject, const QGraphicsItem*  sibling)
{
  ( theWrappedObject->stackBefore(sibling));
}

void PythonQtWrapper_QGraphicsItem::keyPressEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_keyPressEvent(event));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapFromParent(x, y));
}

bool  PythonQtWrapper_QGraphicsItem::isClipped(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->isClipped());
}

qreal  PythonQtWrapper_QGraphicsItem::rotation(QGraphicsItem* theWrappedObject) const
{
  return ( theWrappedObject->rotation());
}

void PythonQtWrapper_QGraphicsItem::focusOutEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_focusOutEvent(event));
}

void PythonQtWrapper_QGraphicsItem::moveBy(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->moveBy(dx, dy));
}

QPainterPath  PythonQtWrapper_QGraphicsItem::mapFromScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const
{
  return ( theWrappedObject->mapFromScene(path));
}

void PythonQtWrapper_QGraphicsItem::setHandlesChildEvents(QGraphicsItem* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setHandlesChildEvents(enabled));
}

bool  PythonQtWrapper_QGraphicsItem::isBlockedByModalPanel(QGraphicsItem* theWrappedObject, QGraphicsItem**  blockingPanel) const
{
  return ( theWrappedObject->isBlockedByModalPanel(blockingPanel));
}

QPointF  PythonQtWrapper_QGraphicsItem::mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->mapToParent(x, y));
}

void PythonQtWrapper_QGraphicsItem::inputMethodEvent(QGraphicsItem* theWrappedObject, QInputMethodEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->promoted_inputMethodEvent(event));
}

void PythonQtWrapper_QGraphicsItem::setSelected(QGraphicsItem* theWrappedObject, bool  selected)
{
  ( theWrappedObject->setSelected(selected));
}

QString PythonQtWrapper_QGraphicsItem::toString(QGraphicsItem* obj) {
  QString result;
  QDebug d(&result);
  d << obj;
  return result;
}

