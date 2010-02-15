#ifndef PYTHONQTWRAPPER_QSIZEF_H
#define PYTHONQTWRAPPER_QSIZEF_H

#include <qsize.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qsize.h>

class PythonQtWrapper_QSizeF : public QObject
{ Q_OBJECT
public:
public slots:
QSizeF* new_QSizeF();
QSizeF* new_QSizeF(const QSize&  sz);
QSizeF* new_QSizeF(qreal  w, qreal  h);
QSizeF* new_QSizeF(const QSizeF& other) {
QSizeF* a = new QSizeF();
*((QSizeF*)a) = other;
return a; }
void delete_QSizeF(QSizeF* obj) { delete obj; } 
   QSizeF  boundedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const;
   QSizeF*  __imul__(QSizeF* theWrappedObject, qreal  c);
   QSizeF  expandedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const;
   void readFrom(QSizeF* theWrappedObject, QDataStream&  arg__1);
   void transpose(QSizeF* theWrappedObject);
   bool  isValid(QSizeF* theWrappedObject) const;
   bool  operator_equal(QSizeF* theWrappedObject, const QSizeF&  s2);
   void setWidth(QSizeF* theWrappedObject, qreal  w);
   QSizeF*  __idiv__(QSizeF* theWrappedObject, qreal  c);
   qreal  height(QSizeF* theWrappedObject) const;
   QSizeF*  __iadd__(QSizeF* theWrappedObject, const QSizeF&  arg__1);
   QSize  toSize(QSizeF* theWrappedObject) const;
   void scale(QSizeF* theWrappedObject, const QSizeF&  s, Qt::AspectRatioMode  mode);
   void scale(QSizeF* theWrappedObject, qreal  w, qreal  h, Qt::AspectRatioMode  mode);
   qreal  width(QSizeF* theWrappedObject) const;
   const QSizeF  __add__(QSizeF* theWrappedObject, const QSizeF&  s2);
   QSizeF*  __isub__(QSizeF* theWrappedObject, const QSizeF&  arg__1);
   bool  isEmpty(QSizeF* theWrappedObject) const;
   const QSizeF  __div__(QSizeF* theWrappedObject, qreal  c);
   bool  isNull(QSizeF* theWrappedObject) const;
   const QSizeF  __mul__(QSizeF* theWrappedObject, qreal  c);
   void writeTo(QSizeF* theWrappedObject, QDataStream&  arg__1);
   void setHeight(QSizeF* theWrappedObject, qreal  h);
   const QSizeF  __sub__(QSizeF* theWrappedObject, const QSizeF&  s2);
    QString toString(QSizeF*);
};

#endif // PYTHONQTWRAPPER_QSIZEF_H
