/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_misc
#define _PIDL_HEADER_misc

#include <stdint.h>

#include <core/ntstatus.h>

#ifndef _HEADER_misc
#define _HEADER_misc

#define SV_TYPE_ALL	( 0xFFFFFFFF )
struct GUID {
	uint32_t time_low;
	uint16_t time_mid;
	uint16_t time_hi_and_version;
	uint8_t clock_seq[2];
	uint8_t node[6];
}/* [gensize,noprint,public] */;

struct ndr_syntax_id {
	struct GUID uuid;
	uint32_t if_version;
}/* [public] */;

struct policy_handle {
	uint32_t handle_type;
	struct GUID uuid;
}/* [public] */;

enum netr_SchannelType
#ifndef USE_UINT_ENUMS
 {
	SEC_CHAN_NULL=(int)(0),
	SEC_CHAN_LOCAL=(int)(1),
	SEC_CHAN_WKSTA=(int)(2),
	SEC_CHAN_DNS_DOMAIN=(int)(3),
	SEC_CHAN_DOMAIN=(int)(4),
	SEC_CHAN_LANMAN=(int)(5),
	SEC_CHAN_BDC=(int)(6),
	SEC_CHAN_RODC=(int)(7)
}
#else
 { __do_not_use_enum_netr_SchannelType=0x7FFFFFFF}
#define SEC_CHAN_NULL ( 0 )
#define SEC_CHAN_LOCAL ( 1 )
#define SEC_CHAN_WKSTA ( 2 )
#define SEC_CHAN_DNS_DOMAIN ( 3 )
#define SEC_CHAN_DOMAIN ( 4 )
#define SEC_CHAN_LANMAN ( 5 )
#define SEC_CHAN_BDC ( 6 )
#define SEC_CHAN_RODC ( 7 )
#endif
;

struct KRB5_EDATA_NTSTATUS {
	NTSTATUS ntstatus;
	uint32_t unknown1;
	uint32_t unknown2;
}/* [public] */;

enum winreg_Type
#ifndef USE_UINT_ENUMS
 {
	REG_NONE=(int)(0),
	REG_SZ=(int)(1),
	REG_EXPAND_SZ=(int)(2),
	REG_BINARY=(int)(3),
	REG_DWORD=(int)(4),
	REG_DWORD_BIG_ENDIAN=(int)(5),
	REG_LINK=(int)(6),
	REG_MULTI_SZ=(int)(7),
	REG_RESOURCE_LIST=(int)(8),
	REG_FULL_RESOURCE_DESCRIPTOR=(int)(9),
	REG_RESOURCE_REQUIREMENTS_LIST=(int)(10),
	REG_QWORD=(int)(11)
}
#else
 { __do_not_use_enum_winreg_Type=0x7FFFFFFF}
#define REG_NONE ( 0 )
#define REG_SZ ( 1 )
#define REG_EXPAND_SZ ( 2 )
#define REG_BINARY ( 3 )
#define REG_DWORD ( 4 )
#define REG_DWORD_BIG_ENDIAN ( 5 )
#define REG_LINK ( 6 )
#define REG_MULTI_SZ ( 7 )
#define REG_RESOURCE_LIST ( 8 )
#define REG_FULL_RESOURCE_DESCRIPTOR ( 9 )
#define REG_RESOURCE_REQUIREMENTS_LIST ( 10 )
#define REG_QWORD ( 11 )
#endif
;

union winreg_Data {
	const char * string;/* [case(REG_SZ),flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	DATA_BLOB binary;/* [case(REG_BINARY),flag(LIBNDR_FLAG_REMAINING)] */
	uint32_t value;/* [case(REG_DWORD)] */
	const char ** string_array;/* [case(REG_MULTI_SZ),flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	uint64_t qword;/* [case(REG_QWORD)] */
	DATA_BLOB data;/* [default,flag(LIBNDR_FLAG_REMAINING)] */
}/* [flag(LIBNDR_FLAG_LITTLE_ENDIAN),nodiscriminant,public] */;

union winreg_Data_GPO {
	const char * string;/* [case(REG_SZ),flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	DATA_BLOB binary;/* [case(REG_BINARY),flag(LIBNDR_FLAG_REMAINING)] */
	uint32_t value;/* [case(REG_DWORD)] */
	uint64_t qword;/* [case(REG_QWORD)] */
	DATA_BLOB data;/* [default,flag(LIBNDR_FLAG_REMAINING)] */
}/* [flag(LIBNDR_FLAG_LITTLE_ENDIAN),gensize,nodiscriminant,public] */;

enum netr_SamDatabaseID
#ifndef USE_UINT_ENUMS
 {
	SAM_DATABASE_DOMAIN=(int)(0),
	SAM_DATABASE_BUILTIN=(int)(1),
	SAM_DATABASE_PRIVS=(int)(2)
}
#else
 { __do_not_use_enum_netr_SamDatabaseID=0x7FFFFFFF}
#define SAM_DATABASE_DOMAIN ( 0 )
#define SAM_DATABASE_BUILTIN ( 1 )
#define SAM_DATABASE_PRIVS ( 2 )
#endif
;

/* bitmap svcctl_ServerType */
#define SV_TYPE_WORKSTATION ( 0x00000001 )
#define SV_TYPE_SERVER ( 0x00000002 )
#define SV_TYPE_SQLSERVER ( 0x00000004 )
#define SV_TYPE_DOMAIN_CTRL ( 0x00000008 )
#define SV_TYPE_DOMAIN_BAKCTRL ( 0x00000010 )
#define SV_TYPE_TIME_SOURCE ( 0x00000020 )
#define SV_TYPE_AFP ( 0x00000040 )
#define SV_TYPE_NOVELL ( 0x00000080 )
#define SV_TYPE_DOMAIN_MEMBER ( 0x00000100 )
#define SV_TYPE_PRINTQ_SERVER ( 0x00000200 )
#define SV_TYPE_DIALIN_SERVER ( 0x00000400 )
#define SV_TYPE_SERVER_UNIX ( 0x00000800 )
#define SV_TYPE_NT ( 0x00001000 )
#define SV_TYPE_WFW ( 0x00002000 )
#define SV_TYPE_SERVER_MFPN ( 0x00004000 )
#define SV_TYPE_SERVER_NT ( 0x00008000 )
#define SV_TYPE_POTENTIAL_BROWSER ( 0x00010000 )
#define SV_TYPE_BACKUP_BROWSER ( 0x00020000 )
#define SV_TYPE_MASTER_BROWSER ( 0x00040000 )
#define SV_TYPE_DOMAIN_MASTER ( 0x00080000 )
#define SV_TYPE_SERVER_OSF ( 0x00100000 )
#define SV_TYPE_SERVER_VMS ( 0x00200000 )
#define SV_TYPE_WIN95_PLUS ( 0x00400000 )
#define SV_TYPE_DFS_SERVER ( 0x00800000 )
#define SV_TYPE_ALTERNATE_XPORT ( 0x20000000 )
#define SV_TYPE_LOCAL_LIST_ONLY ( 0x40000000 )
#define SV_TYPE_DOMAIN_ENUM ( 0x80000000 )

#endif /* _HEADER_misc */
#endif /* _PIDL_HEADER_misc */
