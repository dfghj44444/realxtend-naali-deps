#ifndef PYTHONQTWRAPPER_QPLAINTEXTEDIT_H
#define PYTHONQTWRAPPER_QPLAINTEXTEDIT_H

#include <qplaintextedit.h>
#include <QObject>

#include <PythonQt.h>

#include <QAbstractTextDocumentLayout>
#include <QTextEdit>
#include <QVariant>
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
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qplaintextedit.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qurl.h>
#include <qwidget.h>

class PythonQtShell_QPlainTextEdit : public QPlainTextEdit
{
public:
    PythonQtShell_QPlainTextEdit(QWidget*  parent = 0):QPlainTextEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QPlainTextEdit(const QString&  text, QWidget*  parent = 0):QPlainTextEdit(text, parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual bool  canInsertFromMimeData(const QMimeData*  source) const;
virtual void changeEvent(QEvent*  e);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual QMimeData*  createMimeDataFromSelection() const;
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  e);
virtual void dragLeaveEvent(QDragLeaveEvent*  e);
virtual void dragMoveEvent(QDragMoveEvent*  e);
virtual void dropEvent(QDropEvent*  e);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  e);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  e);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual void insertFromMimeData(const QMimeData*  source);
virtual void keyPressEvent(QKeyEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual QVariant  loadResource(int  type, const QUrl&  name);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual void resizeEvent(QResizeEvent*  e);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  e);
virtual bool  viewportEvent(QEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPlainTextEdit : public QPlainTextEdit
{ public:
inline void promoted_timerEvent(QTimerEvent*  e) { QPlainTextEdit::timerEvent(e); }
inline void promoted_changeEvent(QEvent*  e) { QPlainTextEdit::changeEvent(e); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { QPlainTextEdit::keyPressEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QPlainTextEdit::wheelEvent(e); }
inline bool  promoted_event(QEvent*  e) { return QPlainTextEdit::event(e); }
inline void promoted_insertFromMimeData(const QMimeData*  source) { QPlainTextEdit::insertFromMimeData(source); }
inline void promoted_dropEvent(QDropEvent*  e) { QPlainTextEdit::dropEvent(e); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QPlainTextEdit::showEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  e) { QPlainTextEdit::mouseMoveEvent(e); }
inline void promoted_paintEvent(QPaintEvent*  e) { QPlainTextEdit::paintEvent(e); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QPlainTextEdit::inputMethodEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QPlainTextEdit::mousePressEvent(e); }
inline bool  promoted_canInsertFromMimeData(const QMimeData*  source) const { return QPlainTextEdit::canInsertFromMimeData(source); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QPlainTextEdit::resizeEvent(e); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { QPlainTextEdit::dragLeaveEvent(e); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QPlainTextEdit::mouseReleaseEvent(e); }
inline QVariant  promoted_loadResource(int  type, const QUrl&  name) { return QPlainTextEdit::loadResource(type, name); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  e) { QPlainTextEdit::dragEnterEvent(e); }
inline void promoted_focusInEvent(QFocusEvent*  e) { QPlainTextEdit::focusInEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { QPlainTextEdit::keyReleaseEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { QPlainTextEdit::dragMoveEvent(e); }
inline QMimeData*  promoted_createMimeDataFromSelection() const { return QPlainTextEdit::createMimeDataFromSelection(); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  e) { QPlainTextEdit::mouseDoubleClickEvent(e); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QPlainTextEdit::scrollContentsBy(dx, dy); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QPlainTextEdit::focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { QPlainTextEdit::focusOutEvent(e); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { QPlainTextEdit::contextMenuEvent(e); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  property) const { return QPlainTextEdit::inputMethodQuery(property); }
};

class PythonQtWrapper_QPlainTextEdit : public QObject
{ Q_OBJECT
public:
public slots:
QPlainTextEdit* new_QPlainTextEdit(QWidget*  parent = 0);
QPlainTextEdit* new_QPlainTextEdit(const QString&  text, QWidget*  parent = 0);
void delete_QPlainTextEdit(QPlainTextEdit* obj) { delete obj; } 
   void timerEvent(QPlainTextEdit* theWrappedObject, QTimerEvent*  e);
   void setBackgroundVisible(QPlainTextEdit* theWrappedObject, bool  visible);
   void mergeCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  modifier);
   QTextCharFormat  currentCharFormat(QPlainTextEdit* theWrappedObject) const;
   QString  documentTitle(QPlainTextEdit* theWrappedObject) const;
   void changeEvent(QPlainTextEdit* theWrappedObject, QEvent*  e);
   void ensureCursorVisible(QPlainTextEdit* theWrappedObject);
   void keyPressEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e);
   void wheelEvent(QPlainTextEdit* theWrappedObject, QWheelEvent*  e);
   bool  isReadOnly(QPlainTextEdit* theWrappedObject) const;
   bool  event(QPlainTextEdit* theWrappedObject, QEvent*  e);
   void insertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source);
   int  maximumBlockCount(QPlainTextEdit* theWrappedObject) const;
   void dropEvent(QPlainTextEdit* theWrappedObject, QDropEvent*  e);
   void setCursorWidth(QPlainTextEdit* theWrappedObject, int  width);
   void showEvent(QPlainTextEdit* theWrappedObject, QShowEvent*  arg__1);
   bool  find(QPlainTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options = 0);
   QString  toPlainText(QPlainTextEdit* theWrappedObject) const;
   void mouseMoveEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
   QRect  cursorRect(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor) const;
   QTextCursor  textCursor(QPlainTextEdit* theWrappedObject) const;
   void setDocument(QPlainTextEdit* theWrappedObject, QTextDocument*  document);
   bool  tabChangesFocus(QPlainTextEdit* theWrappedObject) const;
   int  cursorWidth(QPlainTextEdit* theWrappedObject) const;
   void paintEvent(QPlainTextEdit* theWrappedObject, QPaintEvent*  e);
   void inputMethodEvent(QPlainTextEdit* theWrappedObject, QInputMethodEvent*  arg__1);
   void mousePressEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
   QRect  cursorRect(QPlainTextEdit* theWrappedObject) const;
   bool  canInsertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source) const;
   void setReadOnly(QPlainTextEdit* theWrappedObject, bool  ro);
   void resizeEvent(QPlainTextEdit* theWrappedObject, QResizeEvent*  e);
   void setWordWrapMode(QPlainTextEdit* theWrappedObject, QTextOption::WrapMode  policy);
   void dragLeaveEvent(QPlainTextEdit* theWrappedObject, QDragLeaveEvent*  e);
   void setOverwriteMode(QPlainTextEdit* theWrappedObject, bool  overwrite);
   QTextOption::WrapMode  wordWrapMode(QPlainTextEdit* theWrappedObject) const;
   void setTextInteractionFlags(QPlainTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags);
   QMenu*  createStandardContextMenu(QPlainTextEdit* theWrappedObject);
   void setCenterOnScroll(QPlainTextEdit* theWrappedObject, bool  enabled);
   int  tabStopWidth(QPlainTextEdit* theWrappedObject) const;
   void mouseReleaseEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
   bool  overwriteMode(QPlainTextEdit* theWrappedObject) const;
   QVariant  loadResource(QPlainTextEdit* theWrappedObject, int  type, const QUrl&  name);
   bool  canPaste(QPlainTextEdit* theWrappedObject) const;
   QList<QTextEdit::ExtraSelection >  extraSelections(QPlainTextEdit* theWrappedObject) const;
   void dragEnterEvent(QPlainTextEdit* theWrappedObject, QDragEnterEvent*  e);
   QTextCursor  cursorForPosition(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const;
   void setDocumentTitle(QPlainTextEdit* theWrappedObject, const QString&  title);
   bool  centerOnScroll(QPlainTextEdit* theWrappedObject) const;
   void setTabStopWidth(QPlainTextEdit* theWrappedObject, int  width);
   void focusInEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e);
   void keyReleaseEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e);
   void dragMoveEvent(QPlainTextEdit* theWrappedObject, QDragMoveEvent*  e);
   void setUndoRedoEnabled(QPlainTextEdit* theWrappedObject, bool  enable);
   QMimeData*  createMimeDataFromSelection(QPlainTextEdit* theWrappedObject) const;
   QPlainTextEdit::LineWrapMode  lineWrapMode(QPlainTextEdit* theWrappedObject) const;
   QTextDocument*  document(QPlainTextEdit* theWrappedObject) const;
   void mouseDoubleClickEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e);
   void setLineWrapMode(QPlainTextEdit* theWrappedObject, QPlainTextEdit::LineWrapMode  mode);
   void scrollContentsBy(QPlainTextEdit* theWrappedObject, int  dx, int  dy);
   void setTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor);
   void print(QPlainTextEdit* theWrappedObject, QPrinter*  printer) const;
   bool  isUndoRedoEnabled(QPlainTextEdit* theWrappedObject) const;
   bool  focusNextPrevChild(QPlainTextEdit* theWrappedObject, bool  next);
   void focusOutEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e);
   void contextMenuEvent(QPlainTextEdit* theWrappedObject, QContextMenuEvent*  e);
   bool  backgroundVisible(QPlainTextEdit* theWrappedObject) const;
   void setTabChangesFocus(QPlainTextEdit* theWrappedObject, bool  b);
   void setMaximumBlockCount(QPlainTextEdit* theWrappedObject, int  maximum);
   Qt::TextInteractionFlags  textInteractionFlags(QPlainTextEdit* theWrappedObject) const;
   QVariant  inputMethodQuery(QPlainTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const;
   void setCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  format);
   void setExtraSelections(QPlainTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections);
   void moveCursor(QPlainTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode = QTextCursor::MoveAnchor);
   int  blockCount(QPlainTextEdit* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPLAINTEXTEDIT_H
