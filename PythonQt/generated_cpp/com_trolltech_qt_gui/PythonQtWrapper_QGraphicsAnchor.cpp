#include "PythonQtWrapper_QGraphicsAnchor.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

qreal  PythonQtWrapper_QGraphicsAnchor::spacing(QGraphicsAnchor* theWrappedObject) const
{
  return ( theWrappedObject->spacing());
}

void PythonQtWrapper_QGraphicsAnchor::unsetSpacing(QGraphicsAnchor* theWrappedObject)
{
  ( theWrappedObject->unsetSpacing());
}

void PythonQtWrapper_QGraphicsAnchor::setSizePolicy(QGraphicsAnchor* theWrappedObject, QSizePolicy::Policy  policy)
{
  ( theWrappedObject->setSizePolicy(policy));
}

QSizePolicy::Policy  PythonQtWrapper_QGraphicsAnchor::sizePolicy(QGraphicsAnchor* theWrappedObject) const
{
  return ( theWrappedObject->sizePolicy());
}

void PythonQtWrapper_QGraphicsAnchor::setSpacing(QGraphicsAnchor* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setSpacing(spacing));
}

