/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: /home/r22052/workspace/csdk/build/autel_msgs/src/example_interfaces/msg/MultiArrayLayout.h
  Source: /home/r22052/workspace/csdk/build/autel_msgs/idl/example_interfaces/msg/MultiArrayLayout.idl
  Cyclone DDS: V0.10.4

*****************************************************************/
#ifndef DDSC__HOME_R22052_WORKSPACE_CSDK_BUILD_AUTEL_MSGS_SRC_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_H
#define DDSC__HOME_R22052_WORKSPACE_CSDK_BUILD_AUTEL_MSGS_SRC_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_H

#include "example_interfaces/msg/MultiArrayDimension.h"

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef DDS_SEQUENCE_EXAMPLE_INTERFACES_MSG_MULTIARRAYDIMENSION_DEFINED
#define DDS_SEQUENCE_EXAMPLE_INTERFACES_MSG_MULTIARRAYDIMENSION_DEFINED
typedef struct dds_sequence_example_interfaces_msg_MultiArrayDimension
{
  uint32_t _maximum;
  uint32_t _length;
  struct example_interfaces_msg_MultiArrayDimension *_buffer;
  bool _release;
} dds_sequence_example_interfaces_msg_MultiArrayDimension;

#define dds_sequence_example_interfaces_msg_MultiArrayDimension__alloc() \
((dds_sequence_example_interfaces_msg_MultiArrayDimension*) dds_alloc (sizeof (dds_sequence_example_interfaces_msg_MultiArrayDimension)));

#define dds_sequence_example_interfaces_msg_MultiArrayDimension_allocbuf(l) \
((struct example_interfaces_msg_MultiArrayDimension *) dds_alloc ((l) * sizeof (struct example_interfaces_msg_MultiArrayDimension)))
#endif /* DDS_SEQUENCE_EXAMPLE_INTERFACES_MSG_MULTIARRAYDIMENSION_DEFINED */

typedef struct example_interfaces_msg_MultiArrayLayout
{
  dds_sequence_example_interfaces_msg_MultiArrayDimension dim;
  uint32_t data_offset;
} example_interfaces_msg_MultiArrayLayout;

extern const dds_topic_descriptor_t example_interfaces_msg_MultiArrayLayout_desc;

#define example_interfaces_msg_MultiArrayLayout__alloc() \
((example_interfaces_msg_MultiArrayLayout*) dds_alloc (sizeof (example_interfaces_msg_MultiArrayLayout)));

#define example_interfaces_msg_MultiArrayLayout_free(d,o) \
dds_sample_free ((d), &example_interfaces_msg_MultiArrayLayout_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC__HOME_R22052_WORKSPACE_CSDK_BUILD_AUTEL_MSGS_SRC_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_H */
