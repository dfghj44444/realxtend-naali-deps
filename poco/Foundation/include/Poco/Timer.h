//
// Timer.h
//
// $Id: //poco/1.3/Foundation/include/Poco/Timer.h#5 $
//
// Library: Foundation
// Package: Threading
// Module:  Timer
//
// Definition of the Timer and related classes.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
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


#ifndef Foundation_Timer_INCLUDED
#define Foundation_Timer_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/Runnable.h"
#include "Poco/Mutex.h"
#include "Poco/Event.h"
#include "Poco/Thread.h"
#include "Poco/Timestamp.h"


namespace Poco {


class AbstractTimerCallback;
class ThreadPool;


class Foundation_API Timer: protected Runnable
	/// This class implements a thread-based timer.
	/// A timer starts a thread that first waits for a given start interval.
	/// Once that interval expires, the timer callback is called repeatedly
	/// in the given periodic interval. If the interval is 0, the timer is only
	/// called once.
	/// The timer callback method can stop the timer by setting the 
	/// timer's periodic interval to 0.
	///
	/// The timer callback runs in its own thread, so multithreading
	/// issues (proper synchronization) have to be considered when writing 
	/// the callback method.
	///
	/// The exact interval at which the callback is called depends on many 
	/// factors like operating system, CPU performance and system load and
	/// may differ from the specified interval.
	///
	/// The time needed to execute the timer callback is not included
	/// in the interval between invocations. For example, if the interval
	/// is 500 milliseconds, and the callback needs 400 milliseconds to
	/// execute, the callback function is nevertheless called every 500
	/// milliseconds. If the callback takes longer to execute than the
	/// interval, the callback function will be immediately called again
	/// once it returns.
	///
	/// The timer thread is taken from a thread pool, so
	/// there is a limit to the number of available concurrent timers.
{
public:
	Timer(long startInterval = 0, long periodicInterval = 0);
		/// Creates a new timer object. StartInterval and periodicInterval
		/// are given in milliseconds. If a periodicInterval of zero is 
		/// specified, the callback will only be called once, after the
		/// startInterval expires.
		/// To start the timer, call the Start() method.

	virtual ~Timer();
		/// Stops and destroys the timer.

	void start(const AbstractTimerCallback& method);
		/// Starts the timer.
		/// Create the TimerCallback as follows:
		///     TimerCallback<MyClass> callback(*this, &MyClass::onTimer);
		///     timer.start(callback);
		///
		/// The timer thread is taken from the global default thread pool.

	void start(const AbstractTimerCallback& method, Thread::Priority priority);
		/// Starts the timer in a thread with the given priority.
		/// Create the TimerCallback as follows:
		///     TimerCallback<MyClass> callback(*this, &MyClass::onTimer);
		///     timer.start(callback);
		///
		/// The timer thread is taken from the global default thread pool.

	void start(const AbstractTimerCallback& method, ThreadPool& threadPool);
		/// Starts the timer.
		/// Create the TimerCallback as follows:
		///     TimerCallback<MyClass> callback(*this, &MyClass::onTimer);
		///     timer.start(callback);

	void start(const AbstractTimerCallback& method, Thread::Priority priority, ThreadPool& threadPool);
		/// Starts the timer in a thread with the given priority.
		/// Create the TimerCallback as follows:
		///     TimerCallback<MyClass> callback(*this, &MyClass::onTimer);
		///     timer.start(callback);
		
	void stop();
		/// Stops the timer. If the callback method is currently running
		/// it will be allowed to finish first.
		/// WARNING: Never call this method from within the callback method,
		/// as a deadlock would result. To stop the timer from within the
		/// callback method, call restart(0).

	void restart();
		/// Restarts the periodic interval. If the callback method is already running,
		/// nothing will happen.

	void restart(long milliseconds);
		/// Sets a new periodic interval and restarts the timer.
		/// An interval of 0 will stop the timer.

	long getStartInterval() const;
		/// Returns the start interval.

	void setStartInterval(long milliseconds);
		/// Sets the start interval. Will only be 
		/// effective before start() is called.

	long getPeriodicInterval() const;
		/// Returns the periodic interval.

	void setPeriodicInterval(long milliseconds);
		/// Sets the periodic interval. If the timer is already running
		/// the new interval will be effective when the current interval
		/// expires.

protected:
	void run();

private:
	volatile long _startInterval;
	volatile long _periodicInterval;
	Event         _wakeUp;
	Event         _done;
	AbstractTimerCallback* _pCallback;
	Poco::Timestamp        _nextInvocation;
	mutable FastMutex      _mutex;
	
	Timer(const Timer&);
	Timer& operator = (const Timer&);
};


class Foundation_API AbstractTimerCallback
	/// This is the base class for all instantiations of
	/// the TimerCallback template.
{
public:
	AbstractTimerCallback();
	AbstractTimerCallback(const AbstractTimerCallback& callback);
	virtual ~AbstractTimerCallback();
	
	AbstractTimerCallback& operator = (const AbstractTimerCallback& callback);

	virtual void invoke(Timer& timer) const = 0;
	virtual AbstractTimerCallback* clone() const = 0;
};


template <class C> 
class TimerCallback: public AbstractTimerCallback
	/// This template class implements an adapter that sits between
	/// a Timer and an object's method invoked by the timer.
	/// It is quite similar in concept to the RunnableAdapter, but provides 
	/// some Timer specific additional methods.
	/// See the Timer class for information on how
	/// to use this template class.
{
public:
	typedef void (C::*Callback)(Timer&);

	TimerCallback(C& object, Callback method): _pObject(&object), _method(method)
	{
	}

	TimerCallback(const TimerCallback& callback): _pObject(callback._pObject), _method(callback._method)
	{
	}

	~TimerCallback()
	{
	}

	TimerCallback& operator = (const TimerCallback& callback)
	{
		if (&callback != this)
		{
			_pObject = callback._pObject;
			_method  = callback._method;
		}
		return *this;
	}

	void invoke(Timer& timer) const
	{
		(_pObject->*_method)(timer);
	}

	AbstractTimerCallback* clone() const
	{
		return new TimerCallback(*this);
	}

private:
	TimerCallback();

	C*       _pObject;
	Callback _method;
};


} // namespace Poco


#endif // Foundation_Timer_INCLUDED
