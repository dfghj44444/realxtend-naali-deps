#ifndef PYTHONQTWRAPPER_QMARGINS_H
#define PYTHONQTWRAPPER_QMARGINS_H

#include <qmargins.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtWrapper_QMargins : public QObject
{ Q_OBJECT
public:
public slots:
QMargins* new_QMargins();
QMargins* new_QMargins(int  left, int  top, int  right, int  bottom);
QMargins* new_QMargins(const QMargins& other) {
QMargins* a = new QMargins();
*((QMargins*)a) = other;
return a; }
void delete_QMargins(QMargins* obj) { delete obj; } 
   void setRight(QMargins* theWrappedObject, int  right);
   bool  operator_equal(QMargins* theWrappedObject, const QMargins&  m2);
   int  left(QMargins* theWrappedObject) const;
   bool  isNull(QMargins* theWrappedObject) const;
   void setTop(QMargins* theWrappedObject, int  top);
   void setLeft(QMargins* theWrappedObject, int  left);
   int  top(QMargins* theWrappedObject) const;
   void setBottom(QMargins* theWrappedObject, int  bottom);
   int  right(QMargins* theWrappedObject) const;
   int  bottom(QMargins* theWrappedObject) const;
    QString toString(QMargins*);
};

#endif // PYTHONQTWRAPPER_QMARGINS_H
