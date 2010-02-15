#ifndef PYTHONQTWRAPPER_QPAINTER_H
#define PYTHONQTWRAPPER_QPAINTER_H

#include <qpainter.h>
#include <QObject>

#include <PythonQt.h>

#include <QPainterPath>
#include <QPixmap>
#include <QVariant>
#include <QWidget>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qimage.h>
#include <qline.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qtransform.h>
#include <qvector.h>
#include <qwidget.h>

class PythonQtWrapper_QPainter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CompositionMode RenderHint )
Q_FLAGS(RenderHints )
enum CompositionMode{
  CompositionMode_SourceOver = QPainter::CompositionMode_SourceOver,   CompositionMode_DestinationOver = QPainter::CompositionMode_DestinationOver,   CompositionMode_Clear = QPainter::CompositionMode_Clear,   CompositionMode_Source = QPainter::CompositionMode_Source,   CompositionMode_Destination = QPainter::CompositionMode_Destination,   CompositionMode_SourceIn = QPainter::CompositionMode_SourceIn,   CompositionMode_DestinationIn = QPainter::CompositionMode_DestinationIn,   CompositionMode_SourceOut = QPainter::CompositionMode_SourceOut,   CompositionMode_DestinationOut = QPainter::CompositionMode_DestinationOut,   CompositionMode_SourceAtop = QPainter::CompositionMode_SourceAtop,   CompositionMode_DestinationAtop = QPainter::CompositionMode_DestinationAtop,   CompositionMode_Xor = QPainter::CompositionMode_Xor,   CompositionMode_Plus = QPainter::CompositionMode_Plus,   CompositionMode_Multiply = QPainter::CompositionMode_Multiply,   CompositionMode_Screen = QPainter::CompositionMode_Screen,   CompositionMode_Overlay = QPainter::CompositionMode_Overlay,   CompositionMode_Darken = QPainter::CompositionMode_Darken,   CompositionMode_Lighten = QPainter::CompositionMode_Lighten,   CompositionMode_ColorDodge = QPainter::CompositionMode_ColorDodge,   CompositionMode_ColorBurn = QPainter::CompositionMode_ColorBurn,   CompositionMode_HardLight = QPainter::CompositionMode_HardLight,   CompositionMode_SoftLight = QPainter::CompositionMode_SoftLight,   CompositionMode_Difference = QPainter::CompositionMode_Difference,   CompositionMode_Exclusion = QPainter::CompositionMode_Exclusion,   RasterOp_SourceOrDestination = QPainter::RasterOp_SourceOrDestination,   RasterOp_SourceAndDestination = QPainter::RasterOp_SourceAndDestination,   RasterOp_SourceXorDestination = QPainter::RasterOp_SourceXorDestination,   RasterOp_NotSourceAndNotDestination = QPainter::RasterOp_NotSourceAndNotDestination,   RasterOp_NotSourceOrNotDestination = QPainter::RasterOp_NotSourceOrNotDestination,   RasterOp_NotSourceXorDestination = QPainter::RasterOp_NotSourceXorDestination,   RasterOp_NotSource = QPainter::RasterOp_NotSource,   RasterOp_NotSourceAndDestination = QPainter::RasterOp_NotSourceAndDestination,   RasterOp_SourceAndNotDestination = QPainter::RasterOp_SourceAndNotDestination};
enum RenderHint{
  Antialiasing = QPainter::Antialiasing,   TextAntialiasing = QPainter::TextAntialiasing,   SmoothPixmapTransform = QPainter::SmoothPixmapTransform,   HighQualityAntialiasing = QPainter::HighQualityAntialiasing,   NonCosmeticDefaultPen = QPainter::NonCosmeticDefaultPen};
Q_DECLARE_FLAGS(RenderHints, RenderHint)
public slots:
QPainter* new_QPainter();
void delete_QPainter(QPainter* obj) { delete obj; } 
   QPoint  brushOrigin(QPainter* theWrappedObject) const;
   bool  end(QPainter* theWrappedObject);
   const QTransform*  worldTransform(QPainter* theWrappedObject) const;
   void drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image, const QRect&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void setRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint, bool  on = true);
   void drawArc(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawLine(QPainter* theWrappedObject, const QLine&  line);
   void eraseRect(QPainter* theWrappedObject, const QRectF&  arg__1);
   const QMatrix*  worldMatrix(QPainter* theWrappedObject) const;
   void drawPoints(QPainter* theWrappedObject, const QPolygonF&  points);
   void setClipRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ClipOperation  op = Qt::ReplaceClip);
   void drawPolyline(QPainter* theWrappedObject, const QPolygonF&  polyline);
   void drawPie(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawLine(QPainter* theWrappedObject, const QLineF&  line);
   void resetMatrix(QPainter* theWrappedObject);
   void scale(QPainter* theWrappedObject, qreal  sx, qreal  sy);
   Qt::BGMode  backgroundMode(QPainter* theWrappedObject) const;
   void setViewTransformEnabled(QPainter* theWrappedObject, bool  enable);
   const QTransform*  deviceTransform(QPainter* theWrappedObject) const;
   void setWindow(QPainter* theWrappedObject, const QRect&  window);
   QRectF  boundingRect(QPainter* theWrappedObject, const QRectF&  rect, int  flags, const QString&  text);
   void drawPoints(QPainter* theWrappedObject, const QPolygon&  points);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QColor&  color);
   void drawLines(QPainter* theWrappedObject, const QVector<QPointF >&  pointPairs);
   QTransform  combinedTransform(QPainter* theWrappedObject) const;
   QPainterPath  clipPath(QPainter* theWrappedObject) const;
   void drawImage(QPainter* theWrappedObject, const QRectF&  r, const QImage&  image);
   void fillRect(QPainter* theWrappedObject, const QRectF&  r, Qt::BrushStyle  style);
   void drawLine(QPainter* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   void fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QColor&  color);
   QRect  window(QPainter* theWrappedObject) const;
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh);
   void setPen(QPainter* theWrappedObject, const QPen&  pen);
   void beginNativePainting(QPainter* theWrappedObject);
   const QBrush*  brush(QPainter* theWrappedObject) const;
   void setPen(QPainter* theWrappedObject, Qt::PenStyle  style);
   QPaintDevice*  device(QPainter* theWrappedObject) const;
   void fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QBrush&  arg__2);
   void translate(QPainter* theWrappedObject, const QPointF&  offset);
   qreal  opacity(QPainter* theWrappedObject) const;
   void drawEllipse(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void drawPoint(QPainter* theWrappedObject, int  x, int  y);
   void drawPicture(QPainter* theWrappedObject, const QPointF&  p, const QPicture&  picture);
   void drawPolyline(QPainter* theWrappedObject, const QPolygon&  polygon);
   void drawText(QPainter* theWrappedObject, int  x, int  y, const QString&  s);
   bool  begin(QPainter* theWrappedObject, QPaintDevice*  arg__1);
   void fillRect(QPainter* theWrappedObject, const QRectF&  r, Qt::GlobalColor  c);
   void drawPixmap(QPainter* theWrappedObject, const QRectF&  targetRect, const QPixmap&  pixmap, const QRectF&  sourceRect);
   void drawPolygon(QPainter* theWrappedObject, const QPolygon&  polygon, Qt::FillRule  fillRule = Qt::OddEvenFill);
   QPaintDevice*  static_QPainter_redirected(const QPaintDevice*  device, QPoint*  offset = 0);
   bool  isActive(QPainter* theWrappedObject) const;
   void drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm, const QRectF&  sr);
   void drawArc(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   bool  testRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint) const;
   QPaintEngine*  paintEngine(QPainter* theWrappedObject) const;
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm);
   void setWorldMatrix(QPainter* theWrappedObject, const QMatrix&  matrix, bool  combine = false);
   void drawRoundRect(QPainter* theWrappedObject, const QRectF&  r, int  xround = 25, int  yround = 25);
   void drawImage(QPainter* theWrappedObject, const QRectF&  targetRect, const QImage&  image, const QRectF&  sourceRect, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawRects(QPainter* theWrappedObject, const QVector<QRect >&  rectangles);
   void drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QRect&  targetRect, const QImage&  image, const QRect&  sourceRect, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawEllipse(QPainter* theWrappedObject, const QRect&  r);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::BrushStyle  style);
   void setWindow(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QColor&  color);
   bool  viewTransformEnabled(QPainter* theWrappedObject) const;
   void drawChord(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void fillPath(QPainter* theWrappedObject, const QPainterPath&  path, const QBrush&  brush);
   void setBrushOrigin(QPainter* theWrappedObject, int  x, int  y);
   void drawText(QPainter* theWrappedObject, const QPoint&  p, const QString&  s);
   void drawArc(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawRoundRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  arg__5 = 25, int  arg__6 = 25);
   void setRenderHints(QPainter* theWrappedObject, QPainter::RenderHints  hints, bool  on = true);
   QRect  boundingRect(QPainter* theWrappedObject, const QRect&  rect, int  flags, const QString&  text);
   void setBrush(QPainter* theWrappedObject, const QBrush&  brush);
   void drawPath(QPainter* theWrappedObject, const QPainterPath&  path);
   void drawPixmap(QPainter* theWrappedObject, const QRect&  r, const QPixmap&  pm);
   void setBackground(QPainter* theWrappedObject, const QBrush&  bg);
   void setBrushOrigin(QPainter* theWrappedObject, const QPointF&  arg__1);
   void setClipping(QPainter* theWrappedObject, bool  enable);
   void endNativePainting(QPainter* theWrappedObject);
   QRect  boundingRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text);
   void initFrom(QPainter* theWrappedObject, const QWidget*  widget);
   void drawImage(QPainter* theWrappedObject, int  x, int  y, const QImage&  image, int  sx = 0, int  sy = 0, int  sw = -1, int  sh = -1, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void setBrush(QPainter* theWrappedObject, Qt::BrushStyle  style);
   void setFont(QPainter* theWrappedObject, const QFont&  f);
   void drawImage(QPainter* theWrappedObject, const QRect&  r, const QImage&  image);
   void drawRects(QPainter* theWrappedObject, const QVector<QRectF >&  rectangles);
   void drawRect(QPainter* theWrappedObject, const QRectF&  rect);
   void setClipPath(QPainter* theWrappedObject, const QPainterPath&  path, Qt::ClipOperation  op = Qt::ReplaceClip);
   void drawTiledPixmap(QPainter* theWrappedObject, const QRect&  arg__1, const QPixmap&  arg__2, const QPoint&  arg__3 = QPoint());
   const QPen*  pen(QPainter* theWrappedObject) const;
   void drawPicture(QPainter* theWrappedObject, int  x, int  y, const QPicture&  picture);
   void drawText(QPainter* theWrappedObject, const QRectF&  r, const QString&  text, const QTextOption&  o = QTextOption());
   void drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   const QMatrix*  deviceMatrix(QPainter* theWrappedObject) const;
   void setCompositionMode(QPainter* theWrappedObject, QPainter::CompositionMode  mode);
   void drawEllipse(QPainter* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   void setClipRegion(QPainter* theWrappedObject, const QRegion&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setBackgroundMode(QPainter* theWrappedObject, Qt::BGMode  mode);
   void setClipRect(QPainter* theWrappedObject, const QRectF&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void drawTextItem(QPainter* theWrappedObject, const QPoint&  p, const QTextItem&  ti);
   void strokePath(QPainter* theWrappedObject, const QPainterPath&  path, const QPen&  pen);
   QPainter::CompositionMode  compositionMode(QPainter* theWrappedObject) const;
   const QTransform*  transform(QPainter* theWrappedObject) const;
   void setWorldTransform(QPainter* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void eraseRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void setClipRect(QPainter* theWrappedObject, const QRect&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void static_QPainter_restoreRedirected(const QPaintDevice*  device);
   void drawText(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, QRect*  br = 0);
   void drawRoundedRect(QPainter* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void resetTransform(QPainter* theWrappedObject);
   void static_QPainter_setRedirected(const QPaintDevice*  device, QPaintDevice*  replacement, const QPoint&  offset = QPoint());
   const QBrush*  background(QPainter* theWrappedObject) const;
   void setOpacity(QPainter* theWrappedObject, qreal  opacity);
   void drawText(QPainter* theWrappedObject, const QPointF&  p, const QString&  s);
   void restore(QPainter* theWrappedObject);
   void drawText(QPainter* theWrappedObject, const QRectF&  r, int  flags, const QString&  text, QRectF*  br = 0);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QBrush&  arg__5);
   void drawPie(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawTiledPixmap(QPainter* theWrappedObject, const QRectF&  rect, const QPixmap&  pm, const QPointF&  offset = QPointF());
   void drawRoundedRect(QPainter* theWrappedObject, const QRect&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawPixmap(QPainter* theWrappedObject, const QRect&  targetRect, const QPixmap&  pixmap, const QRect&  sourceRect);
   Qt::LayoutDirection  layoutDirection(QPainter* theWrappedObject) const;
   void fillRect(QPainter* theWrappedObject, const QRect&  r, Qt::BrushStyle  style);
   void setPen(QPainter* theWrappedObject, const QColor&  color);
   void drawConvexPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon);
   void drawEllipse(QPainter* theWrappedObject, const QPoint&  center, int  rx, int  ry);
   void shear(QPainter* theWrappedObject, qreal  sh, qreal  sv);
   QRegion  clipRegion(QPainter* theWrappedObject) const;
   void fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QBrush&  arg__2);
   void setTransform(QPainter* theWrappedObject, const QTransform&  transform, bool  combine = false);
   QRect  viewport(QPainter* theWrappedObject) const;
   void setViewport(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   bool  hasClipping(QPainter* theWrappedObject) const;
   void drawChord(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawRoundedRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawLines(QPainter* theWrappedObject, const QVector<QLineF >&  lines);
   void drawText(QPainter* theWrappedObject, const QRect&  r, int  flags, const QString&  text, QRect*  br = 0);
   QRectF  boundingRect(QPainter* theWrappedObject, const QRectF&  rect, const QString&  text, const QTextOption&  o = QTextOption());
   void drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm);
   void eraseRect(QPainter* theWrappedObject, const QRect&  arg__1);
   void drawLine(QPainter* theWrappedObject, const QPointF&  p1, const QPointF&  p2);
   void drawLines(QPainter* theWrappedObject, const QVector<QLine >&  lines);
   void setBrushOrigin(QPainter* theWrappedObject, const QPoint&  arg__1);
   QMatrix  combinedMatrix(QPainter* theWrappedObject) const;
   void drawTextItem(QPainter* theWrappedObject, int  x, int  y, const QTextItem&  ti);
   void fillRect(QPainter* theWrappedObject, const QRect&  r, Qt::GlobalColor  c);
   void setWorldMatrixEnabled(QPainter* theWrappedObject, bool  enabled);
   void drawConvexPolygon(QPainter* theWrappedObject, const QPolygon&  polygon);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::GlobalColor  c);
   void translate(QPainter* theWrappedObject, qreal  dx, qreal  dy);
   void translate(QPainter* theWrappedObject, const QPoint&  offset);
   void drawRect(QPainter* theWrappedObject, const QRect&  rect);
   void drawRoundRect(QPainter* theWrappedObject, const QRect&  r, int  xround = 25, int  yround = 25);
   void drawPicture(QPainter* theWrappedObject, const QPoint&  p, const QPicture&  picture);
   void drawTiledPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  arg__5, int  sx = 0, int  sy = 0);
   void drawLine(QPainter* theWrappedObject, const QPoint&  p1, const QPoint&  p2);
   void drawPie(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void save(QPainter* theWrappedObject);
   void drawChord(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm, const QRect&  sr);
   void drawPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon, Qt::FillRule  fillRule = Qt::OddEvenFill);
   QPainter::RenderHints  renderHints(QPainter* theWrappedObject) const;
   void rotate(QPainter* theWrappedObject, qreal  a);
   void drawPoint(QPainter* theWrappedObject, const QPoint&  p);
   void drawRect(QPainter* theWrappedObject, int  x1, int  y1, int  w, int  h);
   void drawLines(QPainter* theWrappedObject, const QVector<QPoint >&  pointPairs);
   void setViewport(QPainter* theWrappedObject, const QRect&  viewport);
   bool  worldMatrixEnabled(QPainter* theWrappedObject) const;
   void drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh);
   const QFont*  font(QPainter* theWrappedObject) const;
   void drawEllipse(QPainter* theWrappedObject, const QRectF&  r);
   void drawPoint(QPainter* theWrappedObject, const QPointF&  pt);
   void setLayoutDirection(QPainter* theWrappedObject, Qt::LayoutDirection  direction);
   void drawTextItem(QPainter* theWrappedObject, const QPointF&  p, const QTextItem&  ti);
};

#endif // PYTHONQTWRAPPER_QPAINTER_H
