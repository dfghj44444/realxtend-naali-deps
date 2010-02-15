#ifndef PYTHONQTWRAPPER_QGLWIDGET_H
#define PYTHONQTWRAPPER_QGLWIDGET_H

#include <qgl.h>
#include <QObject>

#include <PythonQt.h>

#include <QImage>
#include <QPixmap>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgl.h>
#include <qglcolormap.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

class PythonQtShell_QGLWidget : public QGLWidget
{
public:
    PythonQtShell_QGLWidget(QGLContext*  context, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0):QGLWidget(context, parent, shareWidget, f),_wrapper(NULL) {};
    PythonQtShell_QGLWidget(QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0):QGLWidget(parent, shareWidget, f),_wrapper(NULL) {};
    PythonQtShell_QGLWidget(const QGLFormat&  format, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0):QGLWidget(format, parent, shareWidget, f),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void glDraw();
virtual void glInit();
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initializeGL();
virtual void initializeOverlayGL();
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void paintGL();
virtual void paintOverlayGL();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void resizeGL(int  w, int  h);
virtual void resizeOverlayGL(int  w, int  h);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateGL();
virtual void updateOverlayGL();
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLWidget : public QGLWidget
{ public:
inline void promoted_glInit() { QGLWidget::glInit(); }
inline void promoted_initializeOverlayGL() { QGLWidget::initializeOverlayGL(); }
inline QPaintEngine*  promoted_paintEngine() const { return QGLWidget::paintEngine(); }
inline bool  promoted_event(QEvent*  arg__1) { return QGLWidget::event(arg__1); }
inline void promoted_initializeGL() { QGLWidget::initializeGL(); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QGLWidget::paintEvent(arg__1); }
inline void promoted_glDraw() { QGLWidget::glDraw(); }
inline void promoted_updateGL() { QGLWidget::updateGL(); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QGLWidget::resizeEvent(arg__1); }
inline void promoted_paintOverlayGL() { QGLWidget::paintOverlayGL(); }
inline void promoted_paintGL() { QGLWidget::paintGL(); }
inline void promoted_resizeOverlayGL(int  w, int  h) { QGLWidget::resizeOverlayGL(w, h); }
inline void promoted_resizeGL(int  w, int  h) { QGLWidget::resizeGL(w, h); }
inline void promoted_updateOverlayGL() { QGLWidget::updateOverlayGL(); }
};

class PythonQtWrapper_QGLWidget : public QObject
{ Q_OBJECT
public:
public slots:
QGLWidget* new_QGLWidget(QGLContext*  context, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0);
QGLWidget* new_QGLWidget(QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0);
QGLWidget* new_QGLWidget(const QGLFormat&  format, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0);
void delete_QGLWidget(QGLWidget* obj) { delete obj; } 
   bool  isValid(QGLWidget* theWrappedObject) const;
   void makeOverlayCurrent(QGLWidget* theWrappedObject);
   void glInit(QGLWidget* theWrappedObject);
   void initializeOverlayGL(QGLWidget* theWrappedObject);
   QPaintEngine*  paintEngine(QGLWidget* theWrappedObject) const;
   bool  event(QGLWidget* theWrappedObject, QEvent*  arg__1);
   void qglColor(QGLWidget* theWrappedObject, const QColor&  c) const;
   void initializeGL(QGLWidget* theWrappedObject);
   void paintEvent(QGLWidget* theWrappedObject, QPaintEvent*  arg__1);
   void glDraw(QGLWidget* theWrappedObject);
   void qglClearColor(QGLWidget* theWrappedObject, const QColor&  c) const;
   void renderText(QGLWidget* theWrappedObject, double  x, double  y, double  z, const QString&  str, const QFont&  fnt = QFont(), int  listBase = 2000);
   const QGLColormap*  colormap(QGLWidget* theWrappedObject) const;
   void makeCurrent(QGLWidget* theWrappedObject);
   QPixmap  renderPixmap(QGLWidget* theWrappedObject, int  w = 0, int  h = 0, bool  useContext = false);
   QImage  static_QGLWidget_convertToGLFormat(const QImage&  img);
   void resizeEvent(QGLWidget* theWrappedObject, QResizeEvent*  arg__1);
   void paintOverlayGL(QGLWidget* theWrappedObject);
   void doneCurrent(QGLWidget* theWrappedObject);
   bool  doubleBuffer(QGLWidget* theWrappedObject) const;
   QGLFormat  format(QGLWidget* theWrappedObject) const;
   const QGLContext*  context(QGLWidget* theWrappedObject) const;
   bool  isSharing(QGLWidget* theWrappedObject) const;
   void paintGL(QGLWidget* theWrappedObject);
   void setColormap(QGLWidget* theWrappedObject, const QGLColormap&  map);
   const QGLContext*  overlayContext(QGLWidget* theWrappedObject) const;
   void swapBuffers(QGLWidget* theWrappedObject);
   void resizeOverlayGL(QGLWidget* theWrappedObject, int  w, int  h);
   QImage  grabFrameBuffer(QGLWidget* theWrappedObject, bool  withAlpha = false);
   void renderText(QGLWidget* theWrappedObject, int  x, int  y, const QString&  str, const QFont&  fnt = QFont(), int  listBase = 2000);
   void resizeGL(QGLWidget* theWrappedObject, int  w, int  h);
};

#endif // PYTHONQTWRAPPER_QGLWIDGET_H
