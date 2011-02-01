/* Copyright 2010 Jukka Jyl�nki

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */
#pragma once

/** @file MessageConnectionDialog.h
	@brief Shows a debugging console dialog of a kNet MessageConnection object. */

#include <QObject>
#include <QWidget>
#include <QTimer>

#include "kNet/MessageConnection.h"
#include "kNet/SharedPtr.h"

namespace kNet
{

class MessageConnectionDialog : public QWidget
{
	Q_OBJECT;

	Ptr(MessageConnection) connection;
	QTimer *updateTimer;

public:
	MessageConnectionDialog(QWidget *parent, Ptr(MessageConnection) connection);

public slots:
	void Update();
};

} // ~kNet
