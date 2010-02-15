#ifndef PYTHONQTWRAPPER_QABSTRACTSPINBOX_H
#define PYTHONQTWRAPPER_QABSTRACTSPINBOX_H

#include <qabstractspinbox.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractspinbox.h>
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
#include <qlayout.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QAbstractSpinBox : public QAbstractSpinBox
{
public:
    PythonQtShell_QAbstractSpinBox(QWidget*  parent = 0):QAbstractSpinBox(parent),_wrapper(NULL) {};

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void clear();
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void fixup(QString&  input) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual void stepBy(int  steps);
virtual QAbstractSpinBox::StepEnabled  stepEnabled() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  event);
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual void wheelEvent(QWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractSpinBox : public QAbstractSpinBox
{ public:
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { QAbstractSpinBox::mouseReleaseEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QAbstractSpinBox::resizeEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QAbstractSpinBox::inputMethodQuery(arg__1); }
inline bool  promoted_event(QEvent*  event) { return QAbstractSpinBox::event(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { QAbstractSpinBox::closeEvent(event); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { QAbstractSpinBox::contextMenuEvent(event); }
inline void promoted_fixup(QString&  input) const { QAbstractSpinBox::fixup(input); }
inline void promoted_clear() { QAbstractSpinBox::clear(); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QAbstractSpinBox::keyPressEvent(event); }
inline QValidator::State  promoted_validate(QString&  input, int&  pos) const { return QAbstractSpinBox::validate(input, pos); }
inline void promoted_timerEvent(QTimerEvent*  event) { QAbstractSpinBox::timerEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QAbstractSpinBox::keyReleaseEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { QAbstractSpinBox::paintEvent(event); }
inline void promoted_hideEvent(QHideEvent*  event) { QAbstractSpinBox::hideEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QAbstractSpinBox::showEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QAbstractSpinBox::focusOutEvent(event); }
inline void promoted_wheelEvent(QWheelEvent*  event) { QAbstractSpinBox::wheelEvent(event); }
inline QAbstractSpinBox::StepEnabled  promoted_stepEnabled() const { return QAbstractSpinBox::stepEnabled(); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QAbstractSpinBox::mousePressEvent(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QAbstractSpinBox::focusInEvent(event); }
inline void promoted_changeEvent(QEvent*  event) { QAbstractSpinBox::changeEvent(event); }
inline void promoted_stepBy(int  steps) { QAbstractSpinBox::stepBy(steps); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { QAbstractSpinBox::mouseMoveEvent(event); }
};

class PythonQtWrapper_QAbstractSpinBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StepEnabledFlag )
Q_FLAGS(StepEnabled )
enum StepEnabledFlag{
  StepNone = QAbstractSpinBox::StepNone,   StepUpEnabled = QAbstractSpinBox::StepUpEnabled,   StepDownEnabled = QAbstractSpinBox::StepDownEnabled};
Q_DECLARE_FLAGS(StepEnabled, StepEnabledFlag)
public slots:
QAbstractSpinBox* new_QAbstractSpinBox(QWidget*  parent = 0);
void delete_QAbstractSpinBox(QAbstractSpinBox* obj) { delete obj; } 
   Qt::Alignment  alignment(QAbstractSpinBox* theWrappedObject) const;
   void mouseReleaseEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event);
   void resizeEvent(QAbstractSpinBox* theWrappedObject, QResizeEvent*  event);
   QVariant  inputMethodQuery(QAbstractSpinBox* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   bool  event(QAbstractSpinBox* theWrappedObject, QEvent*  event);
   QString  specialValueText(QAbstractSpinBox* theWrappedObject) const;
   void closeEvent(QAbstractSpinBox* theWrappedObject, QCloseEvent*  event);
   bool  hasFrame(QAbstractSpinBox* theWrappedObject) const;
   void setWrapping(QAbstractSpinBox* theWrappedObject, bool  w);
   void contextMenuEvent(QAbstractSpinBox* theWrappedObject, QContextMenuEvent*  event);
   void fixup(QAbstractSpinBox* theWrappedObject, QString&  input) const;
   QSize  sizeHint(QAbstractSpinBox* theWrappedObject) const;
   void keyPressEvent(QAbstractSpinBox* theWrappedObject, QKeyEvent*  event);
   QValidator::State  validate(QAbstractSpinBox* theWrappedObject, QString&  input, int&  pos) const;
   void setSpecialValueText(QAbstractSpinBox* theWrappedObject, const QString&  txt);
   void timerEvent(QAbstractSpinBox* theWrappedObject, QTimerEvent*  event);
   bool  isAccelerated(QAbstractSpinBox* theWrappedObject) const;
   void keyReleaseEvent(QAbstractSpinBox* theWrappedObject, QKeyEvent*  event);
   void paintEvent(QAbstractSpinBox* theWrappedObject, QPaintEvent*  event);
   void setButtonSymbols(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::ButtonSymbols  bs);
   void hideEvent(QAbstractSpinBox* theWrappedObject, QHideEvent*  event);
   void showEvent(QAbstractSpinBox* theWrappedObject, QShowEvent*  event);
   bool  isReadOnly(QAbstractSpinBox* theWrappedObject) const;
   void focusOutEvent(QAbstractSpinBox* theWrappedObject, QFocusEvent*  event);
   QString  text(QAbstractSpinBox* theWrappedObject) const;
   void wheelEvent(QAbstractSpinBox* theWrappedObject, QWheelEvent*  event);
   QAbstractSpinBox::StepEnabled  stepEnabled(QAbstractSpinBox* theWrappedObject) const;
   void mousePressEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event);
   QAbstractSpinBox::CorrectionMode  correctionMode(QAbstractSpinBox* theWrappedObject) const;
   void setAccelerated(QAbstractSpinBox* theWrappedObject, bool  on);
   QSize  minimumSizeHint(QAbstractSpinBox* theWrappedObject) const;
   bool  keyboardTracking(QAbstractSpinBox* theWrappedObject) const;
   void setAlignment(QAbstractSpinBox* theWrappedObject, Qt::Alignment  flag);
   void focusInEvent(QAbstractSpinBox* theWrappedObject, QFocusEvent*  event);
   void setKeyboardTracking(QAbstractSpinBox* theWrappedObject, bool  kt);
   void setReadOnly(QAbstractSpinBox* theWrappedObject, bool  r);
   void setFrame(QAbstractSpinBox* theWrappedObject, bool  arg__1);
   void changeEvent(QAbstractSpinBox* theWrappedObject, QEvent*  event);
   bool  hasAcceptableInput(QAbstractSpinBox* theWrappedObject) const;
   void stepBy(QAbstractSpinBox* theWrappedObject, int  steps);
   void interpretText(QAbstractSpinBox* theWrappedObject);
   void mouseMoveEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event);
   QAbstractSpinBox::ButtonSymbols  buttonSymbols(QAbstractSpinBox* theWrappedObject) const;
   bool  wrapping(QAbstractSpinBox* theWrappedObject) const;
   void setCorrectionMode(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::CorrectionMode  cm);
};

#endif // PYTHONQTWRAPPER_QABSTRACTSPINBOX_H
