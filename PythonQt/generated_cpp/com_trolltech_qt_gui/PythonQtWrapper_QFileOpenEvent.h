#ifndef PYTHONQTWRAPPER_QFILEOPENEVENT_H
#define PYTHONQTWRAPPER_QFILEOPENEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qurl.h>

class PythonQtWrapper_QFileOpenEvent : public QObject
{ Q_OBJECT
public:
public slots:
QFileOpenEvent* new_QFileOpenEvent(const QString&  file);
QFileOpenEvent* new_QFileOpenEvent(const QUrl&  url);
void delete_QFileOpenEvent(QFileOpenEvent* obj) { delete obj; } 
   QUrl  url(QFileOpenEvent* theWrappedObject) const;
   QString  file(QFileOpenEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QFILEOPENEVENT_H
