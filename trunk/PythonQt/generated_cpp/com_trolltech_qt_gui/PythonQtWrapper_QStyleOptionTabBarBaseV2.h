#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONTABBARBASEV2_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONTABBARBASEV2_H

#include <qstyleoption.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QStyleOptionTabBarBaseV2 : public QStyleOptionTabBarBaseV2
{
public:
    PythonQtShell_QStyleOptionTabBarBaseV2():QStyleOptionTabBarBaseV2(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabBarBaseV2(const QStyleOptionTabBarBase&  other):QStyleOptionTabBarBaseV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabBarBaseV2(const QStyleOptionTabBarBaseV2&  other):QStyleOptionTabBarBaseV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabBarBaseV2(int  version):QStyleOptionTabBarBaseV2(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTabBarBaseV2 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion )
enum StyleOptionVersion{
  Version = QStyleOptionTabBarBaseV2::Version};
public slots:
QStyleOptionTabBarBaseV2* new_QStyleOptionTabBarBaseV2();
QStyleOptionTabBarBaseV2* new_QStyleOptionTabBarBaseV2(const QStyleOptionTabBarBase&  other);
QStyleOptionTabBarBaseV2* new_QStyleOptionTabBarBaseV2(const QStyleOptionTabBarBaseV2&  other);
void delete_QStyleOptionTabBarBaseV2(QStyleOptionTabBarBaseV2* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONTABBARBASEV2_H
