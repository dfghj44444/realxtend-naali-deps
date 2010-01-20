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

#include "roster-window.h"
#include "_gen/roster-window.moc.hpp"

#include "roster-widget.h"

#include <TelepathyQt4/Types>
#include <TelepathyQt4/ConnectionManager>
#include <TelepathyQt4/PendingConnection>
#include <TelepathyQt4/PendingOperation>
#include <TelepathyQt4/PendingReady>

#include <QDebug>

using namespace Tp;

//RosterWindow::RosterWindow(const QString &username, const QString &password,
//        QWidget *parent)
//    : QMainWindow(parent),
//      mUsername(username),
//      mPassword(password)
//{
RosterWindow::RosterWindow(const QString &username, const QString &password, const QString &server, const QString &port, 
        QWidget *parent)
    : QMainWindow(parent),
      mUsername(username),
      mPassword(password),
      mServer(server),
      mPort(port)
{
    setWindowTitle("Roster");

    setupGui();

    mCM = ConnectionManager::create("gabble");
    connect(mCM->becomeReady(),
            SIGNAL(finished(Tp::PendingOperation *)),
            SLOT(onCMReady(Tp::PendingOperation *)));

    resize(240, 320);
}

RosterWindow::~RosterWindow()
{
    foreach (const ConnectionPtr &conn, mConns) {
        conn->requestDisconnect();
    }
}

void RosterWindow::setupGui()
{
    mRoster = new RosterWidget();
    setCentralWidget(mRoster);
}

void RosterWindow::onCMReady(Tp::PendingOperation *op)
{
    if (op->isError()) {
        qWarning() << "CM cannot become ready";
        return;
    }

    qDebug() << "CM ready";
    QVariantMap params;
    params.insert("account", QVariant(mUsername));
    params.insert("password", QVariant(mPassword));
    params.insert("server", QVariant(mServer));
    PendingConnection *pconn = mCM->requestConnection("jabber", params);
    connect(pconn,
            SIGNAL(finished(Tp::PendingOperation *)),
            SLOT(onConnectionCreated(Tp::PendingOperation *)));
}

void RosterWindow::onConnectionCreated(Tp::PendingOperation *op)
{
    if (op->isError()) {
        qWarning() << "Unable to create connection";
        return;
    }

    qDebug() << "Connection created";
    PendingConnection *pconn =
        qobject_cast<PendingConnection *>(op);
    ConnectionPtr conn = pconn->connection();
    mConns.append(conn);
    connect(conn->requestConnect(),
            SIGNAL(finished(Tp::PendingOperation *)),
            SLOT(onConnectionConnected(Tp::PendingOperation *)));
    connect(conn.data(),
            SIGNAL(invalidated(Tp::DBusProxy *, const QString &, const QString &)),
            SLOT(onConnectionInvalidated(Tp::DBusProxy *, const QString &, const QString &)));
}

void RosterWindow::onConnectionConnected(Tp::PendingOperation *op)
{
    if (op->isError()) {
        qWarning() << "Connection cannot become connected";
        return;
    }

    PendingReady *pr = qobject_cast<PendingReady *>(op);
    ConnectionPtr conn = ConnectionPtr(qobject_cast<Connection *>(pr->object()));
    mRoster->addConnection(conn);
}

void RosterWindow::onConnectionInvalidated(DBusProxy *proxy,
        const QString &errorName, const QString &errorMessage)
{
    qDebug() << "RosterWindow::onConnectionInvalidated: connection became invalid:" <<
        errorName << "-" << errorMessage;
    foreach (const ConnectionPtr &conn, mConns) {
        if (conn.data() == proxy) {
            mRoster->removeConnection(conn);
            mConns.removeOne(conn);
        }
    }
}
