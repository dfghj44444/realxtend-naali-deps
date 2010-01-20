#include <TelepathyQt4/Debug_>
#include <TelepathyQt4/Constants>
#include <TelepathyQt4/Types>

#include <QDebug>
#include <QtGui>

#include "roster-window.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    if (argc < 5) {
        qDebug() << "usage: roster username password server port";
        return 1;
    }

    Tp::registerTypes();
    Tp::enableDebug(true);
    Tp::enableWarnings(true);

    RosterWindow w(argv[1], argv[2], argv[3], argv[4]);
    w.show();

    return app.exec();
}
