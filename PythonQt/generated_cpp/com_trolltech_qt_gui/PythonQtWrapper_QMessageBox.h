#ifndef PYTHONQTWRAPPER_QMESSAGEBOX_H
#define PYTHONQTWRAPPER_QMESSAGEBOX_H

#include <qmessagebox.h>
#include <QObject>

#include <PythonQt.h>

#include <QPixmap>
#include <QVariant>
#include <qabstractbutton.h>
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
#include <qmessagebox.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpushbutton.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

class PythonQtShell_QMessageBox : public QMessageBox
{
public:
    PythonQtShell_QMessageBox(QMessageBox::Icon  icon, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::NoButton, QWidget*  parent = 0, Qt::WindowFlags  flags = Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint):QMessageBox(icon, title, text, buttons, parent, flags),_wrapper(NULL) {};
    PythonQtShell_QMessageBox(QWidget*  parent = 0):QMessageBox(parent),_wrapper(NULL) {};

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void done(int  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
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
virtual void resizeEvent(QResizeEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMessageBox : public QMessageBox
{ public:
inline void promoted_resizeEvent(QResizeEvent*  event) { QMessageBox::resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QMessageBox::showEvent(event); }
inline bool  promoted_event(QEvent*  e) { return QMessageBox::event(e); }
inline void promoted_closeEvent(QCloseEvent*  event) { QMessageBox::closeEvent(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QMessageBox::keyPressEvent(event); }
inline void promoted_changeEvent(QEvent*  event) { QMessageBox::changeEvent(event); }
};

class PythonQtWrapper_QMessageBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ButtonRole StandardButton )
Q_FLAGS(StandardButtons )
enum ButtonRole{
  InvalidRole = QMessageBox::InvalidRole,   AcceptRole = QMessageBox::AcceptRole,   RejectRole = QMessageBox::RejectRole,   DestructiveRole = QMessageBox::DestructiveRole,   ActionRole = QMessageBox::ActionRole,   HelpRole = QMessageBox::HelpRole,   YesRole = QMessageBox::YesRole,   NoRole = QMessageBox::NoRole,   ResetRole = QMessageBox::ResetRole,   ApplyRole = QMessageBox::ApplyRole,   NRoles = QMessageBox::NRoles};
enum StandardButton{
  NoButton = QMessageBox::NoButton,   Ok = QMessageBox::Ok,   Save = QMessageBox::Save,   SaveAll = QMessageBox::SaveAll,   Open = QMessageBox::Open,   Yes = QMessageBox::Yes,   YesToAll = QMessageBox::YesToAll,   No = QMessageBox::No,   NoToAll = QMessageBox::NoToAll,   Abort = QMessageBox::Abort,   Retry = QMessageBox::Retry,   Ignore = QMessageBox::Ignore,   Close = QMessageBox::Close,   Cancel = QMessageBox::Cancel,   Discard = QMessageBox::Discard,   Help = QMessageBox::Help,   Apply = QMessageBox::Apply,   Reset = QMessageBox::Reset,   RestoreDefaults = QMessageBox::RestoreDefaults,   FirstButton = QMessageBox::FirstButton,   LastButton = QMessageBox::LastButton,   YesAll = QMessageBox::YesAll,   NoAll = QMessageBox::NoAll,   Default = QMessageBox::Default,   Escape = QMessageBox::Escape,   FlagMask = QMessageBox::FlagMask,   ButtonMask = QMessageBox::ButtonMask};
Q_DECLARE_FLAGS(StandardButtons, StandardButton)
public slots:
QMessageBox* new_QMessageBox(QMessageBox::Icon  icon, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::NoButton, QWidget*  parent = 0, Qt::WindowFlags  flags = Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
QMessageBox* new_QMessageBox(QWidget*  parent = 0);
void delete_QMessageBox(QMessageBox* obj) { delete obj; } 
   void removeButton(QMessageBox* theWrappedObject, QAbstractButton*  button);
   QMessageBox::ButtonRole  buttonRole(QMessageBox* theWrappedObject, QAbstractButton*  button) const;
   void resizeEvent(QMessageBox* theWrappedObject, QResizeEvent*  event);
   void setText(QMessageBox* theWrappedObject, const QString&  text);
   QMessageBox::Icon  icon(QMessageBox* theWrappedObject) const;
   void setStandardButtons(QMessageBox* theWrappedObject, QMessageBox::StandardButtons  buttons);
   QAbstractButton*  button(QMessageBox* theWrappedObject, QMessageBox::StandardButton  which) const;
   QSize  sizeHint(QMessageBox* theWrappedObject) const;
   void showEvent(QMessageBox* theWrappedObject, QShowEvent*  event);
   QMessageBox::StandardButton  static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   void open(QMessageBox* theWrappedObject, QObject*  receiver, const char*  member);
   QMessageBox::StandardButton  static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   bool  event(QMessageBox* theWrappedObject, QEvent*  e);
   void addButton(QMessageBox* theWrappedObject, QAbstractButton*  button, QMessageBox::ButtonRole  role);
   QAbstractButton*  clickedButton(QMessageBox* theWrappedObject) const;
   QAbstractButton*  escapeButton(QMessageBox* theWrappedObject) const;
   QMessageBox::StandardButtons  standardButtons(QMessageBox* theWrappedObject) const;
   QString  text(QMessageBox* theWrappedObject) const;
   QPixmap  iconPixmap(QMessageBox* theWrappedObject) const;
   QList<QAbstractButton* >  buttons(QMessageBox* theWrappedObject) const;
   void setInformativeText(QMessageBox* theWrappedObject, const QString&  text);
   void static_QMessageBox_aboutQt(QWidget*  parent, const QString&  title = QString());
   Qt::TextFormat  textFormat(QMessageBox* theWrappedObject) const;
   QString  informativeText(QMessageBox* theWrappedObject) const;
   QString  detailedText(QMessageBox* theWrappedObject) const;
   void setDefaultButton(QMessageBox* theWrappedObject, QPushButton*  button);
   int  static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
   QPushButton*  addButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   QMessageBox::StandardButton  static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   QMessageBox::StandardButton  standardButton(QMessageBox* theWrappedObject, QAbstractButton*  button) const;
   QPushButton*  addButton(QMessageBox* theWrappedObject, const QString&  text, QMessageBox::ButtonRole  role);
   void setEscapeButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   void closeEvent(QMessageBox* theWrappedObject, QCloseEvent*  event);
   void open(QMessageBox* theWrappedObject);
   void setIcon(QMessageBox* theWrappedObject, QMessageBox::Icon  arg__1);
   QMessageBox::StandardButton  static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   void setTextFormat(QMessageBox* theWrappedObject, Qt::TextFormat  format);
   void setDefaultButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   void keyPressEvent(QMessageBox* theWrappedObject, QKeyEvent*  event);
   QPushButton*  defaultButton(QMessageBox* theWrappedObject) const;
   void setIconPixmap(QMessageBox* theWrappedObject, const QPixmap&  pixmap);
   int  static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
   void setDetailedText(QMessageBox* theWrappedObject, const QString&  text);
   void setEscapeButton(QMessageBox* theWrappedObject, QAbstractButton*  button);
   void changeEvent(QMessageBox* theWrappedObject, QEvent*  event);
   void static_QMessageBox_about(QWidget*  parent, const QString&  title, const QString&  text);
   int  static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
   QMessageBox::StandardButton  static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1 = QMessageBox::NoButton);
};

#endif // PYTHONQTWRAPPER_QMESSAGEBOX_H
