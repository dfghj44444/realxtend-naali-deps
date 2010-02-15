#ifndef PYTHONQTWRAPPER_QSETTINGS_H
#define PYTHONQTWRAPPER_QSETTINGS_H

#include <qsettings.h>
#include <QObject>

#include <PythonQt.h>

#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsettings.h>
#include <qstringlist.h>
#include <qtextcodec.h>

class PythonQtShell_QSettings : public QSettings
{
public:
    PythonQtShell_QSettings(QObject*  parent = 0):QSettings(parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0):QSettings(format, scope, organization, application, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0):QSettings(scope, organization, application, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = 0):QSettings(fileName, format, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = 0):QSettings(organization, application, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSettings : public QSettings
{ public:
inline bool  promoted_event(QEvent*  event) { return QSettings::event(event); }
};

class PythonQtWrapper_QSettings : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Format Status Scope )
enum Format{
  NativeFormat = QSettings::NativeFormat,   IniFormat = QSettings::IniFormat,   InvalidFormat = QSettings::InvalidFormat,   CustomFormat1 = QSettings::CustomFormat1,   CustomFormat2 = QSettings::CustomFormat2,   CustomFormat3 = QSettings::CustomFormat3,   CustomFormat4 = QSettings::CustomFormat4,   CustomFormat5 = QSettings::CustomFormat5,   CustomFormat6 = QSettings::CustomFormat6,   CustomFormat7 = QSettings::CustomFormat7,   CustomFormat8 = QSettings::CustomFormat8,   CustomFormat9 = QSettings::CustomFormat9,   CustomFormat10 = QSettings::CustomFormat10,   CustomFormat11 = QSettings::CustomFormat11,   CustomFormat12 = QSettings::CustomFormat12,   CustomFormat13 = QSettings::CustomFormat13,   CustomFormat14 = QSettings::CustomFormat14,   CustomFormat15 = QSettings::CustomFormat15,   CustomFormat16 = QSettings::CustomFormat16};
enum Status{
  NoError = QSettings::NoError,   AccessError = QSettings::AccessError,   FormatError = QSettings::FormatError};
enum Scope{
  UserScope = QSettings::UserScope,   SystemScope = QSettings::SystemScope};
public slots:
QSettings* new_QSettings(QObject*  parent = 0);
QSettings* new_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0);
QSettings* new_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0);
QSettings* new_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = 0);
QSettings* new_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = 0);
void delete_QSettings(QSettings* obj) { delete obj; } 
   bool  event(QSettings* theWrappedObject, QEvent*  event);
   void sync(QSettings* theWrappedObject);
   bool  contains(QSettings* theWrappedObject, const QString&  key) const;
   void endGroup(QSettings* theWrappedObject);
   QSettings::Format  static_QSettings_defaultFormat();
   QString  organizationName(QSettings* theWrappedObject) const;
   QStringList  childKeys(QSettings* theWrappedObject) const;
   void remove(QSettings* theWrappedObject, const QString&  key);
   void static_QSettings_setPath(QSettings::Format  format, QSettings::Scope  scope, const QString&  path);
   void beginGroup(QSettings* theWrappedObject, const QString&  prefix);
   void setFallbacksEnabled(QSettings* theWrappedObject, bool  b);
   bool  fallbacksEnabled(QSettings* theWrappedObject) const;
   void setIniCodec(QSettings* theWrappedObject, QTextCodec*  codec);
   QVariant  value(QSettings* theWrappedObject, const QString&  key, const QVariant&  defaultValue = QVariant()) const;
   QString  fileName(QSettings* theWrappedObject) const;
   void setArrayIndex(QSettings* theWrappedObject, int  i);
   bool  isWritable(QSettings* theWrappedObject) const;
   QSettings::Format  format(QSettings* theWrappedObject) const;
   void static_QSettings_setDefaultFormat(QSettings::Format  format);
   QStringList  allKeys(QSettings* theWrappedObject) const;
   void beginWriteArray(QSettings* theWrappedObject, const QString&  prefix, int  size = -1);
   QSettings::Scope  scope(QSettings* theWrappedObject) const;
   void clear(QSettings* theWrappedObject);
   void endArray(QSettings* theWrappedObject);
   int  beginReadArray(QSettings* theWrappedObject, const QString&  prefix);
   QString  group(QSettings* theWrappedObject) const;
   void setIniCodec(QSettings* theWrappedObject, const char*  codecName);
   QSettings::Status  status(QSettings* theWrappedObject) const;
   QTextCodec*  iniCodec(QSettings* theWrappedObject) const;
   QString  applicationName(QSettings* theWrappedObject) const;
   QStringList  childGroups(QSettings* theWrappedObject) const;
   void setValue(QSettings* theWrappedObject, const QString&  key, const QVariant&  value);
};

#endif // PYTHONQTWRAPPER_QSETTINGS_H
