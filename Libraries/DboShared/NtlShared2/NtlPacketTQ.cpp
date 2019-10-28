#include "StdAfx.h"
#include "NtlPacketTQ.h"

const char * s_packetName_TQ[] =
{
	DECLARE_PACKET_NAME( TQ_HEARTBEAT ),
	DECLARE_PACKET_NAME( TQ_GUILD_CREATE_REQ ),
	DECLARE_PACKET_NAME( TQ_GUILD_DATA_REQ ),
	DECLARE_PACKET_NAME( TQ_GUILD_DISBAND_REQ ),
	DECLARE_PACKET_NAME( TQ_GUILD_DISBAND_CANCEL_REQ ),
	DECLARE_PACKET_NAME( TQ_GUILD_DESTROY_REQ ),

	DECLARE_PACKET_NAME( TQ_GUILD_INVITE_REQ ),
	DECLARE_PACKET_NAME( TQ_GUILD_LEAVE_REQ ),
	DECLARE_PACKET_NAME( TQ_GUILD_KICK_OUT_REQ ),

	DECLARE_PACKET_NAME( TQ_GUILD_APPOINT_SECOND_MASTER_REQ ),
	DECLARE_PACKET_NAME( TQ_GUILD_DISMISS_SECOND_MASTER_REQ ),
	DECLARE_PACKET_NAME( TQ_GUILD_CHANGE_GUILD_MASTER_REQ ),

	DECLARE_PACKET_NAME( TQ_FRIEND_ADD_REQ ),		// ģ�� �߰�
	DECLARE_PACKET_NAME( TQ_FRIEND_DEL_REQ ),		// ģ�� ����
	DECLARE_PACKET_NAME( TQ_FRIEND_MOVE_REQ ),		// ģ�� -> ��������Ʈ�� �̵�
	DECLARE_PACKET_NAME( TQ_FRIEND_LIST_LOAD_REQ ),	// ģ������Ʈ �ε�
	DECLARE_PACKET_NAME( TQ_FRIEND_BLACK_ADD_REQ ),		// ģ�� ���� ����Ʈ �߰�
	DECLARE_PACKET_NAME( TQ_FRIEND_BLACK_DEL_REQ ),		// ģ�� ���� ����Ʈ ����

	DECLARE_PACKET_NAME( TQ_RANKBATTLE_RANK_LIST_REQ ),
	DECLARE_PACKET_NAME( TQ_RANKBATTLE_RANK_FIND_CHARACTER_REQ ),	

	DECLARE_PACKET_NAME( TQ_GUILD_FUNCTION_ADD_REQ ),
	DECLARE_PACKET_NAME( TQ_GUILD_GIVE_ZENNY_REQ ),
	DECLARE_PACKET_NAME( TQ_GUILD_CHANGE_NOTICE_REQ ),
	DECLARE_PACKET_NAME( TQ_GUILD_CREATE_MARK_REQ ),
	DECLARE_PACKET_NAME( TQ_GUILD_CHANGE_MARK_REQ ),
	DECLARE_PACKET_NAME( TQ_GUILD_CHANGE_REPUTATION_REQ ),
	DECLARE_PACKET_NAME( TQ_GUILD_CHANGE_NAME_REQ ),
	DECLARE_PACKET_NAME( TQ_TMQ_RECORD_LIST_REQ ),
	DECLARE_PACKET_NAME( TQ_TMQ_MEMBER_LIST_REQ ),
	DECLARE_PACKET_NAME( TQ_DOJO_DATA_REQ ),
	DECLARE_PACKET_NAME( TQ_DOJO_CREATE_REQ ),
	DECLARE_PACKET_NAME( TQ_DOJO_UPDATE_REQ ),
	DECLARE_PACKET_NAME( TQ_DOJO_DEL_REQ ),
	DECLARE_PACKET_NAME( TQ_DOJO_FUNCTION_ADD_REQ ),
	DECLARE_PACKET_NAME( TQ_DOGI_CREATE_REQ ),
	DECLARE_PACKET_NAME( TQ_DOGI_CHANGE_REQ ),

	DECLARE_PACKET_NAME( TQ_CONNECT_WAIT_CHECK_RES ),
	DECLARE_PACKET_NAME( TQ_CONNECT_WAIT_COUNT_NFY ),
	DECLARE_PACKET_NAME( TQ_CONNECT_WAIT_CANCEL_RES ),

	DECLARE_PACKET_NAME( TQ_DOJO_SCRAMBLE_REQ ),
	DECLARE_PACKET_NAME( TQ_DOJO_SCRAMBLE_REJECT_REQ ),
	DECLARE_PACKET_NAME( TQ_DOJO_SCRAMBLE_RESET ),
	DECLARE_PACKET_NAME( TQ_DOJO_BUDOKAI_SEED_ADD_REQ ),
	DECLARE_PACKET_NAME( TQ_DOJO_BUDOKAI_SEED_DEL_REQ ),
	DECLARE_PACKET_NAME( TQ_DOJO_SCRAMBLE_REWARD_REQ ),
	DECLARE_PACKET_NAME( TQ_DOJO_CHANGE_NOTICE_REQ ),
	
};


//------------------------------------------------------------------
//
//------------------------------------------------------------------
const char * NtlGetPacketName_TQ(WORD wOpCode)
{
	if( wOpCode < TQ_OPCODE_BEGIN )
	{
		return "NOT DEFINED PACKET NAME : OPCODE LOW";
	}

	if( wOpCode > TQ_OPCODE_END )
	{
		return "NOT DEFINED PACKET NAME : OPCODE HIGH";
	}

	int nIndex = wOpCode - TQ_OPCODE_BEGIN;
	if( nIndex >= _countof( s_packetName_TQ) )
	{
		return "OPCODE BUFFER OVERFLOW";
	}

	return s_packetName_TQ[ nIndex ];
}