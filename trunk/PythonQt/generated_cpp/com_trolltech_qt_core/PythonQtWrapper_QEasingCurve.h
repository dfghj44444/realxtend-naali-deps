#ifndef PYTHONQTWRAPPER_QEASINGCURVE_H
#define PYTHONQTWRAPPER_QEASINGCURVE_H

#include <qeasingcurve.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtWrapper_QEasingCurve : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  Linear = QEasingCurve::Linear,   InQuad = QEasingCurve::InQuad,   OutQuad = QEasingCurve::OutQuad,   InOutQuad = QEasingCurve::InOutQuad,   OutInQuad = QEasingCurve::OutInQuad,   InCubic = QEasingCurve::InCubic,   OutCubic = QEasingCurve::OutCubic,   InOutCubic = QEasingCurve::InOutCubic,   OutInCubic = QEasingCurve::OutInCubic,   InQuart = QEasingCurve::InQuart,   OutQuart = QEasingCurve::OutQuart,   InOutQuart = QEasingCurve::InOutQuart,   OutInQuart = QEasingCurve::OutInQuart,   InQuint = QEasingCurve::InQuint,   OutQuint = QEasingCurve::OutQuint,   InOutQuint = QEasingCurve::InOutQuint,   OutInQuint = QEasingCurve::OutInQuint,   InSine = QEasingCurve::InSine,   OutSine = QEasingCurve::OutSine,   InOutSine = QEasingCurve::InOutSine,   OutInSine = QEasingCurve::OutInSine,   InExpo = QEasingCurve::InExpo,   OutExpo = QEasingCurve::OutExpo,   InOutExpo = QEasingCurve::InOutExpo,   OutInExpo = QEasingCurve::OutInExpo,   InCirc = QEasingCurve::InCirc,   OutCirc = QEasingCurve::OutCirc,   InOutCirc = QEasingCurve::InOutCirc,   OutInCirc = QEasingCurve::OutInCirc,   InElastic = QEasingCurve::InElastic,   OutElastic = QEasingCurve::OutElastic,   InOutElastic = QEasingCurve::InOutElastic,   OutInElastic = QEasingCurve::OutInElastic,   InBack = QEasingCurve::InBack,   OutBack = QEasingCurve::OutBack,   InOutBack = QEasingCurve::InOutBack,   OutInBack = QEasingCurve::OutInBack,   InBounce = QEasingCurve::InBounce,   OutBounce = QEasingCurve::OutBounce,   InOutBounce = QEasingCurve::InOutBounce,   OutInBounce = QEasingCurve::OutInBounce,   InCurve = QEasingCurve::InCurve,   OutCurve = QEasingCurve::OutCurve,   SineCurve = QEasingCurve::SineCurve,   CosineCurve = QEasingCurve::CosineCurve,   Custom = QEasingCurve::Custom,   NCurveTypes = QEasingCurve::NCurveTypes};
public slots:
QEasingCurve* new_QEasingCurve(QEasingCurve::Type  type = QEasingCurve::Linear);
void delete_QEasingCurve(QEasingCurve* obj) { delete obj; } 
   QEasingCurve::Type  type(QEasingCurve* theWrappedObject) const;
   qreal  period(QEasingCurve* theWrappedObject) const;
   qreal  amplitude(QEasingCurve* theWrappedObject) const;
   void setAmplitude(QEasingCurve* theWrappedObject, qreal  amplitude);
   qreal  overshoot(QEasingCurve* theWrappedObject) const;
   qreal  valueForProgress(QEasingCurve* theWrappedObject, qreal  progress) const;
   void setOvershoot(QEasingCurve* theWrappedObject, qreal  overshoot);
   void setPeriod(QEasingCurve* theWrappedObject, qreal  period);
   void setType(QEasingCurve* theWrappedObject, QEasingCurve::Type  type);
    QString toString(QEasingCurve*);
};

#endif // PYTHONQTWRAPPER_QEASINGCURVE_H
