#include <PythonQt.h>
#include "PythonQtWrapper_QWebPage_ExtensionOption.h"
#include "PythonQtWrapper_QWebPage_ExtensionReturn.h"
#include "PythonQtWrapper_QWebElement.h"
#include "PythonQtWrapper_QWebSettings.h"
#include "PythonQtWrapper_QWebPluginFactory_Plugin.h"
#include "PythonQtWrapper_QWebPluginFactory_ExtensionOption.h"
#include "PythonQtWrapper_QWebHitTestResult.h"
#include "PythonQtWrapper_QWebPluginFactory_ExtensionReturn.h"
#include "PythonQtWrapper_QWebPluginFactory_MimeType.h"
#include "PythonQtWrapper_QWebPage_ErrorPageExtensionOption.h"
#include "PythonQtWrapper_QWebPage_ChooseMultipleFilesExtensionOption.h"
#include "PythonQtWrapper_QWebFrame.h"
#include "PythonQtWrapper_QWebPage.h"
#include "PythonQtWrapper_QWebPluginFactory.h"
#include "PythonQtWrapper_QWebPage_ErrorPageExtensionReturn.h"
#include "PythonQtWrapper_QWebPage_ChooseMultipleFilesExtensionReturn.h"
#include "PythonQtWrapper_QWebHistoryInterface.h"
#include "PythonQtWrapper_QWebView.h"
#include "PythonQtWrapper_QWebInspector.h"
#include "PythonQtWrapper_QGraphicsWebView.h"


void PythonQt_init_QtWebKit() {
PythonQt::self()->registerCPPClass("QWebPage::ExtensionOption", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPage_ExtensionOption>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPage_ExtensionOption>);
PythonQt::self()->registerCPPClass("QWebPage::ExtensionReturn", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPage_ExtensionReturn>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPage_ExtensionReturn>);
PythonQt::self()->registerCPPClass("QWebElement", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebElement>);
PythonQt::self()->registerCPPClass("QWebSettings", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebSettings>);
PythonQt::self()->registerCPPClass("QWebPluginFactory::Plugin", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPluginFactory_Plugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPluginFactory_Plugin>);
PythonQt::self()->registerCPPClass("QWebPluginFactory::ExtensionOption", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPluginFactory_ExtensionOption>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPluginFactory_ExtensionOption>);
PythonQt::self()->registerCPPClass("QWebHitTestResult", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebHitTestResult>);
PythonQt::self()->registerCPPClass("QWebPluginFactory::ExtensionReturn", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPluginFactory_ExtensionReturn>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPluginFactory_ExtensionReturn>);
PythonQt::self()->registerCPPClass("QWebPluginFactory::MimeType", "", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPluginFactory_MimeType>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPluginFactory_MimeType>);
PythonQt::self()->registerCPPClass("QWebPage::ErrorPageExtensionOption", "QWebPage::ExtensionOption", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPage_ErrorPageExtensionOption>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPage_ErrorPageExtensionOption>);
PythonQt::self()->registerCPPClass("QWebPage::ChooseMultipleFilesExtensionOption", "QWebPage::ExtensionOption", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPage_ChooseMultipleFilesExtensionOption>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPage_ChooseMultipleFilesExtensionOption>);
PythonQt::self()->registerClass(&QWebFrame::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebFrame>);
PythonQt::self()->registerClass(&QWebPage::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPage>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPage>);
PythonQt::self()->registerClass(&QWebPluginFactory::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPluginFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPluginFactory>);
PythonQt::self()->registerCPPClass("QWebPage::ErrorPageExtensionReturn", "QWebPage::ExtensionReturn", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPage_ErrorPageExtensionReturn>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPage_ErrorPageExtensionReturn>);
PythonQt::self()->registerCPPClass("QWebPage::ChooseMultipleFilesExtensionReturn", "QWebPage::ExtensionReturn", "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebPage_ChooseMultipleFilesExtensionReturn>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebPage_ChooseMultipleFilesExtensionReturn>);
PythonQt::self()->registerClass(&QWebHistoryInterface::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebHistoryInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebHistoryInterface>);
PythonQt::self()->registerClass(&QWebView::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebView>);
PythonQt::self()->registerClass(&QWebInspector::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QWebInspector>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWebInspector>);
PythonQt::self()->registerClass(&QGraphicsWebView::staticMetaObject, "QtWebKit", PythonQtCreateObject<PythonQtWrapper_QGraphicsWebView>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsWebView>);

}
