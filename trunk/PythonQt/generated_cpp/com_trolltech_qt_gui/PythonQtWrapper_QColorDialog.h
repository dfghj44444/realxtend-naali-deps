#ifndef PYTHONQTWRAPPER_QCOLORDIALOG_H
#define PYTHONQTWRAPPER_QCOLORDIALOG_H

#include <qcolordialog.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcolordialog.h>
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
#include <qwidget.h>

class PythonQtShell_QColorDialog : public QColorDialog
{
public:
    PythonQtShell_QColorDialog(QWidget*  parent = 0):QColorDialog(parent),_wrapper(NULL) {};
    PythonQtShell_QColorDialog(const QColor&  initial, QWidget*  parent = 0):QColorDialog(initial, parent),_wrapper(NULL) {};

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
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

class PythonQtPublicPromoter_QColorDialog : public QColorDialog
{ public:
inline void promoted_changeEvent(QEvent*  event) { QColorDialog::changeEvent(event); }
inline void promoted_done(int  result) { QColorDialog::done(result); }
};

class PythonQtWrapper_QColorDialog : public QObject
{ Q_OBJECT
public:
public slots:
QColorDialog* new_QColorDialog(QWidget*  parent = 0);
QColorDialog* new_QColorDialog(const QColor&  initial, QWidget*  parent = 0);
void delete_QColorDialog(QColorDialog* obj) { delete obj; } 
   bool  testOption(QColorDialog* theWrappedObject, QColorDialog::ColorDialogOption  option) const;
   void open(QColorDialog* theWrappedObject);
   void changeEvent(QColorDialog* theWrappedObject, QEvent*  event);
   void static_QColorDialog_setCustomColor(int  index, unsigned int  color);
   void setCurrentColor(QColorDialog* theWrappedObject, const QColor&  color);
   void open(QColorDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QColor  currentColor(QColorDialog* theWrappedObject) const;
   void setOptions(QColorDialog* theWrappedObject, QColorDialog::ColorDialogOptions  options);
   QColor  static_QColorDialog_getColor(const QColor&  initial = Qt::white, QWidget*  parent = 0);
   void setVisible(QColorDialog* theWrappedObject, bool  visible);
   void done(QColorDialog* theWrappedObject, int  result);
   QColor  selectedColor(QColorDialog* theWrappedObject) const;
   QColorDialog::ColorDialogOptions  options(QColorDialog* theWrappedObject) const;
   void static_QColorDialog_setStandardColor(int  index, unsigned int  color);
   void setOption(QColorDialog* theWrappedObject, QColorDialog::ColorDialogOption  option, bool  on = true);
   int  static_QColorDialog_customCount();
   unsigned int  static_QColorDialog_customColor(int  index);
   QColor  static_QColorDialog_getColor(const QColor&  initial, QWidget*  parent, const QString&  title, QColorDialog::ColorDialogOptions  options = 0);
};

#endif // PYTHONQTWRAPPER_QCOLORDIALOG_H
