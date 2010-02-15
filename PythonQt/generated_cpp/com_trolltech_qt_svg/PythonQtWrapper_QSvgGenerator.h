#ifndef PYTHONQTWRAPPER_QSVGGENERATOR_H
#define PYTHONQTWRAPPER_QSVGGENERATOR_H

#include <qsvggenerator.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qiodevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtShell_QSvgGenerator : public QSvgGenerator
{
public:
    PythonQtShell_QSvgGenerator():QSvgGenerator(),_wrapper(NULL) {};

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSvgGenerator : public QSvgGenerator
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QSvgGenerator::metric(metric); }
inline QPaintEngine*  promoted_paintEngine() const { return QSvgGenerator::paintEngine(); }
};

class PythonQtWrapper_QSvgGenerator : public QObject
{ Q_OBJECT
public:
public slots:
QSvgGenerator* new_QSvgGenerator();
void delete_QSvgGenerator(QSvgGenerator* obj) { delete obj; } 
   void setTitle(QSvgGenerator* theWrappedObject, const QString&  title);
   void setResolution(QSvgGenerator* theWrappedObject, int  dpi);
   QRect  viewBox(QSvgGenerator* theWrappedObject) const;
   void setFileName(QSvgGenerator* theWrappedObject, const QString&  fileName);
   int  metric(QSvgGenerator* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   void setViewBox(QSvgGenerator* theWrappedObject, const QRectF&  viewBox);
   void setOutputDevice(QSvgGenerator* theWrappedObject, QIODevice*  outputDevice);
   void setViewBox(QSvgGenerator* theWrappedObject, const QRect&  viewBox);
   QRectF  viewBoxF(QSvgGenerator* theWrappedObject) const;
   QIODevice*  outputDevice(QSvgGenerator* theWrappedObject) const;
   QString  fileName(QSvgGenerator* theWrappedObject) const;
   QString  description(QSvgGenerator* theWrappedObject) const;
   QPaintEngine*  paintEngine(QSvgGenerator* theWrappedObject) const;
   void setDescription(QSvgGenerator* theWrappedObject, const QString&  description);
   QString  title(QSvgGenerator* theWrappedObject) const;
   int  resolution(QSvgGenerator* theWrappedObject) const;
   QSize  size(QSvgGenerator* theWrappedObject) const;
   void setSize(QSvgGenerator* theWrappedObject, const QSize&  size);
};

#endif // PYTHONQTWRAPPER_QSVGGENERATOR_H
