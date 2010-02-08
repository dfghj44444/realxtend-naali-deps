#include <glib-object.h>
#include <gst/gst.h>
#include <glib.h>

#include <TelepathyQt4/Debug_>
#include <TelepathyQt4/Constants>
#include <TelepathyQt4/Types>

#include <QDebug>
#include <QtGui>
#include <QThread.h>

#include "call-window.h"
#include "farsight-channel.h"

#include <telepathy-glib/debug.h>

#ifdef WIN32
class GMainLoopThread : public QThread 
{
    public:
        GMainLoop *gmain_loop;
        virtual void run();
};


void GMainLoopThread::run()
{
    g_main_loop_run (gmain_loop);
}
#endif

int main(int argc, char **argv)
{
    g_type_init();
    gst_init(&argc, &argv);
    tp_debug_set_all_flags();
    
#ifdef WIN32
    GMainLoopThread thread;
    thread.gmain_loop = g_main_loop_new (NULL, FALSE);
    thread.start();
#endif
    QApplication app(argc, argv);

    if (argc < 4) {
        qDebug() << "usage: call username password server";
        return 1;
    }

    app.setAttribute(Qt::AA_NativeWindows);

    Tp::registerTypes();
    Tp::enableDebug(true);
    Tp::enableWarnings(true);
    qRegisterMetaType<Tp::FarsightChannel::Status>();

    CallWindow w(argv[1], argv[2], argv[3]);
    w.show();
    int ret = app.exec();

#ifdef WIN32
    thread.quit();
#endif
    //thread.terminate();
    return ret;
    //return app.exec();
}
