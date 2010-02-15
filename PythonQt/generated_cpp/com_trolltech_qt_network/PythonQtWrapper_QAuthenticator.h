#ifndef PYTHONQTWRAPPER_QAUTHENTICATOR_H
#define PYTHONQTWRAPPER_QAUTHENTICATOR_H

#include <qauthenticator.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qauthenticator.h>

class PythonQtWrapper_QAuthenticator : public QObject
{ Q_OBJECT
public:
public slots:
QAuthenticator* new_QAuthenticator();
QAuthenticator* new_QAuthenticator(const QAuthenticator&  other);
void delete_QAuthenticator(QAuthenticator* obj) { delete obj; } 
   void setPassword(QAuthenticator* theWrappedObject, const QString&  password);
   bool  isNull(QAuthenticator* theWrappedObject) const;
   QString  realm(QAuthenticator* theWrappedObject) const;
   bool  operator_equal(QAuthenticator* theWrappedObject, const QAuthenticator&  other) const;
   QString  password(QAuthenticator* theWrappedObject) const;
   void setUser(QAuthenticator* theWrappedObject, const QString&  user);
   QString  user(QAuthenticator* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QAUTHENTICATOR_H
