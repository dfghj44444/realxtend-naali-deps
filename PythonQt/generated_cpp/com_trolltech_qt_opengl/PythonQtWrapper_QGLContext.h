#ifndef PYTHONQTWRAPPER_QGLCONTEXT_H
#define PYTHONQTWRAPPER_QGLCONTEXT_H

#include <qgl.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qcolor.h>
#include <qgl.h>
#include <qpaintdevice.h>

class PythonQtShell_QGLContext : public QGLContext
{
public:
    PythonQtShell_QGLContext(const QGLFormat&  format):QGLContext(format),_wrapper(NULL) {};
    PythonQtShell_QGLContext(const QGLFormat&  format, QPaintDevice*  device):QGLContext(format, device),_wrapper(NULL) {};

virtual bool  chooseContext(const QGLContext*  shareContext = 0);
virtual bool  create(const QGLContext*  shareContext = 0);
virtual void doneCurrent();
virtual void makeCurrent();
virtual void swapBuffers() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLContext : public QGLContext
{ public:
inline void promoted_makeCurrent() { QGLContext::makeCurrent(); }
inline void promoted_swapBuffers() const { QGLContext::swapBuffers(); }
inline bool  promoted_create(const QGLContext*  shareContext = 0) { return QGLContext::create(shareContext); }
inline void promoted_doneCurrent() { QGLContext::doneCurrent(); }
inline bool  promoted_chooseContext(const QGLContext*  shareContext = 0) { return QGLContext::chooseContext(shareContext); }
};

class PythonQtWrapper_QGLContext : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BindOption )
Q_FLAGS(BindOptions )
enum BindOption{
  NoBindOption = QGLContext::NoBindOption,   InvertedYBindOption = QGLContext::InvertedYBindOption,   MipmapBindOption = QGLContext::MipmapBindOption,   PremultipliedAlphaBindOption = QGLContext::PremultipliedAlphaBindOption,   LinearFilteringBindOption = QGLContext::LinearFilteringBindOption,   MemoryManagedBindOption = QGLContext::MemoryManagedBindOption,   CanFlipNativePixmapBindOption = QGLContext::CanFlipNativePixmapBindOption,   DefaultBindOption = QGLContext::DefaultBindOption,   InternalBindOption = QGLContext::InternalBindOption};
Q_DECLARE_FLAGS(BindOptions, BindOption)
public slots:
QGLContext* new_QGLContext(const QGLFormat&  format);
QGLContext* new_QGLContext(const QGLFormat&  format, QPaintDevice*  device);
void delete_QGLContext(QGLContext* obj) { delete obj; } 
   QGLFormat  requestedFormat(QGLContext* theWrappedObject) const;
   QGLFormat  format(QGLContext* theWrappedObject) const;
   bool  isValid(QGLContext* theWrappedObject) const;
   void makeCurrent(QGLContext* theWrappedObject);
   bool  static_QGLContext_areSharing(const QGLContext*  context1, const QGLContext*  context2);
   void swapBuffers(QGLContext* theWrappedObject) const;
   bool  create(QGLContext* theWrappedObject, const QGLContext*  shareContext = 0);
   const QGLContext*  static_QGLContext_currentContext();
   void doneCurrent(QGLContext* theWrappedObject);
   QPaintDevice*  device(QGLContext* theWrappedObject) const;
   void reset(QGLContext* theWrappedObject);
   bool  isSharing(QGLContext* theWrappedObject) const;
   void static_QGLContext_setTextureCacheLimit(int  size);
   void setFormat(QGLContext* theWrappedObject, const QGLFormat&  format);
   int  static_QGLContext_textureCacheLimit();
   bool  chooseContext(QGLContext* theWrappedObject, const QGLContext*  shareContext = 0);
   QColor  overlayTransparentColor(QGLContext* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGLCONTEXT_H
