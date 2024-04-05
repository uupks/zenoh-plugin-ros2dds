/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: /home/r22052/workspace/csdk/build/autel_msgs/src/rcl_interfaces/srv/SetParametersAtomically.h
  Source: /home/r22052/workspace/csdk/build/autel_msgs/idl/rcl_interfaces/srv/SetParametersAtomically.idl
  Cyclone DDS: V0.10.4

*****************************************************************/
#ifndef DDSC__HOME_R22052_WORKSPACE_CSDK_BUILD_AUTEL_MSGS_SRC_RCL_INTERFACES_SRV_SETPARAMETERSATOMICALLY_H
#define DDSC__HOME_R22052_WORKSPACE_CSDK_BUILD_AUTEL_MSGS_SRC_RCL_INTERFACES_SRV_SETPARAMETERSATOMICALLY_H

#include "rcl_interfaces/msg/Parameter.h"

#include "rcl_interfaces/msg/SetParametersResult.h"

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef DDS_SEQUENCE_RCL_INTERFACES_MSG_PARAMETER_DEFINED
#define DDS_SEQUENCE_RCL_INTERFACES_MSG_PARAMETER_DEFINED
typedef struct dds_sequence_rcl_interfaces_msg_Parameter
{
  uint32_t _maximum;
  uint32_t _length;
  struct rcl_interfaces_msg_Parameter *_buffer;
  bool _release;
} dds_sequence_rcl_interfaces_msg_Parameter;

#define dds_sequence_rcl_interfaces_msg_Parameter__alloc() \
((dds_sequence_rcl_interfaces_msg_Parameter*) dds_alloc (sizeof (dds_sequence_rcl_interfaces_msg_Parameter)));

#define dds_sequence_rcl_interfaces_msg_Parameter_allocbuf(l) \
((struct rcl_interfaces_msg_Parameter *) dds_alloc ((l) * sizeof (struct rcl_interfaces_msg_Parameter)))
#endif /* DDS_SEQUENCE_RCL_INTERFACES_MSG_PARAMETER_DEFINED */

typedef struct rcl_interfaces_srv_SetParametersAtomically_Request
{
  dds_sequence_rcl_interfaces_msg_Parameter parameters;
} rcl_interfaces_srv_SetParametersAtomically_Request;

extern const dds_topic_descriptor_t rcl_interfaces_srv_SetParametersAtomically_Request_desc;

#define rcl_interfaces_srv_SetParametersAtomically_Request__alloc() \
((rcl_interfaces_srv_SetParametersAtomically_Request*) dds_alloc (sizeof (rcl_interfaces_srv_SetParametersAtomically_Request)));

#define rcl_interfaces_srv_SetParametersAtomically_Request_free(d,o) \
dds_sample_free ((d), &rcl_interfaces_srv_SetParametersAtomically_Request_desc, (o))

typedef struct rcl_interfaces_srv_SetParametersAtomically_Response
{
  struct rcl_interfaces_msg_SetParametersResult result;
} rcl_interfaces_srv_SetParametersAtomically_Response;

extern const dds_topic_descriptor_t rcl_interfaces_srv_SetParametersAtomically_Response_desc;

#define rcl_interfaces_srv_SetParametersAtomically_Response__alloc() \
((rcl_interfaces_srv_SetParametersAtomically_Response*) dds_alloc (sizeof (rcl_interfaces_srv_SetParametersAtomically_Response)));

#define rcl_interfaces_srv_SetParametersAtomically_Response_free(d,o) \
dds_sample_free ((d), &rcl_interfaces_srv_SetParametersAtomically_Response_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC__HOME_R22052_WORKSPACE_CSDK_BUILD_AUTEL_MSGS_SRC_RCL_INTERFACES_SRV_SETPARAMETERSATOMICALLY_H */
