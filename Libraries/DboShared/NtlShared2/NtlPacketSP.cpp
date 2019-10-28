#include "StdAfx.h"
#include "NtlPacketSP.h"


const char * s_packetName_SP[] =
{
	DECLARE_PACKET_NAME( SP_HEARTBEAT ),

	DECLARE_PACKET_NAME( SP_NOTIFY_SERVER_BEGIN ),
	DECLARE_PACKET_NAME( SP_LOGIN_REQ ),						// �α��� ��û
	DECLARE_PACKET_NAME( SP_CHANGE_PASSWORD_REQ ),				// �н����� ���� ��û
	DECLARE_PACKET_NAME( SP_SERVERFARM_NAME_REQ ),				// ������ �̸� ��û
	DECLARE_PACKET_NAME( SP_SEARCH_PC_DATA_REQ ),				// ĳ���� �˻�
	DECLARE_PACKET_NAME( SP_PC_DATA_REQ ),						// ĳ���� ���� ��û

	DECLARE_PACKET_NAME( SP_CHARACTER_LOGIN_INFO_REQ ),		// �α��� ���� ��û
	DECLARE_PACKET_NAME( SP_CHARACTER_KICK_INFO_REQ ),			// ű ���� ��û
	DECLARE_PACKET_NAME( SP_CHARACTER_KICK_REQ ),				// ĳ���͸� ű ��Ų��. (���� ���)
	DECLARE_PACKET_NAME( SP_CHARACTER_CHANGE_NAME_REQ ),		// ĳ������ �̸��� ����
	DECLARE_PACKET_NAME( SP_CHAR_CHANGE_BIND_LOCATION_REQ ),	// ���ε� ��ġ ����
	DECLARE_PACKET_NAME( SP_CHAR_CHANGE_CUR_LOCATION_REQ ),	// ���� ��ġ ����
	DECLARE_PACKET_NAME( SP_CHARNAME_MODIFY_GMTOOL_REQ ),		// [5/22/2007 SGpro]

	DECLARE_PACKET_NAME( SP_SKILL_DELETE_REQ ),				// ��ų ����
	DECLARE_PACKET_NAME( SP_HTB_SKILL_DELETE_REQ ),			// HTB ��ų ����
	DECLARE_PACKET_NAME( SP_BUFF_DELETE_REQ ),					// ���� ����
	DECLARE_PACKET_NAME( SP_ITEM_CREATE_REQ ),					// ������ ����
	DECLARE_PACKET_NAME( SP_ITEM_DELETE_REQ ),					// ������ ����
	DECLARE_PACKET_NAME( SP_ITEM_CHANGE_INFO_REQ ),			// ������ ���� ����

	DECLARE_PACKET_NAME( SP_PUNISHMENT_INFO_REQ ),				// ���� ����
	DECLARE_PACKET_NAME( SP_PUNISHMENT_REQ ),					// ����� ����
	DECLARE_PACKET_NAME( SP_REPEAT_NOTICE_LIST_REQ ),			// ����Ʈ ��û
	DECLARE_PACKET_NAME( SP_REPEAT_NOTICE_ADD_REQ ),			// ���� �߰�
	DECLARE_PACKET_NAME( SP_REPEAT_NOTICE_CHANGE_REQ ),		// ���� ����
	DECLARE_PACKET_NAME( SP_REPEAT_NOTICE_DELETE_REQ ),		// ���� ����
	DECLARE_PACKET_NAME( SP_REALTIME_NOTICE_REQ ),				// �ǽð� ����

	DECLARE_PACKET_NAME( SP_SERVER_STATUS_REQ ),				// ���� ���� ��û	

	DECLARE_PACKET_NAME( SP_SERVER_CONTROL_TURN_ON_REQ ),		// ���� ���μ��� ���� ��û
	DECLARE_PACKET_NAME( SP_SERVER_CONTROL_TURN_OFF_REQ ),		// ���� ���μ��� ���� ��û
	DECLARE_PACKET_NAME( SP_SERVER_LOCK_REQ ),					// ����/������/���� ä�� ��� ���� ��û
	DECLARE_PACKET_NAME( SP_SERVER_UNLOCK_REQ ),				// ����/������/���� ä�� ��� ���� ��û
	DECLARE_PACKET_NAME( SP_SERVER_USER_ALL_KICK_REQ ),		// ���� ���� ������� ���� logout
	DECLARE_PACKET_NAME( SP_SERVER_AGENT_PATCH_REQ ),			// Server Agent�� ��ġ�� ��û
	DECLARE_PACKET_NAME( SP_SEARCH_ACCOUNTID_REQ ),			// ���̵� ���� ������ ã�´�

	DECLARE_PACKET_NAME( SP_GM_CREATE_REQ ),					// GM ���� ��û
	DECLARE_PACKET_NAME( SP_GM_DELETE_REQ ),					// GM ���� ��û
	DECLARE_PACKET_NAME( SP_GM_CHANGE_INFO_REQ ),				// GM ���� ����
	DECLARE_PACKET_NAME( SP_GM_CHANGE_ACCOUNTID_REQ ),			// GM �� ���� ������ Account ID�� �����Ų��.
	DECLARE_PACKET_NAME( SP_GM_CHANGE_PASSWORD_REQ ),			// GM �н����� ����
	DECLARE_PACKET_NAME( SP_GM_LIST_REQ ),						// GM ����Ʈ �˻�

	DECLARE_PACKET_NAME( SP_GROUP_CREATE_REQ ),				// Group ����
	DECLARE_PACKET_NAME( SP_GROUP_DELETE_REQ ),				// Group ����
	DECLARE_PACKET_NAME( SP_GROUP_CHANGE_TOOL_AUTHORITY_REQ ),	// Group �� �� ���� ����
	DECLARE_PACKET_NAME( SP_GROUP_CHANGE_COMMAND_AUTHORITY_REQ ),	// Group�� Ŀ�ǵ� ���� ����
	DECLARE_PACKET_NAME( SP_GROUP_CHANGE_LEVEL_REQ ),			// Group ���� ����
	DECLARE_PACKET_NAME( SP_GROUP_LOAD_TOOL_AUTHORITY_REQ ),	// Group Tool Authority ��û
	DECLARE_PACKET_NAME( SP_GROUP_LIST_REQ ),					// Group ����Ʈ ��û

	DECLARE_PACKET_NAME( SP_FILTERING_LOAD_LIST_REQ ),			// ����Ʈ �ε�
	DECLARE_PACKET_NAME( SP_FILTERING_ADD_STRING_REQ ),		// ���ڿ� �߰�
	DECLARE_PACKET_NAME( SP_FILTERING_DELETE_STRING_REQ ),		// ���ڿ� ����
	DECLARE_PACKET_NAME( SP_FILTERING_FIND_STRING_REQ ),		// ���ڿ� ã��
	DECLARE_PACKET_NAME( SP_FILTERING_CHANGE_STRING_REQ ),		// ���ڿ� ����
	DECLARE_PACKET_NAME( SP_FILTERING_ADD_STRING_PKG_REQ ),	// �������� ���ڿ� �߰�
	DECLARE_PACKET_NAME( SP_FILTERING_CLEAR_REQ ),				// ��� ���ڿ� ����

	DECLARE_PACKET_NAME( SP_QUEST_ITEM_CREATE_REQ ),			// ����Ʈ ������ ���� [5/17/2007 SGpro]
	DECLARE_PACKET_NAME( SP_QUEST_ITEM_DELETE_REQ ),			// ����Ʈ ������ ���� [5/17/2007 SGpro]
	DECLARE_PACKET_NAME( SP_QUEST_ITEM_UPDATE_REQ ),			// ����Ʈ ������ ���� [5/17/2007 SGpro]

	DECLARE_PACKET_NAME( SP_PROGRESS_QUEST_DELETE_REQ ),		// �������� ����Ʈ ���� [5/17/2007 SGpro]
	DECLARE_PACKET_NAME( SP_SCHEDULE_ADD_REQ ),					// ���� ������ ���
	DECLARE_PACKET_NAME( SP_SCHEDULE_DEL_REQ ),
	DECLARE_PACKET_NAME( SP_SCHEDULE_UPDATE_REQ ),
	DECLARE_PACKET_NAME( SP_SCHEDULE_LOAD_REQ ),				// ���� ������ �ε�

	DECLARE_PACKET_NAME( SP_MAIL_LOADINFO_REQ ),				// [10/4/2007 SGpro]
	DECLARE_PACKET_NAME( SP_MAIL_DEL_REQ ),						// [10/4/2007 SGpro]
	DECLARE_PACKET_NAME( SP_ACCOUNTCOMMENTLOAD_REQ ),			// [10/11/2007 SGpro]
	DECLARE_PACKET_NAME( SP_ACCOUNTCOMMENTUPDATE_REQ ),			// [10/11/2007 SGpro]
	DECLARE_PACKET_NAME( SP_GROUP_CHANGE_ETC_AUTHORITY_REQ ),
	DECLARE_PACKET_NAME( SP_ZENNYUPDATE_REQ ),					// [4/18/2008 SGpro]

	DECLARE_PACKET_NAME( SP_GUILD_SEARCH_REQ ),					// [4/22/2008 SGpro]
	DECLARE_PACKET_NAME( SP_GUILD_INFO_REQ ),					// [4/22/2008 SGpro]
	DECLARE_PACKET_NAME( SP_GUILD_INFO_UPDATE_REQ ),			// [4/22/2008 SGpro]
	DECLARE_PACKET_NAME( SP_GUILD_MASTER_MODIFY_REQ ),			// [4/22/2008 SGpro]
	DECLARE_PACKET_NAME( SP_GUILD_SECONDMASTER_DEPRIVATION_REQ ),// [4/22/2008 SGpro]
	DECLARE_PACKET_NAME( SP_GUILD_SECONDMASTER_APPOINTMENT_REQ ),// [4/22/2008 SGpro]
	DECLARE_PACKET_NAME( SP_GUILD_MEMBER_SECEDE_REQ ),			 // [4/22/2008 SGpro]
	DECLARE_PACKET_NAME( SP_GUILD_ITEM_DELETE_REQ ),			// [4/22/2008 SGpro]
	DECLARE_PACKET_NAME( SP_GUILD_ZENNY_MODIFY_REQ ),			// [4/22/2008 SGpro]
	DECLARE_PACKET_NAME( SP_GUILD_CHAR_KICK_REQ ),
	DECLARE_PACKET_NAME( SP_CHAR_DUPLICATE_REQ ),
	DECLARE_PACKET_NAME( SP_CHAR_RESCUE_REQ ),
	
	DECLARE_PACKET_NAME( SP_PETITION_LIST_REQ ),				// [5/7/2008 SGpro]
	DECLARE_PACKET_NAME( SP_PETITION_DATALOAD_REQ ),			// [5/7/2008 SGpro]
	DECLARE_PACKET_NAME( SP_PETITION_GM_INSERT_REQ ),			// [5/7/2008 SGpro]
	DECLARE_PACKET_NAME( SP_PETITION_START_REQ ),				// [5/7/2008 SGpro]
	DECLARE_PACKET_NAME( SP_PETITION_INIT_REQ ),				// [5/7/2008 SGpro]
	DECLARE_PACKET_NAME( SP_PETITION_RESERVE_REQ ),				// [5/7/2008 SGpro]
	DECLARE_PACKET_NAME( SP_PETITION_FINISH_REQ ),				// [5/7/2008 SGpro]
	DECLARE_PACKET_NAME( SP_PETITION_CHANGECATEGORY_REQ ),		// [5/8/2008 SGpro]
	DECLARE_PACKET_NAME( SP_PETITION_CHAT_START_REQ ),		
	DECLARE_PACKET_NAME( SP_PETITION_CHAT_GM_SAY_REQ ),			
	DECLARE_PACKET_NAME( SP_PETITION_CHAT_GM_END_NFY ),

	DECLARE_PACKET_NAME( SP_CHANGEHONOR_REQ ),					// [6/23/2008 SGpro]
	DECLARE_PACKET_NAME( SP_CHARACTERDELETE_REQ ),				// [6/26/2008 SGpro]
	DECLARE_PACKET_NAME( SP_CHARACTERRESCUE_REQ ),				// [6/26/2008 SGpro]
	DECLARE_PACKET_NAME( SP_CHANGERANKPOINT_REQ ),
	DECLARE_PACKET_NAME( SP_CHANGEMUDOSAPOINT_REQ ),
	DECLARE_PACKET_NAME( SP_GM_SERVER_COMMAND_REQ ),			// [6/30/2008 SGpro]
	DECLARE_PACKET_NAME( SP_SERVER_COMMAND_REQ ),				// [7/28/2008 SGpro]
	DECLARE_PACKET_NAME( SP_CHARACTER_WATCH_REQ ),
	DECLARE_PACKET_NAME( SP_CHARACTER_WATCH_END_NFY ),
	DECLARE_PACKET_NAME( SP_CHARACTER_INIT_SKILL_REQ ),
	DECLARE_PACKET_NAME( SP_GAME_LOG_LIST_REQ ),
	DECLARE_PACKET_NAME( SP_GAME_LOG_LIST_DATA_READY_RES ),
	DECLARE_PACKET_NAME( SP_SERVER_STATUS_LOCALSETTING_INFO_REQ ),
	DECLARE_PACKET_NAME( SP_SERVER_STATUS_LOCALSETTING_EDIT_REQ ),
	DECLARE_PACKET_NAME( SP_CHARACTER_CHANGE_SP_REQ ),
	DECLARE_PACKET_NAME( SP_CHARACTER_SKILL_ADD_REQ ),
	DECLARE_PACKET_NAME( SP_CHARACTER_HTB_ADD_REQ ),
	DECLARE_PACKET_NAME( SP_CHARACTER_CHANGE_LEVEL_REQ ),
	DECLARE_PACKET_NAME( SP_CHARACTER_CHANGE_EXP_REQ ),
	DECLARE_PACKET_NAME( SP_MULTI_MAIL_SEND_REQ ),
	
	DECLARE_PACKET_NAME( SP_MULTI_MAIL_HISTORY_REQ ),
	DECLARE_PACKET_NAME( SP_MULTI_MAIL_HISTORY_READY_RES ),

	DECLARE_PACKET_NAME( SP_GM_COMMAND_LOG_LIST_REQ ),	// itzrnb
	DECLARE_PACKET_NAME( SP_GM_COMMAND_LOG_LIST_DATA_READY_RES ),

	DECLARE_PACKET_NAME( SP_IP_MANAGE_SAMEIP_SEARCH_REQ ),
	DECLARE_PACKET_NAME( SP_IP_MANAGE_SAMEIP_USER_LIST_REQ ),
	DECLARE_PACKET_NAME( SP_IP_MANAGE_INFO_SEARCH_REQ ),
	DECLARE_PACKET_NAME( SP_IP_MANAGE_INFO_EDIT_REQ ),

	DECLARE_PACKET_NAME( SP_GM_LOG_LIST_REQ ),
	DECLARE_PACKET_NAME( SP_GM_LOG_LIST_DATA_READY_RES ),

	DECLARE_PACKET_NAME( SP_PUNISHMENT_MULTI_REQ ),
};



//------------------------------------------------------------------
//
//------------------------------------------------------------------
const char * NtlGetPacketName_SP(WORD wOpCode)
{
	if( wOpCode < SP_OPCODE_BEGIN )
	{
		return "NOT DEFINED PACKET NAME : OPCODE LOW";
	}

	if( wOpCode > SP_OPCODE_END )
	{
		return "NOT DEFINED PACKET NAME : OPCODE HIGH";
	}

	int nIndex = wOpCode - SP_OPCODE_BEGIN;
	if( nIndex >= _countof( s_packetName_SP) )
	{
		return "OPCODE BUFFER OVERFLOW";
	}

	return s_packetName_SP[ nIndex ];
}