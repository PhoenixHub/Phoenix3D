// PX2EventWorld.cpp

#include "PX2EventWorld.hpp"
#include "PX2Event.hpp"
#include "PX2EventFactory.hpp"
using namespace PX2;

EventWorld::EventWorld ()
{
	mEventList = new0 EventList();
	mEventListBroadcasting = new0 EventList();
	mIsShoutdown = false;
	mIsUpdatingEvents = false;
}
//----------------------------------------------------------------------------
EventWorld::~EventWorld ()
{
	// �Ƴ������˵���Ϣ
	EventList::iterator itEvent = mEventList->begin();
	for (; itEvent!=mEventList->end(); itEvent++)
	{
		EventFactory::GetInstance().DestoryEvent(*itEvent);
	}
	mEventList->clear();
	delete0(mEventList);
	mEventList = 0;

	EventList::iterator itEventBCing = mEventListBroadcasting->begin();
	for (; itEventBCing!=mEventListBroadcasting->end(); itEventBCing++)
	{
		EventFactory::GetInstance().DestoryEvent(*itEventBCing);
	}
	mEventListBroadcasting->clear();
	delete0(mEventListBroadcasting);
	mEventListBroadcasting = 0;

	// handlers
	mHandlers.clear();
	mHandlersComingIn.clear();
	mHandlersGoingOut.clear();
}
//----------------------------------------------------------------------------
void EventWorld::Shutdown (bool shutdown)
{
	mIsShoutdown = shutdown;
}
//----------------------------------------------------------------------------
bool EventWorld::IsShutdown () const
{
	return mIsShoutdown;
}
//----------------------------------------------------------------------------
void EventWorld::ComeIn (EventHandler *handler)
{
	if (mIsShoutdown) return;

	assertion(handler!=0, "handler must not be 0.");

	if (!handler) return;

	if (handler->IsInWorld(this)) return;

	if (!mIsUpdatingEvents)
	{
		mHandlers.push_back(handler);
		handler->Enter(this);
	}
	else
	{
		mHandlersComingIn.push_back(handler);
	}
}
//----------------------------------------------------------------------------
void EventWorld::GoOut(EventHandler *handler)
{
	if (!handler) return;

	if (!handler->IsInWorld(this))	return;

	handler->Leave();

	if (!mIsUpdatingEvents)
	{
		EventHandlerList::iterator it = mHandlers.begin();
		for (; it!=mHandlers.end(); it++)
		{
			if (*it == handler)
			{
				*it = 0;
				mHandlers.erase(it);
				return;
			}
		}
	}
	else
	{
		mHandlersGoingOut.push_back(handler);
	}
}
//----------------------------------------------------------------------------
bool EventWorld::_IsInComingOut(EventHandler *handler)
{
	for (int i = 0; i < (int)mHandlersGoingOut.size(); i++)
	{
		if (handler == mHandlersGoingOut[i])
		{
			return true;
		}
	}

	return false;
}
//----------------------------------------------------------------------------
void EventWorld::Update (float detalTime)
{
	if (mIsShoutdown)
		return;

	for (int i=0; i<(int)mHandlersComingIn.size(); i++)
	{
		mHandlers.push_back(mHandlersComingIn[i]);
		mHandlersComingIn[i]->Enter(this);
	}
	mHandlersComingIn.clear();

	for (int i = 0; i < (int)mHandlersGoingOut.size(); i++)
	{
		EventHandlerList::iterator it = mHandlers.begin();
		for (; it != mHandlers.end();)
		{
			if (*it == mHandlersGoingOut[i])
			{
				*it = 0;
				it = mHandlers.erase(it);
			}
			else
			{
				it++;
			}
		}
	}
	mHandlersGoingOut.clear();

	_UpdateEvent(detalTime);
}
//----------------------------------------------------------------------------
void EventWorld::BroadcastingLocalEvent (Event* event)
{
	if (event->IsSystemEvent())
	{
		assertion(false, "event can't be system event.");
	}

	_BroadcastingEvent(event);
}
//----------------------------------------------------------------------------
void EventWorld::BroadcastingNetEvent (Event* event)
{
	PX2_UNUSED(event);
}
//----------------------------------------------------------------------------
void EventWorld::_UpdateEvent(float detalTime)
{
	mIsUpdatingEvents = true;

	EventList::iterator itEvent = mEventList->begin();
	for (; itEvent != mEventList->end(); ++itEvent)
	{
		if (0 == *itEvent)
			continue;

		(*itEvent)->Update(detalTime);

		// delay
		if ((*itEvent)->IsDoDelay() && !(*itEvent)->IsDelayActted()) 
		{
			continue;
		}

		// ϵͳ��Ϣ
		if ((*itEvent)->IsSystemEvent())
		{
		}
		// ��ϵͳ��Ϣ
		else
		{
			EventHandler* receiver = (*itEvent)->GetReceiver();
			if (receiver)
			{ // �н�����
				receiver->Execute(*itEvent);
			}
			else
			{ // û�н����ߣ���ѯ
				EventHandlerList::iterator itHandler;
				for (itHandler=mHandlers.begin();
					itHandler!=mHandlers.end();
					++itHandler)
				{
					if (!_IsInComingOut((*itHandler)))
					{
						if ((*itHandler)->GetChannel().IsListening((*itEvent)->GetChannel()))
							(*itHandler)->Execute(*itEvent);
					}
				}
			}
		}

		// ��Ϣ�����꣬����ɾ��
		EventFactory::GetInstance().DestoryEvent(*itEvent);
		*itEvent = 0;
	}

	// �Ƴ������˵���Ϣyiyi'ban
	EventList::iterator itEvent1 = mEventList->begin();
	for (; itEvent1 != mEventList->end();)
	{
		if (!*itEvent1)
		{
			itEvent1 = mEventList->erase(itEvent1);
		}
		else
		{
			itEvent1++;
		}
	}

	mIsUpdatingEvents = false;
}
//----------------------------------------------------------------------------
void EventWorld::_BroadcastingEvent (Event* event)
{
	if (!mIsUpdatingEvents)
	{ // general one event, just do put
		mEventList->push_back(event);

		if (!mIsShoutdown)
		{
			// _UpdateEvent�����ٴβ�����Ϣ�����¼��mEventListBroadcasting��
			_UpdateEvent(0.0f);

			while (!mEventListBroadcasting->empty())
			{
				EventList::iterator it = mEventListBroadcasting->begin();
				for (; it != mEventListBroadcasting->end(); it++)
				{
					mEventList->push_back(*it);
				}
				mEventListBroadcasting->clear();

				_UpdateEvent(0.0f);
			}
		}
	}
	else
	{
		mEventListBroadcasting->push_back(event);
	}
}
//----------------------------------------------------------------------------