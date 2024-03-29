//
// Timer.cpp
//
// $Id: //poco/1.3/Util/src/Timer.cpp#1 $
//
// Library: Util
// Package: Timer
// Module:  Timer
//
// Copyright (c) 2009, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#include "Poco/Util/Timer.h"
#include "Poco/Notification.h"
#include "Poco/ErrorHandler.h"


using Poco::ErrorHandler;


namespace Poco {
namespace Util {


class TimerNotification: public Poco::Notification
{
public:
	TimerNotification(Poco::TimedNotificationQueue& queue):
		_queue(queue)
	{
	}
	
	~TimerNotification()
	{
	}
	
	virtual bool execute() = 0;
	
	Poco::TimedNotificationQueue& queue()
	{
		return _queue;
	}
	
private:
	Poco::TimedNotificationQueue& _queue;
};


class StopNotification: public TimerNotification
{
public:
	StopNotification(Poco::TimedNotificationQueue& queue):
		TimerNotification(queue)
	{
	}
	
	~StopNotification()
	{
	}
	
	bool execute()
	{
		queue().clear();
		return false;
	}
};


class CancelNotification: public TimerNotification
{
public:
	CancelNotification(Poco::TimedNotificationQueue& queue):
		TimerNotification(queue)
	{
	}
	
	~CancelNotification()
	{
	}
	
	bool execute()
	{
		queue().clear();
		return true;
	}
};


class TaskNotification: public TimerNotification
{
public:
	TaskNotification(Poco::TimedNotificationQueue& queue, TimerTask::Ptr pTask):
		TimerNotification(queue),
		_pTask(pTask)
	{
	}
	
	~TaskNotification()
	{
	}
	
	TimerTask::Ptr task()
	{
		return _pTask;	
	}
	
	bool execute()
	{
		if (!_pTask->isCancelled())
		{
			try
			{
				_pTask->_lastExecution.update();
				_pTask->run();
			}
			catch (Exception& exc)
			{
				ErrorHandler::handle(exc);
			}
			catch (std::exception& exc)
			{
				ErrorHandler::handle(exc);
			}
			catch (...)
			{
				ErrorHandler::handle();
			}
		}
		return true;
	}
			
private:
	TimerTask::Ptr _pTask;
};


class PeriodicTaskNotification: public TaskNotification
{
public:
	PeriodicTaskNotification(Poco::TimedNotificationQueue& queue, TimerTask::Ptr pTask, long interval):
		TaskNotification(queue, pTask),
		_interval(interval)
	{
	}
	
	~PeriodicTaskNotification()
	{
	}
	
	bool execute()
	{	
		TaskNotification::execute();

		if (!task()->isCancelled())
		{
			Poco::Timestamp nextExecution;
			nextExecution += _interval*1000;
			queue().enqueueNotification(this, nextExecution);
			duplicate();
		}
		return true;		
	}
	
private:
	long _interval;
};


class FixedRateTaskNotification: public TaskNotification
{
public:
	FixedRateTaskNotification(Poco::TimedNotificationQueue& queue, TimerTask::Ptr pTask, long interval):
		TaskNotification(queue, pTask),
		_interval(interval)
	{
	}
	
	~FixedRateTaskNotification()
	{
	}
	
	bool execute()
	{	
		TaskNotification::execute();

		if (!task()->isCancelled())
		{
			Poco::Timestamp nextExecution(task()->lastExecution());
			nextExecution += _interval*1000;
			queue().enqueueNotification(this, nextExecution);
			duplicate();
		}
		return true;			
	}
	
private:
	long _interval;
};


Timer::Timer()
{
	_thread.start(*this);
}


Timer::Timer(Poco::Thread::Priority priority)
{
	_thread.setPriority(priority);
	_thread.start(*this);
}


Timer::~Timer()
{
	Poco::Timestamp now;
	_queue.enqueueNotification(new StopNotification(_queue), now);
	_thread.join();
}

	
void Timer::cancel()
{
	Poco::Timestamp now;
	_queue.enqueueNotification(new CancelNotification(_queue), now);
}


void Timer::schedule(TimerTask::Ptr pTask, Poco::Timestamp time)
{
	_queue.enqueueNotification(new TaskNotification(_queue, pTask), time);
}

	
void Timer::schedule(TimerTask::Ptr pTask, long delay, long interval)
{
	Poco::Timestamp time;
	time += delay*1000;
	schedule(pTask, time, interval);
}


void Timer::schedule(TimerTask::Ptr pTask, Poco::Timestamp time, long interval)
{
	_queue.enqueueNotification(new PeriodicTaskNotification(_queue, pTask, interval), time);
}

	
void Timer::scheduleAtFixedRate(TimerTask::Ptr pTask, long delay, long interval)
{
	Poco::Timestamp time;
	time += delay*1000;
	scheduleAtFixedRate(pTask, time, interval);
}


void Timer::scheduleAtFixedRate(TimerTask::Ptr pTask, Poco::Timestamp time, long interval)
{
	_queue.enqueueNotification(new FixedRateTaskNotification(_queue, pTask, interval), time);
}


void Timer::run()
{
	bool cont = true;
	while (cont)
	{
		Poco::AutoPtr<TimerNotification> pNf = static_cast<TimerNotification*>(_queue.waitDequeueNotification());
		cont = pNf->execute();
	}
}


} } // namespace Poco::Util
