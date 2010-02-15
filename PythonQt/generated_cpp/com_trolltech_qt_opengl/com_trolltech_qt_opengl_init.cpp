#include <PythonQt.h>
#include "PythonQtWrapper_QGLContext.h"
#include "PythonQtWrapper_QGLColormap.h"
#include "PythonQtWrapper_QGLFramebufferObjectFormat.h"
#include "PythonQtWrapper_QGLShaderProgram.h"
#include "PythonQtWrapper_QGLPixelBuffer.h"
#include "PythonQtWrapper_QGLShader.h"
#include "PythonQtWrapper_QGLFramebufferObject.h"
#include "PythonQtWrapper_QGLWidget.h"


void PythonQt_init_QtOpenGL() {
PythonQt::self()->registerCPPClass("QGLContext", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLContext>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLContext>);
PythonQt::self()->registerCPPClass("QGLColormap", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLColormap>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLColormap>);
PythonQt::self()->registerCPPClass("QGLFramebufferObjectFormat", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLFramebufferObjectFormat>);
PythonQt::self()->registerClass(&QGLShaderProgram::staticMetaObject, "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLShaderProgram>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLShaderProgram>);
PythonQt::self()->registerCPPClass("QGLPixelBuffer", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLPixelBuffer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLPixelBuffer>);
PythonQt::self()->addParentClass("QGLPixelBuffer", "QPaintDevice",PythonQtUpcastingOffset<QGLPixelBuffer,QPaintDevice>());
PythonQt::self()->registerClass(&QGLShader::staticMetaObject, "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLShader>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLShader>);
PythonQt::self()->registerCPPClass("QGLFramebufferObject", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLFramebufferObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLFramebufferObject>);
PythonQt::self()->addParentClass("QGLFramebufferObject", "QPaintDevice",PythonQtUpcastingOffset<QGLFramebufferObject,QPaintDevice>());
PythonQt::self()->registerClass(&QGLWidget::staticMetaObject, "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGLWidget>);

}
