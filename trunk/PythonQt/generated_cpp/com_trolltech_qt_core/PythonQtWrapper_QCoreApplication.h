#ifndef PYTHONQTWRAPPER_QCOREAPPLICATION_H
#define PYTHONQTWRAPPER_QCOREAPPLICATION_H

#include <qcoreapplication.h>
#include <QObject>

#include <PythonQt.h>

#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qtranslator.h>

class PythonQtShell_QCoreApplication : public QCoreApplication
{
public:

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  notify(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCoreApplication : public QCoreApplication
{ public:
inline bool  promoted_notify(QObject*  arg__1, QEvent*  arg__2) { return QCoreApplication::notify(arg__1, arg__2); }
inline bool  promoted_event(QEvent*  arg__1) { return QCoreApplication::event(arg__1); }
};

class PythonQtWrapper_QCoreApplication : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Encoding )
enum Encoding{
  CodecForTr = QCoreApplication::CodecForTr,   UnicodeUTF8 = QCoreApplication::UnicodeUTF8,   DefaultCodec = QCoreApplication::DefaultCodec};
public slots:
void delete_QCoreApplication(QCoreApplication* obj) { delete obj; } 
   QString  static_QCoreApplication_translate(const char*  context, const char*  key, const char*  disambiguation = 0, QCoreApplication::Encoding  encoding = QCoreApplication::CodecForTr);
   void static_QCoreApplication_addLibraryPath(const QString&  arg__1);
   void static_QCoreApplication_flush();
   void static_QCoreApplication_postEvent(QObject*  receiver, QEvent*  event, int  priority);
   void static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   bool  static_QCoreApplication_sendEvent(QObject*  receiver, QEvent*  event);
   QString  static_QCoreApplication_organizationName();
   bool  static_QCoreApplication_testAttribute(Qt::ApplicationAttribute  attribute);
   void static_QCoreApplication_setOrganizationDomain(const QString&  orgDomain);
   bool  notify(QCoreApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   bool  static_QCoreApplication_closingDown();
   int  static_QCoreApplication_exec();
   bool  event(QCoreApplication* theWrappedObject, QEvent*  arg__1);
   bool  static_QCoreApplication_hasPendingEvents();
   QStringList  static_QCoreApplication_libraryPaths();
   QString  static_QCoreApplication_applicationDirPath();
   void static_QCoreApplication_postEvent(QObject*  receiver, QEvent*  event);
   QString  static_QCoreApplication_applicationName();
   void static_QCoreApplication_setApplicationVersion(const QString&  version);
   void static_QCoreApplication_exit(int  retcode = 0);
   QString  static_QCoreApplication_applicationFilePath();
   void static_QCoreApplication_setLibraryPaths(const QStringList&  arg__1);
   void static_QCoreApplication_sendPostedEvents();
   void static_QCoreApplication_installTranslator(QTranslator*  messageFile);
   void static_QCoreApplication_removePostedEvents(QObject*  receiver);
   void static_QCoreApplication_setOrganizationName(const QString&  orgName);
   void static_QCoreApplication_sendPostedEvents(QObject*  receiver, int  event_type);
   QString  static_QCoreApplication_organizationDomain();
   void static_QCoreApplication_setAttribute(Qt::ApplicationAttribute  attribute, bool  on = true);
   bool  static_QCoreApplication_startingUp();
   void static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags, int  maxtime);
   void static_QCoreApplication_removePostedEvents(QObject*  receiver, int  eventType);
   void static_QCoreApplication_removeTranslator(QTranslator*  messageFile);
   QString  static_QCoreApplication_translate(const char*  context, const char*  key, const char*  disambiguation, QCoreApplication::Encoding  encoding, int  n);
   qint64  static_QCoreApplication_applicationPid();
   void static_QCoreApplication_setApplicationName(const QString&  application);
   void static_QCoreApplication_removeLibraryPath(const QString&  arg__1);
   QString  static_QCoreApplication_applicationVersion();
   QCoreApplication*  static_QCoreApplication_instance();
};

#endif // PYTHONQTWRAPPER_QCOREAPPLICATION_H
