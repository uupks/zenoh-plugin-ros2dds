/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: /home/r22052/workspace/csdk/build/autel_msgs/src/rcl_interfaces/srv/SetParametersAtomically.c
  Source: /home/r22052/workspace/csdk/build/autel_msgs/idl/rcl_interfaces/srv/SetParametersAtomically.idl
  Cyclone DDS: V0.10.4

*****************************************************************/
#include "SetParametersAtomically.h"

static const uint32_t rcl_interfaces_srv_SetParametersAtomically_Request_ops [] =
{
  /* SetParametersAtomically_Request */
  DDS_OP_ADR | DDS_OP_TYPE_SEQ | DDS_OP_SUBTYPE_STU, offsetof (rcl_interfaces_srv_SetParametersAtomically_Request, parameters), sizeof (rcl_interfaces_msg_Parameter), (4u << 16u) + 5u /* Parameter */,
  DDS_OP_RTS,

  /* Parameter */
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (rcl_interfaces_msg_Parameter, name),
  DDS_OP_ADR | DDS_OP_TYPE_EXT, offsetof (rcl_interfaces_msg_Parameter, value), (3u << 16u) + 4u /* ParameterValue */,
  DDS_OP_RTS,

  /* ParameterValue */
  DDS_OP_ADR | DDS_OP_TYPE_1BY, offsetof (rcl_interfaces_msg_ParameterValue, type),
  DDS_OP_ADR | DDS_OP_TYPE_BLN, offsetof (rcl_interfaces_msg_ParameterValue, bool_value),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_SGN, offsetof (rcl_interfaces_msg_ParameterValue, integer_value),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (rcl_interfaces_msg_ParameterValue, double_value),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (rcl_interfaces_msg_ParameterValue, string_value),
  DDS_OP_ADR | DDS_OP_TYPE_SEQ | DDS_OP_SUBTYPE_1BY, offsetof (rcl_interfaces_msg_ParameterValue, byte_array_value),
  DDS_OP_ADR | DDS_OP_TYPE_SEQ | DDS_OP_SUBTYPE_BLN, offsetof (rcl_interfaces_msg_ParameterValue, bool_array_value),
  DDS_OP_ADR | DDS_OP_TYPE_SEQ | DDS_OP_SUBTYPE_8BY | DDS_OP_FLAG_SGN, offsetof (rcl_interfaces_msg_ParameterValue, integer_array_value),
  DDS_OP_ADR | DDS_OP_TYPE_SEQ | DDS_OP_SUBTYPE_8BY | DDS_OP_FLAG_FP, offsetof (rcl_interfaces_msg_ParameterValue, double_array_value),
  DDS_OP_ADR | DDS_OP_TYPE_SEQ | DDS_OP_SUBTYPE_STR, offsetof (rcl_interfaces_msg_ParameterValue, string_array_value),
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL 816bd543b315f3d69da125e75f8f] (#deps: 2)
   - [MINIMAL ab0d500d74721597d6ed28a4ba43]
   - [MINIMAL c0a544a481b0369c9180db81286e]
  [COMPLETE a42f925d76eb24cc26f59228ca92] (#deps: 2)
   - [COMPLETE ba65d3a1cf40d3306aff14969cdf]
   - [COMPLETE c7c958d16f0e876d5add8927b0ee]
*/
#define TYPE_INFO_CDR_rcl_interfaces_srv_SetParametersAtomically_Request (unsigned char []){ \
  0xc0, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x58, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0x81, 0x6b, 0xd5, 0x43, 0xb3, 0x15, 0xf3, 0xd6, 0x9d, 0xa1, 0x25, \
  0xe7, 0x5f, 0x8f, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, \
  0x02, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xf1, 0xab, 0x0d, 0x50, 0x0d, 0x74, 0x72, 0x15, \
  0x97, 0xd6, 0xed, 0x28, 0xa4, 0xba, 0x43, 0x00, 0x45, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, \
  0xf1, 0xc0, 0xa5, 0x44, 0xa4, 0x81, 0xb0, 0x36, 0x9c, 0x91, 0x80, 0xdb, 0x81, 0x28, 0x6e, 0x00, \
  0xcd, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, 0x58, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf2, 0xa4, 0x2f, 0x92, 0x5d, 0x76, 0xeb, 0x24, 0xcc, 0x26, 0xf5, 0x92, \
  0x28, 0xca, 0x92, 0x00, 0x85, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, \
  0x02, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xf2, 0xba, 0x65, 0xd3, 0xa1, 0xcf, 0x40, 0xd3, \
  0x30, 0x6a, 0xff, 0x14, 0x96, 0x9c, 0xdf, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, \
  0xf2, 0xc7, 0xc9, 0x58, 0xd1, 0x6f, 0x0e, 0x87, 0x6d, 0x5a, 0xdd, 0x89, 0x27, 0xb0, 0xee, 0x00, \
  0xad, 0x01, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_rcl_interfaces_srv_SetParametersAtomically_Request 196u
#define TYPE_MAP_CDR_rcl_interfaces_srv_SetParametersAtomically_Request (unsigned char []){ \
  0x81, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf1, 0x81, 0x6b, 0xd5, 0x43, 0xb3, 0x15, 0xf3, \
  0xd6, 0x9d, 0xa1, 0x25, 0xe7, 0x5f, 0x8f, 0x00, 0x36, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf1, 0x01, 0x00, 0x00, 0xf1, \
  0xab, 0x0d, 0x50, 0x0d, 0x74, 0x72, 0x15, 0x97, 0xd6, 0xed, 0x28, 0xa4, 0xba, 0x43, 0x16, 0x6e, \
  0x64, 0xf6, 0xf1, 0xab, 0x0d, 0x50, 0x0d, 0x74, 0x72, 0x15, 0x97, 0xd6, 0xed, 0x28, 0xa4, 0xba, \
  0x43, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x70, 0x00, 0xb0, 0x68, 0x93, 0x1c, 0x19, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0xf1, 0xc0, 0xa5, 0x44, 0xa4, 0x81, 0xb0, 0x36, 0x9c, 0x91, \
  0x80, 0xdb, 0x81, 0x28, 0x6e, 0x20, 0x63, 0xc1, 0x60, 0xf1, 0xc0, 0xa5, 0x44, 0xa4, 0x81, 0xb0, \
  0x36, 0x9c, 0x91, 0x80, 0xdb, 0x81, 0x28, 0x6e, 0xc9, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x59, 0x9d, 0xcc, 0xe2, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x3d, 0xda, 0xb1, 0xb4, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x05, 0x5c, 0xce, 0x32, 0x43, 0x00, \
  0x0b, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0xda, 0x59, 0x2c, 0x95, 0x00, \
  0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x70, 0x00, 0x86, 0x3a, 0x85, 0xb4, \
  0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf3, 0x01, 0x00, 0x00, 0x02, \
  0xe2, 0x8c, 0x36, 0x25, 0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf3, \
  0x01, 0x00, 0x00, 0x01, 0x0b, 0xf8, 0xfe, 0x00, 0x10, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x80, 0xf3, 0x01, 0x00, 0x00, 0x05, 0x2e, 0x09, 0x5a, 0xed, 0x10, 0x00, 0x00, 0x00, \
  0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf3, 0x01, 0x00, 0x00, 0x0a, 0xe5, 0x22, 0x58, 0x6f, \
  0x11, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf3, 0x01, 0x00, 0x00, 0x70, \
  0x00, 0x37, 0xc8, 0x3d, 0xb3, 0x00, 0x00, 0x00, 0xe1, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, \
  0xf2, 0xa4, 0x2f, 0x92, 0x5d, 0x76, 0xeb, 0x24, 0xcc, 0x26, 0xf5, 0x92, 0x28, 0xca, 0x92, 0x00, \
  0x81, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x35, 0x00, 0x00, 0x00, 0x72, 0x63, 0x6c, 0x5f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x66, 0x61, 0x63, \
  0x65, 0x73, 0x3a, 0x3a, 0x73, 0x72, 0x76, 0x3a, 0x3a, 0x53, 0x65, 0x74, 0x50, 0x61, 0x72, 0x61, \
  0x6d, 0x65, 0x74, 0x65, 0x72, 0x73, 0x41, 0x74, 0x6f, 0x6d, 0x69, 0x63, 0x61, 0x6c, 0x6c, 0x79, \
  0x5f, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x00, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf2, \
  0x01, 0x00, 0x00, 0xf2, 0xba, 0x65, 0xd3, 0xa1, 0xcf, 0x40, 0xd3, 0x30, 0x6a, 0xff, 0x14, 0x96, \
  0x9c, 0xdf, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, 0x65, \
  0x72, 0x73, 0x00, 0x00, 0x00, 0xf2, 0xba, 0x65, 0xd3, 0xa1, 0xcf, 0x40, 0xd3, 0x30, 0x6a, 0xff, \
  0x14, 0x96, 0x9c, 0xdf, 0x78, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, 0x27, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x72, 0x63, 0x6c, 0x5f, 0x69, 0x6e, 0x74, 0x65, \
  0x72, 0x66, 0x61, 0x63, 0x65, 0x73, 0x3a, 0x3a, 0x6d, 0x73, 0x67, 0x3a, 0x3a, 0x50, 0x61, 0x72, \
  0x61, 0x6d, 0x65, 0x74, 0x65, 0x72, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, \
  0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x70, 0x00, 0x05, 0x00, 0x00, 0x00, \
  0x6e, 0x61, 0x6d, 0x65, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0xf2, 0xc7, 0xc9, 0x58, 0xd1, 0x6f, 0x0e, 0x87, 0x6d, 0x5a, 0xdd, 0x89, 0x27, 0xb0, \
  0xee, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x00, 0x00, 0x00, \
  0xf2, 0xc7, 0xc9, 0x58, 0xd1, 0x6f, 0x0e, 0x87, 0x6d, 0x5a, 0xdd, 0x89, 0x27, 0xb0, 0xee, 0x00, \
  0xa9, 0x01, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x24, 0x00, 0x00, 0x00, 0x72, 0x63, 0x6c, 0x5f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x66, 0x61, 0x63, \
  0x65, 0x73, 0x3a, 0x3a, 0x6d, 0x73, 0x67, 0x3a, 0x3a, 0x50, 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, \
  0x65, 0x72, 0x56, 0x61, 0x6c, 0x75, 0x65, 0x00, 0x71, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, \
  0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, \
  0x74, 0x79, 0x70, 0x65, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x01, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x62, 0x6f, 0x6f, 0x6c, 0x5f, 0x76, 0x61, 0x6c, \
  0x75, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x05, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x69, 0x6e, 0x74, 0x65, 0x67, 0x65, 0x72, 0x5f, \
  0x76, 0x61, 0x6c, 0x75, 0x65, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x0a, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x64, 0x6f, 0x75, 0x62, 0x6c, 0x65, 0x5f, 0x76, \
  0x61, 0x6c, 0x75, 0x65, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x70, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x5f, 0x76, \
  0x61, 0x6c, 0x75, 0x65, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x80, 0xf3, 0x01, 0x00, 0x00, 0x02, 0x11, 0x00, 0x00, 0x00, 0x62, 0x79, 0x74, 0x65, \
  0x5f, 0x61, 0x72, 0x72, 0x61, 0x79, 0x5f, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x00, 0x00, 0x00, 0x00, \
  0x23, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf3, 0x01, 0x00, 0x00, 0x01, \
  0x11, 0x00, 0x00, 0x00, 0x62, 0x6f, 0x6f, 0x6c, 0x5f, 0x61, 0x72, 0x72, 0x61, 0x79, 0x5f, 0x76, \
  0x61, 0x6c, 0x75, 0x65, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x80, 0xf3, 0x01, 0x00, 0x00, 0x05, 0x14, 0x00, 0x00, 0x00, 0x69, 0x6e, 0x74, 0x65, \
  0x67, 0x65, 0x72, 0x5f, 0x61, 0x72, 0x72, 0x61, 0x79, 0x5f, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf3, \
  0x01, 0x00, 0x00, 0x0a, 0x13, 0x00, 0x00, 0x00, 0x64, 0x6f, 0x75, 0x62, 0x6c, 0x65, 0x5f, 0x61, \
  0x72, 0x72, 0x61, 0x79, 0x5f, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x29, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0xf3, 0x01, 0x00, 0x00, 0x70, \
  0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x5f, 0x61, \
  0x72, 0x72, 0x61, 0x79, 0x5f, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x5e, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf2, 0xa4, 0x2f, 0x92, 0x5d, 0x76, 0xeb, 0x24, \
  0xcc, 0x26, 0xf5, 0x92, 0x28, 0xca, 0x92, 0xf1, 0x81, 0x6b, 0xd5, 0x43, 0xb3, 0x15, 0xf3, 0xd6, \
  0x9d, 0xa1, 0x25, 0xe7, 0x5f, 0x8f, 0xf2, 0xba, 0x65, 0xd3, 0xa1, 0xcf, 0x40, 0xd3, 0x30, 0x6a, \
  0xff, 0x14, 0x96, 0x9c, 0xdf, 0xf1, 0xab, 0x0d, 0x50, 0x0d, 0x74, 0x72, 0x15, 0x97, 0xd6, 0xed, \
  0x28, 0xa4, 0xba, 0x43, 0xf2, 0xc7, 0xc9, 0x58, 0xd1, 0x6f, 0x0e, 0x87, 0x6d, 0x5a, 0xdd, 0x89, \
  0x27, 0xb0, 0xee, 0xf1, 0xc0, 0xa5, 0x44, 0xa4, 0x81, 0xb0, 0x36, 0x9c, 0x91, 0x80, 0xdb, 0x81, \
  0x28, 0x6e\
}
#define TYPE_MAP_CDR_SZ_rcl_interfaces_srv_SetParametersAtomically_Request 1234u
const dds_topic_descriptor_t rcl_interfaces_srv_SetParametersAtomically_Request_desc =
{
  .m_size = sizeof (rcl_interfaces_srv_SetParametersAtomically_Request),
  .m_align = dds_alignof (rcl_interfaces_srv_SetParametersAtomically_Request),
  .m_flagset = DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "rcl_interfaces::srv::SetParametersAtomically_Request",
  .m_keys = NULL,
  .m_nops = 16,
  .m_ops = rcl_interfaces_srv_SetParametersAtomically_Request_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_rcl_interfaces_srv_SetParametersAtomically_Request, .sz = TYPE_INFO_CDR_SZ_rcl_interfaces_srv_SetParametersAtomically_Request },
  .type_mapping = { .data = TYPE_MAP_CDR_rcl_interfaces_srv_SetParametersAtomically_Request, .sz = TYPE_MAP_CDR_SZ_rcl_interfaces_srv_SetParametersAtomically_Request }
};

static const uint32_t rcl_interfaces_srv_SetParametersAtomically_Response_ops [] =
{
  /* SetParametersAtomically_Response */
  DDS_OP_ADR | DDS_OP_TYPE_EXT, offsetof (rcl_interfaces_srv_SetParametersAtomically_Response, result), (3u << 16u) + 4u /* SetParametersResult */,
  DDS_OP_RTS,

  /* SetParametersResult */
  DDS_OP_ADR | DDS_OP_TYPE_BLN, offsetof (rcl_interfaces_msg_SetParametersResult, successful),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (rcl_interfaces_msg_SetParametersResult, reason),
  DDS_OP_RTS
};

/* Type Information:
  [MINIMAL d7336eef9b41d1bba7bd8b51afb0] (#deps: 1)
   - [MINIMAL f8f473109865cde2721dcf6c1c65]
  [COMPLETE 8414e4d95f5d1b7656551f73b06a] (#deps: 1)
   - [COMPLETE 71ab366897349e187ec57f1683b8]
*/
#define TYPE_INFO_CDR_rcl_interfaces_srv_SetParametersAtomically_Response (unsigned char []){ \
  0x90, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, \
  0x14, 0x00, 0x00, 0x00, 0xf1, 0xd7, 0x33, 0x6e, 0xef, 0x9b, 0x41, 0xd1, 0xbb, 0xa7, 0xbd, 0x8b, \
  0x51, 0xaf, 0xb0, 0x00, 0x35, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xf1, 0xf8, 0xf4, 0x73, 0x10, 0x98, 0x65, 0xcd, \
  0xe2, 0x72, 0x1d, 0xcf, 0x6c, 0x1c, 0x65, 0x00, 0x38, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x40, \
  0x40, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xf2, 0x84, 0x14, 0xe4, \
  0xd9, 0x5f, 0x5d, 0x1b, 0x76, 0x56, 0x55, 0x1f, 0x73, 0xb0, 0x6a, 0x00, 0x7d, 0x00, 0x00, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, \
  0xf2, 0x71, 0xab, 0x36, 0x68, 0x97, 0x34, 0x9e, 0x18, 0x7e, 0xc5, 0x7f, 0x16, 0x83, 0xb8, 0x00, \
  0x81, 0x00, 0x00, 0x00\
}
#define TYPE_INFO_CDR_SZ_rcl_interfaces_srv_SetParametersAtomically_Response 148u
#define TYPE_MAP_CDR_rcl_interfaces_srv_SetParametersAtomically_Response (unsigned char []){ \
  0x90, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xf1, 0xd7, 0x33, 0x6e, 0xef, 0x9b, 0x41, 0xd1, \
  0xbb, 0xa7, 0xbd, 0x8b, 0x51, 0xaf, 0xb0, 0x00, 0x31, 0x00, 0x00, 0x00, 0xf1, 0x51, 0x01, 0x00, \
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xf1, 0xf8, 0xf4, 0x73, 0x10, 0x98, \
  0x65, 0xcd, 0xe2, 0x72, 0x1d, 0xcf, 0x6c, 0x1c, 0x65, 0xb4, 0xa8, 0x84, 0x17, 0xf1, 0xf8, 0xf4, \
  0x73, 0x10, 0x98, 0x65, 0xcd, 0xe2, 0x72, 0x1d, 0xcf, 0x6c, 0x1c, 0x65, 0x34, 0x00, 0x00, 0x00, \
  0xf1, 0x51, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, \
  0x02, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x80, \
  0x20, 0x24, 0xb2, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x70, 0x00, \
  0x40, 0xbe, 0xa8, 0xd6, 0x21, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xf2, 0x84, 0x14, 0xe4, \
  0xd9, 0x5f, 0x5d, 0x1b, 0x76, 0x56, 0x55, 0x1f, 0x73, 0xb0, 0x6a, 0x00, 0x79, 0x00, 0x00, 0x00, \
  0xf2, 0x51, 0x01, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x00, \
  0x72, 0x63, 0x6c, 0x5f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x66, 0x61, 0x63, 0x65, 0x73, 0x3a, 0x3a, \
  0x73, 0x72, 0x76, 0x3a, 0x3a, 0x53, 0x65, 0x74, 0x50, 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, 0x65, \
  0x72, 0x73, 0x41, 0x74, 0x6f, 0x6d, 0x69, 0x63, 0x61, 0x6c, 0x6c, 0x79, 0x5f, 0x52, 0x65, 0x73, \
  0x70, 0x6f, 0x6e, 0x73, 0x65, 0x00, 0x00, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, \
  0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xf2, 0x71, 0xab, 0x36, 0x68, 0x97, \
  0x34, 0x9e, 0x18, 0x7e, 0xc5, 0x7f, 0x16, 0x83, 0xb8, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, \
  0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x00, 0x00, 0x00, 0xf2, 0x71, 0xab, 0x36, 0x68, 0x97, 0x34, \
  0x9e, 0x18, 0x7e, 0xc5, 0x7f, 0x16, 0x83, 0xb8, 0x7d, 0x00, 0x00, 0x00, 0xf2, 0x51, 0x01, 0x00, \
  0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x72, 0x63, 0x6c, 0x5f, \
  0x69, 0x6e, 0x74, 0x65, 0x72, 0x66, 0x61, 0x63, 0x65, 0x73, 0x3a, 0x3a, 0x6d, 0x73, 0x67, 0x3a, \
  0x3a, 0x53, 0x65, 0x74, 0x50, 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, 0x65, 0x72, 0x73, 0x52, 0x65, \
  0x73, 0x75, 0x6c, 0x74, 0x00, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, \
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x0b, 0x00, 0x00, 0x00, \
  0x73, 0x75, 0x63, 0x63, 0x65, 0x73, 0x73, 0x66, 0x75, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x15, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x70, 0x00, 0x07, 0x00, 0x00, 0x00, \
  0x72, 0x65, 0x61, 0x73, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, \
  0x02, 0x00, 0x00, 0x00, 0xf2, 0x84, 0x14, 0xe4, 0xd9, 0x5f, 0x5d, 0x1b, 0x76, 0x56, 0x55, 0x1f, \
  0x73, 0xb0, 0x6a, 0xf1, 0xd7, 0x33, 0x6e, 0xef, 0x9b, 0x41, 0xd1, 0xbb, 0xa7, 0xbd, 0x8b, 0x51, \
  0xaf, 0xb0, 0xf2, 0x71, 0xab, 0x36, 0x68, 0x97, 0x34, 0x9e, 0x18, 0x7e, 0xc5, 0x7f, 0x16, 0x83, \
  0xb8, 0xf1, 0xf8, 0xf4, 0x73, 0x10, 0x98, 0x65, 0xcd, 0xe2, 0x72, 0x1d, 0xcf, 0x6c, 0x1c, 0x65\
}
#define TYPE_MAP_CDR_SZ_rcl_interfaces_srv_SetParametersAtomically_Response 512u
const dds_topic_descriptor_t rcl_interfaces_srv_SetParametersAtomically_Response_desc =
{
  .m_size = sizeof (rcl_interfaces_srv_SetParametersAtomically_Response),
  .m_align = dds_alignof (rcl_interfaces_srv_SetParametersAtomically_Response),
  .m_flagset = DDS_TOPIC_XTYPES_METADATA,
  .m_nkeys = 0u,
  .m_typename = "rcl_interfaces::srv::SetParametersAtomically_Response",
  .m_keys = NULL,
  .m_nops = 5,
  .m_ops = rcl_interfaces_srv_SetParametersAtomically_Response_ops,
  .m_meta = "",
  .type_information = { .data = TYPE_INFO_CDR_rcl_interfaces_srv_SetParametersAtomically_Response, .sz = TYPE_INFO_CDR_SZ_rcl_interfaces_srv_SetParametersAtomically_Response },
  .type_mapping = { .data = TYPE_MAP_CDR_rcl_interfaces_srv_SetParametersAtomically_Response, .sz = TYPE_MAP_CDR_SZ_rcl_interfaces_srv_SetParametersAtomically_Response }
};

