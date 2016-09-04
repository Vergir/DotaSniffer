/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: connectionless_netmessages.proto */

#ifndef PROTOBUF_C_connectionless_5fnetmessages_2eproto__INCLUDED
#define PROTOBUF_C_connectionless_5fnetmessages_2eproto__INCLUDED

#include "protobuf-c.h"

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "netmessages.pb-c.h"

typedef struct _C2SCONNECTMessage C2SCONNECTMessage;
typedef struct _C2SCONNECTIONMessage C2SCONNECTIONMessage;


/* --- enums --- */


/* --- messages --- */

struct  _C2SCONNECTMessage
{
  ProtobufCMessage base;
  protobuf_c_boolean has_host_version;
  uint32_t host_version;
  protobuf_c_boolean has_auth_protocol;
  uint32_t auth_protocol;
  protobuf_c_boolean has_challenge_number;
  uint32_t challenge_number;
  protobuf_c_boolean has_reservation_cookie;
  uint64_t reservation_cookie;
  protobuf_c_boolean has_low_violence;
  protobuf_c_boolean low_violence;
  protobuf_c_boolean has_encrypted_password;
  ProtobufCBinaryData encrypted_password;
  size_t n_splitplayers;
  CCLCMsgSplitPlayerConnect **splitplayers;
  protobuf_c_boolean has_auth_steam;
  ProtobufCBinaryData auth_steam;
  char *challenge_context;
};
#define C2_S__CONNECT__MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&c2_s__connect__message__descriptor) \
    , 0,0, 0,0, 0,0, 0,0, 0,0, 0,{0,NULL}, 0,NULL, 0,{0,NULL}, NULL }


struct  _C2SCONNECTIONMessage
{
  ProtobufCMessage base;
  char *addon_name;
};
#define C2_S__CONNECTION__MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&c2_s__connection__message__descriptor) \
    , NULL }


/* C2SCONNECTMessage methods */
void   c2_s__connect__message__init
                     (C2SCONNECTMessage         *message);
size_t c2_s__connect__message__get_packed_size
                     (const C2SCONNECTMessage   *message);
size_t c2_s__connect__message__pack
                     (const C2SCONNECTMessage   *message,
                      uint8_t             *out);
size_t c2_s__connect__message__pack_to_buffer
                     (const C2SCONNECTMessage   *message,
                      ProtobufCBuffer     *buffer);
C2SCONNECTMessage *
       c2_s__connect__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   c2_s__connect__message__free_unpacked
                     (C2SCONNECTMessage *message,
                      ProtobufCAllocator *allocator);
/* C2SCONNECTIONMessage methods */
void   c2_s__connection__message__init
                     (C2SCONNECTIONMessage         *message);
size_t c2_s__connection__message__get_packed_size
                     (const C2SCONNECTIONMessage   *message);
size_t c2_s__connection__message__pack
                     (const C2SCONNECTIONMessage   *message,
                      uint8_t             *out);
size_t c2_s__connection__message__pack_to_buffer
                     (const C2SCONNECTIONMessage   *message,
                      ProtobufCBuffer     *buffer);
C2SCONNECTIONMessage *
       c2_s__connection__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   c2_s__connection__message__free_unpacked
                     (C2SCONNECTIONMessage *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*C2SCONNECTMessage_Closure)
                 (const C2SCONNECTMessage *message,
                  void *closure_data);
typedef void (*C2SCONNECTIONMessage_Closure)
                 (const C2SCONNECTIONMessage *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor c2_s__connect__message__descriptor;
extern const ProtobufCMessageDescriptor c2_s__connection__message__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_connectionless_5fnetmessages_2eproto__INCLUDED */