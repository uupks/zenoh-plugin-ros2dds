/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: /home/r22052/workspace/csdk/build/autel_msgs/src/example_interfaces/msg/Bool.c
  Source: /home/r22052/workspace/csdk/build/autel_msgs/idl/example_interfaces/msg/Bool.idl
  Cyclone DDS: V0.10.4

*****************************************************************/
#include "Bool.h"

static const uint32_t example_interfaces_msg_Bool_ops [] =
{
  /* Bool */
  DDS_OP_ADR | DDS_OP_TYPE_BLN, offsetof (example_interfaces_msg_Bool, data),
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL 8d20ae0ed553622262c71ba72b47] (#deps: 0)
  [COMPLETE e2069a2b55cecb6eb07623be1bff] (#deps: 0)
*/
#define TYPE_INFO_CDR_example_interfaces_msg_Bool (unsigned char []){ \
  0x60, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0x8d, 0x20, 0xae, 0x0e, 0xd5, 0x53, 0x62, 0x22, 0x62, 0xc7, 0x1b, \
  0xa7, 0x2b, 0x47, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x28, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0xe2, 0x06, 0x9a, 0x2b, 0x55, 0xce, 0xcb, 0x6e, 0xb0, 0x76, 0x23, \
  0xbe, 0x1b, 0xff, 0x00, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_example_interfaces_msg_Bool 100u
#define TYPE_MAP_CDR_example_interfaces_msg_Bool (unsigned char []){ \
  0x3b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf1, 0x8d, 0x20, 0xae, 0x0e, 0xd5, 0x53, 0x62, \
  0x22, 0x62, 0xc7, 0x1b, 0xa7, 0x2b, 0x47, 0x00, 0x23, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x8d, 0x77, 0x7f, 0x38, 0x00, \
  0x67, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf2, 0xe2, 0x06, 0x9a, 0x2b, 0x55, 0xce, 0xcb, \
  0x6e, 0xb0, 0x76, 0x23, 0xbe, 0x1b, 0xff, 0x00, 0x4f, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x65, 0x78, 0x61, 0x6d, \
  0x70, 0x6c, 0x65, 0x5f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x66, 0x61, 0x63, 0x65, 0x73, 0x3a, 0x3a, \
  0x6d, 0x73, 0x67, 0x3a, 0x3a, 0x42, 0x6f, 0x6f, 0x6c, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, \
  0x05, 0x00, 0x00, 0x00, 0x64, 0x61, 0x74, 0x61, 0x00, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0xf2, 0xe2, 0x06, 0x9a, 0x2b, 0x55, 0xce, 0xcb, 0x6e, 0xb0, 0x76, 0x23, \
  0xbe, 0x1b, 0xff, 0xf1, 0x8d, 0x20, 0xae, 0x0e, 0xd5, 0x53, 0x62, 0x22, 0x62, 0xc7, 0x1b, 0xa7, \
  0x2b, 0x47\
}
#define TYPE_MAP_CDR_SZ_example_interfaces_msg_Bool 210u
const dds_topic_descriptor_t example_interfaces_msg_Bool_desc =
{
  .m_size = sizeof (example_interfaces_msg_Bool),
  .m_align = dds_alignof (example_interfaces_msg_Bool),
  .m_flagset = DDS_TOPIC_FIXED_SIZE | DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "example_interfaces::msg::Bool",
  .m_keys = NULL,
  .m_nops = 2,
  .m_ops = example_interfaces_msg_Bool_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_example_interfaces_msg_Bool, .sz = TYPE_INFO_CDR_SZ_example_interfaces_msg_Bool },
  .type_mapping = { .data = TYPE_MAP_CDR_example_interfaces_msg_Bool, .sz = TYPE_MAP_CDR_SZ_example_interfaces_msg_Bool }
};

