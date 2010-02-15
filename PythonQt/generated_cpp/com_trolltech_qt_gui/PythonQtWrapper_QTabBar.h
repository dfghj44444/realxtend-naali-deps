#ifndef PYTHONQTWRAPPER_QTABBAR_H
#define PYTHONQTWRAPPER_QTABBAR_H

#include <qtabbar.h>
#include <QObject>

#include <PythonQt.h>

#include <QIcon>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
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
#include <qtabbar.h>
#include <qwidget.h>

class PythonQtShell_QTabBar : public QTabBar
{
public:
    PythonQtShell_QTabBar(QWidget*  parent = 0):QTabBar(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
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
virtual void tabInserted(int  index);
virtual void tabLayoutChange();
virtual void tabRemoved(int  index);
virtual QSize  tabSizeHint(int  index) const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTabBar : public QTabBar
{ public:
inline void promoted_tabLayoutChange() { QTabBar::tabLayoutChange(); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QTabBar::mouseMoveEvent(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { QTabBar::hideEvent(arg__1); }
inline void promoted_tabInserted(int  index) { QTabBar::tabInserted(index); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QTabBar::mouseReleaseEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  event) { QTabBar::wheelEvent(event); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QTabBar::keyPressEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QTabBar::showEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QTabBar::resizeEvent(arg__1); }
inline QSize  promoted_tabSizeHint(int  index) const { return QTabBar::tabSizeHint(index); }
inline bool  promoted_event(QEvent*  arg__1) { return QTabBar::event(arg__1); }
inline void promoted_tabRemoved(int  index) { QTabBar::tabRemoved(index); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QTabBar::paintEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QTabBar::mousePressEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QTabBar::changeEvent(arg__1); }
};

class PythonQtWrapper_QTabBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SelectionBehavior ButtonPosition )
enum SelectionBehavior{
  SelectLeftTab = QTabBar::SelectLeftTab,   SelectRightTab = QTabBar::SelectRightTab,   SelectPreviousTab = QTabBar::SelectPreviousTab};
enum ButtonPosition{
  LeftSide = QTabBar::LeftSide,   RightSide = QTabBar::RightSide};
public slots:
QTabBar* new_QTabBar(QWidget*  parent = 0);
void delete_QTabBar(QTabBar* obj) { delete obj; } 
   bool  isTabEnabled(QTabBar* theWrappedObject, int  index) const;
   QVariant  tabData(QTabBar* theWrappedObject, int  index) const;
   void setDocumentMode(QTabBar* theWrappedObject, bool  set);
   QIcon  tabIcon(QTabBar* theWrappedObject, int  index) const;
   bool  isMovable(QTabBar* theWrappedObject) const;
   QSize  minimumSizeHint(QTabBar* theWrappedObject) const;
   void setUsesScrollButtons(QTabBar* theWrappedObject, bool  useButtons);
   void tabLayoutChange(QTabBar* theWrappedObject);
   bool  documentMode(QTabBar* theWrappedObject) const;
   void mouseMoveEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1);
   void setTabText(QTabBar* theWrappedObject, int  index, const QString&  text);
   void setTabToolTip(QTabBar* theWrappedObject, int  index, const QString&  tip);
   QString  tabWhatsThis(QTabBar* theWrappedObject, int  index) const;
   void hideEvent(QTabBar* theWrappedObject, QHideEvent*  arg__1);
   int  addTab(QTabBar* theWrappedObject, const QString&  text);
   void setTabData(QTabBar* theWrappedObject, int  index, const QVariant&  data);
   int  insertTab(QTabBar* theWrappedObject, int  index, const QIcon&  icon, const QString&  text);
   QTabBar::SelectionBehavior  selectionBehaviorOnRemove(QTabBar* theWrappedObject) const;
   void tabInserted(QTabBar* theWrappedObject, int  index);
   int  tabAt(QTabBar* theWrappedObject, const QPoint&  pos) const;
   void setExpanding(QTabBar* theWrappedObject, bool  enabled);
   void setMovable(QTabBar* theWrappedObject, bool  movable);
   void setShape(QTabBar* theWrappedObject, QTabBar::Shape  shape);
   void setTabsClosable(QTabBar* theWrappedObject, bool  closable);
   QColor  tabTextColor(QTabBar* theWrappedObject, int  index) const;
   void mouseReleaseEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1);
   Qt::TextElideMode  elideMode(QTabBar* theWrappedObject) const;
   void wheelEvent(QTabBar* theWrappedObject, QWheelEvent*  event);
   QString  tabText(QTabBar* theWrappedObject, int  index) const;
   void setTabEnabled(QTabBar* theWrappedObject, int  index, bool  arg__2);
   QSize  sizeHint(QTabBar* theWrappedObject) const;
   void setElideMode(QTabBar* theWrappedObject, Qt::TextElideMode  arg__1);
   void setTabButton(QTabBar* theWrappedObject, int  index, QTabBar::ButtonPosition  position, QWidget*  widget);
   void keyPressEvent(QTabBar* theWrappedObject, QKeyEvent*  arg__1);
   void setTabWhatsThis(QTabBar* theWrappedObject, int  index, const QString&  text);
   bool  drawBase(QTabBar* theWrappedObject) const;
   void setSelectionBehaviorOnRemove(QTabBar* theWrappedObject, QTabBar::SelectionBehavior  behavior);
   void showEvent(QTabBar* theWrappedObject, QShowEvent*  arg__1);
   void removeTab(QTabBar* theWrappedObject, int  index);
   void setIconSize(QTabBar* theWrappedObject, const QSize&  size);
   QRect  tabRect(QTabBar* theWrappedObject, int  index) const;
   QSize  iconSize(QTabBar* theWrappedObject) const;
   QTabBar::Shape  shape(QTabBar* theWrappedObject) const;
   bool  usesScrollButtons(QTabBar* theWrappedObject) const;
   void resizeEvent(QTabBar* theWrappedObject, QResizeEvent*  arg__1);
   void setDrawBase(QTabBar* theWrappedObject, bool  drawTheBase);
   void setTabTextColor(QTabBar* theWrappedObject, int  index, const QColor&  color);
   QSize  tabSizeHint(QTabBar* theWrappedObject, int  index) const;
   int  addTab(QTabBar* theWrappedObject, const QIcon&  icon, const QString&  text);
   bool  tabsClosable(QTabBar* theWrappedObject) const;
   void setTabIcon(QTabBar* theWrappedObject, int  index, const QIcon&  icon);
   QWidget*  tabButton(QTabBar* theWrappedObject, int  index, QTabBar::ButtonPosition  position) const;
   bool  expanding(QTabBar* theWrappedObject) const;
   void moveTab(QTabBar* theWrappedObject, int  from, int  to);
   QString  tabToolTip(QTabBar* theWrappedObject, int  index) const;
   bool  event(QTabBar* theWrappedObject, QEvent*  arg__1);
   int  count(QTabBar* theWrappedObject) const;
   int  insertTab(QTabBar* theWrappedObject, int  index, const QString&  text);
   void tabRemoved(QTabBar* theWrappedObject, int  index);
   void paintEvent(QTabBar* theWrappedObject, QPaintEvent*  arg__1);
   void mousePressEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1);
   int  currentIndex(QTabBar* theWrappedObject) const;
   void changeEvent(QTabBar* theWrappedObject, QEvent*  arg__1);
};

#endif // PYTHONQTWRAPPER_QTABBAR_H
