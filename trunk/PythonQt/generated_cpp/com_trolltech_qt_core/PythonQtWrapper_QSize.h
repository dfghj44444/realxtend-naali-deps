#ifndef PYTHONQTWRAPPER_QSIZE_H
#define PYTHONQTWRAPPER_QSIZE_H

#include <qsize.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qsize.h>

class PythonQtWrapper_QSize : public QObject
{ Q_OBJECT
public:
public slots:
QSize* new_QSize();
QSize* new_QSize(int  w, int  h);
QSize* new_QSize(const QSize& other) {
QSize* a = new QSize();
*((QSize*)a) = other;
return a; }
void delete_QSize(QSize* obj) { delete obj; } 
   void transpose(QSize* theWrappedObject);
   const QSize  __sub__(QSize* theWrappedObject, const QSize&  s2);
   bool  operator_equal(QSize* theWrappedObject, const QSize&  s2);
   bool  isEmpty(QSize* theWrappedObject) const;
   QSize  boundedTo(QSize* theWrappedObject, const QSize&  arg__1) const;
   QSize  expandedTo(QSize* theWrappedObject, const QSize&  arg__1) const;
   bool  isNull(QSize* theWrappedObject) const;
   QSize*  __isub__(QSize* theWrappedObject, const QSize&  arg__1);
   QSize*  __idiv__(QSize* theWrappedObject, qreal  c);
   int  width(QSize* theWrappedObject) const;
   QSize*  __iadd__(QSize* theWrappedObject, const QSize&  arg__1);
   bool  isValid(QSize* theWrappedObject) const;
   int  height(QSize* theWrappedObject) const;
   QSize*  __imul__(QSize* theWrappedObject, qreal  c);
   void scale(QSize* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  mode);
   const QSize  __add__(QSize* theWrappedObject, const QSize&  s2);
   void scale(QSize* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  mode);
   void setHeight(QSize* theWrappedObject, int  h);
   const QSize  __div__(QSize* theWrappedObject, qreal  c);
   void writeTo(QSize* theWrappedObject, QDataStream&  arg__1);
   void setWidth(QSize* theWrappedObject, int  w);
   const QSize  __mul__(QSize* theWrappedObject, qreal  c);
   void readFrom(QSize* theWrappedObject, QDataStream&  arg__1);
    QString toString(QSize*);
};

#endif // PYTHONQTWRAPPER_QSIZE_H
