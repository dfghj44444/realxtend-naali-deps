#include "PythonQtWrapper_QImage.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QMatrix>
#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qtransform.h>
#include <qvector.h>

int  PythonQtShell_QImage::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QImage::devType();
}
int  PythonQtShell_QImage::metric(QPaintDevice::PaintDeviceMetric  metric) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&metric};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QImage::metric(metric);
}
QPaintEngine*  PythonQtShell_QImage::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPaintEngine*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
        } else {
          returnValue = *((QPaintEngine**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QImage::paintEngine();
}
QImage* PythonQtWrapper_QImage::new_QImage()
{ 
return new PythonQtShell_QImage(); }

QImage* PythonQtWrapper_QImage::new_QImage(const QImage&  arg__1)
{ 
return new PythonQtShell_QImage(arg__1); }

QImage* PythonQtWrapper_QImage::new_QImage(const QSize&  size, QImage::Format  format)
{ 
return new PythonQtShell_QImage(size, format); }

QImage* PythonQtWrapper_QImage::new_QImage(const QString&  fileName, const char*  format)
{ 
return new PythonQtShell_QImage(fileName, format); }

QImage* PythonQtWrapper_QImage::new_QImage(int  width, int  height, QImage::Format  format)
{ 
return new PythonQtShell_QImage(width, height, format); }

void PythonQtWrapper_QImage::fill(QImage* theWrappedObject, uint  pixel)
{
  ( theWrappedObject->fill(pixel));
}

void PythonQtWrapper_QImage::setDotsPerMeterY(QImage* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setDotsPerMeterY(arg__1));
}

QImage  PythonQtWrapper_QImage::scaled(QImage* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  aspectMode, Qt::TransformationMode  mode) const
{
  return ( theWrappedObject->scaled(s, aspectMode, mode));
}

bool  PythonQtWrapper_QImage::allGray(QImage* theWrappedObject) const
{
  return ( theWrappedObject->allGray());
}

QStringList  PythonQtWrapper_QImage::textKeys(QImage* theWrappedObject) const
{
  return ( theWrappedObject->textKeys());
}

QImage  PythonQtWrapper_QImage::convertToFormat(QImage* theWrappedObject, QImage::Format  f, Qt::ImageConversionFlags  flags) const
{
  return ( theWrappedObject->convertToFormat(f, flags));
}

bool  PythonQtWrapper_QImage::isNull(QImage* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QPaintEngine*  PythonQtWrapper_QImage::paintEngine(QImage* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QImage*)theWrappedObject)->promoted_paintEngine());
}

QImage  PythonQtWrapper_QImage::scaledToHeight(QImage* theWrappedObject, int  h, Qt::TransformationMode  mode) const
{
  return ( theWrappedObject->scaledToHeight(h, mode));
}

int  PythonQtWrapper_QImage::bytesPerLine(QImage* theWrappedObject) const
{
  return ( theWrappedObject->bytesPerLine());
}

void PythonQtWrapper_QImage::readFrom(QImage* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

bool  PythonQtWrapper_QImage::operator_equal(QImage* theWrappedObject, const QImage&  arg__1) const
{
  return ( (*theWrappedObject)== arg__1);
}

QImage  PythonQtWrapper_QImage::mirrored(QImage* theWrappedObject, bool  horizontally, bool  vertically) const
{
  return ( theWrappedObject->mirrored(horizontally, vertically));
}

bool  PythonQtWrapper_QImage::save(QImage* theWrappedObject, const QString&  fileName, const char*  format, int  quality) const
{
  return ( theWrappedObject->save(fileName, format, quality));
}

QImage  PythonQtWrapper_QImage::copy(QImage* theWrappedObject, const QRect&  rect) const
{
  return ( theWrappedObject->copy(rect));
}

int  PythonQtWrapper_QImage::devType(QImage* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QImage*)theWrappedObject)->promoted_devType());
}

QSize  PythonQtWrapper_QImage::size(QImage* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

bool  PythonQtWrapper_QImage::valid(QImage* theWrappedObject, const QPoint&  pt) const
{
  return ( theWrappedObject->valid(pt));
}

QMatrix  PythonQtWrapper_QImage::static_QImage_trueMatrix(const QMatrix&  arg__1, int  w, int  h)
{
  return (QImage::trueMatrix(arg__1, w, h));
}

int  PythonQtWrapper_QImage::height(QImage* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

void PythonQtWrapper_QImage::setPixel(QImage* theWrappedObject, const QPoint&  pt, uint  index_or_rgb)
{
  ( theWrappedObject->setPixel(pt, index_or_rgb));
}

void PythonQtWrapper_QImage::setColor(QImage* theWrappedObject, int  i, unsigned int  c)
{
  ( theWrappedObject->setColor(i, c));
}

int  PythonQtWrapper_QImage::pixelIndex(QImage* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->pixelIndex(x, y));
}

void PythonQtWrapper_QImage::invertPixels(QImage* theWrappedObject, QImage::InvertMode  arg__1)
{
  ( theWrappedObject->invertPixels(arg__1));
}

void PythonQtWrapper_QImage::setColorCount(QImage* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setColorCount(arg__1));
}

QImage  PythonQtWrapper_QImage::createHeuristicMask(QImage* theWrappedObject, bool  clipTight) const
{
  return ( theWrappedObject->createHeuristicMask(clipTight));
}

QImage  PythonQtWrapper_QImage::rgbSwapped(QImage* theWrappedObject) const
{
  return ( theWrappedObject->rgbSwapped());
}

bool  PythonQtWrapper_QImage::load(QImage* theWrappedObject, QIODevice*  device, const char*  format)
{
  return ( theWrappedObject->load(device, format));
}

bool  PythonQtWrapper_QImage::save(QImage* theWrappedObject, QIODevice*  device, const char*  format, int  quality) const
{
  return ( theWrappedObject->save(device, format, quality));
}

unsigned int  PythonQtWrapper_QImage::color(QImage* theWrappedObject, int  i) const
{
  return ( theWrappedObject->color(i));
}

bool  PythonQtWrapper_QImage::load(QImage* theWrappedObject, const QString&  fileName, const char*  format)
{
  return ( theWrappedObject->load(fileName, format));
}

QImage  PythonQtWrapper_QImage::static_QImage_fromData(const QByteArray&  data, const char*  format)
{
  return (QImage::fromData(data, format));
}

QImage  PythonQtWrapper_QImage::createMaskFromColor(QImage* theWrappedObject, unsigned int  color, Qt::MaskMode  mode) const
{
  return ( theWrappedObject->createMaskFromColor(color, mode));
}

bool  PythonQtWrapper_QImage::hasAlphaChannel(QImage* theWrappedObject) const
{
  return ( theWrappedObject->hasAlphaChannel());
}

QVector<unsigned int >  PythonQtWrapper_QImage::colorTable(QImage* theWrappedObject) const
{
  return ( theWrappedObject->colorTable());
}

void PythonQtWrapper_QImage::setDotsPerMeterX(QImage* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setDotsPerMeterX(arg__1));
}

int  PythonQtWrapper_QImage::dotsPerMeterY(QImage* theWrappedObject) const
{
  return ( theWrappedObject->dotsPerMeterY());
}

unsigned int  PythonQtWrapper_QImage::pixel(QImage* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->pixel(x, y));
}

void PythonQtWrapper_QImage::setOffset(QImage* theWrappedObject, const QPoint&  arg__1)
{
  ( theWrappedObject->setOffset(arg__1));
}

QRect  PythonQtWrapper_QImage::rect(QImage* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

void PythonQtWrapper_QImage::setAlphaChannel(QImage* theWrappedObject, const QImage&  alphaChannel)
{
  ( theWrappedObject->setAlphaChannel(alphaChannel));
}

unsigned int  PythonQtWrapper_QImage::pixel(QImage* theWrappedObject, const QPoint&  pt) const
{
  return ( theWrappedObject->pixel(pt));
}

int  PythonQtWrapper_QImage::dotsPerMeterX(QImage* theWrappedObject) const
{
  return ( theWrappedObject->dotsPerMeterX());
}

bool  PythonQtWrapper_QImage::valid(QImage* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->valid(x, y));
}

int  PythonQtWrapper_QImage::numBytes(QImage* theWrappedObject) const
{
  return ( theWrappedObject->numBytes());
}

QImage  PythonQtWrapper_QImage::transformed(QImage* theWrappedObject, const QMatrix&  matrix, Qt::TransformationMode  mode) const
{
  return ( theWrappedObject->transformed(matrix, mode));
}

QImage  PythonQtWrapper_QImage::createAlphaMask(QImage* theWrappedObject, Qt::ImageConversionFlags  flags) const
{
  return ( theWrappedObject->createAlphaMask(flags));
}

QImage  PythonQtWrapper_QImage::scaled(QImage* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  aspectMode, Qt::TransformationMode  mode) const
{
  return ( theWrappedObject->scaled(w, h, aspectMode, mode));
}

QImage  PythonQtWrapper_QImage::transformed(QImage* theWrappedObject, const QTransform&  matrix, Qt::TransformationMode  mode) const
{
  return ( theWrappedObject->transformed(matrix, mode));
}

int  PythonQtWrapper_QImage::width(QImage* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

int  PythonQtWrapper_QImage::metric(QImage* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const
{
  return ( ((PythonQtPublicPromoter_QImage*)theWrappedObject)->promoted_metric(metric));
}

QImage  PythonQtWrapper_QImage::convertToFormat(QImage* theWrappedObject, QImage::Format  f, const QVector<unsigned int >&  colorTable, Qt::ImageConversionFlags  flags) const
{
  return ( theWrappedObject->convertToFormat(f, colorTable, flags));
}

int  PythonQtWrapper_QImage::depth(QImage* theWrappedObject) const
{
  return ( theWrappedObject->depth());
}

int  PythonQtWrapper_QImage::colorCount(QImage* theWrappedObject) const
{
  return ( theWrappedObject->colorCount());
}

int  PythonQtWrapper_QImage::numColors(QImage* theWrappedObject) const
{
  return ( theWrappedObject->numColors());
}

QImage  PythonQtWrapper_QImage::scaledToWidth(QImage* theWrappedObject, int  w, Qt::TransformationMode  mode) const
{
  return ( theWrappedObject->scaledToWidth(w, mode));
}

bool  PythonQtWrapper_QImage::loadFromData(QImage* theWrappedObject, const QByteArray&  data, const char*  aformat)
{
  return ( theWrappedObject->loadFromData(data, aformat));
}

void PythonQtWrapper_QImage::writeTo(QImage* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QImage::isGrayscale(QImage* theWrappedObject) const
{
  return ( theWrappedObject->isGrayscale());
}

int  PythonQtWrapper_QImage::byteCount(QImage* theWrappedObject) const
{
  return ( theWrappedObject->byteCount());
}

qint64  PythonQtWrapper_QImage::cacheKey(QImage* theWrappedObject) const
{
  return ( theWrappedObject->cacheKey());
}

QPoint  PythonQtWrapper_QImage::offset(QImage* theWrappedObject) const
{
  return ( theWrappedObject->offset());
}

QTransform  PythonQtWrapper_QImage::static_QImage_trueMatrix(const QTransform&  arg__1, int  w, int  h)
{
  return (QImage::trueMatrix(arg__1, w, h));
}

void PythonQtWrapper_QImage::setNumColors(QImage* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setNumColors(arg__1));
}

QString  PythonQtWrapper_QImage::text(QImage* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->text(key));
}

QImage  PythonQtWrapper_QImage::alphaChannel(QImage* theWrappedObject) const
{
  return ( theWrappedObject->alphaChannel());
}

int  PythonQtWrapper_QImage::pixelIndex(QImage* theWrappedObject, const QPoint&  pt) const
{
  return ( theWrappedObject->pixelIndex(pt));
}

QImage::Format  PythonQtWrapper_QImage::format(QImage* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

void PythonQtWrapper_QImage::setPixel(QImage* theWrappedObject, int  x, int  y, uint  index_or_rgb)
{
  ( theWrappedObject->setPixel(x, y, index_or_rgb));
}

void PythonQtWrapper_QImage::setText(QImage* theWrappedObject, const QString&  key, const QString&  value)
{
  ( theWrappedObject->setText(key, value));
}

QImage  PythonQtWrapper_QImage::copy(QImage* theWrappedObject, int  x, int  y, int  w, int  h) const
{
  return ( theWrappedObject->copy(x, y, w, h));
}

