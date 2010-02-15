#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONTABV3_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONTABV3_H

#include <qstyleoption.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QStyleOptionTabV3 : public QStyleOptionTabV3
{
public:
    PythonQtShell_QStyleOptionTabV3():QStyleOptionTabV3(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabV3(const QStyleOptionTab&  other):QStyleOptionTabV3(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabV3(const QStyleOptionTabV2&  other):QStyleOptionTabV3(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabV3(const QStyleOptionTabV3&  other):QStyleOptionTabV3(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabV3(int  version):QStyleOptionTabV3(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTabV3 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion )
enum StyleOptionVersion{
  Version = QStyleOptionTabV3::Version};
public slots:
QStyleOptionTabV3* new_QStyleOptionTabV3();
QStyleOptionTabV3* new_QStyleOptionTabV3(const QStyleOptionTab&  other);
QStyleOptionTabV3* new_QStyleOptionTabV3(const QStyleOptionTabV2&  other);
QStyleOptionTabV3* new_QStyleOptionTabV3(const QStyleOptionTabV3&  other);
void delete_QStyleOptionTabV3(QStyleOptionTabV3* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONTABV3_H
