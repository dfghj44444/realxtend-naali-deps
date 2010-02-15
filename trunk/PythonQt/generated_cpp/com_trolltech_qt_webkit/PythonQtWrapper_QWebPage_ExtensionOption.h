#ifndef PYTHONQTWRAPPER_QWEBPAGE_EXTENSIONOPTION_H
#define PYTHONQTWRAPPER_QWEBPAGE_EXTENSIONOPTION_H

#include <qwebpage.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QWebPage_ExtensionOption : public QWebPage::ExtensionOption
{
public:
    PythonQtShell_QWebPage_ExtensionOption():QWebPage::ExtensionOption(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ExtensionOption : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ExtensionOption* new_QWebPage_ExtensionOption();
void delete_QWebPage_ExtensionOption(QWebPage::ExtensionOption* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QWEBPAGE_EXTENSIONOPTION_H
