/********************************************************************************
** Form generated from reading UI file 'NetworkDialog.ui'
**
** Created: Tue 8. Feb 18:43:10 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKDIALOG_H
#define UI_NETWORKDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetworkDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *machineIP;
    QLabel *label_4;
    QTreeWidget *connectionsTree;
    QLabel *label_2;
    QLabel *numRunningThreads;

    void setupUi(QWidget *NetworkDialog)
    {
        if (NetworkDialog->objectName().isEmpty())
            NetworkDialog->setObjectName(QString::fromUtf8("NetworkDialog"));
        NetworkDialog->resize(524, 372);
        gridLayout_2 = new QGridLayout(NetworkDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(NetworkDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        machineIP = new QLabel(NetworkDialog);
        machineIP->setObjectName(QString::fromUtf8("machineIP"));

        gridLayout->addWidget(machineIP, 0, 1, 1, 1);

        label_4 = new QLabel(NetworkDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        connectionsTree = new QTreeWidget(NetworkDialog);
        connectionsTree->setObjectName(QString::fromUtf8("connectionsTree"));

        gridLayout->addWidget(connectionsTree, 2, 1, 1, 1);

        label_2 = new QLabel(NetworkDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        numRunningThreads = new QLabel(NetworkDialog);
        numRunningThreads->setObjectName(QString::fromUtf8("numRunningThreads"));

        gridLayout->addWidget(numRunningThreads, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(NetworkDialog);

        QMetaObject::connectSlotsByName(NetworkDialog);
    } // setupUi

    void retranslateUi(QWidget *NetworkDialog)
    {
        NetworkDialog->setWindowTitle(QApplication::translate("NetworkDialog", "kNet Network", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NetworkDialog", "Hostname:", 0, QApplication::UnicodeUTF8));
        machineIP->setText(QApplication::translate("NetworkDialog", "Machine IP text.", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("NetworkDialog", "Connections:", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = connectionsTree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("NetworkDialog", "Item", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("NetworkDialog", "# of threads:", 0, QApplication::UnicodeUTF8));
        numRunningThreads->setText(QApplication::translate("NetworkDialog", "# threads text.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NetworkDialog: public Ui_NetworkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKDIALOG_H