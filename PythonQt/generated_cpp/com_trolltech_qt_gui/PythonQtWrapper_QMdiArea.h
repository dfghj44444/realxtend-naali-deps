#ifndef PYTHONQTWRAPPER_QMDIAREA_H
#define PYTHONQTWRAPPER_QMDIAREA_H

#include <qmdiarea.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbrush.h>
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
#include <qwidget.h>

class PythonQtShell_QMdiArea : public QMdiArea
{
public:
    PythonQtShell_QMdiArea(QWidget*  parent = 0):QMdiArea(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  childEvent);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
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
virtual void paintEvent(QPaintEvent*  paintEvent);
virtual void resizeEvent(QResizeEvent*  resizeEvent);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void showEvent(QShowEvent*  showEvent);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  timerEvent);
virtual bool  viewportEvent(QEvent*  event);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMdiArea : public QMdiArea
{ public:
inline void promoted_childEvent(QChildEvent*  childEvent) { QMdiArea::childEvent(childEvent); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QMdiArea::scrollContentsBy(dx, dy); }
inline void promoted_showEvent(QShowEvent*  showEvent) { QMdiArea::showEvent(showEvent); }
inline bool  promoted_event(QEvent*  event) { return QMdiArea::event(event); }
inline void promoted_resizeEvent(QResizeEvent*  resizeEvent) { QMdiArea::resizeEvent(resizeEvent); }
inline void promoted_timerEvent(QTimerEvent*  timerEvent) { QMdiArea::timerEvent(timerEvent); }
inline bool  promoted_viewportEvent(QEvent*  event) { return QMdiArea::viewportEvent(event); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QMdiArea::eventFilter(object, event); }
inline void promoted_paintEvent(QPaintEvent*  paintEvent) { QMdiArea::paintEvent(paintEvent); }
};

class PythonQtWrapper_QMdiArea : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AreaOption )
Q_FLAGS(AreaOptions )
enum AreaOption{
  DontMaximizeSubWindowOnActivation = QMdiArea::DontMaximizeSubWindowOnActivation};
Q_DECLARE_FLAGS(AreaOptions, AreaOption)
public slots:
QMdiArea* new_QMdiArea(QWidget*  parent = 0);
void delete_QMdiArea(QMdiArea* obj) { delete obj; } 
   bool  testOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  opton) const;
   QSize  minimumSizeHint(QMdiArea* theWrappedObject) const;
   QMdiArea::ViewMode  viewMode(QMdiArea* theWrappedObject) const;
   void childEvent(QMdiArea* theWrappedObject, QChildEvent*  childEvent);
   void scrollContentsBy(QMdiArea* theWrappedObject, int  dx, int  dy);
   void showEvent(QMdiArea* theWrappedObject, QShowEvent*  showEvent);
   QList<QMdiSubWindow* >  subWindowList(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order = QMdiArea::CreationOrder) const;
   void setActivationOrder(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order);
   QSize  sizeHint(QMdiArea* theWrappedObject) const;
   void setOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  option, bool  on = true);
   QTabWidget::TabShape  tabShape(QMdiArea* theWrappedObject) const;
   void removeSubWindow(QMdiArea* theWrappedObject, QWidget*  widget);
   QTabWidget::TabPosition  tabPosition(QMdiArea* theWrappedObject) const;
   void setTabShape(QMdiArea* theWrappedObject, QTabWidget::TabShape  shape);
   QMdiArea::WindowOrder  activationOrder(QMdiArea* theWrappedObject) const;
   bool  event(QMdiArea* theWrappedObject, QEvent*  event);
   void resizeEvent(QMdiArea* theWrappedObject, QResizeEvent*  resizeEvent);
   void setTabPosition(QMdiArea* theWrappedObject, QTabWidget::TabPosition  position);
   void setBackground(QMdiArea* theWrappedObject, const QBrush&  background);
   void timerEvent(QMdiArea* theWrappedObject, QTimerEvent*  timerEvent);
   bool  viewportEvent(QMdiArea* theWrappedObject, QEvent*  event);
   QMdiSubWindow*  activeSubWindow(QMdiArea* theWrappedObject) const;
   void setViewMode(QMdiArea* theWrappedObject, QMdiArea::ViewMode  mode);
   QMdiSubWindow*  addSubWindow(QMdiArea* theWrappedObject, QWidget*  widget, Qt::WindowFlags  flags = 0);
   void setDocumentMode(QMdiArea* theWrappedObject, bool  enabled);
   QBrush  background(QMdiArea* theWrappedObject) const;
   bool  eventFilter(QMdiArea* theWrappedObject, QObject*  object, QEvent*  event);
   void paintEvent(QMdiArea* theWrappedObject, QPaintEvent*  paintEvent);
   bool  documentMode(QMdiArea* theWrappedObject) const;
   QMdiSubWindow*  currentSubWindow(QMdiArea* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QMDIAREA_H