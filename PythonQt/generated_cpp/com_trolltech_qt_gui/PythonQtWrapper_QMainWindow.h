#ifndef PYTHONQTWRAPPER_QMAINWINDOW_H
#define PYTHONQTWRAPPER_QMAINWINDOW_H

#include <qmainwindow.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdockwidget.h>
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
#include <qmainwindow.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qmenubar.h>
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
#include <qstatusbar.h>
#include <qstyle.h>
#include <qtoolbar.h>
#include <qwidget.h>

class PythonQtShell_QMainWindow : public QMainWindow
{
public:
    PythonQtShell_QMainWindow(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QMainWindow(parent, flags),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual QMenu*  createPopupMenu();
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
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
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMainWindow : public QMainWindow
{ public:
inline bool  promoted_event(QEvent*  event) { return QMainWindow::event(event); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { QMainWindow::contextMenuEvent(event); }
inline QMenu*  promoted_createPopupMenu() { return QMainWindow::createPopupMenu(); }
};

class PythonQtWrapper_QMainWindow : public QObject
{ Q_OBJECT
public:
public slots:
QMainWindow* new_QMainWindow(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QMainWindow(QMainWindow* obj) { delete obj; } 
   bool  isAnimated(QMainWindow* theWrappedObject) const;
   QTabWidget::TabShape  tabShape(QMainWindow* theWrappedObject) const;
   bool  restoreDockWidget(QMainWindow* theWrappedObject, QDockWidget*  dockwidget);
   Qt::DockWidgetArea  dockWidgetArea(QMainWindow* theWrappedObject, QDockWidget*  dockwidget) const;
   void setTabPosition(QMainWindow* theWrappedObject, Qt::DockWidgetAreas  areas, QTabWidget::TabPosition  tabPosition);
   QByteArray  saveState(QMainWindow* theWrappedObject, int  version = 0) const;
   void setCorner(QMainWindow* theWrappedObject, Qt::Corner  corner, Qt::DockWidgetArea  area);
   QSize  iconSize(QMainWindow* theWrappedObject) const;
   void setUnifiedTitleAndToolBarOnMac(QMainWindow* theWrappedObject, bool  set);
   void splitDockWidget(QMainWindow* theWrappedObject, QDockWidget*  after, QDockWidget*  dockwidget, Qt::Orientation  orientation);
   QStatusBar*  statusBar(QMainWindow* theWrappedObject) const;
   void setStatusBar(QMainWindow* theWrappedObject, QStatusBar*  statusbar);
   bool  event(QMainWindow* theWrappedObject, QEvent*  event);
   void setTabShape(QMainWindow* theWrappedObject, QTabWidget::TabShape  tabShape);
   bool  restoreState(QMainWindow* theWrappedObject, const QByteArray&  state, int  version = 0);
   void addToolBar(QMainWindow* theWrappedObject, Qt::ToolBarArea  area, QToolBar*  toolbar);
   bool  isSeparator(QMainWindow* theWrappedObject, const QPoint&  pos) const;
   void setMenuWidget(QMainWindow* theWrappedObject, QWidget*  menubar);
   void removeDockWidget(QMainWindow* theWrappedObject, QDockWidget*  dockwidget);
   QTabWidget::TabPosition  tabPosition(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area) const;
   void removeToolBar(QMainWindow* theWrappedObject, QToolBar*  toolbar);
   void setToolButtonStyle(QMainWindow* theWrappedObject, Qt::ToolButtonStyle  toolButtonStyle);
   QList<QDockWidget* >  tabifiedDockWidgets(QMainWindow* theWrappedObject, QDockWidget*  dockwidget) const;
   Qt::ToolButtonStyle  toolButtonStyle(QMainWindow* theWrappedObject) const;
   bool  isDockNestingEnabled(QMainWindow* theWrappedObject) const;
   QMenuBar*  menuBar(QMainWindow* theWrappedObject) const;
   void addToolBarBreak(QMainWindow* theWrappedObject, Qt::ToolBarArea  area = Qt::TopToolBarArea);
   Qt::DockWidgetArea  corner(QMainWindow* theWrappedObject, Qt::Corner  corner) const;
   void insertToolBarBreak(QMainWindow* theWrappedObject, QToolBar*  before);
   void setIconSize(QMainWindow* theWrappedObject, const QSize&  iconSize);
   void contextMenuEvent(QMainWindow* theWrappedObject, QContextMenuEvent*  event);
   void addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget, Qt::Orientation  orientation);
   void setMenuBar(QMainWindow* theWrappedObject, QMenuBar*  menubar);
   void removeToolBarBreak(QMainWindow* theWrappedObject, QToolBar*  before);
   void setDockOptions(QMainWindow* theWrappedObject, QMainWindow::DockOptions  options);
   void setDocumentMode(QMainWindow* theWrappedObject, bool  enabled);
   QWidget*  menuWidget(QMainWindow* theWrappedObject) const;
   QToolBar*  addToolBar(QMainWindow* theWrappedObject, const QString&  title);
   QMenu*  createPopupMenu(QMainWindow* theWrappedObject);
   bool  documentMode(QMainWindow* theWrappedObject) const;
   void tabifyDockWidget(QMainWindow* theWrappedObject, QDockWidget*  first, QDockWidget*  second);
   bool  toolBarBreak(QMainWindow* theWrappedObject, QToolBar*  toolbar) const;
   QMainWindow::DockOptions  dockOptions(QMainWindow* theWrappedObject) const;
   QWidget*  centralWidget(QMainWindow* theWrappedObject) const;
   bool  unifiedTitleAndToolBarOnMac(QMainWindow* theWrappedObject) const;
   Qt::ToolBarArea  toolBarArea(QMainWindow* theWrappedObject, QToolBar*  toolbar) const;
   void insertToolBar(QMainWindow* theWrappedObject, QToolBar*  before, QToolBar*  toolbar);
   void setCentralWidget(QMainWindow* theWrappedObject, QWidget*  widget);
   void addToolBar(QMainWindow* theWrappedObject, QToolBar*  toolbar);
   void addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget);
};

#endif // PYTHONQTWRAPPER_QMAINWINDOW_H
