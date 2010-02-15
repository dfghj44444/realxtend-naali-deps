#ifndef PYTHONQTWRAPPER_QWEBPAGE_H
#define PYTHONQTWRAPPER_QWEBPAGE_H

#include <qwebpage.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qlist.h>
#include <qmenu.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qundostack.h>
#include <qurl.h>
#include <qwebframe.h>
#include <qwebpage.h>
#include <qwebpluginfactory.h>
#include <qwebsettings.h>
#include <qwidget.h>

class PythonQtShell_QWebPage : public QWebPage
{
public:
    PythonQtShell_QWebPage(QObject*  parent = 0):QWebPage(parent),_wrapper(NULL) {};

virtual bool  acceptNavigationRequest(QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type);
virtual void childEvent(QChildEvent*  arg__1);
virtual QString  chooseFile(QWebFrame*  originatingFrame, const QString&  oldFile);
virtual QObject*  createPlugin(const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues);
virtual QWebPage*  createWindow(QWebPage::WebWindowType  type);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  extension(QWebPage::Extension  extension, const QWebPage::ExtensionOption*  option = 0, QWebPage::ExtensionReturn*  output = 0);
virtual void javaScriptAlert(QWebFrame*  originatingFrame, const QString&  msg);
virtual bool  javaScriptConfirm(QWebFrame*  originatingFrame, const QString&  msg);
virtual void javaScriptConsoleMessage(const QString&  message, int  lineNumber, const QString&  sourceID);
virtual bool  javaScriptPrompt(QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result);
virtual bool  supportsExtension(QWebPage::Extension  extension) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void triggerAction(QWebPage::WebAction  action, bool  checked = false);
virtual QString  userAgentForUrl(const QUrl&  url) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWebPage : public QWebPage
{ public:
inline QObject*  promoted_createPlugin(const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues) { return QWebPage::createPlugin(classid, url, paramNames, paramValues); }
inline void promoted_javaScriptConsoleMessage(const QString&  message, int  lineNumber, const QString&  sourceID) { QWebPage::javaScriptConsoleMessage(message, lineNumber, sourceID); }
inline QString  promoted_chooseFile(QWebFrame*  originatingFrame, const QString&  oldFile) { return QWebPage::chooseFile(originatingFrame, oldFile); }
inline void promoted_triggerAction(QWebPage::WebAction  action, bool  checked = false) { QWebPage::triggerAction(action, checked); }
inline bool  promoted_javaScriptPrompt(QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result) { return QWebPage::javaScriptPrompt(originatingFrame, msg, defaultValue, result); }
inline bool  promoted_event(QEvent*  arg__1) { return QWebPage::event(arg__1); }
inline QWebPage*  promoted_createWindow(QWebPage::WebWindowType  type) { return QWebPage::createWindow(type); }
inline bool  promoted_supportsExtension(QWebPage::Extension  extension) const { return QWebPage::supportsExtension(extension); }
inline void promoted_javaScriptAlert(QWebFrame*  originatingFrame, const QString&  msg) { QWebPage::javaScriptAlert(originatingFrame, msg); }
inline QString  promoted_userAgentForUrl(const QUrl&  url) const { return QWebPage::userAgentForUrl(url); }
inline bool  promoted_extension(QWebPage::Extension  extension, const QWebPage::ExtensionOption*  option = 0, QWebPage::ExtensionReturn*  output = 0) { return QWebPage::extension(extension, option, output); }
inline bool  promoted_javaScriptConfirm(QWebFrame*  originatingFrame, const QString&  msg) { return QWebPage::javaScriptConfirm(originatingFrame, msg); }
inline bool  promoted_acceptNavigationRequest(QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type) { return QWebPage::acceptNavigationRequest(frame, request, type); }
};

class PythonQtWrapper_QWebPage : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ErrorDomain WebWindowType FindFlag Extension )
Q_FLAGS(FindFlags )
enum ErrorDomain{
  QtNetwork = QWebPage::QtNetwork,   Http = QWebPage::Http,   WebKit = QWebPage::WebKit};
enum WebWindowType{
  WebBrowserWindow = QWebPage::WebBrowserWindow,   WebModalDialog = QWebPage::WebModalDialog};
enum FindFlag{
  FindBackward = QWebPage::FindBackward,   FindCaseSensitively = QWebPage::FindCaseSensitively,   FindWrapsAroundDocument = QWebPage::FindWrapsAroundDocument,   HighlightAllOccurrences = QWebPage::HighlightAllOccurrences};
enum Extension{
  ChooseMultipleFilesExtension = QWebPage::ChooseMultipleFilesExtension,   ErrorPageExtension = QWebPage::ErrorPageExtension};
Q_DECLARE_FLAGS(FindFlags, FindFlag)
public slots:
QWebPage* new_QWebPage(QObject*  parent = 0);
void delete_QWebPage(QWebPage* obj) { delete obj; } 
   QObject*  createPlugin(QWebPage* theWrappedObject, const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues);
   QWebPage::LinkDelegationPolicy  linkDelegationPolicy(QWebPage* theWrappedObject) const;
   QWebPluginFactory*  pluginFactory(QWebPage* theWrappedObject) const;
   QUndoStack*  undoStack(QWebPage* theWrappedObject) const;
   QPalette  palette(QWebPage* theWrappedObject) const;
   void javaScriptConsoleMessage(QWebPage* theWrappedObject, const QString&  message, int  lineNumber, const QString&  sourceID);
   QVariant  inputMethodQuery(QWebPage* theWrappedObject, Qt::InputMethodQuery  property) const;
   QWebFrame*  currentFrame(QWebPage* theWrappedObject) const;
   quint64  totalBytes(QWebPage* theWrappedObject) const;
   quint64  bytesReceived(QWebPage* theWrappedObject) const;
   bool  forwardUnsupportedContent(QWebPage* theWrappedObject) const;
   bool  focusNextPrevChild(QWebPage* theWrappedObject, bool  next);
   QString  chooseFile(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  oldFile);
   bool  swallowContextMenuEvent(QWebPage* theWrappedObject, QContextMenuEvent*  event);
   void triggerAction(QWebPage* theWrappedObject, QWebPage::WebAction  action, bool  checked = false);
   void setContentEditable(QWebPage* theWrappedObject, bool  editable);
   QAction*  action(QWebPage* theWrappedObject, QWebPage::WebAction  action) const;
   QWidget*  view(QWebPage* theWrappedObject) const;
   bool  javaScriptPrompt(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result);
   QMenu*  createStandardContextMenu(QWebPage* theWrappedObject);
   bool  event(QWebPage* theWrappedObject, QEvent*  arg__1);
   QWebFrame*  mainFrame(QWebPage* theWrappedObject) const;
   QNetworkAccessManager*  networkAccessManager(QWebPage* theWrappedObject) const;
   QWebPage*  createWindow(QWebPage* theWrappedObject, QWebPage::WebWindowType  type);
   void setLinkDelegationPolicy(QWebPage* theWrappedObject, QWebPage::LinkDelegationPolicy  policy);
   bool  isContentEditable(QWebPage* theWrappedObject) const;
   bool  supportsExtension(QWebPage* theWrappedObject, QWebPage::Extension  extension) const;
   void setViewportSize(QWebPage* theWrappedObject, const QSize&  size) const;
   void updatePositionDependentActions(QWebPage* theWrappedObject, const QPoint&  pos);
   void javaScriptAlert(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg);
   QWebFrame*  frameAt(QWebPage* theWrappedObject, const QPoint&  pos) const;
   QString  selectedText(QWebPage* theWrappedObject) const;
   void setPluginFactory(QWebPage* theWrappedObject, QWebPluginFactory*  factory);
   bool  findText(QWebPage* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options = 0);
   void setPreferredContentsSize(QWebPage* theWrappedObject, const QSize&  size) const;
   QWebHistory*  history(QWebPage* theWrappedObject) const;
   QWebSettings*  settings(QWebPage* theWrappedObject) const;
   QSize  viewportSize(QWebPage* theWrappedObject) const;
   QString  userAgentForUrl(QWebPage* theWrappedObject, const QUrl&  url) const;
   void setView(QWebPage* theWrappedObject, QWidget*  view);
   bool  extension(QWebPage* theWrappedObject, QWebPage::Extension  extension, const QWebPage::ExtensionOption*  option = 0, QWebPage::ExtensionReturn*  output = 0);
   void setForwardUnsupportedContent(QWebPage* theWrappedObject, bool  forward);
   bool  javaScriptConfirm(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg);
   bool  isModified(QWebPage* theWrappedObject) const;
   QSize  preferredContentsSize(QWebPage* theWrappedObject) const;
   bool  acceptNavigationRequest(QWebPage* theWrappedObject, QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type);
   void setNetworkAccessManager(QWebPage* theWrappedObject, QNetworkAccessManager*  manager);
   void setPalette(QWebPage* theWrappedObject, const QPalette&  palette);
};

#endif // PYTHONQTWRAPPER_QWEBPAGE_H
