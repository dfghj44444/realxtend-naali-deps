#ifndef PYTHONQTWRAPPER_QPRINTPREVIEWDIALOG_H
#define PYTHONQTWRAPPER_QPRINTPREVIEWDIALOG_H

#include <qprintpreviewdialog.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdialog.h>
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
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

class PythonQtShell_QPrintPreviewDialog : public QPrintPreviewDialog
{
public:
    PythonQtShell_QPrintPreviewDialog(QPrinter*  printer, QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QPrintPreviewDialog(printer, parent, flags),_wrapper(NULL) {};
    PythonQtShell_QPrintPreviewDialog(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QPrintPreviewDialog(parent, flags),_wrapper(NULL) {};

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void done(int  result);
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
virtual void reject();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPrintPreviewDialog : public QPrintPreviewDialog
{ public:
inline void promoted_done(int  result) { QPrintPreviewDialog::done(result); }
};

class PythonQtWrapper_QPrintPreviewDialog : public QObject
{ Q_OBJECT
public:
public slots:
QPrintPreviewDialog* new_QPrintPreviewDialog(QPrinter*  printer, QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
QPrintPreviewDialog* new_QPrintPreviewDialog(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QPrintPreviewDialog(QPrintPreviewDialog* obj) { delete obj; } 
   QPrinter*  printer(QPrintPreviewDialog* theWrappedObject);
   void setVisible(QPrintPreviewDialog* theWrappedObject, bool  visible);
   void done(QPrintPreviewDialog* theWrappedObject, int  result);
   void open(QPrintPreviewDialog* theWrappedObject);
   void open(QPrintPreviewDialog* theWrappedObject, QObject*  receiver, const char*  member);
};

#endif // PYTHONQTWRAPPER_QPRINTPREVIEWDIALOG_H
