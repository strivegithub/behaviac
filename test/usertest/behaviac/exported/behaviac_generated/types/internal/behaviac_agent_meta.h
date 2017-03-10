﻿// ---------------------------------------------------------------------
// THIS FILE IS AUTO-GENERATED BY BEHAVIAC DESIGNER, SO PLEASE DON'T MODIFY IT BY YOURSELF!
// ---------------------------------------------------------------------

#ifndef _BEHAVIAC_AGENT_PROPERTIES_H_
#define _BEHAVIAC_AGENT_PROPERTIES_H_

#include "behaviac_agent_headers.h"
#include "behaviac_agent_member_visitor.h"

namespace behaviac
{
	// ---------------------------------------------------------------------
	// Delegate methods
	// ---------------------------------------------------------------------

	inline void FunctionPointer_behaviac_Agent_LogMessage(char* param0) { behaviac::Agent::LogMessage(param0); }

	inline void Set_CBTPlayer_m_iBaseSpeed(Agent* self, unsigned int value) { ((CBTPlayer*)self)->_Get_Property_<PROPERTY_TYPE_CBTPlayer_m_iBaseSpeed, unsigned int >() = value; };
	inline const void* Get_CBTPlayer_m_iBaseSpeed(Agent* self) { return &((CBTPlayer*)self)->_Get_Property_<PROPERTY_TYPE_CBTPlayer_m_iBaseSpeed, unsigned int >(); };

	inline behaviac::EBTStatus FunctionPointer_CBTPlayer_Action1(Agent* self) { return (behaviac::EBTStatus)((CBTPlayer*)self)->_Execute_Method_<METHOD_TYPE_CBTPlayer_Action1, behaviac::EBTStatus >(); }
	inline behaviac::EBTStatus FunctionPointer_CBTPlayer_Action3(Agent* self) { return (behaviac::EBTStatus)((CBTPlayer*)self)->_Execute_Method_<METHOD_TYPE_CBTPlayer_Action3, behaviac::EBTStatus >(); }
	inline bool FunctionPointer_CBTPlayer_Condition(Agent* self) { return (bool)((CBTPlayer*)self)->_Execute_Method_<METHOD_TYPE_CBTPlayer_Condition, bool >(); }
	inline void FunctionPointer_CBTPlayer_LogMessage(char* param0) { CBTPlayer::LogMessage(param0); }
	inline void FunctionPointer_CBTPlayer_MoveAhead(Agent* self, int param0) { ((CBTPlayer*)self)->_Execute_Method_<METHOD_TYPE_CBTPlayer_MoveAhead, void, int >(param0); }
	inline void FunctionPointer_CBTPlayer_MoveBack(Agent* self, int param0) { ((CBTPlayer*)self)->_Execute_Method_<METHOD_TYPE_CBTPlayer_MoveBack, void, int >(param0); }
}
#endif // _BEHAVIAC_AGENT_PROPERTIES_H_