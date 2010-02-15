#ifndef PYTHONQTWRAPPER_QCOMBOBOX_H
#define PYTHONQTWRAPPER_QCOMBOBOX_H

#include <qcombobox.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcombobox.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlineedit.h>
#include <qlist.h>
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
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvalidator.h>
#include <qwidget.h>

class PythonQtShell_QComboBox : public QComboBox
{
public:
    PythonQtShell_QComboBox(QWidget*  parent = 0):QComboBox(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  e);
virtual void hidePopup();
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual void resizeEvent(QResizeEvent*  e);
virtual void showEvent(QShowEvent*  e);
virtual void showPopup();
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QComboBox : public QComboBox
{ public:
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QComboBox::inputMethodEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QComboBox::mousePressEvent(e); }
inline void promoted_changeEvent(QEvent*  e) { QComboBox::changeEvent(e); }
inline void promoted_focusInEvent(QFocusEvent*  e) { QComboBox::focusInEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QComboBox::wheelEvent(e); }
inline void promoted_showPopup() { QComboBox::showPopup(); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { QComboBox::focusOutEvent(e); }
inline void promoted_hideEvent(QHideEvent*  e) { QComboBox::hideEvent(e); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { QComboBox::keyPressEvent(e); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QComboBox::resizeEvent(e); }
inline bool  promoted_event(QEvent*  event) { return QComboBox::event(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QComboBox::inputMethodQuery(arg__1); }
inline void promoted_hidePopup() { QComboBox::hidePopup(); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { QComboBox::keyReleaseEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QComboBox::mouseReleaseEvent(e); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { QComboBox::contextMenuEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { QComboBox::paintEvent(e); }
inline void promoted_showEvent(QShowEvent*  e) { QComboBox::showEvent(e); }
};

class PythonQtWrapper_QComboBox : public QObject
{ Q_OBJECT
public:
public slots:
QComboBox* new_QComboBox(QWidget*  parent = 0);
void delete_QComboBox(QComboBox* obj) { delete obj; } 
   void inputMethodEvent(QComboBox* theWrappedObject, QInputMethodEvent*  arg__1);
   int  findData(QComboBox* theWrappedObject, const QVariant&  data, int  role = Qt::UserRole, Qt::MatchFlags  flags = Qt::MatchExactly|Qt::MatchCaseSensitive) const;
   QLineEdit*  lineEdit(QComboBox* theWrappedObject) const;
   void setFrame(QComboBox* theWrappedObject, bool  arg__1);
   void setItemText(QComboBox* theWrappedObject, int  index, const QString&  text);
   void setModelColumn(QComboBox* theWrappedObject, int  visibleColumn);
   void setEditable(QComboBox* theWrappedObject, bool  editable);
   void mousePressEvent(QComboBox* theWrappedObject, QMouseEvent*  e);
   bool  duplicatesEnabled(QComboBox* theWrappedObject) const;
   QSize  minimumSizeHint(QComboBox* theWrappedObject) const;
   void removeItem(QComboBox* theWrappedObject, int  index);
   void changeEvent(QComboBox* theWrappedObject, QEvent*  e);
   void focusInEvent(QComboBox* theWrappedObject, QFocusEvent*  e);
   QAbstractItemModel*  model(QComboBox* theWrappedObject) const;
   QString  currentText(QComboBox* theWrappedObject) const;
   void wheelEvent(QComboBox* theWrappedObject, QWheelEvent*  e);
   QIcon  itemIcon(QComboBox* theWrappedObject, int  index) const;
   QModelIndex  rootModelIndex(QComboBox* theWrappedObject) const;
   void setDuplicatesEnabled(QComboBox* theWrappedObject, bool  enable);
   QAbstractItemView*  view(QComboBox* theWrappedObject) const;
   QComboBox::InsertPolicy  insertPolicy(QComboBox* theWrappedObject) const;
   void setMaxCount(QComboBox* theWrappedObject, int  max);
   int  maxCount(QComboBox* theWrappedObject) const;
   void insertItem(QComboBox* theWrappedObject, int  index, const QIcon&  icon, const QString&  text, const QVariant&  userData = QVariant());
   const QValidator*  validator(QComboBox* theWrappedObject) const;
   void setSizeAdjustPolicy(QComboBox* theWrappedObject, QComboBox::SizeAdjustPolicy  policy);
   void setRootModelIndex(QComboBox* theWrappedObject, const QModelIndex&  index);
   void setItemIcon(QComboBox* theWrappedObject, int  index, const QIcon&  icon);
   QComboBox::SizeAdjustPolicy  sizeAdjustPolicy(QComboBox* theWrappedObject) const;
   void addItems(QComboBox* theWrappedObject, const QStringList&  texts);
   void setMaxVisibleItems(QComboBox* theWrappedObject, int  maxItems);
   void setItemDelegate(QComboBox* theWrappedObject, QAbstractItemDelegate*  delegate);
   void showPopup(QComboBox* theWrappedObject);
   bool  isEditable(QComboBox* theWrappedObject) const;
   QCompleter*  completer(QComboBox* theWrappedObject) const;
   void focusOutEvent(QComboBox* theWrappedObject, QFocusEvent*  e);
   void hideEvent(QComboBox* theWrappedObject, QHideEvent*  e);
   bool  hasFrame(QComboBox* theWrappedObject) const;
   void keyPressEvent(QComboBox* theWrappedObject, QKeyEvent*  e);
   QVariant  itemData(QComboBox* theWrappedObject, int  index, int  role = Qt::UserRole) const;
   int  count(QComboBox* theWrappedObject) const;
   void setMinimumContentsLength(QComboBox* theWrappedObject, int  characters);
   void setIconSize(QComboBox* theWrappedObject, const QSize&  size);
   int  minimumContentsLength(QComboBox* theWrappedObject) const;
   void resizeEvent(QComboBox* theWrappedObject, QResizeEvent*  e);
   void setValidator(QComboBox* theWrappedObject, const QValidator*  v);
   void setLineEdit(QComboBox* theWrappedObject, QLineEdit*  edit);
   void insertItem(QComboBox* theWrappedObject, int  index, const QString&  text, const QVariant&  userData = QVariant());
   QSize  sizeHint(QComboBox* theWrappedObject) const;
   void setCompleter(QComboBox* theWrappedObject, QCompleter*  c);
   bool  event(QComboBox* theWrappedObject, QEvent*  event);
   void setInsertPolicy(QComboBox* theWrappedObject, QComboBox::InsertPolicy  policy);
   QVariant  inputMethodQuery(QComboBox* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   int  modelColumn(QComboBox* theWrappedObject) const;
   int  maxVisibleItems(QComboBox* theWrappedObject) const;
   void setModel(QComboBox* theWrappedObject, QAbstractItemModel*  model);
   void setItemData(QComboBox* theWrappedObject, int  index, const QVariant&  value, int  role = Qt::UserRole);
   void addItem(QComboBox* theWrappedObject, const QString&  text, const QVariant&  userData = QVariant());
   void hidePopup(QComboBox* theWrappedObject);
   void keyReleaseEvent(QComboBox* theWrappedObject, QKeyEvent*  e);
   void mouseReleaseEvent(QComboBox* theWrappedObject, QMouseEvent*  e);
   int  currentIndex(QComboBox* theWrappedObject) const;
   int  findText(QComboBox* theWrappedObject, const QString&  text, Qt::MatchFlags  flags = Qt::MatchExactly|Qt::MatchCaseSensitive) const;
   QAbstractItemDelegate*  itemDelegate(QComboBox* theWrappedObject) const;
   void contextMenuEvent(QComboBox* theWrappedObject, QContextMenuEvent*  e);
   void setView(QComboBox* theWrappedObject, QAbstractItemView*  itemView);
   void paintEvent(QComboBox* theWrappedObject, QPaintEvent*  e);
   void showEvent(QComboBox* theWrappedObject, QShowEvent*  e);
   QSize  iconSize(QComboBox* theWrappedObject) const;
   void addItem(QComboBox* theWrappedObject, const QIcon&  icon, const QString&  text, const QVariant&  userData = QVariant());
   QString  itemText(QComboBox* theWrappedObject, int  index) const;
   void insertItems(QComboBox* theWrappedObject, int  index, const QStringList&  texts);
   void insertSeparator(QComboBox* theWrappedObject, int  index);
};

#endif // PYTHONQTWRAPPER_QCOMBOBOX_H
