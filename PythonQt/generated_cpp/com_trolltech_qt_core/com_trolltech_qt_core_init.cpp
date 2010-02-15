#include <PythonQt.h>
#include "PythonQtWrapper_QPointF.h"
#include "PythonQtWrapper_QUrl.h"
#include "PythonQtWrapper_QTextCodec.h"
#include "PythonQtWrapper_QRegExp.h"
#include "PythonQtWrapper_QReadWriteLock.h"
#include "PythonQtWrapper_QSize.h"
#include "PythonQtWrapper_QEvent.h"
#include "PythonQtWrapper_QXmlStreamNotationDeclaration.h"
#include "PythonQtWrapper_QMutex.h"
#include "PythonQtWrapper_QSizeF.h"
#include "PythonQtWrapper_QLibraryInfo.h"
#include "PythonQtWrapper_QLocale.h"
#include "PythonQtWrapper_QPoint.h"
#include "PythonQtWrapper_QStringMatcher.h"
#include "PythonQtWrapper_QtConcurrent.h"
#include "PythonQtWrapper_QXmlStreamAttributes.h"
#include "PythonQtWrapper_QBasicTimer.h"
#include "PythonQtWrapper_QMargins.h"
#include "PythonQtWrapper_QDirIterator.h"
#include "PythonQtWrapper_Qt.h"
#include "PythonQtWrapper_QEasingCurve.h"
#include "PythonQtWrapper_QTextBoundaryFinder.h"
#include "PythonQtWrapper_QTextStream.h"
#include "PythonQtWrapper_QPersistentModelIndex.h"
#include "PythonQtWrapper_QProcessEnvironment.h"
#include "PythonQtWrapper_QDateTime.h"
#include "PythonQtWrapper_QXmlStreamEntityResolver.h"
#include "PythonQtWrapper_QWaitCondition.h"
#include "PythonQtWrapper_QXmlStreamEntityDeclaration.h"
#include "PythonQtWrapper_QTextEncoder.h"
#include "PythonQtWrapper_QFileInfo.h"
#include "PythonQtWrapper_QObject.h"
#include "PythonQtWrapper_QByteArray.h"
#include "PythonQtWrapper_QTime.h"
#include "PythonQtWrapper_QRectF.h"
#include "PythonQtWrapper_QRect.h"
#include "PythonQtWrapper_QModelIndex.h"
#include "PythonQtWrapper_QSemaphore.h"
#include "PythonQtWrapper_QDir.h"
#include "PythonQtWrapper_QSystemSemaphore.h"
#include "PythonQtWrapper_QByteArrayMatcher.h"
#include "PythonQtWrapper_QXmlStreamNamespaceDeclaration.h"
#include "PythonQtWrapper_QDate.h"
#include "PythonQtWrapper_QXmlStreamWriter.h"
#include "PythonQtWrapper_QBitArray.h"
#include "PythonQtWrapper_QRunnable.h"
#include "PythonQtWrapper_QUuid.h"
#include "PythonQtWrapper_QXmlStreamAttribute.h"
#include "PythonQtWrapper_QCryptographicHash.h"
#include "PythonQtWrapper_QDataStream.h"
#include "PythonQtWrapper_QTextDecoder.h"
#include "PythonQtWrapper_QXmlStreamReader.h"
#include "PythonQtWrapper_QDynamicPropertyChangeEvent.h"
#include "PythonQtWrapper_QTranslator.h"
#include "PythonQtWrapper_QSettings.h"
#include "PythonQtWrapper_QTimer.h"
#include "PythonQtWrapper_QTimeLine.h"
#include "PythonQtWrapper_QIODevice.h"
#include "PythonQtWrapper_QSignalMapper.h"
#include "PythonQtWrapper_QAbstractAnimation.h"
#include "PythonQtWrapper_QTimerEvent.h"
#include "PythonQtWrapper_QStateMachine_WrappedEvent.h"
#include "PythonQtWrapper_QThreadPool.h"
#include "PythonQtWrapper_QTextCodecPlugin.h"
#include "PythonQtWrapper_QMimeData.h"
#include "PythonQtWrapper_QEventLoop.h"
#include "PythonQtWrapper_QAbstractState.h"
#include "PythonQtWrapper_QStateMachine_SignalEvent.h"
#include "PythonQtWrapper_QAbstractItemModel.h"
#include "PythonQtWrapper_QAbstractTransition.h"
#include "PythonQtWrapper_QSocketNotifier.h"
#include "PythonQtWrapper_QCoreApplication.h"
#include "PythonQtWrapper_QFileSystemWatcher.h"
#include "PythonQtWrapper_QChildEvent.h"
#include "PythonQtWrapper_QAnimationGroup.h"
#include "PythonQtWrapper_QHistoryState.h"
#include "PythonQtWrapper_QState.h"
#include "PythonQtWrapper_QVariantAnimation.h"
#include "PythonQtWrapper_QAbstractTableModel.h"
#include "PythonQtWrapper_QSignalTransition.h"
#include "PythonQtWrapper_QFinalState.h"
#include "PythonQtWrapper_QProcess.h"
#include "PythonQtWrapper_QBuffer.h"
#include "PythonQtWrapper_QFile.h"
#include "PythonQtWrapper_QEventTransition.h"
#include "PythonQtWrapper_QPauseAnimation.h"
#include "PythonQtWrapper_QAbstractListModel.h"
#include "PythonQtWrapper_QTemporaryFile.h"
#include "PythonQtWrapper_QStateMachine.h"
#include "PythonQtWrapper_QSequentialAnimationGroup.h"
#include "PythonQtWrapper_QParallelAnimationGroup.h"
#include "PythonQtWrapper_QPropertyAnimation.h"

static void* polymorphichandler_QEvent(const void *ptr, char **class_name)
{
    Q_ASSERT(ptr != 0);
    QEvent *object = (QEvent *)ptr;
    if (object->type() == QEvent::None) {
        *class_name = "QEvent";
        return (QEvent*)object;
    }
    if (object->type() == QEvent::DynamicPropertyChange) {
        *class_name = "QDynamicPropertyChangeEvent";
        return (QDynamicPropertyChangeEvent*)object;
    }
    if (object->type() == QEvent::Timer) {
        *class_name = "QTimerEvent";
        return (QTimerEvent*)object;
    }
    if (object->type() == QEvent::StateMachineWrapped) {
        *class_name = "QStateMachine_WrappedEvent";
        return (QStateMachine::WrappedEvent*)object;
    }
    if (object->type() == QEvent::StateMachineSignal) {
        *class_name = "QStateMachine_SignalEvent";
        return (QStateMachine::SignalEvent*)object;
    }
    if (object->type() == QEvent::ChildAdded || object->type() == QEvent::ChildPolished || object->type() == QEvent::ChildRemoved) {
        *class_name = "QChildEvent";
        return (QChildEvent*)object;
    }
    return NULL;
}

void PythonQt_init_QtCore() {
PythonQt::self()->registerCPPClass("QTextCodec", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextCodec>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextCodec>);
PythonQt::self()->registerCPPClass("QReadWriteLock", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QReadWriteLock>);
PythonQt::self()->registerCPPClass("QEvent", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QEvent>);
PythonQt::self()->registerCPPClass("QXmlStreamNotationDeclaration", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamNotationDeclaration>);
PythonQt::self()->registerCPPClass("QMutex", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMutex>);
PythonQt::self()->registerCPPClass("QLibraryInfo", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QLibraryInfo>);
PythonQt::self()->registerCPPClass("QStringMatcher", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QStringMatcher>);
PythonQt::self()->registerCPPClass("QtConcurrent", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QtConcurrent>);
PythonQt::self()->registerCPPClass("QXmlStreamAttributes", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamAttributes>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlStreamAttributes>);
PythonQt::self()->registerCPPClass("QBasicTimer", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QBasicTimer>);
PythonQt::self()->registerCPPClass("QMargins", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMargins>);
PythonQt::self()->registerCPPClass("QDirIterator", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDirIterator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDirIterator>);
PythonQt::self()->registerCPPClass("QEasingCurve", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QEasingCurve>);
PythonQt::self()->registerCPPClass("QTextBoundaryFinder", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextBoundaryFinder>);
PythonQt::self()->registerCPPClass("QTextStream", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextStream>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextStream>);
PythonQt::self()->registerCPPClass("QPersistentModelIndex", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QPersistentModelIndex>);
PythonQt::self()->registerCPPClass("QProcessEnvironment", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QProcessEnvironment>);
PythonQt::self()->registerCPPClass("QXmlStreamEntityResolver", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamEntityResolver>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlStreamEntityResolver>);
PythonQt::self()->registerCPPClass("QWaitCondition", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QWaitCondition>);
PythonQt::self()->registerCPPClass("QXmlStreamEntityDeclaration", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamEntityDeclaration>);
PythonQt::self()->registerCPPClass("QTextEncoder", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextEncoder>);
PythonQt::self()->registerCPPClass("QFileInfo", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QFileInfo>);
PythonQt::self()->registerClass(&QObject::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QObject>);
PythonQt::self()->registerCPPClass("QByteArray", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QByteArray>);
PythonQt::self()->registerCPPClass("QModelIndex", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QModelIndex>);
PythonQt::self()->registerCPPClass("QSemaphore", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSemaphore>);
PythonQt::self()->registerCPPClass("QDir", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDir>);
PythonQt::self()->registerCPPClass("QSystemSemaphore", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSystemSemaphore>);
PythonQt::self()->registerCPPClass("QByteArrayMatcher", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QByteArrayMatcher>);
PythonQt::self()->registerCPPClass("QXmlStreamNamespaceDeclaration", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamNamespaceDeclaration>);
PythonQt::self()->registerCPPClass("QXmlStreamWriter", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamWriter>);
PythonQt::self()->registerCPPClass("QBitArray", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QBitArray>);
PythonQt::self()->registerCPPClass("QRunnable", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRunnable>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRunnable>);
PythonQt::self()->registerCPPClass("QUuid", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QUuid>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUuid>);
PythonQt::self()->registerCPPClass("QXmlStreamAttribute", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamAttribute>);
PythonQt::self()->registerCPPClass("QCryptographicHash", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QCryptographicHash>);
PythonQt::self()->registerCPPClass("QDataStream", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDataStream>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDataStream>);
PythonQt::self()->registerCPPClass("QTextDecoder", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextDecoder>);
PythonQt::self()->registerCPPClass("QXmlStreamReader", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamReader>);
PythonQt::self()->registerCPPClass("QDynamicPropertyChangeEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDynamicPropertyChangeEvent>);
PythonQt::self()->registerClass(&QTranslator::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QTranslator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTranslator>);
PythonQt::self()->registerClass(&QSettings::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSettings>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSettings>);
PythonQt::self()->registerClass(&QTimer::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QTimer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTimer>);
PythonQt::self()->registerClass(&QTimeLine::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QTimeLine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTimeLine>);
PythonQt::self()->registerClass(&QIODevice::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QIODevice>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIODevice>);
PythonQt::self()->registerClass(&QSignalMapper::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSignalMapper>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSignalMapper>);
PythonQt::self()->registerClass(&QAbstractAnimation::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractAnimation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractAnimation>);
PythonQt::self()->registerCPPClass("QTimerEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTimerEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTimerEvent>);
PythonQt::self()->registerCPPClass("QStateMachine::WrappedEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QStateMachine_WrappedEvent>);
PythonQt::self()->registerClass(&QThreadPool::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QThreadPool>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QThreadPool>);
PythonQt::self()->registerClass(&QTextCodecPlugin::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextCodecPlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextCodecPlugin>);
PythonQt::self()->registerClass(&QMimeData::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QMimeData>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMimeData>);
PythonQt::self()->registerClass(&QEventLoop::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QEventLoop>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QEventLoop>);
PythonQt::self()->registerClass(&QAbstractState::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractState>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractState>);
PythonQt::self()->registerCPPClass("QStateMachine::SignalEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QStateMachine_SignalEvent>);
PythonQt::self()->registerClass(&QAbstractItemModel::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractItemModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractItemModel>);
PythonQt::self()->registerClass(&QAbstractTransition::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractTransition>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractTransition>);
PythonQt::self()->registerClass(&QSocketNotifier::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSocketNotifier>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSocketNotifier>);
PythonQt::self()->registerClass(&QCoreApplication::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QCoreApplication>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCoreApplication>);
PythonQt::self()->registerClass(&QFileSystemWatcher::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QFileSystemWatcher>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFileSystemWatcher>);
PythonQt::self()->registerCPPClass("QChildEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QChildEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QChildEvent>);
PythonQt::self()->registerClass(&QAnimationGroup::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAnimationGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAnimationGroup>);
PythonQt::self()->registerClass(&QHistoryState::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QHistoryState>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHistoryState>);
PythonQt::self()->registerClass(&QState::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QState>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QState>);
PythonQt::self()->registerClass(&QVariantAnimation::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QVariantAnimation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVariantAnimation>);
PythonQt::self()->registerClass(&QAbstractTableModel::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractTableModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractTableModel>);
PythonQt::self()->registerClass(&QSignalTransition::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSignalTransition>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSignalTransition>);
PythonQt::self()->registerClass(&QFinalState::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QFinalState>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFinalState>);
PythonQt::self()->registerClass(&QProcess::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QProcess>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QProcess>);
PythonQt::self()->registerClass(&QBuffer::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QBuffer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QBuffer>);
PythonQt::self()->registerClass(&QFile::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QFile>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFile>);
PythonQt::self()->registerClass(&QEventTransition::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QEventTransition>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QEventTransition>);
PythonQt::self()->registerClass(&QPauseAnimation::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QPauseAnimation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPauseAnimation>);
PythonQt::self()->registerClass(&QAbstractListModel::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractListModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractListModel>);
PythonQt::self()->registerClass(&QTemporaryFile::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QTemporaryFile>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTemporaryFile>);
PythonQt::self()->registerClass(&QStateMachine::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QStateMachine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStateMachine>);
PythonQt::self()->registerClass(&QSequentialAnimationGroup::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSequentialAnimationGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSequentialAnimationGroup>);
PythonQt::self()->registerClass(&QParallelAnimationGroup::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QParallelAnimationGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QParallelAnimationGroup>);
PythonQt::self()->registerClass(&QPropertyAnimation::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QPropertyAnimation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPropertyAnimation>);

PythonQt::self()->addPolymorphicHandler("QEvent", polymorphichandler_QEvent);
}
