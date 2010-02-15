#ifndef PYTHONQTWRAPPER_QGRAPHICSANCHOR_H
#define PYTHONQTWRAPPER_QGRAPHICSANCHOR_H

#include <qgraphicsanchorlayout.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

class PythonQtWrapper_QGraphicsAnchor : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QGraphicsAnchor(QGraphicsAnchor* obj) { delete obj; } 
   qreal  spacing(QGraphicsAnchor* theWrappedObject) const;
   void unsetSpacing(QGraphicsAnchor* theWrappedObject);
   void setSizePolicy(QGraphicsAnchor* theWrappedObject, QSizePolicy::Policy  policy);
   QSizePolicy::Policy  sizePolicy(QGraphicsAnchor* theWrappedObject) const;
   void setSpacing(QGraphicsAnchor* theWrappedObject, qreal  spacing);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSANCHOR_H
