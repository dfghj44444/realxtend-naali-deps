#ifndef PYTHONQTWRAPPER_QPIXMAP_H
#define PYTHONQTWRAPPER_QPIXMAP_H

#include <qpixmap.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qimage.h>
#include <qimagewriter.h>
#include <qiodevice.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qtransform.h>
#include <qwidget.h>

class PythonQtShell_QPixmap : public QPixmap
{
public:
    PythonQtShell_QPixmap():QPixmap(),_wrapper(NULL) {};
    PythonQtShell_QPixmap(const QPixmap&  arg__1):QPixmap(arg__1),_wrapper(NULL) {};
    PythonQtShell_QPixmap(const QSize&  arg__1):QPixmap(arg__1),_wrapper(NULL) {};
    PythonQtShell_QPixmap(const QString&  fileName, const char*  format = 0, Qt::ImageConversionFlags  flags = Qt::AutoColor):QPixmap(fileName, format, flags),_wrapper(NULL) {};
    PythonQtShell_QPixmap(const char**  xpm):QPixmap(xpm),_wrapper(NULL) {};
    PythonQtShell_QPixmap(int  w, int  h):QPixmap(w, h),_wrapper(NULL) {};

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPixmap : public QPixmap
{ public:
inline QPaintEngine*  promoted_paintEngine() const { return QPixmap::paintEngine(); }
inline int  promoted_devType() const { return QPixmap::devType(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return QPixmap::metric(arg__1); }
};

class PythonQtWrapper_QPixmap : public QObject
{ Q_OBJECT
public:
public slots:
QPixmap* new_QPixmap();
QPixmap* new_QPixmap(const QPixmap&  arg__1);
QPixmap* new_QPixmap(const QSize&  arg__1);
QPixmap* new_QPixmap(const QString&  fileName, const char*  format = 0, Qt::ImageConversionFlags  flags = Qt::AutoColor);
QPixmap* new_QPixmap(const char**  xpm);
QPixmap* new_QPixmap(int  w, int  h);
void delete_QPixmap(QPixmap* obj) { delete obj; } 
   void scroll(QPixmap* theWrappedObject, int  dx, int  dy, int  x, int  y, int  width, int  height, QRegion*  exposed = 0);
   QPixmap  copy(QPixmap* theWrappedObject, const QRect&  rect = QRect()) const;
   QPixmap  alphaChannel(QPixmap* theWrappedObject) const;
   QPaintEngine*  paintEngine(QPixmap* theWrappedObject) const;
   int  devType(QPixmap* theWrappedObject) const;
   QPixmap  static_QPixmap_grabWindow(WId  arg__1, int  x = 0, int  y = 0, int  w = -1, int  h = -1);
   int  width(QPixmap* theWrappedObject) const;
   QSize  size(QPixmap* theWrappedObject) const;
   int  static_QPixmap_defaultDepth();
   int  metric(QPixmap* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const;
   QBitmap  createHeuristicMask(QPixmap* theWrappedObject, bool  clipTight = true) const;
   QPixmap  scaled(QPixmap* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  aspectMode = Qt::IgnoreAspectRatio, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   bool  save(QPixmap* theWrappedObject, QIODevice*  device, const char*  format = 0, int  quality = -1) const;
   QPixmap  scaled(QPixmap* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  aspectMode = Qt::IgnoreAspectRatio, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QPixmap  scaledToHeight(QPixmap* theWrappedObject, int  h, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QBitmap  createMaskFromColor(QPixmap* theWrappedObject, const QColor&  maskColor) const;
   bool  isNull(QPixmap* theWrappedObject) const;
   bool  isQBitmap(QPixmap* theWrappedObject) const;
   void writeTo(QPixmap* theWrappedObject, QDataStream&  arg__1);
   QPixmap  transformed(QPixmap* theWrappedObject, const QTransform&  arg__1, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   qint64  cacheKey(QPixmap* theWrappedObject) const;
   QPixmap  static_QPixmap_grabWidget(QWidget*  widget, const QRect&  rect);
   void readFrom(QPixmap* theWrappedObject, QDataStream&  arg__1);
   int  depth(QPixmap* theWrappedObject) const;
   void setAlphaChannel(QPixmap* theWrappedObject, const QPixmap&  arg__1);
   QPixmap  copy(QPixmap* theWrappedObject, int  x, int  y, int  width, int  height) const;
   QPixmap  static_QPixmap_grabWidget(QWidget*  widget, int  x = 0, int  y = 0, int  w = -1, int  h = -1);
   QPixmap  scaledToWidth(QPixmap* theWrappedObject, int  w, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QRect  rect(QPixmap* theWrappedObject) const;
   void fill(QPixmap* theWrappedObject, const QWidget*  widget, const QPoint&  ofs);
   bool  hasAlpha(QPixmap* theWrappedObject) const;
   QBitmap  createMaskFromColor(QPixmap* theWrappedObject, const QColor&  maskColor, Qt::MaskMode  mode) const;
   QPixmap  static_QPixmap_fromImage(const QImage&  image, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   bool  hasAlphaChannel(QPixmap* theWrappedObject) const;
   void setMask(QPixmap* theWrappedObject, const QBitmap&  arg__1);
   QPixmap  transformed(QPixmap* theWrappedObject, const QMatrix&  arg__1, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   bool  loadFromData(QPixmap* theWrappedObject, const QByteArray&  data, const char*  format = 0, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   bool  save(QPixmap* theWrappedObject, const QString&  fileName, const char*  format = 0, int  quality = -1) const;
   QImage  toImage(QPixmap* theWrappedObject) const;
   void scroll(QPixmap* theWrappedObject, int  dx, int  dy, const QRect&  rect, QRegion*  exposed = 0);
   void fill(QPixmap* theWrappedObject, const QWidget*  widget, int  xofs, int  yofs);
   void fill(QPixmap* theWrappedObject, const QColor&  fillColor = Qt::white);
   QTransform  static_QPixmap_trueMatrix(const QTransform&  m, int  w, int  h);
   int  height(QPixmap* theWrappedObject) const;
   QBitmap  mask(QPixmap* theWrappedObject) const;
   QMatrix  static_QPixmap_trueMatrix(const QMatrix&  m, int  w, int  h);
   bool  load(QPixmap* theWrappedObject, const QString&  fileName, const char*  format = 0, Qt::ImageConversionFlags  flags = Qt::AutoColor);
};

#endif // PYTHONQTWRAPPER_QPIXMAP_H
