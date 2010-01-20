/*
 * This file is part of TelepathyQt4
 *
 * Copyright © 2009 Collabora Ltd. <http://www.collabora.co.uk/>
 * Copyright © 2009 Nokia Corporation
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

#ifndef _TelepathyQt4_examples_call_call_widget_h_HEADER_GUARD_
#define _TelepathyQt4_examples_call_call_widget_h_HEADER_GUARD_

#include <QWidget>

#include <TelepathyQt4/Channel>
#include <TelepathyQt4/Contact>
#include <TelepathyQt4/StreamedMediaChannel>
#include <TelepathyQt4/Constants>

#include "farsight-channel.h"

namespace Tp {
class DBusProxy;
class MediaStream;
class PendingMediaStreams;
class PendingOperation;
}

class QLabel;
class QPushButton;
class QStatusBar;

class CallWidget : public QWidget
{
    Q_OBJECT

public:
    CallWidget(const Tp::StreamedMediaChannelPtr &channel,
               const Tp::ContactPtr &contact,
               QWidget *parent = 0);
    virtual ~CallWidget();

    Tp::StreamedMediaChannelPtr channel() const { return mChan; }
    Tp::ContactPtr contact() const { return mContact; }

private Q_SLOTS:
    void onChannelReady(Tp::PendingOperation *);
    void onChannelInvalidated(Tp::DBusProxy *,
            const QString &, const QString &);
    void onStreamCreated(Tp::PendingOperation *);
    void onStreamAdded(const Tp::MediaStreamPtr &);
    void onStreamRemoved(const Tp::MediaStreamPtr &);
    void onStreamDirectionChanged(const Tp::MediaStreamPtr &,
            Tp::MediaStreamDirection,
            Tp::MediaStreamPendingSend);
    void onStreamStateChanged(const Tp::MediaStreamPtr &,
            Tp::MediaStreamState);
    void onTfChannelStatusChanged(Tp::FarsightChannel::Status);

    void onBtnHangupClicked();
    void onBtnSendAudioToggled(bool);
    void onBtnSendVideoToggled(bool);

private:
    void createActions();
    void setupGui();

    Tp::MediaStreamPtr streamForType(Tp::MediaStreamType type) const;
    void updateStreamDirection(const Tp::MediaStreamPtr &stream);

    void callEnded(const QString &message);

    Tp::StreamedMediaChannelPtr mChan;
    Tp::ContactPtr mContact;
    Tp::FarsightChannel *mTfChan;

    Tp::PendingMediaStreams *mPmsAudio;
    Tp::PendingMediaStreams *mPmsVideo;

    QPushButton *mBtnHangup;
    QPushButton *mBtnSendAudio;
    QPushButton *mBtnSendVideo;

    QLabel *mLblAudioDirection;
    QLabel *mLblVideoDirection;
    QLabel *mLblAudioState;
    QLabel *mLblVideoState;

    QStatusBar *mStatusBar;
};

#endif
