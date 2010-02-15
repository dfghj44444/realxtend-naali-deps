#include "PythonQtWrapper_QPaintEngineState.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QPainterPath>
#include <QVariant>
#include <qbrush.h>
#include <qfont.h>
#include <qmatrix.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpen.h>
#include <qpoint.h>
#include <qregion.h>
#include <qtransform.h>

QPaintEngineState* PythonQtWrapper_QPaintEngineState::new_QPaintEngineState()
{ 
return new PythonQtShell_QPaintEngineState(); }

QRegion  PythonQtWrapper_QPaintEngineState::clipRegion(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->clipRegion());
}

QTransform  PythonQtWrapper_QPaintEngineState::transform(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->transform());
}

QBrush  PythonQtWrapper_QPaintEngineState::backgroundBrush(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->backgroundBrush());
}

QMatrix  PythonQtWrapper_QPaintEngineState::matrix(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->matrix());
}

QPainter::RenderHints  PythonQtWrapper_QPaintEngineState::renderHints(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->renderHints());
}

QPointF  PythonQtWrapper_QPaintEngineState::brushOrigin(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->brushOrigin());
}

QPainter*  PythonQtWrapper_QPaintEngineState::painter(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->painter());
}

Qt::ClipOperation  PythonQtWrapper_QPaintEngineState::clipOperation(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->clipOperation());
}

qreal  PythonQtWrapper_QPaintEngineState::opacity(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->opacity());
}

bool  PythonQtWrapper_QPaintEngineState::penNeedsResolving(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->penNeedsResolving());
}

bool  PythonQtWrapper_QPaintEngineState::isClipEnabled(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->isClipEnabled());
}

QPainter::CompositionMode  PythonQtWrapper_QPaintEngineState::compositionMode(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->compositionMode());
}

QPainterPath  PythonQtWrapper_QPaintEngineState::clipPath(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->clipPath());
}

QPaintEngine::DirtyFlags  PythonQtWrapper_QPaintEngineState::state(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QBrush  PythonQtWrapper_QPaintEngineState::brush(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->brush());
}

QFont  PythonQtWrapper_QPaintEngineState::font(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

Qt::BGMode  PythonQtWrapper_QPaintEngineState::backgroundMode(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->backgroundMode());
}

bool  PythonQtWrapper_QPaintEngineState::brushNeedsResolving(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->brushNeedsResolving());
}

QPen  PythonQtWrapper_QPaintEngineState::pen(QPaintEngineState* theWrappedObject) const
{
  return ( theWrappedObject->pen());
}

