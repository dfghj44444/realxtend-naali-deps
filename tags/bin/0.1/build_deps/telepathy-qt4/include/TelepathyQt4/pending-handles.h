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

#ifndef _TelepathyQt4_pending_handles_h_HEADER_GUARD_
#define _TelepathyQt4_pending_handles_h_HEADER_GUARD_

#ifndef IN_TELEPATHY_QT4_HEADER
#error IN_TELEPATHY_QT4_HEADER
#endif

#include <TelepathyQt4/PendingOperation>
#include <TelepathyQt4/Types>
#include <TelepathyQt4/Types>

#include <QHash>
#include <QString>
#include <QStringList>

#include <TelepathyQt4/Types>

namespace Tp
{

class PendingHandles;
class ReferencedHandles;

class PendingHandles : public PendingOperation
{
    Q_OBJECT
    Q_DISABLE_COPY(PendingHandles)

public:
    ~PendingHandles();

    ConnectionPtr connection() const;

    uint handleType() const;

    bool isRequest() const;

    bool isReference() const;

    const QStringList &namesRequested() const;

    QStringList validNames() const;

    QHash<QString, QPair<QString, QString> > invalidNames() const;

    const UIntList &handlesToReference() const;

    ReferencedHandles handles() const;

    UIntList invalidHandles() const;

private Q_SLOTS:
    void onRequestHandlesFinished(QDBusPendingCallWatcher *watcher);
    void onHoldHandlesFinished(QDBusPendingCallWatcher *watcher);
    void onRequestHandlesFallbackFinished(QDBusPendingCallWatcher *watcher);
    void onHoldHandlesFallbackFinished(QDBusPendingCallWatcher *watcher);

private:
    friend class Connection;

    PendingHandles(const ConnectionPtr &connection, uint handleType, const QStringList &names);
    PendingHandles(const ConnectionPtr &connection, uint handleType, const UIntList &handles,
            const UIntList &alreadyHeld, const UIntList &notYetHeld);

    struct Private;
    friend struct Private;
    Private *mPriv;
};

} // Tp

#endif
