#ifndef PYTHONQTWRAPPER_QWEBINSPECTOR_H
#define PYTHONQTWRAPPER_QWEBINSPECTOR_H

#include <qwebinspector.h>
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
#include <qwebpage.h>
#include <qwidget.h>

class PythonQtShell_QWebInspector : public QWebInspector
{
public:
    PythonQtShell_QWebInspector(QWidget*  parent = 0):QWebInspector(parent),_wrapper(NULL) {};

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
virtual void hideEvent(QHideEvent*  event);
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
virtual void resizeEvent(QResizeEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWebInspector : public QWebInspector
{ public:
inline void promoted_resizeEvent(QResizeEvent*  event) { QWebInspector::resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QWebInspector::showEvent(event); }
inline bool  promoted_event(QEvent*  arg__1) { return QWebInspector::event(arg__1); }
inline void promoted_hideEvent(QHideEvent*  event) { QWebInspector::hideEvent(event); }
};

class PythonQtWrapper_QWebInspector : public QObject
{ Q_OBJECT
public:
public slots:
QWebInspector* new_QWebInspector(QWidget*  parent = 0);
void delete_QWebInspector(QWebInspector* obj) { delete obj; } 
   void setPage(QWebInspector* theWrappedObject, QWebPage*  page);
   void resizeEvent(QWebInspector* theWrappedObject, QResizeEvent*  event);
   void showEvent(QWebInspector* theWrappedObject, QShowEvent*  event);
   QSize  sizeHint(QWebInspector* theWrappedObject) const;
   bool  event(QWebInspector* theWrappedObject, QEvent*  arg__1);
   QWebPage*  page(QWebInspector* theWrappedObject) const;
   void hideEvent(QWebInspector* theWrappedObject, QHideEvent*  event);
};

#endif // PYTHONQTWRAPPER_QWEBINSPECTOR_H
