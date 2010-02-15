#ifndef PYTHONQTWRAPPER_QMDISUBWINDOW_H
#define PYTHONQTWRAPPER_QMDISUBWINDOW_H

#include <qmdisubwindow.h>
#include <QObject>

#include <PythonQt.h>

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
#include <qmdiarea.h>
#include <qmdisubwindow.h>
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
#include <qwidget.h>

class PythonQtShell_QMdiSubWindow : public QMdiSubWindow
{
public:
    PythonQtShell_QMdiSubWindow(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QMdiSubWindow(parent, flags),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  changeEvent);
virtual void childEvent(QChildEvent*  childEvent);
virtual void closeEvent(QCloseEvent*  closeEvent);
virtual void contextMenuEvent(QContextMenuEvent*  contextMenuEvent);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  focusInEvent);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  focusOutEvent);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  hideEvent);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  keyEvent);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  leaveEvent);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  mouseEvent);
virtual void mouseMoveEvent(QMouseEvent*  mouseEvent);
virtual void mousePressEvent(QMouseEvent*  mouseEvent);
virtual void mouseReleaseEvent(QMouseEvent*  mouseEvent);
virtual void moveEvent(QMoveEvent*  moveEvent);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  paintEvent);
virtual void resizeEvent(QResizeEvent*  resizeEvent);
virtual void showEvent(QShowEvent*  showEvent);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  timerEvent);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMdiSubWindow : public QMdiSubWindow
{ public:
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QMdiSubWindow::eventFilter(object, event); }
inline void promoted_changeEvent(QEvent*  changeEvent) { QMdiSubWindow::changeEvent(changeEvent); }
inline void promoted_childEvent(QChildEvent*  childEvent) { QMdiSubWindow::childEvent(childEvent); }
inline void promoted_focusInEvent(QFocusEvent*  focusInEvent) { QMdiSubWindow::focusInEvent(focusInEvent); }
inline void promoted_closeEvent(QCloseEvent*  closeEvent) { QMdiSubWindow::closeEvent(closeEvent); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  contextMenuEvent) { QMdiSubWindow::contextMenuEvent(contextMenuEvent); }
inline void promoted_moveEvent(QMoveEvent*  moveEvent) { QMdiSubWindow::moveEvent(moveEvent); }
inline void promoted_paintEvent(QPaintEvent*  paintEvent) { QMdiSubWindow::paintEvent(paintEvent); }
inline void promoted_showEvent(QShowEvent*  showEvent) { QMdiSubWindow::showEvent(showEvent); }
inline void promoted_hideEvent(QHideEvent*  hideEvent) { QMdiSubWindow::hideEvent(hideEvent); }
inline void promoted_keyPressEvent(QKeyEvent*  keyEvent) { QMdiSubWindow::keyPressEvent(keyEvent); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseReleaseEvent(mouseEvent); }
inline bool  promoted_event(QEvent*  event) { return QMdiSubWindow::event(event); }
inline void promoted_focusOutEvent(QFocusEvent*  focusOutEvent) { QMdiSubWindow::focusOutEvent(focusOutEvent); }
inline void promoted_timerEvent(QTimerEvent*  timerEvent) { QMdiSubWindow::timerEvent(timerEvent); }
inline void promoted_leaveEvent(QEvent*  leaveEvent) { QMdiSubWindow::leaveEvent(leaveEvent); }
inline void promoted_mouseMoveEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseMoveEvent(mouseEvent); }
inline void promoted_mousePressEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mousePressEvent(mouseEvent); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseDoubleClickEvent(mouseEvent); }
inline void promoted_resizeEvent(QResizeEvent*  resizeEvent) { QMdiSubWindow::resizeEvent(resizeEvent); }
};

class PythonQtWrapper_QMdiSubWindow : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SubWindowOption )
Q_FLAGS(SubWindowOptions )
enum SubWindowOption{
  AllowOutsideAreaHorizontally = QMdiSubWindow::AllowOutsideAreaHorizontally,   AllowOutsideAreaVertically = QMdiSubWindow::AllowOutsideAreaVertically,   RubberBandResize = QMdiSubWindow::RubberBandResize,   RubberBandMove = QMdiSubWindow::RubberBandMove};
Q_DECLARE_FLAGS(SubWindowOptions, SubWindowOption)
public slots:
QMdiSubWindow* new_QMdiSubWindow(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QMdiSubWindow(QMdiSubWindow* obj) { delete obj; } 
   QMenu*  systemMenu(QMdiSubWindow* theWrappedObject) const;
   bool  eventFilter(QMdiSubWindow* theWrappedObject, QObject*  object, QEvent*  event);
   void changeEvent(QMdiSubWindow* theWrappedObject, QEvent*  changeEvent);
   void setKeyboardSingleStep(QMdiSubWindow* theWrappedObject, int  step);
   void childEvent(QMdiSubWindow* theWrappedObject, QChildEvent*  childEvent);
   void setKeyboardPageStep(QMdiSubWindow* theWrappedObject, int  step);
   void setWidget(QMdiSubWindow* theWrappedObject, QWidget*  widget);
   void focusInEvent(QMdiSubWindow* theWrappedObject, QFocusEvent*  focusInEvent);
   int  keyboardSingleStep(QMdiSubWindow* theWrappedObject) const;
   void closeEvent(QMdiSubWindow* theWrappedObject, QCloseEvent*  closeEvent);
   QSize  minimumSizeHint(QMdiSubWindow* theWrappedObject) const;
   QWidget*  maximizedButtonsWidget(QMdiSubWindow* theWrappedObject) const;
   void contextMenuEvent(QMdiSubWindow* theWrappedObject, QContextMenuEvent*  contextMenuEvent);
   void moveEvent(QMdiSubWindow* theWrappedObject, QMoveEvent*  moveEvent);
   void paintEvent(QMdiSubWindow* theWrappedObject, QPaintEvent*  paintEvent);
   QWidget*  maximizedSystemMenuIconWidget(QMdiSubWindow* theWrappedObject) const;
   void showEvent(QMdiSubWindow* theWrappedObject, QShowEvent*  showEvent);
   void hideEvent(QMdiSubWindow* theWrappedObject, QHideEvent*  hideEvent);
   bool  testOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  arg__1) const;
   void keyPressEvent(QMdiSubWindow* theWrappedObject, QKeyEvent*  keyEvent);
   void mouseReleaseEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent);
   bool  event(QMdiSubWindow* theWrappedObject, QEvent*  event);
   QMdiArea*  mdiArea(QMdiSubWindow* theWrappedObject) const;
   void focusOutEvent(QMdiSubWindow* theWrappedObject, QFocusEvent*  focusOutEvent);
   void setSystemMenu(QMdiSubWindow* theWrappedObject, QMenu*  systemMenu);
   void setOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  option, bool  on = true);
   bool  isShaded(QMdiSubWindow* theWrappedObject) const;
   QWidget*  widget(QMdiSubWindow* theWrappedObject) const;
   int  keyboardPageStep(QMdiSubWindow* theWrappedObject) const;
   void timerEvent(QMdiSubWindow* theWrappedObject, QTimerEvent*  timerEvent);
   void leaveEvent(QMdiSubWindow* theWrappedObject, QEvent*  leaveEvent);
   void mouseMoveEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent);
   QSize  sizeHint(QMdiSubWindow* theWrappedObject) const;
   void mousePressEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent);
   void mouseDoubleClickEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent);
   void resizeEvent(QMdiSubWindow* theWrappedObject, QResizeEvent*  resizeEvent);
};

#endif // PYTHONQTWRAPPER_QMDISUBWINDOW_H
