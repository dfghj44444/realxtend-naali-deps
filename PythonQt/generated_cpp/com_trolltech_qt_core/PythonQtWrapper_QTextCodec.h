#ifndef PYTHONQTWRAPPER_QTEXTCODEC_H
#define PYTHONQTWRAPPER_QTEXTCODEC_H

#include <qtextcodec.h>
#include <QObject>

#include <PythonQt.h>

#include <QTextCodec>
#include <QVariant>
#include <qbytearray.h>
#include <qlist.h>
#include <qtextcodec.h>

class PythonQtShell_QTextCodec : public QTextCodec
{
public:
    PythonQtShell_QTextCodec():QTextCodec(),_wrapper(NULL) {};

virtual QList<QByteArray >  aliases() const;
virtual QByteArray  convertFromUnicode(const QChar*  in, int  length, QTextCodec::ConverterState*  state) const;
virtual QString  convertToUnicode(const char*  in, int  length, QTextCodec::ConverterState*  state) const;
virtual int  mibEnum() const;
virtual QByteArray  name() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTextCodec : public QTextCodec
{ public:
inline QList<QByteArray >  promoted_aliases() const { return QTextCodec::aliases(); }
};

class PythonQtWrapper_QTextCodec : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ConversionFlag )
Q_FLAGS(ConversionFlags )
enum ConversionFlag{
  DefaultConversion = QTextCodec::DefaultConversion,   ConvertInvalidToNull = QTextCodec::ConvertInvalidToNull,   IgnoreHeader = QTextCodec::IgnoreHeader,   FreeFunction = QTextCodec::FreeFunction};
Q_DECLARE_FLAGS(ConversionFlags, ConversionFlag)
public slots:
   void static_QTextCodec_setCodecForCStrings(QTextCodec*  c);
   bool  canEncode(QTextCodec* theWrappedObject, const QString&  arg__1) const;
   QList<QByteArray >  static_QTextCodec_availableCodecs();
   QByteArray  fromUnicode(QTextCodec* theWrappedObject, const QString&  uc) const;
   void static_QTextCodec_setCodecForLocale(QTextCodec*  c);
   bool  canEncode(QTextCodec* theWrappedObject, QChar  arg__1) const;
   QTextCodec*  static_QTextCodec_codecForUtfText(const QByteArray&  ba);
   QTextDecoder*  makeDecoder(QTextCodec* theWrappedObject) const;
   QTextCodec*  static_QTextCodec_codecForLocale();
   QTextCodec*  static_QTextCodec_codecForMib(int  mib);
   QTextCodec*  static_QTextCodec_codecForUtfText(const QByteArray&  ba, QTextCodec*  defaultCodec);
   QString  toUnicode(QTextCodec* theWrappedObject, const QByteArray&  arg__1) const;
   QTextCodec*  static_QTextCodec_codecForCStrings();
   QTextCodec*  static_QTextCodec_codecForHtml(const QByteArray&  ba);
   QTextCodec*  static_QTextCodec_codecForHtml(const QByteArray&  ba, QTextCodec*  defaultCodec);
   QTextCodec*  static_QTextCodec_codecForName(const char*  name);
   QTextEncoder*  makeEncoder(QTextCodec* theWrappedObject) const;
   void static_QTextCodec_setCodecForTr(QTextCodec*  c);
   QList<QByteArray >  aliases(QTextCodec* theWrappedObject) const;
   QList<int >  static_QTextCodec_availableMibs();
   QTextCodec*  static_QTextCodec_codecForName(const QByteArray&  name);
};

#endif // PYTHONQTWRAPPER_QTEXTCODEC_H
