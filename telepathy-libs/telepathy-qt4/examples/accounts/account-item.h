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

#ifndef _TelepathyQt4_examples_accounts_account_item_h_HEADER_GUARD_
#define _TelepathyQt4_examples_accounts_account_item_h_HEADER_GUARD_

#include <TelepathyQt4/Types>
#include <TelepathyQt4/Account>
#include <TelepathyQt4/Types>

#include <QString>

namespace Tp {
class AccountManager;
class PendingOperation;
}

class QTableWidget;

class AccountItem : public QObject
{
    Q_OBJECT

public:
    enum Columns {
        ColumnValid = 0,
        ColumnEnabled,
        ColumnConnectionManager,
        ColumnProtocol,
        ColumnDisplayName,
        ColumnNickname,
        ColumnConnectsAutomatically,
        ColumnAutomaticPresence,
        ColumnCurrentPresence,
        ColumnRequestedPresence,
        ColumnConnectionStatus,
        ColumnConnection,
        NumColumns
    };
    Q_ENUMS(Columns)

    AccountItem(Tp::AccountManagerPtr am, const QString &objectPath,
                QTableWidget *table, int row, QObject *parent = 0);
    virtual ~AccountItem();

    int row() const { return mRow; }

private Q_SLOTS:
    void onReady(Tp::PendingOperation *);
    void onValidityChanged(bool);
    void onStateChanged(bool);
    void onDisplayNameChanged(const QString &);
    void onNicknameChanged(const QString &);
    void onConnectsAutomaticallyPropertyChanged(bool);
    void onAutomaticPresenceChanged(const Tp::SimplePresence &);
    void onCurrentPresenceChanged(const Tp::SimplePresence &);
    void onRequestedPresenceChanged(const Tp::SimplePresence &);
    void onConnectionStatusChanged(Tp::ConnectionStatus,
            Tp::ConnectionStatusReason);
    void onHaveConnectionChanged(bool);

private:
    void setupGui();

    Tp::AccountPtr mAcc;
    QTableWidget *mTable;
    int mRow;
};

#endif
