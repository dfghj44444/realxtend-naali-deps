#ifndef PYTHONQTWRAPPER_QHTTPRESPONSEHEADER_H
#define PYTHONQTWRAPPER_QHTTPRESPONSEHEADER_H

#include <qhttp.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qhttp.h>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

class PythonQtShell_QHttpResponseHeader : public QHttpResponseHeader
{
public:
    PythonQtShell_QHttpResponseHeader():QHttpResponseHeader(),_wrapper(NULL) {};
    PythonQtShell_QHttpResponseHeader(const QHttpResponseHeader&  header):QHttpResponseHeader(header),_wrapper(NULL) {};
    PythonQtShell_QHttpResponseHeader(const QString&  str):QHttpResponseHeader(str),_wrapper(NULL) {};
    PythonQtShell_QHttpResponseHeader(int  code, const QString&  text = QString(), int  majorVer = 1, int  minorVer = 1):QHttpResponseHeader(code, text, majorVer, minorVer),_wrapper(NULL) {};

virtual int  majorVersion() const;
virtual int  minorVersion() const;
virtual bool  parseLine(const QString&  line, int  number);
virtual QString  toString() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QHttpResponseHeader : public QHttpResponseHeader
{ public:
inline int  promoted_majorVersion() const { return QHttpResponseHeader::majorVersion(); }
inline int  promoted_minorVersion() const { return QHttpResponseHeader::minorVersion(); }
inline QString  promoted_toString() const { return QHttpResponseHeader::toString(); }
inline bool  promoted_parseLine(const QString&  line, int  number) { return QHttpResponseHeader::parseLine(line, number); }
};

class PythonQtWrapper_QHttpResponseHeader : public QObject
{ Q_OBJECT
public:
public slots:
QHttpResponseHeader* new_QHttpResponseHeader();
QHttpResponseHeader* new_QHttpResponseHeader(const QHttpResponseHeader&  header);
QHttpResponseHeader* new_QHttpResponseHeader(const QString&  str);
QHttpResponseHeader* new_QHttpResponseHeader(int  code, const QString&  text = QString(), int  majorVer = 1, int  minorVer = 1);
void delete_QHttpResponseHeader(QHttpResponseHeader* obj) { delete obj; } 
   int  majorVersion(QHttpResponseHeader* theWrappedObject) const;
   int  minorVersion(QHttpResponseHeader* theWrappedObject) const;
   QString  reasonPhrase(QHttpResponseHeader* theWrappedObject) const;
   int  statusCode(QHttpResponseHeader* theWrappedObject) const;
   QString  toString(QHttpResponseHeader* theWrappedObject) const;
   bool  parseLine(QHttpResponseHeader* theWrappedObject, const QString&  line, int  number);
   void setStatusLine(QHttpResponseHeader* theWrappedObject, int  code, const QString&  text = QString(), int  majorVer = 1, int  minorVer = 1);
};

#endif // PYTHONQTWRAPPER_QHTTPRESPONSEHEADER_H
