/* Defines needed on non-OpenBSD systems */
#if !defined(SADB_X_ADDFLOW) && defined(SADB_X_SPDADD)
#define SADB_X_ADDFLOW  SADB_X_SPDADD
#endif
#if !defined(SADB_X_DELFLOW) && defined(SADB_X_SPDDELETE)
#define SADB_X_DELFLOW  SADB_X_SPDDELETE
#endif
#if !defined(SADB_X_FLOW_TYPE_DENY)
#define SADB_X_FLOW_TYPE_DENY   1
#endif
#if !defined(SADB_X_EXT_SRC_FLOW) && defined(SADB_EXT_ADDRESS_SRC)
#define SADB_X_EXT_SRC_FLOW  SADB_EXT_ADDRESS_SRC
#endif
#if !defined(SADB_X_EXT_DST_FLOW) && defined(SADB_EXT_ADDRESS_DST)
#define SADB_X_EXT_DST_FLOW  SADB_EXT_ADDRESS_DST
#endif

/* Needed at least for IPSEC_MODE_TUNNEL, IPSEC_MODE_TRANSPORT */
#include <netipsec/ipsec.h>
