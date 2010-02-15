#ifndef PYTHONQTWRAPPER_QGLFRAMEBUFFEROBJECT_H
#define PYTHONQTWRAPPER_QGLFRAMEBUFFEROBJECT_H

#include <qglframebufferobject.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qglframebufferobject.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qsize.h>

class PythonQtShell_QGLFramebufferObject : public QGLFramebufferObject
{
public:
    PythonQtShell_QGLFramebufferObject(const QSize&  size, const QGLFramebufferObjectFormat&  format):QGLFramebufferObject(size, format),_wrapper(NULL) {};
    PythonQtShell_QGLFramebufferObject(int  width, int  height, const QGLFramebufferObjectFormat&  format):QGLFramebufferObject(width, height, format),_wrapper(NULL) {};

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLFramebufferObject : public QGLFramebufferObject
{ public:
inline int  promoted_devType() const { return QGLFramebufferObject::devType(); }
inline QPaintEngine*  promoted_paintEngine() const { return QGLFramebufferObject::paintEngine(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QGLFramebufferObject::metric(metric); }
};

class PythonQtWrapper_QGLFramebufferObject : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Attachment )
enum Attachment{
  NoAttachment = QGLFramebufferObject::NoAttachment,   CombinedDepthStencil = QGLFramebufferObject::CombinedDepthStencil,   Depth = QGLFramebufferObject::Depth};
public slots:
QGLFramebufferObject* new_QGLFramebufferObject(const QSize&  size, const QGLFramebufferObjectFormat&  format);
QGLFramebufferObject* new_QGLFramebufferObject(int  width, int  height, const QGLFramebufferObjectFormat&  format);
void delete_QGLFramebufferObject(QGLFramebufferObject* obj) { delete obj; } 
   QGLFramebufferObject::Attachment  attachment(QGLFramebufferObject* theWrappedObject) const;
   bool  release(QGLFramebufferObject* theWrappedObject);
   bool  static_QGLFramebufferObject_hasOpenGLFramebufferBlit();
   QImage  toImage(QGLFramebufferObject* theWrappedObject) const;
   bool  isValid(QGLFramebufferObject* theWrappedObject) const;
   bool  bind(QGLFramebufferObject* theWrappedObject);
   int  devType(QGLFramebufferObject* theWrappedObject) const;
   bool  static_QGLFramebufferObject_hasOpenGLFramebufferObjects();
   bool  isBound(QGLFramebufferObject* theWrappedObject) const;
   QGLFramebufferObjectFormat  format(QGLFramebufferObject* theWrappedObject) const;
   QPaintEngine*  paintEngine(QGLFramebufferObject* theWrappedObject) const;
   QSize  size(QGLFramebufferObject* theWrappedObject) const;
   int  metric(QGLFramebufferObject* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
};

#endif // PYTHONQTWRAPPER_QGLFRAMEBUFFEROBJECT_H
