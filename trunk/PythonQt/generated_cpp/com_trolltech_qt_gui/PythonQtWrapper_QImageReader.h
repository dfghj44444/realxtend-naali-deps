#ifndef PYTHONQTWRAPPER_QIMAGEREADER_H
#define PYTHONQTWRAPPER_QIMAGEREADER_H

#include <qimagereader.h>
#include <QObject>

#include <PythonQt.h>

#include <QColor>
#include <QImage>
#include <QRect>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qimage.h>
#include <qimagereader.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qrect.h>
#include <qsize.h>
#include <qstringlist.h>

class PythonQtWrapper_QImageReader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ImageReaderError )
enum ImageReaderError{
  UnknownError = QImageReader::UnknownError,   FileNotFoundError = QImageReader::FileNotFoundError,   DeviceError = QImageReader::DeviceError,   UnsupportedFormatError = QImageReader::UnsupportedFormatError,   InvalidDataError = QImageReader::InvalidDataError};
public slots:
QImageReader* new_QImageReader();
QImageReader* new_QImageReader(QIODevice*  device, const QByteArray&  format = QByteArray());
QImageReader* new_QImageReader(const QString&  fileName, const QByteArray&  format = QByteArray());
void delete_QImageReader(QImageReader* obj) { delete obj; } 
   int  nextImageDelay(QImageReader* theWrappedObject) const;
   QRect  currentImageRect(QImageReader* theWrappedObject) const;
   QString  fileName(QImageReader* theWrappedObject) const;
   QRect  scaledClipRect(QImageReader* theWrappedObject) const;
   void setAutoDetectImageFormat(QImageReader* theWrappedObject, bool  enabled);
   QString  errorString(QImageReader* theWrappedObject) const;
   QByteArray  static_QImageReader_imageFormat(QIODevice*  device);
   int  loopCount(QImageReader* theWrappedObject) const;
   bool  jumpToNextImage(QImageReader* theWrappedObject);
   void setScaledClipRect(QImageReader* theWrappedObject, const QRect&  rect);
   QSize  scaledSize(QImageReader* theWrappedObject) const;
   QImage  read(QImageReader* theWrappedObject);
   void setBackgroundColor(QImageReader* theWrappedObject, const QColor&  color);
   QByteArray  static_QImageReader_imageFormat(const QString&  fileName);
   QRect  clipRect(QImageReader* theWrappedObject) const;
   int  quality(QImageReader* theWrappedObject) const;
   void setQuality(QImageReader* theWrappedObject, int  quality);
   bool  supportsOption(QImageReader* theWrappedObject, QImageIOHandler::ImageOption  option) const;
   QSize  size(QImageReader* theWrappedObject) const;
   void setDevice(QImageReader* theWrappedObject, QIODevice*  device);
   void setFormat(QImageReader* theWrappedObject, const QByteArray&  format);
   QImageReader::ImageReaderError  error(QImageReader* theWrappedObject) const;
   QString  text(QImageReader* theWrappedObject, const QString&  key) const;
   void setScaledSize(QImageReader* theWrappedObject, const QSize&  size);
   bool  canRead(QImageReader* theWrappedObject) const;
   bool  jumpToImage(QImageReader* theWrappedObject, int  imageNumber);
   QList<QByteArray >  static_QImageReader_supportedImageFormats();
   bool  decideFormatFromContent(QImageReader* theWrappedObject) const;
   bool  supportsAnimation(QImageReader* theWrappedObject) const;
   QStringList  textKeys(QImageReader* theWrappedObject) const;
   void setDecideFormatFromContent(QImageReader* theWrappedObject, bool  ignored);
   bool  autoDetectImageFormat(QImageReader* theWrappedObject) const;
   QIODevice*  device(QImageReader* theWrappedObject) const;
   QImage::Format  imageFormat(QImageReader* theWrappedObject) const;
   QColor  backgroundColor(QImageReader* theWrappedObject) const;
   void setFileName(QImageReader* theWrappedObject, const QString&  fileName);
   int  imageCount(QImageReader* theWrappedObject) const;
   void setClipRect(QImageReader* theWrappedObject, const QRect&  rect);
   int  currentImageNumber(QImageReader* theWrappedObject) const;
   QByteArray  format(QImageReader* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QIMAGEREADER_H
