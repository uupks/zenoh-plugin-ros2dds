/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: /home/r22052/workspace/csdk/build/autel_msgs/src/example_interfaces/msg/Float64.h
  Source: /home/r22052/workspace/csdk/build/autel_msgs/idl/example_interfaces/msg/Float64.idl
  Cyclone DDS: V0.10.4

*****************************************************************/
#ifndef DDSC__HOME_R22052_WORKSPACE_CSDK_BUILD_AUTEL_MSGS_SRC_EXAMPLE_INTERFACES_MSG_FLOAT64_H
#define DDSC__HOME_R22052_WORKSPACE_CSDK_BUILD_AUTEL_MSGS_SRC_EXAMPLE_INTERFACES_MSG_FLOAT64_H

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct example_interfaces_msg_Float64
{
  double data;
} example_interfaces_msg_Float64;

extern const dds_topic_descriptor_t example_interfaces_msg_Float64_desc;

#define example_interfaces_msg_Float64__alloc() \
((example_interfaces_msg_Float64*) dds_alloc (sizeof (example_interfaces_msg_Float64)));

#define example_interfaces_msg_Float64_free(d,o) \
dds_sample_free ((d), &example_interfaces_msg_Float64_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC__HOME_R22052_WORKSPACE_CSDK_BUILD_AUTEL_MSGS_SRC_EXAMPLE_INTERFACES_MSG_FLOAT64_H */
