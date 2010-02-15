#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONFRAMEV3_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONFRAMEV3_H

#include <qstyleoption.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QStyleOptionFrameV3 : public QStyleOptionFrameV3
{
public:
    PythonQtShell_QStyleOptionFrameV3():QStyleOptionFrameV3(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionFrameV3(const QStyleOptionFrame&  other):QStyleOptionFrameV3(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionFrameV3(const QStyleOptionFrameV3&  other):QStyleOptionFrameV3(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionFrameV3(int  version):QStyleOptionFrameV3(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionFrameV3 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion )
enum StyleOptionVersion{
  Version = QStyleOptionFrameV3::Version};
public slots:
QStyleOptionFrameV3* new_QStyleOptionFrameV3();
QStyleOptionFrameV3* new_QStyleOptionFrameV3(const QStyleOptionFrame&  other);
QStyleOptionFrameV3* new_QStyleOptionFrameV3(const QStyleOptionFrameV3&  other);
void delete_QStyleOptionFrameV3(QStyleOptionFrameV3* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONFRAMEV3_H
