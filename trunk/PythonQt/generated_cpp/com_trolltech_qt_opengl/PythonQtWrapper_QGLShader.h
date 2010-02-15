#ifndef PYTHONQTWRAPPER_QGLSHADER_H
#define PYTHONQTWRAPPER_QGLSHADER_H

#include <qglshaderprogram.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qgl.h>
#include <qglshaderprogram.h>
#include <qlist.h>
#include <qobject.h>

class PythonQtShell_QGLShader : public QGLShader
{
public:
    PythonQtShell_QGLShader(QGLShader::ShaderType  type, QObject*  parent = 0):QGLShader(type, parent),_wrapper(NULL) {};
    PythonQtShell_QGLShader(QGLShader::ShaderType  type, const QGLContext*  context, QObject*  parent = 0):QGLShader(type, context, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGLShader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ShaderTypeBit )
Q_FLAGS(ShaderType )
enum ShaderTypeBit{
  Vertex = QGLShader::Vertex,   Fragment = QGLShader::Fragment};
Q_DECLARE_FLAGS(ShaderType, ShaderTypeBit)
public slots:
QGLShader* new_QGLShader(QGLShader::ShaderType  type, QObject*  parent = 0);
QGLShader* new_QGLShader(QGLShader::ShaderType  type, const QGLContext*  context, QObject*  parent = 0);
void delete_QGLShader(QGLShader* obj) { delete obj; } 
   bool  compileSourceCode(QGLShader* theWrappedObject, const char*  source);
   bool  compileSourceCode(QGLShader* theWrappedObject, const QString&  source);
   bool  isCompiled(QGLShader* theWrappedObject) const;
   bool  compileSourceFile(QGLShader* theWrappedObject, const QString&  fileName);
   QGLShader::ShaderType  shaderType(QGLShader* theWrappedObject) const;
   bool  compileSourceCode(QGLShader* theWrappedObject, const QByteArray&  source);
   QString  log(QGLShader* theWrappedObject) const;
   QByteArray  sourceCode(QGLShader* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGLSHADER_H
