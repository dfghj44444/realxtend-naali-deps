/* Message object used by text channel client-side proxy
 *
 * Copyright (C) 2009 Collabora Ltd. <http://www.collabora.co.uk/>
 * Copyright (C) 2009 Nokia Corporation
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

#ifndef _TelepathyQt4_message_h_HEADER_GUARD_
#define _TelepathyQt4_message_h_HEADER_GUARD_

#ifndef IN_TELEPATHY_QT4_HEADER
#error IN_TELEPATHY_QT4_HEADER
#endif

#include <QSharedDataPointer>

#include <TelepathyQt4/Contact>
#include <TelepathyQt4/Types>
#include <TelepathyQt4/Constants>
#include <TelepathyQt4/Types>

class QDateTime;

namespace Tp
{

class Contact;
class TextChannel;

class Message
{
public:
    Message(ChannelTextMessageType, const QString &);
    Message(const Message &other);
    ~Message();

    Message &operator=(const Message &other);
    bool operator==(const Message &other) const;
    inline bool operator!=(const Message &other) const
    {
        return !(*this == other);
    }

    // Convenient access to headers

    QDateTime sent() const;

    ChannelTextMessageType messageType() const;

    bool isTruncated() const;

    bool hasNonTextContent() const;

    QString messageToken() const;

    bool isSpecificToDBusInterface() const;
    QString dbusInterface() const;

    QString text() const;

    // Direct access to the whole message (header and body)

    MessagePart header() const;

    int size() const;
    MessagePart part(uint index) const;
    MessagePartList parts() const;

private:
    friend class TextChannel;
    friend class ReceivedMessage;

    Message();
    Message(const MessagePartList &parts);
    Message(uint, uint, const QString &);

    struct Private;
    friend struct Private;
    QSharedDataPointer<Private> mPriv;
};

class ReceivedMessage : public Message
{
public:
    ReceivedMessage(const ReceivedMessage &other);
    ReceivedMessage &operator=(const ReceivedMessage &other);
    ~ReceivedMessage();

    QDateTime received() const;
    ContactPtr sender() const;
    bool isScrollback() const;
    bool isRescued() const;

    bool isFromChannel(const TextChannelPtr &channel) const;

private:
    friend class TextChannel;

    ReceivedMessage(const MessagePartList &parts,
            const TextChannelPtr &channel);
    ReceivedMessage();

    uint senderHandle() const;
    uint pendingId() const;

    void setForceNonText();
    void clearSenderHandle();
    void setSender(const ContactPtr &sender);
};

} // Tp

#endif
