//
// Condition.h
//
// $Id: //poco/1.3/Foundation/include/Poco/Condition.h#1 $
//
// Library: Foundation
// Package: Threading
// Module:  Condition
//
// Definition of the Condition class template.
//
// Copyright (c) 2007, Applied Informatics Software Engineering GmbH.
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


#ifndef Foundation_Condition_INCLUDED
#define Foundation_Condition_INCLUDED


#include "Poco/Foundation.h"
#include "Poco/Mutex.h"
#include "Poco/ScopedUnlock.h"
#include "Poco/Event.h"
#include "Poco/Exception.h"
#include <deque>


namespace Poco {


class Foundation_API Condition
	/// A Condition is a synchronization object used to block a thread 
	/// until a particular condition is met. 
	/// A Condition object is always used in conjunction with
	/// a Mutex (or FastMutex) object.
	///
	/// Condition objects are similar to POSIX condition variables, which the
	/// difference that Condition is not subject to spurious wakeups.
	///
	/// Threads waiting on a Condition are resumed in FIFO order.
{
public:
	Condition();
		/// Creates the Condition.
	
	~Condition();
		/// Destroys the Condition.
	
	template <class Mtx>
	void wait(Mtx& mutex)
		/// Unlocks the mutex (which must be locked upon calling
		/// wait()) and waits until the Condition is signalled.
		///
		/// The given mutex will be locked again upon 
		/// leaving the function, even in case of an exception.
	{
		ScopedUnlock<Mtx> unlock(mutex, false);
		Event event;
		{
			FastMutex::ScopedLock lock(_mutex);
			mutex.unlock();
			enqueue(event);
		}
		event.wait();
	}
	
	template <class Mtx>
	void wait(Mtx& mutex, long milliseconds)
		/// Unlocks the mutex (which must be locked upon calling
		/// wait()) and waits for the given time until the Condition is signalled.
		///
		/// The given mutex will be locked again upon successfully leaving the 
		/// function, even in case of an exception.
		///
		/// Throws a TimeoutException if the Condition is not signalled
		/// within the given time interval.
	{
		if (!tryWait(mutex, milliseconds))
			throw TimeoutException();
	}
	
	template <class Mtx>
	bool tryWait(Mtx& mutex, long milliseconds)
		/// Unlocks the mutex (which must be locked upon calling
		/// tryWait()) and waits for the given time until the Condition is signalled.
		///
		/// The given mutex will be locked again upon leaving the 
		/// function, even in case of an exception.
		///
		/// Returns true if the Condition has been signalled
		/// within the given time interval, otherwise false.
	{
		ScopedUnlock<Mtx> unlock(mutex, false);
		Event event;
		{
			FastMutex::ScopedLock lock(_mutex);
			mutex.unlock();
			enqueue(event);
		}
		if (!event.tryWait(milliseconds))
		{
			FastMutex::ScopedLock lock(_mutex);
			dequeue(event);
			return false;
		}
		return true;
	}
	
	void signal();
		/// Signals the Condition and allows one waiting thread
		/// to continue execution.

	void broadcast();
		/// Signals the Condition and allows all waiting
		/// threads to continue their execution.

protected:
	void enqueue(Event& event);
	void dequeue();
	void dequeue(Event& event);
	
private:
	Condition(const Condition&);
	Condition& operator = (const Condition&);
	
	typedef std::deque<Event*> WaitQueue;
	
	FastMutex _mutex;
	WaitQueue _waitQueue;
};


} // namespace Poco


#endif // Foundation_Condition_INCLUDED
