#ifndef PYTHONQTWRAPPER_QWEBPLUGINFACTORY_MIMETYPE_H
#define PYTHONQTWRAPPER_QWEBPLUGINFACTORY_MIMETYPE_H

#include <qwebpluginfactory.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qwebpluginfactory.h>

class PythonQtShell_QWebPluginFactory_MimeType : public QWebPluginFactory::MimeType
{
public:
    PythonQtShell_QWebPluginFactory_MimeType():QWebPluginFactory::MimeType(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPluginFactory_MimeType : public QObject
{ Q_OBJECT
public:
public slots:
QWebPluginFactory::MimeType* new_QWebPluginFactory_MimeType();
QWebPluginFactory::MimeType* new_QWebPluginFactory_MimeType(const QWebPluginFactory::MimeType& other) {
PythonQtShell_QWebPluginFactory_MimeType* a = new PythonQtShell_QWebPluginFactory_MimeType();
*((QWebPluginFactory::MimeType*)a) = other;
return a; }
void delete_QWebPluginFactory_MimeType(QWebPluginFactory::MimeType* obj) { delete obj; } 
   bool  operator_equal(QWebPluginFactory::MimeType* theWrappedObject, const QWebPluginFactory::MimeType&  other) const;
};

#endif // PYTHONQTWRAPPER_QWEBPLUGINFACTORY_MIMETYPE_H
