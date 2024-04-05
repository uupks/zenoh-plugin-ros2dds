/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: /home/r22052/workspace/csdk/build/autel_msgs/src/example_interfaces/srv/SetBool.h
  Source: /home/r22052/workspace/csdk/build/autel_msgs/idl/example_interfaces/srv/SetBool.idl
  Cyclone DDS: V0.10.4

*****************************************************************/
#ifndef DDSC__HOME_R22052_WORKSPACE_CSDK_BUILD_AUTEL_MSGS_SRC_EXAMPLE_INTERFACES_SRV_SETBOOL_H
#define DDSC__HOME_R22052_WORKSPACE_CSDK_BUILD_AUTEL_MSGS_SRC_EXAMPLE_INTERFACES_SRV_SETBOOL_H

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct example_interfaces_srv_SetBool_Request
{
  bool data;
} example_interfaces_srv_SetBool_Request;

extern const dds_topic_descriptor_t example_interfaces_srv_SetBool_Request_desc;

#define example_interfaces_srv_SetBool_Request__alloc() \
((example_interfaces_srv_SetBool_Request*) dds_alloc (sizeof (example_interfaces_srv_SetBool_Request)));

#define example_interfaces_srv_SetBool_Request_free(d,o) \
dds_sample_free ((d), &example_interfaces_srv_SetBool_Request_desc, (o))

typedef struct example_interfaces_srv_SetBool_Response
{
  bool success;
  char * message;
} example_interfaces_srv_SetBool_Response;

extern const dds_topic_descriptor_t example_interfaces_srv_SetBool_Response_desc;

#define example_interfaces_srv_SetBool_Response__alloc() \
((example_interfaces_srv_SetBool_Response*) dds_alloc (sizeof (example_interfaces_srv_SetBool_Response)));

#define example_interfaces_srv_SetBool_Response_free(d,o) \
dds_sample_free ((d), &example_interfaces_srv_SetBool_Response_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC__HOME_R22052_WORKSPACE_CSDK_BUILD_AUTEL_MSGS_SRC_EXAMPLE_INTERFACES_SRV_SETBOOL_H */
