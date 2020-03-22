#if !defined(SADB_X_ADDFLOW) && defined(SADB_X_SPDADD)
#define SADB_X_ADDFLOW  SADB_X_SPDADD
#endif
#if !defined(SADB_X_DELFLOW) && defined(SADB_X_SPDDELETE)
#define SADB_X_DELFLOW  SADB_X_SPDDELETE
#endif
#if !defined(SADB_X_FLOW_TYPE_DENY)
#define SADB_X_FLOW_TYPE_DENY   1
#endif
