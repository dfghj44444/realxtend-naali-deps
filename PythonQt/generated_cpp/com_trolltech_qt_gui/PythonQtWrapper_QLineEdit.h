#ifndef PYTHONQTWRAPPER_QLINEEDIT_H
#define PYTHONQTWRAPPER_QLINEEDIT_H

#include <qlineedit.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
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
#include <qmenu.h>
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
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvalidator.h>
#include <qwidget.h>

class PythonQtShell_QLineEdit : public QLineEdit
{
public:
    PythonQtShell_QLineEdit(QWidget*  parent = 0):QLineEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QLineEdit(const QString&  arg__1, QWidget*  parent = 0):QLineEdit(arg__1, parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLineEdit : public QLineEdit
{ public:
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QLineEdit::inputMethodEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QLineEdit::mouseMoveEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QLineEdit::keyPressEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QLineEdit::changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QLineEdit::event(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QLineEdit::inputMethodQuery(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { QLineEdit::dragLeaveEvent(e); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QLineEdit::dragEnterEvent(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { QLineEdit::dropEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QLineEdit::paintEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QLineEdit::focusOutEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QLineEdit::mouseReleaseEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QLineEdit::mousePressEvent(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QLineEdit::focusInEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QLineEdit::contextMenuEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { QLineEdit::dragMoveEvent(e); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QLineEdit::mouseDoubleClickEvent(arg__1); }
};

class PythonQtWrapper_QLineEdit : public QObject
{ Q_OBJECT
public:
public slots:
QLineEdit* new_QLineEdit(QWidget*  parent = 0);
QLineEdit* new_QLineEdit(const QString&  arg__1, QWidget*  parent = 0);
void delete_QLineEdit(QLineEdit* obj) { delete obj; } 
   void setCompleter(QLineEdit* theWrappedObject, QCompleter*  completer);
   QString  text(QLineEdit* theWrappedObject) const;
   void inputMethodEvent(QLineEdit* theWrappedObject, QInputMethodEvent*  arg__1);
   void setTextMargins(QLineEdit* theWrappedObject, const QMargins&  margins);
   QString  inputMask(QLineEdit* theWrappedObject) const;
   QMargins  textMargins(QLineEdit* theWrappedObject) const;
   bool  dragEnabled(QLineEdit* theWrappedObject) const;
   void setValidator(QLineEdit* theWrappedObject, const QValidator*  arg__1);
   void setAlignment(QLineEdit* theWrappedObject, Qt::Alignment  flag);
   void end(QLineEdit* theWrappedObject, bool  mark);
   void setReadOnly(QLineEdit* theWrappedObject, bool  arg__1);
   Qt::Alignment  alignment(QLineEdit* theWrappedObject) const;
   void mouseMoveEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   int  maxLength(QLineEdit* theWrappedObject) const;
   void cursorWordBackward(QLineEdit* theWrappedObject, bool  mark);
   void setFrame(QLineEdit* theWrappedObject, bool  arg__1);
   bool  hasAcceptableInput(QLineEdit* theWrappedObject) const;
   QString  selectedText(QLineEdit* theWrappedObject) const;
   QLineEdit::EchoMode  echoMode(QLineEdit* theWrappedObject) const;
   void keyPressEvent(QLineEdit* theWrappedObject, QKeyEvent*  arg__1);
   QSize  sizeHint(QLineEdit* theWrappedObject) const;
   bool  isUndoAvailable(QLineEdit* theWrappedObject) const;
   void changeEvent(QLineEdit* theWrappedObject, QEvent*  arg__1);
   const QValidator*  validator(QLineEdit* theWrappedObject) const;
   QSize  minimumSizeHint(QLineEdit* theWrappedObject) const;
   bool  event(QLineEdit* theWrappedObject, QEvent*  arg__1);
   QVariant  inputMethodQuery(QLineEdit* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void del(QLineEdit* theWrappedObject);
   void dragLeaveEvent(QLineEdit* theWrappedObject, QDragLeaveEvent*  e);
   void setEchoMode(QLineEdit* theWrappedObject, QLineEdit::EchoMode  arg__1);
   void deselect(QLineEdit* theWrappedObject);
   void dragEnterEvent(QLineEdit* theWrappedObject, QDragEnterEvent*  arg__1);
   void dropEvent(QLineEdit* theWrappedObject, QDropEvent*  arg__1);
   bool  isReadOnly(QLineEdit* theWrappedObject) const;
   void setSelection(QLineEdit* theWrappedObject, int  arg__1, int  arg__2);
   bool  isModified(QLineEdit* theWrappedObject) const;
   QMenu*  createStandardContextMenu(QLineEdit* theWrappedObject);
   bool  hasFrame(QLineEdit* theWrappedObject) const;
   void home(QLineEdit* theWrappedObject, bool  mark);
   void setCursorPosition(QLineEdit* theWrappedObject, int  arg__1);
   void insert(QLineEdit* theWrappedObject, const QString&  arg__1);
   bool  isRedoAvailable(QLineEdit* theWrappedObject) const;
   void paintEvent(QLineEdit* theWrappedObject, QPaintEvent*  arg__1);
   void focusOutEvent(QLineEdit* theWrappedObject, QFocusEvent*  arg__1);
   void setDragEnabled(QLineEdit* theWrappedObject, bool  b);
   void cursorWordForward(QLineEdit* theWrappedObject, bool  mark);
   void setModified(QLineEdit* theWrappedObject, bool  arg__1);
   void mouseReleaseEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   void setTextMargins(QLineEdit* theWrappedObject, int  left, int  top, int  right, int  bottom);
   int  selectionStart(QLineEdit* theWrappedObject) const;
   void setMaxLength(QLineEdit* theWrappedObject, int  arg__1);
   void mousePressEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
   int  cursorPosition(QLineEdit* theWrappedObject) const;
   void setInputMask(QLineEdit* theWrappedObject, const QString&  inputMask);
   QCompleter*  completer(QLineEdit* theWrappedObject) const;
   int  cursorPositionAt(QLineEdit* theWrappedObject, const QPoint&  pos);
   void cursorForward(QLineEdit* theWrappedObject, bool  mark, int  steps = 1);
   void focusInEvent(QLineEdit* theWrappedObject, QFocusEvent*  arg__1);
   bool  hasSelectedText(QLineEdit* theWrappedObject) const;
   QString  displayText(QLineEdit* theWrappedObject) const;
   void cursorBackward(QLineEdit* theWrappedObject, bool  mark, int  steps = 1);
   void contextMenuEvent(QLineEdit* theWrappedObject, QContextMenuEvent*  arg__1);
   void backspace(QLineEdit* theWrappedObject);
   void getTextMargins(QLineEdit* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const;
   void dragMoveEvent(QLineEdit* theWrappedObject, QDragMoveEvent*  e);
   void mouseDoubleClickEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1);
};

#endif // PYTHONQTWRAPPER_QLINEEDIT_H
