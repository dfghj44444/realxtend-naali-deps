#ifndef PYTHONQTWRAPPER_QIMAGEIOHANDLER_H
#define PYTHONQTWRAPPER_QIMAGEIOHANDLER_H

#include <qimageiohandler.h>
#include <QObject>

#include <PythonQt.h>

#include <QRect>
#include <QVariant>
#include <qbytearray.h>
#include <qimage.h>
#include <qimageiohandler.h>
#include <qiodevice.h>
#include <qrect.h>

class PythonQtShell_QImageIOHandler : public QImageIOHandler
{
public:
    PythonQtShell_QImageIOHandler():QImageIOHandler(),_wrapper(NULL) {};

virtual bool  canRead() const;
virtual int  currentImageNumber() const;
virtual QRect  currentImageRect() const;
virtual int  imageCount() const;
virtual bool  jumpToImage(int  imageNumber);
virtual bool  jumpToNextImage();
virtual int  loopCount() const;
virtual QByteArray  name() const;
virtual int  nextImageDelay() const;
virtual QVariant  option(QImageIOHandler::ImageOption  option) const;
virtual bool  read(QImage*  image);
virtual void setOption(QImageIOHandler::ImageOption  option, const QVariant&  value);
virtual bool  supportsOption(QImageIOHandler::ImageOption  option) const;
virtual bool  write(const QImage&  image);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QImageIOHandler : public QImageIOHandler
{ public:
inline int  promoted_loopCount() const { return QImageIOHandler::loopCount(); }
inline bool  promoted_supportsOption(QImageIOHandler::ImageOption  option) const { return QImageIOHandler::supportsOption(option); }
inline QRect  promoted_currentImageRect() const { return QImageIOHandler::currentImageRect(); }
inline bool  promoted_write(const QImage&  image) { return QImageIOHandler::write(image); }
inline void promoted_setOption(QImageIOHandler::ImageOption  option, const QVariant&  value) { QImageIOHandler::setOption(option, value); }
inline bool  promoted_jumpToImage(int  imageNumber) { return QImageIOHandler::jumpToImage(imageNumber); }
inline QVariant  promoted_option(QImageIOHandler::ImageOption  option) const { return QImageIOHandler::option(option); }
inline bool  promoted_jumpToNextImage() { return QImageIOHandler::jumpToNextImage(); }
inline int  promoted_currentImageNumber() const { return QImageIOHandler::currentImageNumber(); }
inline int  promoted_imageCount() const { return QImageIOHandler::imageCount(); }
inline int  promoted_nextImageDelay() const { return QImageIOHandler::nextImageDelay(); }
};

class PythonQtWrapper_QImageIOHandler : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageOption )
enum ImageOption{
  Size = QImageIOHandler::Size,   ClipRect = QImageIOHandler::ClipRect,   Description = QImageIOHandler::Description,   ScaledClipRect = QImageIOHandler::ScaledClipRect,   ScaledSize = QImageIOHandler::ScaledSize,   CompressionRatio = QImageIOHandler::CompressionRatio,   Gamma = QImageIOHandler::Gamma,   Quality = QImageIOHandler::Quality,   Name = QImageIOHandler::Name,   SubType = QImageIOHandler::SubType,   IncrementalReading = QImageIOHandler::IncrementalReading,   Endianness = QImageIOHandler::Endianness,   Animation = QImageIOHandler::Animation,   BackgroundColor = QImageIOHandler::BackgroundColor,   ImageFormat = QImageIOHandler::ImageFormat};
public slots:
QImageIOHandler* new_QImageIOHandler();
void delete_QImageIOHandler(QImageIOHandler* obj) { delete obj; } 
   int  loopCount(QImageIOHandler* theWrappedObject) const;
   bool  supportsOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QRect  currentImageRect(QImageIOHandler* theWrappedObject) const;
   bool  write(QImageIOHandler* theWrappedObject, const QImage&  image);
   void setOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option, const QVariant&  value);
   bool  jumpToImage(QImageIOHandler* theWrappedObject, int  imageNumber);
   QVariant  option(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   void setDevice(QImageIOHandler* theWrappedObject, QIODevice*  device);
   bool  jumpToNextImage(QImageIOHandler* theWrappedObject);
   int  currentImageNumber(QImageIOHandler* theWrappedObject) const;
   int  imageCount(QImageIOHandler* theWrappedObject) const;
   QIODevice*  device(QImageIOHandler* theWrappedObject) const;
   int  nextImageDelay(QImageIOHandler* theWrappedObject) const;
   void setFormat(QImageIOHandler* theWrappedObject, const QByteArray&  format);
   QByteArray  format(QImageIOHandler* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QIMAGEIOHANDLER_H
