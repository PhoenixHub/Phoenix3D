// PX2EventWorld.hpp

#ifndef PX2EVENTWORLD_HPP
#define PX2EVENTWORLD_HPP

#include "PX2CorePre.hpp"
#include "PX2EventHandler.hpp"
#include "PX2Singleton_NeedNew.hpp"
#include "PX2SmartPointer.hpp"

namespace PX2
{

	/// ��Ϣ����
	class PX2_FOUNDATION_ITEM EventWorld : public Singleton<EventWorld>
	{
	public:
		EventWorld ();
		~EventWorld ();

		void Shutdown (bool shutdown);
		bool IsShutdown () const;

		void Update (float detalTime);

		// ��Ϣ���
		void ComeIn (EventHandler *handler);
		void GoOut (EventHandler *handler);

		void BroadcastingLocalEvent (Event* event);
		void BroadcastingNetEvent (Event* event);

	private:
		bool _IsInComingOut(EventHandler *handler);

		typedef std::vector<Event*> EventList;
		typedef std::vector<EventHandler*> EventHandlerList;

		void _UpdateEvent(float detalTime);
		void _BroadcastingEvent (Event* event);
		void SwapEventList ();

		bool mIsShoutdown;
		EventList* mEventList;
		EventHandlerList mHandlers;

		bool mIsUpdatingEvents;
		EventHandlerList mHandlersComingIn;
		EventHandlerList mHandlersGoingOut;
		EventList *mEventListBroadcasting;
	};

	typedef Pointer0<EventWorld> EventWorldPtr;

#define PX2_EW EventWorld::GetSingleton()

}

#endif