#include "PythonQtWrapper_QGLFramebufferObjectFormat.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qglframebufferobject.h>

QGLFramebufferObjectFormat* PythonQtWrapper_QGLFramebufferObjectFormat::new_QGLFramebufferObjectFormat()
{ 
return new QGLFramebufferObjectFormat(); }

QGLFramebufferObjectFormat* PythonQtWrapper_QGLFramebufferObjectFormat::new_QGLFramebufferObjectFormat(const QGLFramebufferObjectFormat&  other)
{ 
return new QGLFramebufferObjectFormat(other); }

void PythonQtWrapper_QGLFramebufferObjectFormat::setAttachment(QGLFramebufferObjectFormat* theWrappedObject, QGLFramebufferObject::Attachment  attachment)
{
  ( theWrappedObject->setAttachment(attachment));
}

QGLFramebufferObjectFormat*  PythonQtWrapper_QGLFramebufferObjectFormat::operator_assign(QGLFramebufferObjectFormat* theWrappedObject, const QGLFramebufferObjectFormat&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QGLFramebufferObjectFormat::setSamples(QGLFramebufferObjectFormat* theWrappedObject, int  samples)
{
  ( theWrappedObject->setSamples(samples));
}

bool  PythonQtWrapper_QGLFramebufferObjectFormat::operator_equal(QGLFramebufferObjectFormat* theWrappedObject, const QGLFramebufferObjectFormat&  other) const
{
  return ( (*theWrappedObject)== other);
}

int  PythonQtWrapper_QGLFramebufferObjectFormat::samples(QGLFramebufferObjectFormat* theWrappedObject) const
{
  return ( theWrappedObject->samples());
}

QGLFramebufferObject::Attachment  PythonQtWrapper_QGLFramebufferObjectFormat::attachment(QGLFramebufferObjectFormat* theWrappedObject) const
{
  return ( theWrappedObject->attachment());
}

