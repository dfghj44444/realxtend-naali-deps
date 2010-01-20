/*
 * This file is part of TelepathyQt4
 *
 * Copyright (C) 2009 Collabora Ltd. <http://www.collabora.co.uk/>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include "accounts-window.h"
#include "_gen/accounts-window.moc.hpp"

#include "account-item.h"

#include <TelepathyQt4/Types>
#include <TelepathyQt4/Account>
#include <TelepathyQt4/AccountManager>
#include <TelepathyQt4/PendingOperation>
#include <TelepathyQt4/PendingReady>

#include <QCheckBox>
#include <QDebug>
#include <QHBoxLayout>
#include <QItemEditorCreatorBase>
#include <QItemEditorFactory>
#include <QTableWidget>

AccountsWindow::AccountsWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupGui();

    mAM = Tp::AccountManager::create();
    connect(mAM->becomeReady(),
            SIGNAL(finished(Tp::PendingOperation *)),
            SLOT(onAMReady(Tp::PendingOperation *)));
    connect(mAM.data(),
            SIGNAL(accountCreated(const QString &)),
            SLOT(onAccountCreated(const QString &)));
}

AccountsWindow::~AccountsWindow()
{
}

void AccountsWindow::setupGui()
{
    mTable = new QTableWidget;

    mTable->setColumnCount(AccountItem::NumColumns);
    QStringList headerLabels;
    headerLabels <<
        "Valid" <<
        "Enabled" <<
        "Connection Manager" <<
        "Protocol" <<
        "Display Name" <<
        "Nickname" <<
        "Connects Automatically" <<
        "Automatic Presence" <<
        "Current Presence" <<
        "Requested Presence" <<
        "Connection Status" <<
        "Connection";
    mTable->setHorizontalHeaderLabels(headerLabels);

    setCentralWidget(mTable);
}

void AccountsWindow::onAMReady(Tp::PendingOperation *op)
{
    mTable->setRowCount(mAM->validAccountPaths().count());

    int row = 0;
    foreach (const QString &path, mAM->allAccountPaths()) {
        (void) new AccountItem(mAM, path, mTable, row++, this);
    }
}

void AccountsWindow::onAccountCreated(const QString &path)
{
    int row = mTable->rowCount();
    mTable->insertRow(row);
    (void) new AccountItem(mAM, path, mTable, row, this);
}
