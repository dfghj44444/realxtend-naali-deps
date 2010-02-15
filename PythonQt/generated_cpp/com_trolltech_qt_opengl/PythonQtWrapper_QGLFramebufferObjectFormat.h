#ifndef PYTHONQTWRAPPER_QGLFRAMEBUFFEROBJECTFORMAT_H
#define PYTHONQTWRAPPER_QGLFRAMEBUFFEROBJECTFORMAT_H

#include <qglframebufferobject.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qglframebufferobject.h>

class PythonQtWrapper_QGLFramebufferObjectFormat : public QObject
{ Q_OBJECT
public:
public slots:
QGLFramebufferObjectFormat* new_QGLFramebufferObjectFormat();
QGLFramebufferObjectFormat* new_QGLFramebufferObjectFormat(const QGLFramebufferObjectFormat&  other);
void delete_QGLFramebufferObjectFormat(QGLFramebufferObjectFormat* obj) { delete obj; } 
   void setAttachment(QGLFramebufferObjectFormat* theWrappedObject, QGLFramebufferObject::Attachment  attachment);
   QGLFramebufferObjectFormat*  operator_assign(QGLFramebufferObjectFormat* theWrappedObject, const QGLFramebufferObjectFormat&  other);
   void setSamples(QGLFramebufferObjectFormat* theWrappedObject, int  samples);
   bool  operator_equal(QGLFramebufferObjectFormat* theWrappedObject, const QGLFramebufferObjectFormat&  other) const;
   int  samples(QGLFramebufferObjectFormat* theWrappedObject) const;
   QGLFramebufferObject::Attachment  attachment(QGLFramebufferObjectFormat* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGLFRAMEBUFFEROBJECTFORMAT_H
