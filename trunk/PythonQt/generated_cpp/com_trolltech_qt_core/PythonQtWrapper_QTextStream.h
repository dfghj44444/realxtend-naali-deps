#ifndef PYTHONQTWRAPPER_QTEXTSTREAM_H
#define PYTHONQTWRAPPER_QTEXTSTREAM_H

#include <qtextstream.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qlocale.h>
#include <qtextcodec.h>
#include <qtextstream.h>

class PythonQtShell_QTextStream : public QTextStream
{
public:
    PythonQtShell_QTextStream():QTextStream(),_wrapper(NULL) {};
    PythonQtShell_QTextStream(QIODevice*  device):QTextStream(device),_wrapper(NULL) {};
    PythonQtShell_QTextStream(const QByteArray&  array, QIODevice::OpenMode  openMode = QIODevice::ReadOnly):QTextStream(array, openMode),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTextStream : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RealNumberNotation NumberFlag FieldAlignment Status )
Q_FLAGS(NumberFlags )
enum RealNumberNotation{
  SmartNotation = QTextStream::SmartNotation,   FixedNotation = QTextStream::FixedNotation,   ScientificNotation = QTextStream::ScientificNotation};
enum NumberFlag{
  ShowBase = QTextStream::ShowBase,   ForcePoint = QTextStream::ForcePoint,   ForceSign = QTextStream::ForceSign,   UppercaseBase = QTextStream::UppercaseBase,   UppercaseDigits = QTextStream::UppercaseDigits};
enum FieldAlignment{
  AlignLeft = QTextStream::AlignLeft,   AlignRight = QTextStream::AlignRight,   AlignCenter = QTextStream::AlignCenter,   AlignAccountingStyle = QTextStream::AlignAccountingStyle};
enum Status{
  Ok = QTextStream::Ok,   ReadPastEnd = QTextStream::ReadPastEnd,   ReadCorruptData = QTextStream::ReadCorruptData};
Q_DECLARE_FLAGS(NumberFlags, NumberFlag)
public slots:
QTextStream* new_QTextStream();
QTextStream* new_QTextStream(QIODevice*  device);
QTextStream* new_QTextStream(const QByteArray&  array, QIODevice::OpenMode  openMode = QIODevice::ReadOnly);
void delete_QTextStream(QTextStream* obj) { delete obj; } 
   void setFieldWidth(QTextStream* theWrappedObject, int  width);
   QTextStream::Status  status(QTextStream* theWrappedObject) const;
   QTextStream*  readFloat(QTextStream* theWrappedObject, float&  f);
   QTextStream*  writeInt(QTextStream* theWrappedObject, signed int  i);
   void setCodec(QTextStream* theWrappedObject, const char*  codecName);
   QTextStream*  readLongLong(QTextStream* theWrappedObject, qlonglong&  i);
   void setDevice(QTextStream* theWrappedObject, QIODevice*  device);
   QLocale  locale(QTextStream* theWrappedObject) const;
   QTextStream*  writeDouble(QTextStream* theWrappedObject, double  f);
   void resetStatus(QTextStream* theWrappedObject);
   QTextStream*  writeBoolean(QTextStream* theWrappedObject, QBool  b);
   void setRealNumberPrecision(QTextStream* theWrappedObject, int  precision);
   bool  generateByteOrderMark(QTextStream* theWrappedObject) const;
   QTextStream*  writeByteArray(QTextStream* theWrappedObject, const QByteArray&  array);
   void setStatus(QTextStream* theWrappedObject, QTextStream::Status  status);
   void setRealNumberNotation(QTextStream* theWrappedObject, QTextStream::RealNumberNotation  notation);
   void skipWhiteSpace(QTextStream* theWrappedObject);
   bool  atEnd(QTextStream* theWrappedObject) const;
   int  realNumberPrecision(QTextStream* theWrappedObject) const;
   void setNumberFlags(QTextStream* theWrappedObject, QTextStream::NumberFlags  flags);
   qint64  pos(QTextStream* theWrappedObject) const;
   QTextCodec*  codec(QTextStream* theWrappedObject) const;
   QTextStream*  writeShort(QTextStream* theWrappedObject, signed short  i);
   QTextStream*  readShort(QTextStream* theWrappedObject, signed short&  i);
   QTextStream*  writeFloat(QTextStream* theWrappedObject, float  f);
   QTextStream*  readByte(QTextStream* theWrappedObject, char&  ch);
   QTextStream*  readDouble(QTextStream* theWrappedObject, double&  f);
   void reset(QTextStream* theWrappedObject);
   void setFieldAlignment(QTextStream* theWrappedObject, QTextStream::FieldAlignment  alignment);
   void flush(QTextStream* theWrappedObject);
   void setAutoDetectUnicode(QTextStream* theWrappedObject, bool  enabled);
   QTextStream*  readUShort(QTextStream* theWrappedObject, unsigned short&  i);
   void setLocale(QTextStream* theWrappedObject, const QLocale&  locale);
   QChar  padChar(QTextStream* theWrappedObject) const;
   QString  readAll(QTextStream* theWrappedObject);
   bool  autoDetectUnicode(QTextStream* theWrappedObject) const;
   int  integerBase(QTextStream* theWrappedObject) const;
   QTextStream::RealNumberNotation  realNumberNotation(QTextStream* theWrappedObject) const;
   QTextStream::NumberFlags  numberFlags(QTextStream* theWrappedObject) const;
   QTextStream*  readUInt(QTextStream* theWrappedObject, unsigned int&  i);
   void setCodec(QTextStream* theWrappedObject, QTextCodec*  codec);
   void setIntegerBase(QTextStream* theWrappedObject, int  base);
   QTextStream*  readInt(QTextStream* theWrappedObject, signed int&  i);
   void setPadChar(QTextStream* theWrappedObject, QChar  ch);
   QIODevice*  device(QTextStream* theWrappedObject) const;
   QTextStream::FieldAlignment  fieldAlignment(QTextStream* theWrappedObject) const;
   int  fieldWidth(QTextStream* theWrappedObject) const;
   QString  read(QTextStream* theWrappedObject, qint64  maxlen);
   bool  seek(QTextStream* theWrappedObject, qint64  pos);
   void setGenerateByteOrderMark(QTextStream* theWrappedObject, bool  generate);
   QTextStream*  writeString(QTextStream* theWrappedObject, const QString&  s);
   QString  readLine(QTextStream* theWrappedObject, qint64  maxlen = 0);
   QTextStream*  writeByte(QTextStream* theWrappedObject, char  ch);
};

#endif // PYTHONQTWRAPPER_QTEXTSTREAM_H
