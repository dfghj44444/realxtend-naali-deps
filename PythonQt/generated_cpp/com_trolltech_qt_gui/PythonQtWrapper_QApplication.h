#ifndef PYTHONQTWRAPPER_QAPPLICATION_H
#define PYTHONQTWRAPPER_QAPPLICATION_H

#include <qapplication.h>
#include <QObject>

#include <PythonQt.h>

#include <QBasicTimer>
#include <QFont>
#include <QFontMetrics>
#include <QIcon>
#include <QLocale>
#include <QPalette>
#include <QVariant>
#include <qapplication.h>
#include <qbytearray.h>
#include <qclipboard.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdesktopwidget.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qsessionmanager.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qtranslator.h>
#include <qwidget.h>

class PythonQtShell_QApplication : public QApplication
{
public:

virtual void childEvent(QChildEvent*  arg__1);
virtual void commitData(QSessionManager&  sm);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  notify(QObject*  arg__1, QEvent*  arg__2);
virtual void saveState(QSessionManager&  sm);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QApplication : public QApplication
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QApplication::event(arg__1); }
inline bool  promoted_notify(QObject*  arg__1, QEvent*  arg__2) { return QApplication::notify(arg__1, arg__2); }
};

class PythonQtWrapper_QApplication : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type ColorSpec )
enum Type{
  Tty = QApplication::Tty,   GuiClient = QApplication::GuiClient,   GuiServer = QApplication::GuiServer};
enum ColorSpec{
  NormalColor = QApplication::NormalColor,   CustomColor = QApplication::CustomColor,   ManyColor = QApplication::ManyColor};
public slots:
void delete_QApplication(QApplication* obj) { delete obj; } 
   void setInputContext(QApplication* theWrappedObject, QInputContext*  arg__1);
   void static_QApplication_setWheelScrollLines(int  arg__1);
   void static_QApplication_setLayoutDirection(Qt::LayoutDirection  direction);
   bool  static_QApplication_quitOnLastWindowClosed();
   void static_QApplication_setQuitOnLastWindowClosed(bool  quit);
   QPalette  static_QApplication_palette();
   void static_QApplication_setActiveWindow(QWidget*  act);
   QWidget*  static_QApplication_activeModalWidget();
   bool  static_QApplication_desktopSettingsAware();
   int  static_QApplication_doubleClickInterval();
   QCursor*  static_QApplication_overrideCursor();
   int  static_QApplication_startDragDistance();
   QFont  static_QApplication_font(const QWidget*  arg__1);
   QFont  static_QApplication_font();
   void static_QApplication_setGlobalStrut(const QSize&  arg__1);
   QWidget*  static_QApplication_topLevelAt(int  x, int  y);
   Qt::LayoutDirection  static_QApplication_layoutDirection();
   int  static_QApplication_wheelScrollLines();
   void static_QApplication_beep();
   void static_QApplication_syncX();
   void static_QApplication_setGraphicsSystem(const QString&  arg__1);
   QStyle*  static_QApplication_style();
   void static_QApplication_setEffectEnabled(Qt::UIEffect  arg__1, bool  enable = true);
   QWidget*  static_QApplication_focusWidget();
   void static_QApplication_changeOverrideCursor(const QCursor&  arg__1);
   void static_QApplication_setPalette(const QPalette&  arg__1, const char*  className = 0);
   QInputContext*  inputContext(QApplication* theWrappedObject) const;
   void static_QApplication_setDesktopSettingsAware(bool  arg__1);
   void static_QApplication_setStyle(QStyle*  arg__1);
   void static_QApplication_setStartDragTime(int  ms);
   Qt::LayoutDirection  static_QApplication_keyboardInputDirection();
   QList<QWidget* >  static_QApplication_topLevelWidgets();
   QLocale  static_QApplication_keyboardInputLocale();
   QWidget*  static_QApplication_topLevelAt(const QPoint&  p);
   int  static_QApplication_keyboardInputInterval();
   QString  sessionKey(QApplication* theWrappedObject) const;
   QWidget*  static_QApplication_widgetAt(const QPoint&  p);
   QApplication::Type  static_QApplication_type();
   QString  sessionId(QApplication* theWrappedObject) const;
   QList<QWidget* >  static_QApplication_allWidgets();
   void static_QApplication_setWindowIcon(const QIcon&  icon);
   bool  static_QApplication_isRightToLeft();
   QStyle*  static_QApplication_setStyle(const QString&  arg__1);
   bool  static_QApplication_isLeftToRight();
   Qt::MouseButtons  static_QApplication_mouseButtons();
   int  static_QApplication_exec();
   QDesktopWidget*  static_QApplication_desktop();
   QIcon  static_QApplication_windowIcon();
   void static_QApplication_setCursorFlashTime(int  arg__1);
   void static_QApplication_setKeyboardInputInterval(int  arg__1);
   void static_QApplication_restoreOverrideCursor();
   Qt::KeyboardModifiers  static_QApplication_keyboardModifiers();
   int  static_QApplication_colorSpec();
   QWidget*  static_QApplication_activeWindow();
   bool  isSessionRestored(QApplication* theWrappedObject) const;
   bool  static_QApplication_isEffectEnabled(Qt::UIEffect  arg__1);
   QSize  static_QApplication_globalStrut();
   QString  styleSheet(QApplication* theWrappedObject) const;
   QWidget*  static_QApplication_widgetAt(int  x, int  y);
   bool  event(QApplication* theWrappedObject, QEvent*  arg__1);
   void static_QApplication_setStartDragDistance(int  l);
   QPalette  static_QApplication_palette(const QWidget*  arg__1);
   void static_QApplication_setFont(const QFont&  arg__1, const char*  className = 0);
   void static_QApplication_setOverrideCursor(const QCursor&  arg__1);
   int  static_QApplication_startDragTime();
   QWidget*  static_QApplication_activePopupWidget();
   void static_QApplication_alert(QWidget*  widget, int  duration = 0);
   bool  notify(QApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void static_QApplication_setColorSpec(int  arg__1);
   int  static_QApplication_cursorFlashTime();
   void static_QApplication_setDoubleClickInterval(int  arg__1);
   QClipboard*  static_QApplication_clipboard();
};

#endif // PYTHONQTWRAPPER_QAPPLICATION_H
