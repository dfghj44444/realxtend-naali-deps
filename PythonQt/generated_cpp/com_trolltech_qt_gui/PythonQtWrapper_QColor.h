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
  Invalid = QColor::Invalid,   Rgb = QColor::Rgb,   Hsv = QColor::Hsv,   Cmyk = QColor::Cmyk,   Hsl = QColor::Hsl};
public slots:
QColor* new_QColor();
QColor* new_QColor(Qt::GlobalColor  color);
QColor* new_QColor(const QColor&  color);
QColor* new_QColor(const QString&  name);
QColor* new_QColor(int  r, int  g, int  b, int  a = 255);
QColor* new_QColor(unsigned int  rgb);
void delete_QColor(QColor* obj) { delete obj; } 
   QColor  static_QColor_fromHslF(qreal  h, qreal  s, qreal  l, qreal  a = 1.0);
   void setCmykF(QColor* theWrappedObject, qreal  c, qreal  m, qreal  y, qreal  k, qreal  a = 1.0);
   QColor  toHsl(QColor* theWrappedObject) const;
   void readFrom(QColor* theWrappedObject, QDataStream&  arg__1);
   int  yellow(QColor* theWrappedObject) const;
   qreal  alphaF(QColor* theWrappedObject) const;
   qreal  hsvHueF(QColor* theWrappedObject) const;
   bool  isValid(QColor* theWrappedObject) const;
   void setBlueF(QColor* theWrappedObject, qreal  blue);
   qreal  blueF(QColor* theWrappedObject) const;
   QColor  darker(QColor* theWrappedObject, int  f = 200) const;
   void setAlpha(QColor* theWrappedObject, int  alpha);
   void setRgb(QColor* theWrappedObject, int  r, int  g, int  b, int  a = 255);
   QColor  static_QColor_fromHsvF(qreal  h, qreal  s, qreal  v, qreal  a = 1.0);
   qreal  cyanF(QColor* theWrappedObject) const;
   QString  name(QColor* theWrappedObject) const;
   qreal  saturationF(QColor* theWrappedObject) const;
   bool  operator_equal(QColor* theWrappedObject, const QColor&  c) const;
   void setNamedColor(QColor* theWrappedObject, const QString&  name);
   QColor  toCmyk(QColor* theWrappedObject) const;
   QColor  static_QColor_fromCmyk(int  c, int  m, int  y, int  k, int  a = 255);
   void setRgb(QColor* theWrappedObject, unsigned int  rgb);
   int  cyan(QColor* theWrappedObject) const;
   void setRedF(QColor* theWrappedObject, qreal  red);
   QColor  static_QColor_fromRgbF(qreal  r, qreal  g, qreal  b, qreal  a = 1.0);
   void setRed(QColor* theWrappedObject, int  red);
   QColor  static_QColor_fromRgba(unsigned int  rgba);
   qreal  redF(QColor* theWrappedObject) const;
   qreal  magentaF(QColor* theWrappedObject) const;
   void setRgbF(QColor* theWrappedObject, qreal  r, qreal  g, qreal  b, qreal  a = 1.0);
   QStringList  static_QColor_colorNames();
   QColor  static_QColor_fromHsv(int  h, int  s, int  v, int  a = 255);
   qreal  blackF(QColor* theWrappedObject) const;
   qreal  lightnessF(QColor* theWrappedObject) const;
   QColor  toHsv(QColor* theWrappedObject) const;
   int  lightness(QColor* theWrappedObject) const;
   int  hslSaturation(QColor* theWrappedObject) const;
   void setHslF(QColor* theWrappedObject, qreal  h, qreal  s, qreal  l, qreal  a = 1.0);
   int  black(QColor* theWrappedObject) const;
   int  saturation(QColor* theWrappedObject) const;
   void setRgba(QColor* theWrappedObject, unsigned int  rgba);
   void setHsv(QColor* theWrappedObject, int  h, int  s, int  v, int  a = 255);
   void writeTo(QColor* theWrappedObject, QDataStream&  arg__1);
   QColor  static_QColor_fromCmykF(qreal  c, qreal  m, qreal  y, qreal  k, qreal  a = 1.0);
   unsigned int  rgb(QColor* theWrappedObject) const;
   int  hsvSaturation(QColor* theWrappedObject) const;
   void setBlue(QColor* theWrappedObject, int  blue);
   void setHsl(QColor* theWrappedObject, int  h, int  s, int  l, int  a = 255);
   QColor  toRgb(QColor* theWrappedObject) const;
   qreal  hslSaturationF(QColor* theWrappedObject) const;
   void setCmyk(QColor* theWrappedObject, int  c, int  m, int  y, int  k, int  a = 255);
   int  hsvHue(QColor* theWrappedObject) const;
   unsigned int  rgba(QColor* theWrappedObject) const;
   QColor  convertTo(QColor* theWrappedObject, QColor::Spec  colorSpec) const;
   int  value(QColor* theWrappedObject) const;
   int  alpha(QColor* theWrappedObject) const;
   int  blue(QColor* theWrappedObject) const;
   qreal  hslHueF(QColor* theWrappedObject) const;
   QColor  static_QColor_fromRgb(int  r, int  g, int  b, int  a = 255);
   int  magenta(QColor* theWrappedObject) const;
   QColor  static_QColor_fromRgb(unsigned int  rgb);
   qreal  hsvSaturationF(QColor* theWrappedObject) const;
   qreal  hueF(QColor* theWrappedObject) const;
   qreal  greenF(QColor* theWrappedObject) const;
   void getHsl(QColor* theWrappedObject, int*  h, int*  s, int*  l, int*  a = 0) const;
   int  hslHue(QColor* theWrappedObject) const;
   QColor  static_QColor_fromHsl(int  h, int  s, int  l, int  a = 255);
   void setAlphaF(QColor* theWrappedObject, qreal  alpha);
   qreal  valueF(QColor* theWrappedObject) const;
   void setGreen(QColor* theWrappedObject, int  green);
   int  green(QColor* theWrappedObject) const;
   qreal  yellowF(QColor* theWrappedObject) const;
   int  hue(QColor* theWrappedObject) const;
   void setHsvF(QColor* theWrappedObject, qreal  h, qreal  s, qreal  v, qreal  a = 1.0);
   QColor::Spec  spec(QColor* theWrappedObject) const;
   void getHslF(QColor* theWrappedObject, qreal*  h, qreal*  s, qreal*  l, qreal*  a = 0) const;
   QColor  lighter(QColor* theWrappedObject, int  f = 150) const;
   int  red(QColor* theWrappedObject) const;
   void setGreenF(QColor* theWrappedObject, qreal  green);
    QString toString(QColor*);
};

#endif // PYTHONQTWRAPPER_QCOLOR_H
