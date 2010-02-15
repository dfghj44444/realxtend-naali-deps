#ifndef PYTHONQTWRAPPER_QWEBPAGE_EXTENSIONRETURN_H
#define PYTHONQTWRAPPER_QWEBPAGE_EXTENSIONRETURN_H

#include <qwebpage.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QWebPage_ExtensionReturn : public QWebPage::ExtensionReturn
{
public:
    PythonQtShell_QWebPage_ExtensionReturn():QWebPage::ExtensionReturn(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ExtensionReturn : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ExtensionReturn* new_QWebPage_ExtensionReturn();
void delete_QWebPage_ExtensionReturn(QWebPage::ExtensionReturn* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QWEBPAGE_EXTENSIONRETURN_H
