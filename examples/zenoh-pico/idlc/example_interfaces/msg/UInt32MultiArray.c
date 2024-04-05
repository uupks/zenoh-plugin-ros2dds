/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: /home/r22052/workspace/csdk/build/autel_msgs/src/example_interfaces/msg/UInt32MultiArray.c
  Source: /home/r22052/workspace/csdk/build/autel_msgs/idl/example_interfaces/msg/UInt32MultiArray.idl
  Cyclone DDS: V0.10.4

*****************************************************************/
#include "UInt32MultiArray.h"

static const uint32_t example_interfaces_msg_UInt32MultiArray_ops [] =
{
  /* UInt32MultiArray */
  DDS_OP_ADR | DDS_OP_TYPE_EXT, offsetof (example_interfaces_msg_UInt32MultiArray, layout), (3u << 16u) + 6u /* MultiArrayLayout */,
  DDS_OP_ADR | DDS_OP_TYPE_SEQ | DDS_OP_SUBTYPE_4BY, offsetof (example_interfaces_msg_UInt32MultiArray, data),
  DDS_OP_RTS,

  /* MultiArrayLayout */
  DDS_OP_ADR | DDS_OP_TYPE_SEQ | DDS_OP_SUBTYPE_STU, offsetof (example_interfaces_msg_MultiArrayLayout, dim), sizeof (example_interfaces_msg_MultiArrayDimension), (4u << 16u) + 7u /* MultiArrayDimension */,
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (example_interfaces_msg_MultiArrayLayout, data_offset),
  DDS_OP_RTS,

  /* MultiArrayDimension */
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (example_interfaces_msg_MultiArrayDimension, label),
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (example_interfaces_msg_MultiArrayDimension, size),
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (example_interfaces_msg_MultiArrayDimension, stride),
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL e8d39416898ca69b602b247bdb34] (#deps: 2)
   - [MINIMAL 3da6301ed97ae977de0d658704ac]
   - [MINIMAL adc347b48d2d7b27c1e10885b69b]
  [COMPLETE b03bef7bd8e9d3cca5cb56b28914] (#deps: 2)
   - [COMPLETE 9ed2e139c0cd5b1237cf9dd72128]
   - [COMPLETE 55f59199cbdf96e8c58dac2956ed]
*/
#define TYPE_INFO_CDR_example_interfaces_msg_UInt32MultiArray (unsigned char []){ \
  0xc0, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x58, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0xe8, 0xd3, 0x94, 0x16, 0x89, 0x8c, 0xa6, 0x9b, 0x60, 0x2b, 0x24, \
  0x7b, 0xdb, 0x34, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, \
  0x02, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xf1, 0x3d, 0xa6, 0x30, 0x1e, 0xd9, 0x7a, 0xe9, \
  0x77, 0xde, 0x0d, 0x65, 0x87, 0x04, 0xac, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, \
  0xf1, 0xad, 0xc3, 0x47, 0xb4, 0x8d, 0x2d, 0x7b, 0x27, 0xc1, 0xe1, 0x08, 0x85, 0xb6, 0x9b, 0x00, \
  0x47, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x58, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0xb0, 0x3b, 0xef, 0x7b, 0xd8, 0xe9, 0xd3, 0xcc, 0xa5, 0xcb, 0x56, \
  0xb2, 0x89, 0x14, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, \
  0x02, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xf2, 0x9e, 0xd2, 0xe1, 0x39, 0xc0, 0xcd, 0x5b, \
  0x12, 0x37, 0xcf, 0x9d, 0xd7, 0x21, 0x28, 0x00, 0x92, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, \
  0xf2, 0x55, 0xf5, 0x91, 0x99, 0xcb, 0xdf, 0x96, 0xe8, 0xc5, 0x8d, 0xac, 0x29, 0x56, 0xed, 0x00, \
  0x95, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_example_interfaces_msg_UInt32MultiArray 196u
#define TYPE_MAP_CDR_example_interfaces_msg_UInt32MultiArray (unsigned char []){ \
  0x13, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf1, 0xe8, 0xd3, 0x94, 0x16, 0x89, 0x8c, 0xa6, \
  0x9b, 0x60, 0x2b, 0x24, 0x7b, 0xdb, 0x34, 0x00, 0x48, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, \
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xf1, 0x3d, 0xa6, 0x30, 0x1e, 0xd9, \
  0x7a, 0xe9, 0x77, 0xde, 0x0d, 0x65, 0x87, 0x04, 0xac, 0xc6, 0x14, 0x04, 0x95, 0x00, 0x00, 0x00, \
  0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf3, 0x01, 0x00, 0x00, 0x07, \
  0x8d, 0x77, 0x7f, 0x38, 0xf1, 0x3d, 0xa6, 0x30, 0x1e, 0xd9, 0x7a, 0xe9, 0x77, 0xde, 0x0d, 0x65, \
  0x87, 0x04, 0xac, 0x00, 0x47, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf1, 0x01, 0x00, 0x00, 0xf1, 0xad, 0xc3, 0x47, 0xb4, \
  0x8d, 0x2d, 0x7b, 0x27, 0xc1, 0xe1, 0x08, 0x85, 0xb6, 0x9b, 0x56, 0x37, 0x28, 0xdf, 0x00, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x07, 0x32, 0x75, 0xcd, 0x8c, 0xf1, \
  0xad, 0xc3, 0x47, 0xb4, 0x8d, 0x2d, 0x7b, 0x27, 0xc1, 0xe1, 0x08, 0x85, 0xb6, 0x9b, 0x00, 0x00, \
  0x43, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x33, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x70, 0x00, 0xd3, 0x04, 0xba, 0x20, 0x0b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x07, 0xf7, 0xbd, 0x60, 0xb7, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x07, 0x47, 0x10, 0x13, 0x75, 0x00, 0xed, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, \
  0xf2, 0xb0, 0x3b, 0xef, 0x7b, 0xd8, 0xe9, 0xd3, 0xcc, 0xa5, 0xcb, 0x56, 0xb2, 0x89, 0x14, 0x00, \
  0x8b, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x2a, 0x00, 0x00, 0x00, 0x65, 0x78, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x5f, 0x69, 0x6e, 0x74, 0x65, \
  0x72, 0x66, 0x61, 0x63, 0x65, 0x73, 0x3a, 0x3a, 0x6d, 0x73, 0x67, 0x3a, 0x3a, 0x55, 0x49, 0x6e, \
  0x74, 0x33, 0x32, 0x4d, 0x75, 0x6c, 0x74, 0x69, 0x41, 0x72, 0x72, 0x61, 0x79, 0x00, 0x00, 0x00, \
  0x4b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0xf2, 0x9e, 0xd2, 0xe1, 0x39, 0xc0, 0xcd, 0x5b, 0x12, 0x37, 0xcf, 0x9d, 0xd7, 0x21, \
  0x28, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x6c, 0x61, 0x79, 0x6f, 0x75, 0x74, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf3, \
  0x01, 0x00, 0x00, 0x07, 0x05, 0x00, 0x00, 0x00, 0x64, 0x61, 0x74, 0x61, 0x00, 0x00, 0x00, 0xf2, \
  0x9e, 0xd2, 0xe1, 0x39, 0xc0, 0xcd, 0x5b, 0x12, 0x37, 0xcf, 0x9d, 0xd7, 0x21, 0x28, 0x00, 0x00, \
  0x8e, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x2a, 0x00, 0x00, 0x00, 0x65, 0x78, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x5f, 0x69, 0x6e, 0x74, 0x65, \
  0x72, 0x66, 0x61, 0x63, 0x65, 0x73, 0x3a, 0x3a, 0x6d, 0x73, 0x67, 0x3a, 0x3a, 0x4d, 0x75, 0x6c, \
  0x74, 0x69, 0x41, 0x72, 0x72, 0x61, 0x79, 0x4c, 0x61, 0x79, 0x6f, 0x75, 0x74, 0x00, 0x00, 0x00, \
  0x4e, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x80, 0xf2, 0x01, 0x00, 0x00, 0xf2, 0x55, 0xf5, 0x91, 0x99, 0xcb, 0xdf, 0x96, 0xe8, \
  0xc5, 0x8d, 0xac, 0x29, 0x56, 0xed, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x64, 0x69, 0x6d, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, \
  0x0c, 0x00, 0x00, 0x00, 0x64, 0x61, 0x74, 0x61, 0x5f, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x00, \
  0x00, 0x00, 0xf2, 0x55, 0xf5, 0x91, 0x99, 0xcb, 0xdf, 0x96, 0xe8, 0xc5, 0x8d, 0xac, 0x29, 0x56, \
  0xed, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, 0x35, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x65, 0x78, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x5f, \
  0x69, 0x6e, 0x74, 0x65, 0x72, 0x66, 0x61, 0x63, 0x65, 0x73, 0x3a, 0x3a, 0x6d, 0x73, 0x67, 0x3a, \
  0x3a, 0x4d, 0x75, 0x6c, 0x74, 0x69, 0x41, 0x72, 0x72, 0x61, 0x79, 0x44, 0x69, 0x6d, 0x65, 0x6e, \
  0x73, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x70, 0x00, 0x06, 0x00, 0x00, 0x00, \
  0x6c, 0x61, 0x62, 0x65, 0x6c, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x07, 0x00, 0x05, 0x00, 0x00, 0x00, 0x73, 0x69, 0x7a, 0x65, 0x00, 0x00, 0x00, 0x00, \
  0x15, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x07, 0x00, 0x00, 0x00, \
  0x73, 0x74, 0x72, 0x69, 0x64, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, 0x00, \
  0x03, 0x00, 0x00, 0x00, 0xf2, 0xb0, 0x3b, 0xef, 0x7b, 0xd8, 0xe9, 0xd3, 0xcc, 0xa5, 0xcb, 0x56, \
  0xb2, 0x89, 0x14, 0xf1, 0xe8, 0xd3, 0x94, 0x16, 0x89, 0x8c, 0xa6, 0x9b, 0x60, 0x2b, 0x24, 0x7b, \
  0xdb, 0x34, 0xf2, 0x9e, 0xd2, 0xe1, 0x39, 0xc0, 0xcd, 0x5b, 0x12, 0x37, 0xcf, 0x9d, 0xd7, 0x21, \
  0x28, 0xf1, 0x3d, 0xa6, 0x30, 0x1e, 0xd9, 0x7a, 0xe9, 0x77, 0xde, 0x0d, 0x65, 0x87, 0x04, 0xac, \
  0xf2, 0x55, 0xf5, 0x91, 0x99, 0xcb, 0xdf, 0x96, 0xe8, 0xc5, 0x8d, 0xac, 0x29, 0x56, 0xed, 0xf1, \
  0xad, 0xc3, 0x47, 0xb4, 0x8d, 0x2d, 0x7b, 0x27, 0xc1, 0xe1, 0x08, 0x85, 0xb6, 0x9b\
}
#define TYPE_MAP_CDR_SZ_example_interfaces_msg_UInt32MultiArray 878u
const dds_topic_descriptor_t example_interfaces_msg_UInt32MultiArray_desc =
{
  .m_size = sizeof (example_interfaces_msg_UInt32MultiArray),
  .m_align = dds_alignof (example_interfaces_msg_UInt32MultiArray),
  .m_flagset = DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "example_interfaces::msg::UInt32MultiArray",
  .m_keys = NULL,
  .m_nops = 10,
  .m_ops = example_interfaces_msg_UInt32MultiArray_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_example_interfaces_msg_UInt32MultiArray, .sz = TYPE_INFO_CDR_SZ_example_interfaces_msg_UInt32MultiArray },
  .type_mapping = { .data = TYPE_MAP_CDR_example_interfaces_msg_UInt32MultiArray, .sz = TYPE_MAP_CDR_SZ_example_interfaces_msg_UInt32MultiArray }
};

