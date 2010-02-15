#ifndef PYTHONQTWRAPPER_QLISTVIEW_H
#define PYTHONQTWRAPPER_QLISTVIEW_H

#include <qlistview.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlistview.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QListView : public QListView
{
public:
    PythonQtShell_QListView(QWidget*  parent = 0):QListView(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void commitData(QWidget*  editor);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void customEvent(QEvent*  arg__1);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual int  devType() const;
virtual void doItemsLayout();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void editorDestroyed(QObject*  editor);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual int  horizontalOffset() const;
virtual void horizontalScrollbarAction(int  action);
virtual void horizontalScrollbarValueChanged(int  value);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void keyboardSearch(const QString&  search);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual void reset();
virtual void resizeEvent(QResizeEvent*  e);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual void selectAll();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void setModel(QAbstractItemModel*  model);
virtual void setRootIndex(const QModelIndex&  index);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void showEvent(QShowEvent*  arg__1);
virtual int  sizeHintForColumn(int  column) const;
virtual int  sizeHintForRow(int  row) const;
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual void updateEditorData();
virtual void updateEditorGeometries();
virtual void updateGeometries();
virtual int  verticalOffset() const;
virtual void verticalScrollbarAction(int  action);
virtual void verticalScrollbarValueChanged(int  value);
virtual QStyleOptionViewItem  viewOptions() const;
virtual bool  viewportEvent(QEvent*  event);
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QListView : public QListView
{ public:
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QListView::visualRegionForSelection(selection); }
inline bool  promoted_event(QEvent*  e) { return QListView::event(e); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QListView::resizeEvent(e); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QListView::rowsInserted(parent, start, end); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QListView::selectionChanged(selected, deselected); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QListView::isIndexHidden(index); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return QListView::indexAt(p); }
inline void promoted_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { QListView::rowsAboutToBeRemoved(parent, start, end); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QListView::currentChanged(current, previous); }
inline int  promoted_horizontalOffset() const { return QListView::horizontalOffset(); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QListView::scrollContentsBy(dx, dy); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { QListView::dragLeaveEvent(e); }
inline void promoted_reset() { QListView::reset(); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QListView::mouseMoveEvent(e); }
inline void promoted_startDrag(Qt::DropActions  supportedActions) { QListView::startDrag(supportedActions); }
inline void promoted_doItemsLayout() { QListView::doItemsLayout(); }
inline void promoted_updateGeometries() { QListView::updateGeometries(); }
inline void promoted_timerEvent(QTimerEvent*  e) { QListView::timerEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { QListView::dragMoveEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { QListView::dropEvent(e); }
inline void promoted_setRootIndex(const QModelIndex&  index) { QListView::setRootIndex(index); }
inline void promoted_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight) { QListView::dataChanged(topLeft, bottomRight); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QListView::visualRect(index); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QListView::mouseReleaseEvent(e); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return QListView::selectedIndexes(); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QListView::setSelection(rect, command); }
inline int  promoted_verticalOffset() const { return QListView::verticalOffset(); }
inline void promoted_paintEvent(QPaintEvent*  e) { QListView::paintEvent(e); }
inline QStyleOptionViewItem  promoted_viewOptions() const { return QListView::viewOptions(); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QListView::scrollTo(index, hint); }
};

class PythonQtWrapper_QListView : public QObject
{ Q_OBJECT
public:
public slots:
QListView* new_QListView(QWidget*  parent = 0);
void delete_QListView(QListView* obj) { delete obj; } 
   void setViewMode(QListView* theWrappedObject, QListView::ViewMode  mode);
   QRegion  visualRegionForSelection(QListView* theWrappedObject, const QItemSelection&  selection) const;
   bool  event(QListView* theWrappedObject, QEvent*  e);
   void setBatchSize(QListView* theWrappedObject, int  batchSize);
   void resizeEvent(QListView* theWrappedObject, QResizeEvent*  e);
   void rowsInserted(QListView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   bool  isRowHidden(QListView* theWrappedObject, int  row) const;
   void selectionChanged(QListView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected);
   bool  isIndexHidden(QListView* theWrappedObject, const QModelIndex&  index) const;
   QModelIndex  indexAt(QListView* theWrappedObject, const QPoint&  p) const;
   QListView::Flow  flow(QListView* theWrappedObject) const;
   void setMovement(QListView* theWrappedObject, QListView::Movement  movement);
   void rowsAboutToBeRemoved(QListView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   void currentChanged(QListView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous);
   int  horizontalOffset(QListView* theWrappedObject) const;
   void scrollContentsBy(QListView* theWrappedObject, int  dx, int  dy);
   void dragLeaveEvent(QListView* theWrappedObject, QDragLeaveEvent*  e);
   void setLayoutMode(QListView* theWrappedObject, QListView::LayoutMode  mode);
   void setWrapping(QListView* theWrappedObject, bool  enable);
   void clearPropertyFlags(QListView* theWrappedObject);
   bool  uniformItemSizes(QListView* theWrappedObject) const;
   void reset(QListView* theWrappedObject);
   void mouseMoveEvent(QListView* theWrappedObject, QMouseEvent*  e);
   void startDrag(QListView* theWrappedObject, Qt::DropActions  supportedActions);
   void doItemsLayout(QListView* theWrappedObject);
   void setResizeMode(QListView* theWrappedObject, QListView::ResizeMode  mode);
   QListView::ResizeMode  resizeMode(QListView* theWrappedObject) const;
   void updateGeometries(QListView* theWrappedObject);
   int  batchSize(QListView* theWrappedObject) const;
   void timerEvent(QListView* theWrappedObject, QTimerEvent*  e);
   void dragMoveEvent(QListView* theWrappedObject, QDragMoveEvent*  e);
   void dropEvent(QListView* theWrappedObject, QDropEvent*  e);
   bool  isWrapping(QListView* theWrappedObject) const;
   int  spacing(QListView* theWrappedObject) const;
   void setUniformItemSizes(QListView* theWrappedObject, bool  enable);
   void setRootIndex(QListView* theWrappedObject, const QModelIndex&  index);
   void setSpacing(QListView* theWrappedObject, int  space);
   void dataChanged(QListView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   QRect  visualRect(QListView* theWrappedObject, const QModelIndex&  index) const;
   void mouseReleaseEvent(QListView* theWrappedObject, QMouseEvent*  e);
   QListView::LayoutMode  layoutMode(QListView* theWrappedObject) const;
   void setFlow(QListView* theWrappedObject, QListView::Flow  flow);
   QList<QModelIndex >  selectedIndexes(QListView* theWrappedObject) const;
   QListView::Movement  movement(QListView* theWrappedObject) const;
   QListView::ViewMode  viewMode(QListView* theWrappedObject) const;
   void setRowHidden(QListView* theWrappedObject, int  row, bool  hide);
   void setSelectionRectVisible(QListView* theWrappedObject, bool  show);
   void setGridSize(QListView* theWrappedObject, const QSize&  size);
   void setWordWrap(QListView* theWrappedObject, bool  on);
   void setSelection(QListView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
   int  verticalOffset(QListView* theWrappedObject) const;
   bool  wordWrap(QListView* theWrappedObject) const;
   int  modelColumn(QListView* theWrappedObject) const;
   void paintEvent(QListView* theWrappedObject, QPaintEvent*  e);
   bool  isSelectionRectVisible(QListView* theWrappedObject) const;
   void setModelColumn(QListView* theWrappedObject, int  column);
   QStyleOptionViewItem  viewOptions(QListView* theWrappedObject) const;
   QSize  gridSize(QListView* theWrappedObject) const;
   void scrollTo(QListView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
};

#endif // PYTHONQTWRAPPER_QLISTVIEW_H
