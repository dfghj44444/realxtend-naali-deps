#ifndef PYTHONQTWRAPPER_QINPUTDIALOG_H
#define PYTHONQTWRAPPER_QINPUTDIALOG_H

#include <qinputdialog.h>
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
#include <qinputdialog.h>
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
#include <qstringlist.h>
#include <qstyle.h>
#include <qwidget.h>

class PythonQtShell_QInputDialog : public QInputDialog
{
public:
    PythonQtShell_QInputDialog(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QInputDialog(parent, flags),_wrapper(NULL) {};

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

class PythonQtPublicPromoter_QInputDialog : public QInputDialog
{ public:
inline void promoted_done(int  result) { QInputDialog::done(result); }
};

class PythonQtWrapper_QInputDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InputMode InputDialogOption )
Q_FLAGS(InputDialogOptions )
enum InputMode{
  TextInput = QInputDialog::TextInput,   IntInput = QInputDialog::IntInput,   DoubleInput = QInputDialog::DoubleInput};
enum InputDialogOption{
  NoButtons = QInputDialog::NoButtons,   UseListViewForComboBoxItems = QInputDialog::UseListViewForComboBoxItems};
Q_DECLARE_FLAGS(InputDialogOptions, InputDialogOption)
public slots:
QInputDialog* new_QInputDialog(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QInputDialog(QInputDialog* obj) { delete obj; } 
   QStringList  comboBoxItems(QInputDialog* theWrappedObject) const;
   void done(QInputDialog* theWrappedObject, int  result);
   int  intMaximum(QInputDialog* theWrappedObject) const;
   bool  isComboBoxEditable(QInputDialog* theWrappedObject) const;
   int  static_QInputDialog_getInt(QWidget*  parent, const QString&  title, const QString&  label, int  value = 0, int  minValue = -2147483647, int  maxValue = 2147483647, int  step = 1, bool*  ok = 0, Qt::WindowFlags  flags = 0);
   QInputDialog::InputMode  inputMode(QInputDialog* theWrappedObject) const;
   QInputDialog::InputDialogOptions  options(QInputDialog* theWrappedObject) const;
   void open(QInputDialog* theWrappedObject, QObject*  receiver, const char*  member);
   void setIntMaximum(QInputDialog* theWrappedObject, int  max);
   double  doubleMinimum(QInputDialog* theWrappedObject) const;
   int  intValue(QInputDialog* theWrappedObject) const;
   QSize  sizeHint(QInputDialog* theWrappedObject) const;
   int  doubleDecimals(QInputDialog* theWrappedObject) const;
   double  doubleValue(QInputDialog* theWrappedObject) const;
   void setCancelButtonText(QInputDialog* theWrappedObject, const QString&  text);
   void setIntRange(QInputDialog* theWrappedObject, int  min, int  max);
   void setOkButtonText(QInputDialog* theWrappedObject, const QString&  text);
   void setDoubleMaximum(QInputDialog* theWrappedObject, double  max);
   void setDoubleMinimum(QInputDialog* theWrappedObject, double  min);
   void setOption(QInputDialog* theWrappedObject, QInputDialog::InputDialogOption  option, bool  on = true);
   void setVisible(QInputDialog* theWrappedObject, bool  visible);
   QLineEdit::EchoMode  textEchoMode(QInputDialog* theWrappedObject) const;
   int  intStep(QInputDialog* theWrappedObject) const;
   void open(QInputDialog* theWrappedObject);
   QString  cancelButtonText(QInputDialog* theWrappedObject) const;
   void setDoubleRange(QInputDialog* theWrappedObject, double  min, double  max);
   void setDoubleDecimals(QInputDialog* theWrappedObject, int  decimals);
   void setIntMinimum(QInputDialog* theWrappedObject, int  min);
   void setOptions(QInputDialog* theWrappedObject, QInputDialog::InputDialogOptions  options);
   QString  static_QInputDialog_getText(QWidget*  parent, const QString&  title, const QString&  label, QLineEdit::EchoMode  echo = QLineEdit::Normal, const QString&  text = QString(), bool*  ok = 0, Qt::WindowFlags  flags = 0);
   void setComboBoxItems(QInputDialog* theWrappedObject, const QStringList&  items);
   void setIntStep(QInputDialog* theWrappedObject, int  step);
   void setTextValue(QInputDialog* theWrappedObject, const QString&  text);
   void setComboBoxEditable(QInputDialog* theWrappedObject, bool  editable);
   int  intMinimum(QInputDialog* theWrappedObject) const;
   QString  labelText(QInputDialog* theWrappedObject) const;
   void setTextEchoMode(QInputDialog* theWrappedObject, QLineEdit::EchoMode  mode);
   bool  testOption(QInputDialog* theWrappedObject, QInputDialog::InputDialogOption  option) const;
   QString  static_QInputDialog_getItem(QWidget*  parent, const QString&  title, const QString&  label, const QStringList&  items, int  current = 0, bool  editable = true, bool*  ok = 0, Qt::WindowFlags  flags = 0);
   QSize  minimumSizeHint(QInputDialog* theWrappedObject) const;
   void setIntValue(QInputDialog* theWrappedObject, int  value);
   QString  textValue(QInputDialog* theWrappedObject) const;
   double  static_QInputDialog_getDouble(QWidget*  parent, const QString&  title, const QString&  label, double  value = 0, double  minValue = -2147483647, double  maxValue = 2147483647, int  decimals = 1, bool*  ok = 0, Qt::WindowFlags  flags = 0);
   QString  okButtonText(QInputDialog* theWrappedObject) const;
   void setLabelText(QInputDialog* theWrappedObject, const QString&  text);
   int  static_QInputDialog_getInteger(QWidget*  parent, const QString&  title, const QString&  label, int  value = 0, int  minValue = -2147483647, int  maxValue = 2147483647, int  step = 1, bool*  ok = 0, Qt::WindowFlags  flags = 0);
   void setDoubleValue(QInputDialog* theWrappedObject, double  value);
   void setInputMode(QInputDialog* theWrappedObject, QInputDialog::InputMode  mode);
   double  doubleMaximum(QInputDialog* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QINPUTDIALOG_H
