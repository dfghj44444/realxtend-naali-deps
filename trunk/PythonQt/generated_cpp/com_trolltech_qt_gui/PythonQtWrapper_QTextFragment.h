#ifndef PYTHONQTWRAPPER_QTEXTFRAGMENT_H
#define PYTHONQTWRAPPER_QTEXTFRAGMENT_H

#include <qtextobject.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qtextformat.h>
#include <qtextobject.h>

class PythonQtWrapper_QTextFragment : public QObject
{ Q_OBJECT
public:
public slots:
QTextFragment* new_QTextFragment();
QTextFragment* new_QTextFragment(const QTextFragment&  o);
void delete_QTextFragment(QTextFragment* obj) { delete obj; } 
   int  length(QTextFragment* theWrappedObject) const;
   QString  text(QTextFragment* theWrappedObject) const;
   bool  contains(QTextFragment* theWrappedObject, int  position) const;
   QTextCharFormat  charFormat(QTextFragment* theWrappedObject) const;
   int  position(QTextFragment* theWrappedObject) const;
   bool  operator_equal(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   bool  operator_less(QTextFragment* theWrappedObject, const QTextFragment&  o) const;
   int  charFormatIndex(QTextFragment* theWrappedObject) const;
   bool  isValid(QTextFragment* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QTEXTFRAGMENT_H
