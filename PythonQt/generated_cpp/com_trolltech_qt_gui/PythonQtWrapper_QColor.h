#ifndef PYTHONQTWRAPPER_QCOLOR_H
#define PYTHONQTWRAPPER_QCOLOR_H

#include <qcolor.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qcolor.h>
#include <qdatastream.h>
#include <qstringlist.h>

class PythonQtWrapper_QColor : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Spec )
enum Spec{
  Invalid = QColor::Invalid,   Rgb = QColor::Rgb,   Hsv = QColor::Hsv,   Cmyk = QColor::Cmyk};
public slots:
QColor* new_QColor();
QColor* new_QColor(Qt::GlobalColor  color);
QColor* new_QColor(const QColor&  color);
QColor* new_QColor(const QString&  name);
QColor* new_QColor(int  r, int  g, int  b, int  a = 255);
QColor* new_QColor(unsigned int  rgb);
void delete_QColor(QColor* obj) { delete obj; } 
   void setNamedColor(QColor* theWrappedObject, const QString&  name);
   void setRedF(QColor* theWrappedObject, qreal  red);
   int  value(QColor* theWrappedObject) const;
   void setBlue(QColor* theWrappedObject, int  blue);
   void setHsvF(QColor* theWrappedObject, qreal  h, qreal  s, qreal  v, qreal  a = 1.0);
   unsigned int  rgba(QColor* theWrappedObject) const;
   void writeTo(QColor* theWrappedObject, QDataStream&  arg__1);
   unsigned int  rgb(QColor* theWrappedObject) const;
   int  black(QColor* theWrappedObject) const;
   void setRgbF(QColor* theWrappedObject, qreal  r, qreal  g, qreal  b, qreal  a = 1.0);
   void setRed(QColor* theWrappedObject, int  red);
   QColor  toHsv(QColor* theWrappedObject) const;
   qreal  saturationF(QColor* theWrappedObject) const;
   qreal  valueF(QColor* theWrappedObject) const;
   QColor  static_QColor_fromRgbF(qreal  r, qreal  g, qreal  b, qreal  a = 1.0);
   qreal  magentaF(QColor* theWrappedObject) const;
   void setRgba(QColor* theWrappedObject, unsigned int  rgba);
   int  hue(QColor* theWrappedObject) const;
   void setAlphaF(QColor* theWrappedObject, qreal  alpha);
   int  red(QColor* theWrappedObject) const;
   QColor::Spec  spec(QColor* theWrappedObject) const;
   qreal  blueF(QColor* theWrappedObject) const;
   void setCmyk(QColor* theWrappedObject, int  c, int  m, int  y, int  k, int  a = 255);
   QColor  toCmyk(QColor* theWrappedObject) const;
   qreal  blackF(QColor* theWrappedObject) const;
   QColor  toRgb(QColor* theWrappedObject) const;
   void setCmykF(QColor* theWrappedObject, qreal  c, qreal  m, qreal  y, qreal  k, qreal  a = 1.0);
   qreal  alphaF(QColor* theWrappedObject) const;
   QColor  darker(QColor* theWrappedObject, int  f = 200) const;
   QColor  static_QColor_fromHsvF(qreal  h, qreal  s, qreal  v, qreal  a = 1.0);
   qreal  redF(QColor* theWrappedObject) const;
   int  yellow(QColor* theWrappedObject) const;
   int  alpha(QColor* theWrappedObject) const;
   QColor  static_QColor_fromRgb(int  r, int  g, int  b, int  a = 255);
   qreal  greenF(QColor* theWrappedObject) const;
   void setBlueF(QColor* theWrappedObject, qreal  blue);
   QColor  convertTo(QColor* theWrappedObject, QColor::Spec  colorSpec) const;
   void setHsv(QColor* theWrappedObject, int  h, int  s, int  v, int  a = 255);
   int  cyan(QColor* theWrappedObject) const;
   QColor  static_QColor_fromHsv(int  h, int  s, int  v, int  a = 255);
   QColor  static_QColor_fromRgba(unsigned int  rgba);
   void setRgb(QColor* theWrappedObject, int  r, int  g, int  b, int  a = 255);
   bool  operator_equal(QColor* theWrappedObject, const QColor&  c) const;
   void readFrom(QColor* theWrappedObject, QDataStream&  arg__1);
   void setAlpha(QColor* theWrappedObject, int  alpha);
   int  green(QColor* theWrappedObject) const;
   QColor  static_QColor_fromRgb(unsigned int  rgb);
   QColor  static_QColor_fromCmyk(int  c, int  m, int  y, int  k, int  a = 255);
   qreal  yellowF(QColor* theWrappedObject) const;
   qreal  cyanF(QColor* theWrappedObject) const;
   QColor  static_QColor_fromCmykF(qreal  c, qreal  m, qreal  y, qreal  k, qreal  a = 1.0);
   int  magenta(QColor* theWrappedObject) const;
   int  saturation(QColor* theWrappedObject) const;
   int  blue(QColor* theWrappedObject) const;
   QStringList  static_QColor_colorNames();
   qreal  hueF(QColor* theWrappedObject) const;
   bool  isValid(QColor* theWrappedObject) const;
   void setGreen(QColor* theWrappedObject, int  green);
   void setRgb(QColor* theWrappedObject, unsigned int  rgb);
   QString  name(QColor* theWrappedObject) const;
   void setGreenF(QColor* theWrappedObject, qreal  green);
   QColor  lighter(QColor* theWrappedObject, int  f = 150) const;
    QString toString(QColor*);
};

#endif // PYTHONQTWRAPPER_QCOLOR_H
