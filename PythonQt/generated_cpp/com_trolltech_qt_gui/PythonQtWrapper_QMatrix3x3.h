#ifndef PYTHONQTWRAPPER_QMATRIX3X3_H
#define PYTHONQTWRAPPER_QMATRIX3X3_H

#include <qgenericmatrix.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtShell_QMatrix3x3 : public QMatrix3x3
{
public:
    PythonQtShell_QMatrix3x3():QMatrix3x3(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMatrix3x3 : public QObject
{ Q_OBJECT
public:
public slots:
QMatrix3x3* new_QMatrix3x3();
QMatrix3x3* new_QMatrix3x3(const QMatrix3x3& other) {
PythonQtShell_QMatrix3x3* a = new PythonQtShell_QMatrix3x3();
*((QMatrix3x3*)a) = other;
return a; }
void delete_QMatrix3x3(QMatrix3x3* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QMATRIX3X3_H
