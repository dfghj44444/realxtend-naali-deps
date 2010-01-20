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

#ifndef _TelepathyQt4_manager_file_h_HEADER_GUARD_
#define _TelepathyQt4_manager_file_h_HEADER_GUARD_

#ifndef IN_TELEPATHY_QT4_HEADER
#error IN_TELEPATHY_QT4_HEADER
#endif

#include <QVariant>

#include <TelepathyQt4/Types>

class QString;

namespace Tp
{

class ManagerFile
{
    Q_DISABLE_COPY(ManagerFile);

public:
    ManagerFile(const QString &cmName);
    ~ManagerFile();

    QString cmName() const;

    bool isValid() const;
    QStringList protocols() const;
    ParamSpecList parameters(const QString &protocol) const;

    static QVariant::Type variantTypeFromDBusSignature(const QString &signature);

private:
    struct Private;
    friend struct Private;
    Private *mPriv;
};

}

#endif
