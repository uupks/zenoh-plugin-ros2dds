/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: rcl_interfaces/msg/Log.h
  Source: rcl_interfaces/msg/Log.idl
  Cyclone DDS: V0.10.4

*****************************************************************/
#ifndef DDSC__HOME_R22052_WORKSPACE_CSDK_BUILD_AUTEL_MSGS_SRC_RCL_INTERFACES_MSG_LOG_H
#define DDSC__HOME_R22052_WORKSPACE_CSDK_BUILD_AUTEL_MSGS_SRC_RCL_INTERFACES_MSG_LOG_H

#include "builtin_interfaces/msg/Time.h"

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

#define rcl_interfaces_msg_Log_Constants_DEBUG 10
#define rcl_interfaces_msg_Log_Constants_INFO 20
#define rcl_interfaces_msg_Log_Constants_WARN 30
#define rcl_interfaces_msg_Log_Constants_ERROR 40
#define rcl_interfaces_msg_Log_Constants_FATAL 50
typedef struct rcl_interfaces_msg_Log
{
  struct builtin_interfaces_msg_Time stamp;
  uint8_t level;
  char * name;
  char * msg;
  char * file;
  char * function;
  uint32_t line;
} rcl_interfaces_msg_Log;

extern const dds_topic_descriptor_t rcl_interfaces_msg_Log_desc;

#define rcl_interfaces_msg_Log__alloc() \
((rcl_interfaces_msg_Log*) dds_alloc (sizeof (rcl_interfaces_msg_Log)));

#define rcl_interfaces_msg_Log_free(d,o) \
dds_sample_free ((d), &rcl_interfaces_msg_Log_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC__HOME_R22052_WORKSPACE_CSDK_BUILD_AUTEL_MSGS_SRC_RCL_INTERFACES_MSG_LOG_H */
