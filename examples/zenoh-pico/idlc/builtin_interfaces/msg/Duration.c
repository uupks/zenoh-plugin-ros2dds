/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: /home/r22052/workspace/csdk/build/autel_msgs/src/builtin_interfaces/msg/Duration.c
  Source: /home/r22052/workspace/csdk/build/autel_msgs/idl/builtin_interfaces/msg/Duration.idl
  Cyclone DDS: V0.10.4

*****************************************************************/
#include "Duration.h"

static const uint32_t builtin_interfaces_msg_Duration_ops [] =
{
  /* Duration */
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (builtin_interfaces_msg_Duration, sec),
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (builtin_interfaces_msg_Duration, nanosec),
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL 567c5a93541c3b1086a4ba46f98d] (#deps: 0)
  [COMPLETE 6414dcd51ad573c23111e3885e17] (#deps: 0)
*/
#define TYPE_INFO_CDR_builtin_interfaces_msg_Duration (unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0x56, 0x7c, 0x5a, 0x93, 0x54, 0x1c, 0x3b, 0x10, 0x86, 0xa4, 0xba, \
  0x46, 0xf9, 0x8d, 0x00, 0x37, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0x64, 0x14, 0xdc, 0xd5, 0x1a, 0xd5, 0x73, 0xc2, 0x31, 0x11, 0xe3, \
  0x88, 0x5e, 0x17, 0x00, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_builtin_interfaces_msg_Duration 100u
#define TYPE_MAP_CDR_builtin_interfaces_msg_Duration (unsigned char []){ \
  0x4b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0x56, 0x7c, 0x5a, 0x93, 0x54, 0x1c, 0x3b, \
  0x10, 0x86, 0xa4, 0xba, 0x46, 0xf9, 0x8d, 0x00, 0x33, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x04, 0x74, 0x45, 0x9c, 0xa3, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x07, 0xe2, 0x04, 0x64, 0xd5, 0x00, \
  0x86, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0x64, 0x14, 0xdc, 0xd5, 0x1a, 0xd5, 0x73, \
  0xc2, 0x31, 0x11, 0xe3, 0x88, 0x5e, 0x17, 0x00, 0x6e, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x62, 0x75, 0x69, 0x6c, \
  0x74, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x66, 0x61, 0x63, 0x65, 0x73, 0x3a, 0x3a, \
  0x6d, 0x73, 0x67, 0x3a, 0x3a, 0x44, 0x75, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, \
  0x36, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x73, 0x65, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x16, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00, 0x00, 0x00, \
  0x6e, 0x61, 0x6e, 0x6f, 0x73, 0x65, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0xf2, 0x64, 0x14, 0xdc, 0xd5, 0x1a, 0xd5, 0x73, 0xc2, 0x31, 0x11, 0xe3, \
  0x88, 0x5e, 0x17, 0xf1, 0x56, 0x7c, 0x5a, 0x93, 0x54, 0x1c, 0x3b, 0x10, 0x86, 0xa4, 0xba, 0x46, \
  0xf9, 0x8d\
}
#define TYPE_MAP_CDR_SZ_builtin_interfaces_msg_Duration 258u
const dds_topic_descriptor_t builtin_interfaces_msg_Duration_desc =
{
  .m_size = sizeof (builtin_interfaces_msg_Duration),
  .m_align = dds_alignof (builtin_interfaces_msg_Duration),
  .m_flagset = DDS_TOPIC_FIXED_SIZE | DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "builtin_interfaces::msg::Duration",
  .m_keys = NULL,
  .m_nops = 3,
  .m_ops = builtin_interfaces_msg_Duration_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_builtin_interfaces_msg_Duration, .sz = TYPE_INFO_CDR_SZ_builtin_interfaces_msg_Duration },
  .type_mapping = { .data = TYPE_MAP_CDR_builtin_interfaces_msg_Duration, .sz = TYPE_MAP_CDR_SZ_builtin_interfaces_msg_Duration }
};

