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

#include <TelepathyQt4/PendingStringList>

#include "TelepathyQt4/_gen/pending-string-list.moc.hpp"
#include "TelepathyQt4/debug-internal.h"

#include <QDBusPendingReply>

namespace Tp
{

struct PendingStringList::Private
{
    QStringList result;
};

/**
 * \class PendingStringList
 * \headerfile <TelepathyQt4/pending-string-list.h> <TelepathyQt4/PendingStringList>
 */

PendingStringList::PendingStringList(QObject *parent)
    : PendingOperation(parent),
      mPriv(new Private)
{
}

PendingStringList::PendingStringList(QDBusPendingCall call, QObject *parent)
    : PendingOperation(parent),
      mPriv(new Private)
{
    connect(new QDBusPendingCallWatcher(call),
            SIGNAL(finished(QDBusPendingCallWatcher*)),
            this,
            SLOT(watcherFinished(QDBusPendingCallWatcher*)));
}

/**
 * Class destructor.
 */
PendingStringList::~PendingStringList()
{
    delete mPriv;
}

QStringList PendingStringList::result() const
{
    return mPriv->result;
}

void PendingStringList::setResult(const QStringList &result)
{
    mPriv->result = result;
}

void PendingStringList::watcherFinished(QDBusPendingCallWatcher* watcher)
{
    QDBusPendingReply<QStringList> reply = *watcher;

    if (!reply.isError()) {
        debug() << "Got reply to PendingStringList call";
        setResult(reply.value());
        setFinished();
    } else {
        debug().nospace() << "PendingStringList call failed: " <<
            reply.error().name() << ": " << reply.error().message();
        setFinishedWithError(reply.error());
    }

    watcher->deleteLater();
}

} // Tp
