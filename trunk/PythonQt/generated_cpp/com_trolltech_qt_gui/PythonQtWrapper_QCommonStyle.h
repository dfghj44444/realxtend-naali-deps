#ifndef PYTHONQTWRAPPER_QCOMMONSTYLE_H
#define PYTHONQTWRAPPER_QCOMMONSTYLE_H

#include <qcommonstyle.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qapplication.h>
#include <qbytearray.h>
#include <qcommonstyle.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QCommonStyle : public QCommonStyle
{
public:
    PythonQtShell_QCommonStyle():QCommonStyle(),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const;
virtual void drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = 0) const;
virtual QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const;
virtual int  pixelMetric(QStyle::PixelMetric  m, const QStyleOption*  opt = 0, const QWidget*  widget = 0) const;
virtual void polish(QApplication*  app);
virtual void polish(QPalette&  arg__1);
virtual void polish(QWidget*  widget);
virtual QSize  sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
virtual QPalette  standardPalette() const;
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const;
virtual int  styleHint(QStyle::StyleHint  sh, const QStyleOption*  opt = 0, const QWidget*  w = 0, QStyleHintReturn*  shret = 0) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w = 0) const;
virtual QRect  subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void unpolish(QApplication*  application);
virtual void unpolish(QWidget*  widget);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCommonStyle : public QCommonStyle
{ public:
inline void promoted_unpolish(QWidget*  widget) { QCommonStyle::unpolish(widget); }
inline void promoted_drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const { QCommonStyle::drawComplexControl(cc, opt, p, w); }
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QCommonStyle::drawPrimitive(pe, opt, p, w); }
inline void promoted_polish(QWidget*  widget) { QCommonStyle::polish(widget); }
inline QPixmap  promoted_generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const { return QCommonStyle::generatedIconPixmap(iconMode, pixmap, opt); }
inline void promoted_unpolish(QApplication*  application) { QCommonStyle::unpolish(application); }
inline QStyle::SubControl  promoted_hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = 0) const { return QCommonStyle::hitTestComplexControl(cc, opt, pt, w); }
inline void promoted_polish(QApplication*  app) { QCommonStyle::polish(app); }
inline int  promoted_styleHint(QStyle::StyleHint  sh, const QStyleOption*  opt = 0, const QWidget*  w = 0, QStyleHintReturn*  shret = 0) const { return QCommonStyle::styleHint(sh, opt, w, shret); }
inline QRect  promoted_subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w = 0) const { return QCommonStyle::subControlRect(cc, opt, sc, w); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  m, const QStyleOption*  opt = 0, const QWidget*  widget = 0) const { return QCommonStyle::pixelMetric(m, opt, widget); }
inline void promoted_drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QCommonStyle::drawControl(element, opt, p, w); }
inline void promoted_polish(QPalette&  arg__1) { QCommonStyle::polish(arg__1); }
inline QSize  promoted_sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const { return QCommonStyle::sizeFromContents(ct, opt, contentsSize, widget); }
inline QRect  promoted_subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const { return QCommonStyle::subElementRect(r, opt, widget); }
};

class PythonQtWrapper_QCommonStyle : public QObject
{ Q_OBJECT
public:
public slots:
QCommonStyle* new_QCommonStyle();
void delete_QCommonStyle(QCommonStyle* obj) { delete obj; } 
   void unpolish(QCommonStyle* theWrappedObject, QWidget*  widget);
   void drawComplexControl(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void drawPrimitive(QCommonStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void polish(QCommonStyle* theWrappedObject, QWidget*  widget);
   QPixmap  generatedIconPixmap(QCommonStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
   void unpolish(QCommonStyle* theWrappedObject, QApplication*  application);
   QStyle::SubControl  hitTestComplexControl(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = 0) const;
   void polish(QCommonStyle* theWrappedObject, QApplication*  app);
   int  styleHint(QCommonStyle* theWrappedObject, QStyle::StyleHint  sh, const QStyleOption*  opt = 0, const QWidget*  w = 0, QStyleHintReturn*  shret = 0) const;
   QRect  subControlRect(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w = 0) const;
   int  pixelMetric(QCommonStyle* theWrappedObject, QStyle::PixelMetric  m, const QStyleOption*  opt = 0, const QWidget*  widget = 0) const;
   void drawControl(QCommonStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void polish(QCommonStyle* theWrappedObject, QPalette&  arg__1);
   QSize  sizeFromContents(QCommonStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
   QRect  subElementRect(QCommonStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
};

#endif // PYTHONQTWRAPPER_QCOMMONSTYLE_H
