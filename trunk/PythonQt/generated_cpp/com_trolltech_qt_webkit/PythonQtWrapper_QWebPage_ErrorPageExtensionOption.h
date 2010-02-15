#ifndef PYTHONQTWRAPPER_QWEBPAGE_ERRORPAGEEXTENSIONOPTION_H
#define PYTHONQTWRAPPER_QWEBPAGE_ERRORPAGEEXTENSIONOPTION_H

#include <qwebpage.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QWebPage_ErrorPageExtensionOption : public QWebPage::ErrorPageExtensionOption
{
public:
    PythonQtShell_QWebPage_ErrorPageExtensionOption():QWebPage::ErrorPageExtensionOption(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ErrorPageExtensionOption : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ErrorPageExtensionOption* new_QWebPage_ErrorPageExtensionOption();
void delete_QWebPage_ErrorPageExtensionOption(QWebPage::ErrorPageExtensionOption* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QWEBPAGE_ERRORPAGEEXTENSIONOPTION_H
