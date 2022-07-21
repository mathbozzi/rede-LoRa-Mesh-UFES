/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.4 */

#ifndef PB_CANNEDMESSAGES_PB_H_INCLUDED
#define PB_CANNEDMESSAGES_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _CannedMessagePluginConfig {
    char messagesPart1[201];
    char messagesPart2[201];
    char messagesPart3[201];
    char messagesPart4[201];
} CannedMessagePluginConfig;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define CannedMessagePluginConfig_init_default   {"", "", "", ""}
#define CannedMessagePluginConfig_init_zero      {"", "", "", ""}

/* Field tags (for use in manual encoding/decoding) */
#define CannedMessagePluginConfig_messagesPart1_tag 11
#define CannedMessagePluginConfig_messagesPart2_tag 12
#define CannedMessagePluginConfig_messagesPart3_tag 13
#define CannedMessagePluginConfig_messagesPart4_tag 14

/* Struct field encoding specification for nanopb */
#define CannedMessagePluginConfig_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   messagesPart1,    11) \
X(a, STATIC,   SINGULAR, STRING,   messagesPart2,    12) \
X(a, STATIC,   SINGULAR, STRING,   messagesPart3,    13) \
X(a, STATIC,   SINGULAR, STRING,   messagesPart4,    14)
#define CannedMessagePluginConfig_CALLBACK NULL
#define CannedMessagePluginConfig_DEFAULT NULL

extern const pb_msgdesc_t CannedMessagePluginConfig_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define CannedMessagePluginConfig_fields &CannedMessagePluginConfig_msg

/* Maximum encoded size of messages (where known) */
#define CannedMessagePluginConfig_size           812

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif