/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: gametoolevents.proto */

#ifndef PROTOBUF_C_gametoolevents_2eproto__INCLUDED
#define PROTOBUF_C_gametoolevents_2eproto__INCLUDED

#include "protobuf-c.h"

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "networkbasetypes.pb-c.h"

typedef struct _ChangeMapToolEvent ChangeMapToolEvent;
typedef struct _TraceRayServerToolEvent TraceRayServerToolEvent;
typedef struct _ToolTraceRayResult ToolTraceRayResult;
typedef struct _SpawnEntityToolEvent SpawnEntityToolEvent;
typedef struct _SpawnEntityToolEventResult SpawnEntityToolEventResult;
typedef struct _DestroyEntityToolEvent DestroyEntityToolEvent;
typedef struct _DestroyAllEntitiesToolEvent DestroyAllEntitiesToolEvent;
typedef struct _RestartMapToolEvent RestartMapToolEvent;
typedef struct _ToolEventGetEntityInfo ToolEventGetEntityInfo;
typedef struct _ToolEventGetEntityInfoResult ToolEventGetEntityInfoResult;
typedef struct _ToolEventGetEntityInputs ToolEventGetEntityInputs;
typedef struct _ToolEventGetEntityInputsResult ToolEventGetEntityInputsResult;
typedef struct _ToolEventFireEntityInput ToolEventFireEntityInput;
typedef struct _ToolEventSFMRecordingStateChanged ToolEventSFMRecordingStateChanged;
typedef struct _ToolEventSFMToolActiveStateChanged ToolEventSFMToolActiveStateChanged;


/* --- enums --- */


/* --- messages --- */

struct  _ChangeMapToolEvent
{
  ProtobufCMessage base;
  char *mapname;
};
#define CHANGE_MAP_TOOL_EVENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&change_map_tool_event__descriptor) \
    , NULL }


struct  _TraceRayServerToolEvent
{
  ProtobufCMessage base;
  CMsgVector *start;
  CMsgVector *end;
};
#define TRACE_RAY_SERVER_TOOL_EVENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&trace_ray_server_tool_event__descriptor) \
    , NULL, NULL }


struct  _ToolTraceRayResult
{
  ProtobufCMessage base;
  protobuf_c_boolean has_hit;
  protobuf_c_boolean hit;
  CMsgVector *impact;
  CMsgVector *normal;
  protobuf_c_boolean has_distance;
  float distance;
  protobuf_c_boolean has_fraction;
  float fraction;
  protobuf_c_boolean has_ehandle;
  int32_t ehandle;
};
#define TOOL_TRACE_RAY_RESULT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tool_trace_ray_result__descriptor) \
    , 0,0, NULL, NULL, 0,0, 0,0, 0,0 }


struct  _SpawnEntityToolEvent
{
  ProtobufCMessage base;
  protobuf_c_boolean has_entity_keyvalues;
  ProtobufCBinaryData entity_keyvalues;
  protobuf_c_boolean has_clientsideentity;
  protobuf_c_boolean clientsideentity;
};
#define SPAWN_ENTITY_TOOL_EVENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&spawn_entity_tool_event__descriptor) \
    , 0,{0,NULL}, 0,0 }


struct  _SpawnEntityToolEventResult
{
  ProtobufCMessage base;
  protobuf_c_boolean has_ehandle;
  int32_t ehandle;
};
#define SPAWN_ENTITY_TOOL_EVENT_RESULT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&spawn_entity_tool_event_result__descriptor) \
    , 0,0 }


struct  _DestroyEntityToolEvent
{
  ProtobufCMessage base;
  protobuf_c_boolean has_ehandle;
  int32_t ehandle;
};
#define DESTROY_ENTITY_TOOL_EVENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&destroy_entity_tool_event__descriptor) \
    , 0,0 }


struct  _DestroyAllEntitiesToolEvent
{
  ProtobufCMessage base;
};
#define DESTROY_ALL_ENTITIES_TOOL_EVENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&destroy_all_entities_tool_event__descriptor) \
     }


struct  _RestartMapToolEvent
{
  ProtobufCMessage base;
};
#define RESTART_MAP_TOOL_EVENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&restart_map_tool_event__descriptor) \
     }


struct  _ToolEventGetEntityInfo
{
  ProtobufCMessage base;
  protobuf_c_boolean has_ehandle;
  int32_t ehandle;
  protobuf_c_boolean has_clientsideentity;
  protobuf_c_boolean clientsideentity;
};
#define TOOL_EVENT__GET_ENTITY_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tool_event__get_entity_info__descriptor) \
    , 0,0, 0,0 }


struct  _ToolEventGetEntityInfoResult
{
  ProtobufCMessage base;
  char *cppclass;
  char *classname;
  char *name;
  CMsgVector *origin;
  CMsgVector *mins;
  CMsgVector *maxs;
};
extern char tool_event__get_entity_info_result__cppclass__default_value[];
#define TOOL_EVENT__GET_ENTITY_INFO_RESULT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tool_event__get_entity_info_result__descriptor) \
    , tool_event__get_entity_info_result__cppclass__default_value, NULL, NULL, NULL, NULL, NULL }


struct  _ToolEventGetEntityInputs
{
  ProtobufCMessage base;
  protobuf_c_boolean has_ehandle;
  int32_t ehandle;
  protobuf_c_boolean has_clientsideentity;
  protobuf_c_boolean clientsideentity;
};
#define TOOL_EVENT__GET_ENTITY_INPUTS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tool_event__get_entity_inputs__descriptor) \
    , 0,0, 0,0 }


struct  _ToolEventGetEntityInputsResult
{
  ProtobufCMessage base;
  size_t n_input_list;
  char **input_list;
};
#define TOOL_EVENT__GET_ENTITY_INPUTS_RESULT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tool_event__get_entity_inputs_result__descriptor) \
    , 0,NULL }


struct  _ToolEventFireEntityInput
{
  ProtobufCMessage base;
  protobuf_c_boolean has_ehandle;
  int32_t ehandle;
  protobuf_c_boolean has_clientsideentity;
  protobuf_c_boolean clientsideentity;
  char *input_name;
  char *input_param;
};
#define TOOL_EVENT__FIRE_ENTITY_INPUT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tool_event__fire_entity_input__descriptor) \
    , 0,0, 0,0, NULL, NULL }


struct  _ToolEventSFMRecordingStateChanged
{
  ProtobufCMessage base;
  protobuf_c_boolean has_isrecording;
  protobuf_c_boolean isrecording;
};
#define TOOL_EVENT__SFMRECORDING_STATE_CHANGED__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tool_event__sfmrecording_state_changed__descriptor) \
    , 0,0 }


struct  _ToolEventSFMToolActiveStateChanged
{
  ProtobufCMessage base;
  protobuf_c_boolean has_isactive;
  protobuf_c_boolean isactive;
};
#define TOOL_EVENT__SFMTOOL_ACTIVE_STATE_CHANGED__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tool_event__sfmtool_active_state_changed__descriptor) \
    , 0,0 }


/* ChangeMapToolEvent methods */
void   change_map_tool_event__init
                     (ChangeMapToolEvent         *message);
size_t change_map_tool_event__get_packed_size
                     (const ChangeMapToolEvent   *message);
size_t change_map_tool_event__pack
                     (const ChangeMapToolEvent   *message,
                      uint8_t             *out);
size_t change_map_tool_event__pack_to_buffer
                     (const ChangeMapToolEvent   *message,
                      ProtobufCBuffer     *buffer);
ChangeMapToolEvent *
       change_map_tool_event__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   change_map_tool_event__free_unpacked
                     (ChangeMapToolEvent *message,
                      ProtobufCAllocator *allocator);
/* TraceRayServerToolEvent methods */
void   trace_ray_server_tool_event__init
                     (TraceRayServerToolEvent         *message);
size_t trace_ray_server_tool_event__get_packed_size
                     (const TraceRayServerToolEvent   *message);
size_t trace_ray_server_tool_event__pack
                     (const TraceRayServerToolEvent   *message,
                      uint8_t             *out);
size_t trace_ray_server_tool_event__pack_to_buffer
                     (const TraceRayServerToolEvent   *message,
                      ProtobufCBuffer     *buffer);
TraceRayServerToolEvent *
       trace_ray_server_tool_event__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   trace_ray_server_tool_event__free_unpacked
                     (TraceRayServerToolEvent *message,
                      ProtobufCAllocator *allocator);
/* ToolTraceRayResult methods */
void   tool_trace_ray_result__init
                     (ToolTraceRayResult         *message);
size_t tool_trace_ray_result__get_packed_size
                     (const ToolTraceRayResult   *message);
size_t tool_trace_ray_result__pack
                     (const ToolTraceRayResult   *message,
                      uint8_t             *out);
size_t tool_trace_ray_result__pack_to_buffer
                     (const ToolTraceRayResult   *message,
                      ProtobufCBuffer     *buffer);
ToolTraceRayResult *
       tool_trace_ray_result__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tool_trace_ray_result__free_unpacked
                     (ToolTraceRayResult *message,
                      ProtobufCAllocator *allocator);
/* SpawnEntityToolEvent methods */
void   spawn_entity_tool_event__init
                     (SpawnEntityToolEvent         *message);
size_t spawn_entity_tool_event__get_packed_size
                     (const SpawnEntityToolEvent   *message);
size_t spawn_entity_tool_event__pack
                     (const SpawnEntityToolEvent   *message,
                      uint8_t             *out);
size_t spawn_entity_tool_event__pack_to_buffer
                     (const SpawnEntityToolEvent   *message,
                      ProtobufCBuffer     *buffer);
SpawnEntityToolEvent *
       spawn_entity_tool_event__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   spawn_entity_tool_event__free_unpacked
                     (SpawnEntityToolEvent *message,
                      ProtobufCAllocator *allocator);
/* SpawnEntityToolEventResult methods */
void   spawn_entity_tool_event_result__init
                     (SpawnEntityToolEventResult         *message);
size_t spawn_entity_tool_event_result__get_packed_size
                     (const SpawnEntityToolEventResult   *message);
size_t spawn_entity_tool_event_result__pack
                     (const SpawnEntityToolEventResult   *message,
                      uint8_t             *out);
size_t spawn_entity_tool_event_result__pack_to_buffer
                     (const SpawnEntityToolEventResult   *message,
                      ProtobufCBuffer     *buffer);
SpawnEntityToolEventResult *
       spawn_entity_tool_event_result__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   spawn_entity_tool_event_result__free_unpacked
                     (SpawnEntityToolEventResult *message,
                      ProtobufCAllocator *allocator);
/* DestroyEntityToolEvent methods */
void   destroy_entity_tool_event__init
                     (DestroyEntityToolEvent         *message);
size_t destroy_entity_tool_event__get_packed_size
                     (const DestroyEntityToolEvent   *message);
size_t destroy_entity_tool_event__pack
                     (const DestroyEntityToolEvent   *message,
                      uint8_t             *out);
size_t destroy_entity_tool_event__pack_to_buffer
                     (const DestroyEntityToolEvent   *message,
                      ProtobufCBuffer     *buffer);
DestroyEntityToolEvent *
       destroy_entity_tool_event__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   destroy_entity_tool_event__free_unpacked
                     (DestroyEntityToolEvent *message,
                      ProtobufCAllocator *allocator);
/* DestroyAllEntitiesToolEvent methods */
void   destroy_all_entities_tool_event__init
                     (DestroyAllEntitiesToolEvent         *message);
size_t destroy_all_entities_tool_event__get_packed_size
                     (const DestroyAllEntitiesToolEvent   *message);
size_t destroy_all_entities_tool_event__pack
                     (const DestroyAllEntitiesToolEvent   *message,
                      uint8_t             *out);
size_t destroy_all_entities_tool_event__pack_to_buffer
                     (const DestroyAllEntitiesToolEvent   *message,
                      ProtobufCBuffer     *buffer);
DestroyAllEntitiesToolEvent *
       destroy_all_entities_tool_event__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   destroy_all_entities_tool_event__free_unpacked
                     (DestroyAllEntitiesToolEvent *message,
                      ProtobufCAllocator *allocator);
/* RestartMapToolEvent methods */
void   restart_map_tool_event__init
                     (RestartMapToolEvent         *message);
size_t restart_map_tool_event__get_packed_size
                     (const RestartMapToolEvent   *message);
size_t restart_map_tool_event__pack
                     (const RestartMapToolEvent   *message,
                      uint8_t             *out);
size_t restart_map_tool_event__pack_to_buffer
                     (const RestartMapToolEvent   *message,
                      ProtobufCBuffer     *buffer);
RestartMapToolEvent *
       restart_map_tool_event__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   restart_map_tool_event__free_unpacked
                     (RestartMapToolEvent *message,
                      ProtobufCAllocator *allocator);
/* ToolEventGetEntityInfo methods */
void   tool_event__get_entity_info__init
                     (ToolEventGetEntityInfo         *message);
size_t tool_event__get_entity_info__get_packed_size
                     (const ToolEventGetEntityInfo   *message);
size_t tool_event__get_entity_info__pack
                     (const ToolEventGetEntityInfo   *message,
                      uint8_t             *out);
size_t tool_event__get_entity_info__pack_to_buffer
                     (const ToolEventGetEntityInfo   *message,
                      ProtobufCBuffer     *buffer);
ToolEventGetEntityInfo *
       tool_event__get_entity_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tool_event__get_entity_info__free_unpacked
                     (ToolEventGetEntityInfo *message,
                      ProtobufCAllocator *allocator);
/* ToolEventGetEntityInfoResult methods */
void   tool_event__get_entity_info_result__init
                     (ToolEventGetEntityInfoResult         *message);
size_t tool_event__get_entity_info_result__get_packed_size
                     (const ToolEventGetEntityInfoResult   *message);
size_t tool_event__get_entity_info_result__pack
                     (const ToolEventGetEntityInfoResult   *message,
                      uint8_t             *out);
size_t tool_event__get_entity_info_result__pack_to_buffer
                     (const ToolEventGetEntityInfoResult   *message,
                      ProtobufCBuffer     *buffer);
ToolEventGetEntityInfoResult *
       tool_event__get_entity_info_result__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tool_event__get_entity_info_result__free_unpacked
                     (ToolEventGetEntityInfoResult *message,
                      ProtobufCAllocator *allocator);
/* ToolEventGetEntityInputs methods */
void   tool_event__get_entity_inputs__init
                     (ToolEventGetEntityInputs         *message);
size_t tool_event__get_entity_inputs__get_packed_size
                     (const ToolEventGetEntityInputs   *message);
size_t tool_event__get_entity_inputs__pack
                     (const ToolEventGetEntityInputs   *message,
                      uint8_t             *out);
size_t tool_event__get_entity_inputs__pack_to_buffer
                     (const ToolEventGetEntityInputs   *message,
                      ProtobufCBuffer     *buffer);
ToolEventGetEntityInputs *
       tool_event__get_entity_inputs__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tool_event__get_entity_inputs__free_unpacked
                     (ToolEventGetEntityInputs *message,
                      ProtobufCAllocator *allocator);
/* ToolEventGetEntityInputsResult methods */
void   tool_event__get_entity_inputs_result__init
                     (ToolEventGetEntityInputsResult         *message);
size_t tool_event__get_entity_inputs_result__get_packed_size
                     (const ToolEventGetEntityInputsResult   *message);
size_t tool_event__get_entity_inputs_result__pack
                     (const ToolEventGetEntityInputsResult   *message,
                      uint8_t             *out);
size_t tool_event__get_entity_inputs_result__pack_to_buffer
                     (const ToolEventGetEntityInputsResult   *message,
                      ProtobufCBuffer     *buffer);
ToolEventGetEntityInputsResult *
       tool_event__get_entity_inputs_result__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tool_event__get_entity_inputs_result__free_unpacked
                     (ToolEventGetEntityInputsResult *message,
                      ProtobufCAllocator *allocator);
/* ToolEventFireEntityInput methods */
void   tool_event__fire_entity_input__init
                     (ToolEventFireEntityInput         *message);
size_t tool_event__fire_entity_input__get_packed_size
                     (const ToolEventFireEntityInput   *message);
size_t tool_event__fire_entity_input__pack
                     (const ToolEventFireEntityInput   *message,
                      uint8_t             *out);
size_t tool_event__fire_entity_input__pack_to_buffer
                     (const ToolEventFireEntityInput   *message,
                      ProtobufCBuffer     *buffer);
ToolEventFireEntityInput *
       tool_event__fire_entity_input__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tool_event__fire_entity_input__free_unpacked
                     (ToolEventFireEntityInput *message,
                      ProtobufCAllocator *allocator);
/* ToolEventSFMRecordingStateChanged methods */
void   tool_event__sfmrecording_state_changed__init
                     (ToolEventSFMRecordingStateChanged         *message);
size_t tool_event__sfmrecording_state_changed__get_packed_size
                     (const ToolEventSFMRecordingStateChanged   *message);
size_t tool_event__sfmrecording_state_changed__pack
                     (const ToolEventSFMRecordingStateChanged   *message,
                      uint8_t             *out);
size_t tool_event__sfmrecording_state_changed__pack_to_buffer
                     (const ToolEventSFMRecordingStateChanged   *message,
                      ProtobufCBuffer     *buffer);
ToolEventSFMRecordingStateChanged *
       tool_event__sfmrecording_state_changed__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tool_event__sfmrecording_state_changed__free_unpacked
                     (ToolEventSFMRecordingStateChanged *message,
                      ProtobufCAllocator *allocator);
/* ToolEventSFMToolActiveStateChanged methods */
void   tool_event__sfmtool_active_state_changed__init
                     (ToolEventSFMToolActiveStateChanged         *message);
size_t tool_event__sfmtool_active_state_changed__get_packed_size
                     (const ToolEventSFMToolActiveStateChanged   *message);
size_t tool_event__sfmtool_active_state_changed__pack
                     (const ToolEventSFMToolActiveStateChanged   *message,
                      uint8_t             *out);
size_t tool_event__sfmtool_active_state_changed__pack_to_buffer
                     (const ToolEventSFMToolActiveStateChanged   *message,
                      ProtobufCBuffer     *buffer);
ToolEventSFMToolActiveStateChanged *
       tool_event__sfmtool_active_state_changed__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tool_event__sfmtool_active_state_changed__free_unpacked
                     (ToolEventSFMToolActiveStateChanged *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*ChangeMapToolEvent_Closure)
                 (const ChangeMapToolEvent *message,
                  void *closure_data);
typedef void (*TraceRayServerToolEvent_Closure)
                 (const TraceRayServerToolEvent *message,
                  void *closure_data);
typedef void (*ToolTraceRayResult_Closure)
                 (const ToolTraceRayResult *message,
                  void *closure_data);
typedef void (*SpawnEntityToolEvent_Closure)
                 (const SpawnEntityToolEvent *message,
                  void *closure_data);
typedef void (*SpawnEntityToolEventResult_Closure)
                 (const SpawnEntityToolEventResult *message,
                  void *closure_data);
typedef void (*DestroyEntityToolEvent_Closure)
                 (const DestroyEntityToolEvent *message,
                  void *closure_data);
typedef void (*DestroyAllEntitiesToolEvent_Closure)
                 (const DestroyAllEntitiesToolEvent *message,
                  void *closure_data);
typedef void (*RestartMapToolEvent_Closure)
                 (const RestartMapToolEvent *message,
                  void *closure_data);
typedef void (*ToolEventGetEntityInfo_Closure)
                 (const ToolEventGetEntityInfo *message,
                  void *closure_data);
typedef void (*ToolEventGetEntityInfoResult_Closure)
                 (const ToolEventGetEntityInfoResult *message,
                  void *closure_data);
typedef void (*ToolEventGetEntityInputs_Closure)
                 (const ToolEventGetEntityInputs *message,
                  void *closure_data);
typedef void (*ToolEventGetEntityInputsResult_Closure)
                 (const ToolEventGetEntityInputsResult *message,
                  void *closure_data);
typedef void (*ToolEventFireEntityInput_Closure)
                 (const ToolEventFireEntityInput *message,
                  void *closure_data);
typedef void (*ToolEventSFMRecordingStateChanged_Closure)
                 (const ToolEventSFMRecordingStateChanged *message,
                  void *closure_data);
typedef void (*ToolEventSFMToolActiveStateChanged_Closure)
                 (const ToolEventSFMToolActiveStateChanged *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor change_map_tool_event__descriptor;
extern const ProtobufCMessageDescriptor trace_ray_server_tool_event__descriptor;
extern const ProtobufCMessageDescriptor tool_trace_ray_result__descriptor;
extern const ProtobufCMessageDescriptor spawn_entity_tool_event__descriptor;
extern const ProtobufCMessageDescriptor spawn_entity_tool_event_result__descriptor;
extern const ProtobufCMessageDescriptor destroy_entity_tool_event__descriptor;
extern const ProtobufCMessageDescriptor destroy_all_entities_tool_event__descriptor;
extern const ProtobufCMessageDescriptor restart_map_tool_event__descriptor;
extern const ProtobufCMessageDescriptor tool_event__get_entity_info__descriptor;
extern const ProtobufCMessageDescriptor tool_event__get_entity_info_result__descriptor;
extern const ProtobufCMessageDescriptor tool_event__get_entity_inputs__descriptor;
extern const ProtobufCMessageDescriptor tool_event__get_entity_inputs_result__descriptor;
extern const ProtobufCMessageDescriptor tool_event__fire_entity_input__descriptor;
extern const ProtobufCMessageDescriptor tool_event__sfmrecording_state_changed__descriptor;
extern const ProtobufCMessageDescriptor tool_event__sfmtool_active_state_changed__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_gametoolevents_2eproto__INCLUDED */
