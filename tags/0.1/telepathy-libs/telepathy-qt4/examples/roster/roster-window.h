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

#ifndef _TelepathyQt4_examples_roster_roster_window_h_HEADER_GUARD_
#define _TelepathyQt4_examples_roster_roster_window_h_HEADER_GUARD_

#include <QMainWindow>
#include <QSharedPointer>

#include <TelepathyQt4/Connection>

namespace Tp {
class ConnectionManager;
class DBusProxy;
class PendingOperation;
}

class RosterWidget;

class RosterWindow : public QMainWindow
{
    Q_OBJECT

public:
    //RosterWindow(const QString &username, const QString &password,
    RosterWindow(const QString &username, const QString &password, const QString &server, const QString &port, 
            QWidget *parent = 0);
    virtual ~RosterWindow();

private Q_SLOTS:
    void onCMReady(Tp::PendingOperation *);
    void onConnectionCreated(Tp::PendingOperation *);
    void onConnectionConnected(Tp::PendingOperation *);
    void onConnectionInvalidated(Tp::DBusProxy *,
            const QString &, const QString &);

private:
    void setupGui();

    Tp::ConnectionManagerPtr mCM;
    QList<Tp::ConnectionPtr> mConns;
    QString mUsername;
    QString mPassword;
    QString mServer;
    QString mPort;
    RosterWidget *mRoster;
};

#endif
