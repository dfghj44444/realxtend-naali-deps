#ifndef PYTHONQTWRAPPER_QWEBHITTESTRESULT_H
#define PYTHONQTWRAPPER_QWEBHITTESTRESULT_H

#include <qwebframe.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qurl.h>
#include <qwebelement.h>
#include <qwebframe.h>

class PythonQtWrapper_QWebHitTestResult : public QObject
{ Q_OBJECT
public:
public slots:
QWebHitTestResult* new_QWebHitTestResult();
QWebHitTestResult* new_QWebHitTestResult(const QWebHitTestResult&  other);
void delete_QWebHitTestResult(QWebHitTestResult* obj) { delete obj; } 
   QWebElement  linkElement(QWebHitTestResult* theWrappedObject) const;
   bool  isNull(QWebHitTestResult* theWrappedObject) const;
   QString  alternateText(QWebHitTestResult* theWrappedObject) const;
   QRect  boundingRect(QWebHitTestResult* theWrappedObject) const;
   QUrl  linkTitle(QWebHitTestResult* theWrappedObject) const;
   QString  linkText(QWebHitTestResult* theWrappedObject) const;
   QPixmap  pixmap(QWebHitTestResult* theWrappedObject) const;
   QWebFrame*  frame(QWebHitTestResult* theWrappedObject) const;
   bool  isContentEditable(QWebHitTestResult* theWrappedObject) const;
   QPoint  pos(QWebHitTestResult* theWrappedObject) const;
   QWebElement  element(QWebHitTestResult* theWrappedObject) const;
   QString  title(QWebHitTestResult* theWrappedObject) const;
   bool  isContentSelected(QWebHitTestResult* theWrappedObject) const;
   QWebFrame*  linkTargetFrame(QWebHitTestResult* theWrappedObject) const;
   QUrl  linkUrl(QWebHitTestResult* theWrappedObject) const;
   QWebElement  enclosingBlockElement(QWebHitTestResult* theWrappedObject) const;
   QUrl  imageUrl(QWebHitTestResult* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QWEBHITTESTRESULT_H
