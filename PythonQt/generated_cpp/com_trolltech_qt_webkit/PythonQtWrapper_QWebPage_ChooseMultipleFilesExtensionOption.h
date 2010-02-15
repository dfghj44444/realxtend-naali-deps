#ifndef PYTHONQTWRAPPER_QWEBPAGE_CHOOSEMULTIPLEFILESEXTENSIONOPTION_H
#define PYTHONQTWRAPPER_QWEBPAGE_CHOOSEMULTIPLEFILESEXTENSIONOPTION_H

#include <qwebpage.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QWebPage_ChooseMultipleFilesExtensionOption : public QWebPage::ChooseMultipleFilesExtensionOption
{
public:
    PythonQtShell_QWebPage_ChooseMultipleFilesExtensionOption():QWebPage::ChooseMultipleFilesExtensionOption(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ChooseMultipleFilesExtensionOption : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ChooseMultipleFilesExtensionOption* new_QWebPage_ChooseMultipleFilesExtensionOption();
void delete_QWebPage_ChooseMultipleFilesExtensionOption(QWebPage::ChooseMultipleFilesExtensionOption* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QWEBPAGE_CHOOSEMULTIPLEFILESEXTENSIONOPTION_H
