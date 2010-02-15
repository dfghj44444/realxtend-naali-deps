#ifndef PYTHONQTWRAPPER_QWEBPAGE_CHOOSEMULTIPLEFILESEXTENSIONRETURN_H
#define PYTHONQTWRAPPER_QWEBPAGE_CHOOSEMULTIPLEFILESEXTENSIONRETURN_H

#include <qwebpage.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QWebPage_ChooseMultipleFilesExtensionReturn : public QWebPage::ChooseMultipleFilesExtensionReturn
{
public:
    PythonQtShell_QWebPage_ChooseMultipleFilesExtensionReturn():QWebPage::ChooseMultipleFilesExtensionReturn(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ChooseMultipleFilesExtensionReturn : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ChooseMultipleFilesExtensionReturn* new_QWebPage_ChooseMultipleFilesExtensionReturn();
void delete_QWebPage_ChooseMultipleFilesExtensionReturn(QWebPage::ChooseMultipleFilesExtensionReturn* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QWEBPAGE_CHOOSEMULTIPLEFILESEXTENSIONRETURN_H
