/*
 * This file is part of TelepathyQt4
 *
 * Copyright (C) 2008 Collabora Ltd. <http://www.collabora.co.uk/>
 * Copyright (C) 2008 Nokia Corporation
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

#include <TelepathyQt4/PendingAccount>

#include "TelepathyQt4/_gen/pending-account.moc.hpp"

#include "TelepathyQt4/debug-internal.h"

#include <TelepathyQt4/AccountManager>

#include <QDBusObjectPath>
#include <QDBusPendingCallWatcher>
#include <QDBusPendingReply>

/**
 * \addtogroup clientsideproxies Client-side proxies
 *
 * Proxy objects representing remote service objects accessed via D-Bus.
 *
 * In addition to providing direct access to methods, signals and properties
 * exported by the remote objects, some of these proxies offer features like
 * automatic inspection of remote object capabilities, property tracking,
 * backwards compatibility helpers for older services and other utilities.
 */

namespace Tp
{

struct PendingAccount::Private
{
    Private(const AccountManagerPtr &manager) :
        manager(manager)
    {
    }

    WeakPtr<AccountManager> manager;
    AccountPtr account;
    QDBusObjectPath objectPath;
};

/**
 * \class PendingAccount
 * \ingroup clientaccount
 * \headerfile <TelepathyQt4/pending-account.h> <TelepathyQt4/PendingAccount>
 *
 * Class containing the parameters of and the reply to an asynchronous account
 * request. Instances of this class cannot be constructed directly; the only
 * way to get one is via AccountManager.
 */

/**
 * Construct a PendingAccount object.
 *
 * \param manager AccountManager to use.
 * \param connectionManager Name of the connection manager to create the account for.
 * \param protocol Name of the protocol to create the account for.
 * \param displayName Account display name.
 * \param parameters Account parameters.
 */
PendingAccount::PendingAccount(const AccountManagerPtr &manager,
        const QString &connectionManager, const QString &protocol,
        const QString &displayName, const QVariantMap &parameters,
        const QVariantMap &properties)
    : PendingOperation(manager.data()),
      mPriv(new Private(manager))
{
    QDBusPendingCallWatcher *watcher = new QDBusPendingCallWatcher(
            manager->baseInterface()->CreateAccount(connectionManager,
                protocol, displayName, parameters, properties), this);
    connect(watcher,
            SIGNAL(finished(QDBusPendingCallWatcher *)),
            SLOT(onCallFinished(QDBusPendingCallWatcher *)));
}

/**
 * Class destructor.
 */
PendingAccount::~PendingAccount()
{
    delete mPriv;
}

/**
 * Return the AccountManager object through which the request was made.
 *
 * \return Account Manager object.
 */
AccountManagerPtr PendingAccount::manager() const
{
    return AccountManagerPtr(mPriv->manager);
}

/**
 * Returns the newly created Account object.
 *
 * \return Account object.
 */
AccountPtr PendingAccount::account() const
{
    if (!isFinished()) {
        warning() << "PendingAccount::account called before finished, returning 0";
        return AccountPtr();
    } else if (!isValid()) {
        warning() << "PendingAccount::account called when not valid, returning 0";
        return AccountPtr();
    }

    if (!mPriv->account) {
        AccountManagerPtr manager(mPriv->manager);
        mPriv->account = Account::create(manager->dbusConnection(),
                manager->busName(), mPriv->objectPath.path());
    }

    return mPriv->account;
}

/**
 * Returns the account object path or an empty string on error.
 *
 * This method is useful for creating custom Account objects, so instead of using
 * PendingAccount::account, one could construct a new custom account with
 * the object path.
 *
 * \return Account object path.
 */
QString PendingAccount::objectPath() const
{
    if (!isFinished()) {
        warning() << "PendingAccount::account called before finished";
    } else if (!isValid()) {
        warning() << "PendingAccount::account called when not valid";
    }

    return mPriv->objectPath.path();
}

void PendingAccount::onCallFinished(QDBusPendingCallWatcher *watcher)
{
    QDBusPendingReply<QDBusObjectPath> reply = *watcher;

    if (!reply.isError()) {
        mPriv->objectPath = reply.value();
        debug() << "Got reply to AccountManager.CreateAccount - object path:" <<
            mPriv->objectPath.path();
        setFinished();
    } else {
        debug().nospace() <<
            "CreateAccount failed: " <<
            reply.error().name() << ": " << reply.error().message();
        setFinishedWithError(reply.error());
    }

    watcher->deleteLater();
}

} // Tp
