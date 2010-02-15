#ifndef PYTHONQTWRAPPER_QGLPIXELBUFFER_H
#define PYTHONQTWRAPPER_QGLPIXELBUFFER_H

#include <qglpixelbuffer.h>
#include <QObject>

#include <PythonQt.h>

#include <QImage>
#include <QVariant>
#include <qgl.h>
#include <qglpixelbuffer.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qsize.h>

class PythonQtShell_QGLPixelBuffer : public QGLPixelBuffer
{
public:
    PythonQtShell_QGLPixelBuffer(const QSize&  size, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0):QGLPixelBuffer(size, format, shareWidget),_wrapper(NULL) {};
    PythonQtShell_QGLPixelBuffer(int  width, int  height, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0):QGLPixelBuffer(width, height, format, shareWidget),_wrapper(NULL) {};

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLPixelBuffer : public QGLPixelBuffer
{ public:
inline int  promoted_devType() const { return QGLPixelBuffer::devType(); }
inline QPaintEngine*  promoted_paintEngine() const { return QGLPixelBuffer::paintEngine(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QGLPixelBuffer::metric(metric); }
};

class PythonQtWrapper_QGLPixelBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QGLPixelBuffer* new_QGLPixelBuffer(const QSize&  size, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0);
QGLPixelBuffer* new_QGLPixelBuffer(int  width, int  height, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0);
void delete_QGLPixelBuffer(QGLPixelBuffer* obj) { delete obj; } 
   int  devType(QGLPixelBuffer* theWrappedObject) const;
   QGLFormat  format(QGLPixelBuffer* theWrappedObject) const;
   QPaintEngine*  paintEngine(QGLPixelBuffer* theWrappedObject) const;
   void releaseFromDynamicTexture(QGLPixelBuffer* theWrappedObject);
   QSize  size(QGLPixelBuffer* theWrappedObject) const;
   Qt::HANDLE  handle(QGLPixelBuffer* theWrappedObject) const;
   QImage  toImage(QGLPixelBuffer* theWrappedObject) const;
   int  metric(QGLPixelBuffer* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   bool  static_QGLPixelBuffer_hasOpenGLPbuffers();
   bool  makeCurrent(QGLPixelBuffer* theWrappedObject);
   bool  doneCurrent(QGLPixelBuffer* theWrappedObject);
   bool  isValid(QGLPixelBuffer* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGLPIXELBUFFER_H
