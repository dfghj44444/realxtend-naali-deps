#ifndef PYTHONQTWRAPPER_QGLSHADERPROGRAM_H
#define PYTHONQTWRAPPER_QGLSHADERPROGRAM_H

#include <qglshaderprogram.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qgenericmatrix.h>
#include <qgl.h>
#include <qglshaderprogram.h>
#include <qlist.h>
#include <qmatrix4x4.h>
#include <qobject.h>
#include <qpoint.h>
#include <qsize.h>
#include <qtransform.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>

class PythonQtShell_QGLShaderProgram : public QGLShaderProgram
{
public:
    PythonQtShell_QGLShaderProgram(QObject*  parent = 0):QGLShaderProgram(parent),_wrapper(NULL) {};
    PythonQtShell_QGLShaderProgram(const QGLContext*  context, QObject*  parent = 0):QGLShaderProgram(context, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  link();
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLShaderProgram : public QGLShaderProgram
{ public:
inline bool  promoted_link() { return QGLShaderProgram::link(); }
};

class PythonQtWrapper_QGLShaderProgram : public QObject
{ Q_OBJECT
public:
public slots:
QGLShaderProgram* new_QGLShaderProgram(QObject*  parent = 0);
QGLShaderProgram* new_QGLShaderProgram(const QGLContext*  context, QObject*  parent = 0);
void delete_QGLShaderProgram(QGLShaderProgram* obj) { delete obj; } 
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QMatrix3x3&  value);
   bool  addShader(QGLShaderProgram* theWrappedObject, QGLShader*  shader);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QMatrix3x3&  value);
   void bindAttributeLocation(QGLShaderProgram* theWrappedObject, const QString&  name, int  location);
   void disableAttributeArray(QGLShaderProgram* theWrappedObject, int  location);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector2D&  value);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const QVector2D&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QPoint&  point);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector2D*  values, int  stride = 0);
   bool  static_QGLShaderProgram_hasOpenGLShaderPrograms(const QGLContext*  context = 0);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector4D&  value);
   bool  addShaderFromSourceCode(QGLShaderProgram* theWrappedObject, QGLShader::ShaderType  type, const QString&  source);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const QVector4D&  value);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const QVector2D*  values, int  count);
   bool  link(QGLShaderProgram* theWrappedObject);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QColor&  color);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, int  location, const QVector4D*  values, int  stride = 0);
   QString  log(QGLShaderProgram* theWrappedObject) const;
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector3D*  values, int  count);
   void enableAttributeArray(QGLShaderProgram* theWrappedObject, int  location);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector4D*  values, int  stride = 0);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QVector4D&  value);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const QVector3D*  values, int  count);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QTransform&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QVector2D&  value);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector4D*  values, int  count);
   void release(QGLShaderProgram* theWrappedObject);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const QMatrix3x3*  values, int  count);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const QVector4D*  values, int  count);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector3D&  value);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector2D*  values, int  count);
   void disableAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name);
   void bindAttributeLocation(QGLShaderProgram* theWrappedObject, const char*  name, int  location);
   void enableAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector3D&  value);
   void removeShader(QGLShaderProgram* theWrappedObject, QGLShader*  shader);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QSizeF&  size);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QTransform&  value);
   bool  addShaderFromSourceCode(QGLShaderProgram* theWrappedObject, QGLShader::ShaderType  type, const QByteArray&  source);
   bool  bind(QGLShaderProgram* theWrappedObject);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector2D&  value);
   int  attributeLocation(QGLShaderProgram* theWrappedObject, const QByteArray&  name) const;
   void setAttributeArray(QGLShaderProgram* theWrappedObject, int  location, const QVector2D*  values, int  stride = 0);
   int  uniformLocation(QGLShaderProgram* theWrappedObject, const QByteArray&  name) const;
   void bindAttributeLocation(QGLShaderProgram* theWrappedObject, const QByteArray&  name, int  location);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QVector3D&  value);
   bool  addShaderFromSourceCode(QGLShaderProgram* theWrappedObject, QGLShader::ShaderType  type, const char*  source);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, const char*  name, const QColor&  value);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const QMatrix3x3*  values, int  count);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QMatrix4x4&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QColor&  color);
   QList<QGLShader* >  shaders(QGLShaderProgram* theWrappedObject) const;
   int  uniformLocation(QGLShaderProgram* theWrappedObject, const char*  name) const;
   bool  isLinked(QGLShaderProgram* theWrappedObject) const;
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QVector4D&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QPoint&  point);
   int  attributeLocation(QGLShaderProgram* theWrappedObject, const QString&  name) const;
   bool  addShaderFromSourceFile(QGLShaderProgram* theWrappedObject, QGLShader::ShaderType  type, const QString&  fileName);
   int  uniformLocation(QGLShaderProgram* theWrappedObject, const QString&  name) const;
   int  attributeLocation(QGLShaderProgram* theWrappedObject, const char*  name) const;
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QMatrix4x4&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QSize&  size);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, const char*  name, const QVector3D*  values, int  stride = 0);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QSizeF&  size);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const QColor&  value);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QSize&  size);
   void setAttributeValue(QGLShaderProgram* theWrappedObject, int  location, const QVector3D&  value);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, int  location, const QMatrix4x4*  values, int  count);
   void setUniformValue(QGLShaderProgram* theWrappedObject, int  location, const QPointF&  point);
   void setAttributeArray(QGLShaderProgram* theWrappedObject, int  location, const QVector3D*  values, int  stride = 0);
   void setUniformValue(QGLShaderProgram* theWrappedObject, const char*  name, const QPointF&  point);
   void removeAllShaders(QGLShaderProgram* theWrappedObject);
   void setUniformValueArray(QGLShaderProgram* theWrappedObject, const char*  name, const QMatrix4x4*  values, int  count);
};

#endif // PYTHONQTWRAPPER_QGLSHADERPROGRAM_H
