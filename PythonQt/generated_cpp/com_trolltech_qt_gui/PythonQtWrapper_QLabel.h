#ifndef PYTHONQTWRAPPER_QLABEL_H
#define PYTHONQTWRAPPER_QLABEL_H

#include <qlabel.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmovie.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

class PythonQtShell_QLabel : public QLabel
{
public:
    PythonQtShell_QLabel(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QLabel(parent, f),_wrapper(NULL) {};
    PythonQtShell_QLabel(const QString&  text, QWidget*  parent = 0, Qt::WindowFlags  f = 0):QLabel(text, parent, f),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  ev);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  ev);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  ev);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  ev);
virtual void mousePressEvent(QMouseEvent*  ev);
virtual void mouseReleaseEvent(QMouseEvent*  ev);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLabel : public QLabel
{ public:
inline void promoted_mousePressEvent(QMouseEvent*  ev) { QLabel::mousePressEvent(ev); }
inline void promoted_focusOutEvent(QFocusEvent*  ev) { QLabel::focusOutEvent(ev); }
inline void promoted_mouseMoveEvent(QMouseEvent*  ev) { QLabel::mouseMoveEvent(ev); }
inline bool  promoted_event(QEvent*  e) { return QLabel::event(e); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  ev) { QLabel::contextMenuEvent(ev); }
inline void promoted_changeEvent(QEvent*  arg__1) { QLabel::changeEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QLabel::paintEvent(arg__1); }
inline int  promoted_heightForWidth(int  arg__1) const { return QLabel::heightForWidth(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  ev) { QLabel::focusInEvent(ev); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QLabel::focusNextPrevChild(next); }
inline void promoted_keyPressEvent(QKeyEvent*  ev) { QLabel::keyPressEvent(ev); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  ev) { QLabel::mouseReleaseEvent(ev); }
};

class PythonQtWrapper_QLabel : public QObject
{ Q_OBJECT
public:
public slots:
QLabel* new_QLabel(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
QLabel* new_QLabel(const QString&  text, QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QLabel(QLabel* obj) { delete obj; } 
   int  margin(QLabel* theWrappedObject) const;
   void mousePressEvent(QLabel* theWrappedObject, QMouseEvent*  ev);
   const QPicture*  picture(QLabel* theWrappedObject) const;
   Qt::TextFormat  textFormat(QLabel* theWrappedObject) const;
   bool  openExternalLinks(QLabel* theWrappedObject) const;
   void focusOutEvent(QLabel* theWrappedObject, QFocusEvent*  ev);
   void setMargin(QLabel* theWrappedObject, int  arg__1);
   void setTextInteractionFlags(QLabel* theWrappedObject, Qt::TextInteractionFlags  flags);
   bool  wordWrap(QLabel* theWrappedObject) const;
   void setTextFormat(QLabel* theWrappedObject, Qt::TextFormat  arg__1);
   QString  text(QLabel* theWrappedObject) const;
   void mouseMoveEvent(QLabel* theWrappedObject, QMouseEvent*  ev);
   void setScaledContents(QLabel* theWrappedObject, bool  arg__1);
   int  indent(QLabel* theWrappedObject) const;
   QMovie*  movie(QLabel* theWrappedObject) const;
   bool  event(QLabel* theWrappedObject, QEvent*  e);
   QSize  minimumSizeHint(QLabel* theWrappedObject) const;
   void contextMenuEvent(QLabel* theWrappedObject, QContextMenuEvent*  ev);
   Qt::TextInteractionFlags  textInteractionFlags(QLabel* theWrappedObject) const;
   QSize  sizeHint(QLabel* theWrappedObject) const;
   void changeEvent(QLabel* theWrappedObject, QEvent*  arg__1);
   void paintEvent(QLabel* theWrappedObject, QPaintEvent*  arg__1);
   int  heightForWidth(QLabel* theWrappedObject, int  arg__1) const;
   void setOpenExternalLinks(QLabel* theWrappedObject, bool  open);
   const QPixmap*  pixmap(QLabel* theWrappedObject) const;
   void focusInEvent(QLabel* theWrappedObject, QFocusEvent*  ev);
   bool  focusNextPrevChild(QLabel* theWrappedObject, bool  next);
   bool  hasScaledContents(QLabel* theWrappedObject) const;
   Qt::Alignment  alignment(QLabel* theWrappedObject) const;
   void setIndent(QLabel* theWrappedObject, int  arg__1);
   void keyPressEvent(QLabel* theWrappedObject, QKeyEvent*  ev);
   void setAlignment(QLabel* theWrappedObject, Qt::Alignment  arg__1);
   void mouseReleaseEvent(QLabel* theWrappedObject, QMouseEvent*  ev);
   void setBuddy(QLabel* theWrappedObject, QWidget*  arg__1);
   QWidget*  buddy(QLabel* theWrappedObject) const;
   void setWordWrap(QLabel* theWrappedObject, bool  on);
};

#endif // PYTHONQTWRAPPER_QLABEL_H
