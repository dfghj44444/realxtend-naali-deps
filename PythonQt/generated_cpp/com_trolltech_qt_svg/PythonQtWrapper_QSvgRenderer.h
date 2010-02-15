#ifndef PYTHONQTWRAPPER_QSVGRENDERER_H
#define PYTHONQTWRAPPER_QSVGRENDERER_H

#include <qsvgrenderer.h>
#include <QObject>

#include <PythonQt.h>

#include <QByteArray>
#include <QMatrix>
#include <QRectF>
#include <QSize>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qmatrix.h>
#include <qobject.h>
#include <qpainter.h>
#include <qrect.h>
#include <qsize.h>
#include <qxmlstream.h>

class PythonQtShell_QSvgRenderer : public QSvgRenderer
{
public:
    PythonQtShell_QSvgRenderer(QObject*  parent = 0):QSvgRenderer(parent),_wrapper(NULL) {};
    PythonQtShell_QSvgRenderer(QXmlStreamReader*  contents, QObject*  parent = 0):QSvgRenderer(contents, parent),_wrapper(NULL) {};
    PythonQtShell_QSvgRenderer(const QByteArray&  contents, QObject*  parent = 0):QSvgRenderer(contents, parent),_wrapper(NULL) {};
    PythonQtShell_QSvgRenderer(const QString&  filename, QObject*  parent = 0):QSvgRenderer(filename, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSvgRenderer : public QObject
{ Q_OBJECT
public:
public slots:
QSvgRenderer* new_QSvgRenderer(QObject*  parent = 0);
QSvgRenderer* new_QSvgRenderer(QXmlStreamReader*  contents, QObject*  parent = 0);
QSvgRenderer* new_QSvgRenderer(const QByteArray&  contents, QObject*  parent = 0);
QSvgRenderer* new_QSvgRenderer(const QString&  filename, QObject*  parent = 0);
void delete_QSvgRenderer(QSvgRenderer* obj) { delete obj; } 
   void setCurrentFrame(QSvgRenderer* theWrappedObject, int  arg__1);
   QSize  defaultSize(QSvgRenderer* theWrappedObject) const;
   bool  animated(QSvgRenderer* theWrappedObject) const;
   QRectF  viewBoxF(QSvgRenderer* theWrappedObject) const;
   int  animationDuration(QSvgRenderer* theWrappedObject) const;
   int  currentFrame(QSvgRenderer* theWrappedObject) const;
   QMatrix  matrixForElement(QSvgRenderer* theWrappedObject, const QString&  id) const;
   bool  elementExists(QSvgRenderer* theWrappedObject, const QString&  id) const;
   void setViewBox(QSvgRenderer* theWrappedObject, const QRect&  viewbox);
   QRectF  boundsOnElement(QSvgRenderer* theWrappedObject, const QString&  id) const;
   bool  isValid(QSvgRenderer* theWrappedObject) const;
   void setViewBox(QSvgRenderer* theWrappedObject, const QRectF&  viewbox);
   void setFramesPerSecond(QSvgRenderer* theWrappedObject, int  num);
   int  framesPerSecond(QSvgRenderer* theWrappedObject) const;
   QRect  viewBox(QSvgRenderer* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSVGRENDERER_H
