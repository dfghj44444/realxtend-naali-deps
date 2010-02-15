#ifndef PYTHONQTWRAPPER_QWEBPAGE_ERRORPAGEEXTENSIONRETURN_H
#define PYTHONQTWRAPPER_QWEBPAGE_ERRORPAGEEXTENSIONRETURN_H

#include <qwebpage.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QWebPage_ErrorPageExtensionReturn : public QWebPage::ErrorPageExtensionReturn
{
public:
    PythonQtShell_QWebPage_ErrorPageExtensionReturn():QWebPage::ErrorPageExtensionReturn(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ErrorPageExtensionReturn : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ErrorPageExtensionReturn* new_QWebPage_ErrorPageExtensionReturn();
void delete_QWebPage_ErrorPageExtensionReturn(QWebPage::ErrorPageExtensionReturn* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QWEBPAGE_ERRORPAGEEXTENSIONRETURN_H
