/* Generated by ./xlat/gen.sh from ./xlat/socksctpoptions.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat socksctpoptions in mpers mode

#else

static
const struct xlat socksctpoptions[] = {
#if defined(SCTP_RTOINFO) || (defined(HAVE_DECL_SCTP_RTOINFO) && HAVE_DECL_SCTP_RTOINFO)
  XLAT(SCTP_RTOINFO),
#endif
#if defined(SCTP_ASSOCINFO) || (defined(HAVE_DECL_SCTP_ASSOCINFO) && HAVE_DECL_SCTP_ASSOCINFO)
  XLAT(SCTP_ASSOCINFO),
#endif
#if defined(SCTP_INITMSG) || (defined(HAVE_DECL_SCTP_INITMSG) && HAVE_DECL_SCTP_INITMSG)
  XLAT(SCTP_INITMSG),
#endif
#if defined(SCTP_NODELAY) || (defined(HAVE_DECL_SCTP_NODELAY) && HAVE_DECL_SCTP_NODELAY)
  XLAT(SCTP_NODELAY),
#endif
#if defined(SCTP_AUTOCLOSE) || (defined(HAVE_DECL_SCTP_AUTOCLOSE) && HAVE_DECL_SCTP_AUTOCLOSE)
  XLAT(SCTP_AUTOCLOSE),
#endif
#if defined(SCTP_SET_PEER_PRIMARY_ADDR) || (defined(HAVE_DECL_SCTP_SET_PEER_PRIMARY_ADDR) && HAVE_DECL_SCTP_SET_PEER_PRIMARY_ADDR)
  XLAT(SCTP_SET_PEER_PRIMARY_ADDR),
#endif
#if defined(SCTP_PRIMARY_ADDR) || (defined(HAVE_DECL_SCTP_PRIMARY_ADDR) && HAVE_DECL_SCTP_PRIMARY_ADDR)
  XLAT(SCTP_PRIMARY_ADDR),
#endif
#if defined(SCTP_ADAPTATION_LAYER) || (defined(HAVE_DECL_SCTP_ADAPTATION_LAYER) && HAVE_DECL_SCTP_ADAPTATION_LAYER)
  XLAT(SCTP_ADAPTATION_LAYER),
#endif
#if defined(SCTP_DISABLE_FRAGMENTS) || (defined(HAVE_DECL_SCTP_DISABLE_FRAGMENTS) && HAVE_DECL_SCTP_DISABLE_FRAGMENTS)
  XLAT(SCTP_DISABLE_FRAGMENTS),
#endif
#if defined(SCTP_PEER_ADDR_PARAMS) || (defined(HAVE_DECL_SCTP_PEER_ADDR_PARAMS) && HAVE_DECL_SCTP_PEER_ADDR_PARAMS)
  XLAT(SCTP_PEER_ADDR_PARAMS),
#endif
#if defined(SCTP_DEFAULT_SEND_PARAM) || (defined(HAVE_DECL_SCTP_DEFAULT_SEND_PARAM) && HAVE_DECL_SCTP_DEFAULT_SEND_PARAM)
  XLAT(SCTP_DEFAULT_SEND_PARAM),
#endif
#if defined(SCTP_EVENTS) || (defined(HAVE_DECL_SCTP_EVENTS) && HAVE_DECL_SCTP_EVENTS)
  XLAT(SCTP_EVENTS),
#endif
#if defined(SCTP_I_WANT_MAPPED_V4_ADDR) || (defined(HAVE_DECL_SCTP_I_WANT_MAPPED_V4_ADDR) && HAVE_DECL_SCTP_I_WANT_MAPPED_V4_ADDR)
  XLAT(SCTP_I_WANT_MAPPED_V4_ADDR),
#endif
#if defined(SCTP_MAXSEG) || (defined(HAVE_DECL_SCTP_MAXSEG) && HAVE_DECL_SCTP_MAXSEG)
  XLAT(SCTP_MAXSEG),
#endif
#if defined(SCTP_STATUS) || (defined(HAVE_DECL_SCTP_STATUS) && HAVE_DECL_SCTP_STATUS)
  XLAT(SCTP_STATUS),
#endif
#if defined(SCTP_GET_PEER_ADDR_INFO) || (defined(HAVE_DECL_SCTP_GET_PEER_ADDR_INFO) && HAVE_DECL_SCTP_GET_PEER_ADDR_INFO)
  XLAT(SCTP_GET_PEER_ADDR_INFO),
#endif
#if defined(SCTP_DELAYED_ACK) || (defined(HAVE_DECL_SCTP_DELAYED_ACK) && HAVE_DECL_SCTP_DELAYED_ACK)
  XLAT(SCTP_DELAYED_ACK),
#endif
#if defined(SCTP_CONTEXT) || (defined(HAVE_DECL_SCTP_CONTEXT) && HAVE_DECL_SCTP_CONTEXT)
  XLAT(SCTP_CONTEXT),
#endif
#if defined(SCTP_FRAGMENT_INTERLEAVE) || (defined(HAVE_DECL_SCTP_FRAGMENT_INTERLEAVE) && HAVE_DECL_SCTP_FRAGMENT_INTERLEAVE)
  XLAT(SCTP_FRAGMENT_INTERLEAVE),
#endif
#if defined(SCTP_PARTIAL_DELIVERY_POINT) || (defined(HAVE_DECL_SCTP_PARTIAL_DELIVERY_POINT) && HAVE_DECL_SCTP_PARTIAL_DELIVERY_POINT)
  XLAT(SCTP_PARTIAL_DELIVERY_POINT),
#endif
#if defined(SCTP_MAX_BURST) || (defined(HAVE_DECL_SCTP_MAX_BURST) && HAVE_DECL_SCTP_MAX_BURST)
  XLAT(SCTP_MAX_BURST),
#endif
#if defined(SCTP_AUTH_CHUNK) || (defined(HAVE_DECL_SCTP_AUTH_CHUNK) && HAVE_DECL_SCTP_AUTH_CHUNK)
  XLAT(SCTP_AUTH_CHUNK),
#endif
#if defined(SCTP_HMAC_IDENT) || (defined(HAVE_DECL_SCTP_HMAC_IDENT) && HAVE_DECL_SCTP_HMAC_IDENT)
  XLAT(SCTP_HMAC_IDENT),
#endif
#if defined(SCTP_AUTH_KEY) || (defined(HAVE_DECL_SCTP_AUTH_KEY) && HAVE_DECL_SCTP_AUTH_KEY)
  XLAT(SCTP_AUTH_KEY),
#endif
#if defined(SCTP_AUTH_ACTIVE_KEY) || (defined(HAVE_DECL_SCTP_AUTH_ACTIVE_KEY) && HAVE_DECL_SCTP_AUTH_ACTIVE_KEY)
  XLAT(SCTP_AUTH_ACTIVE_KEY),
#endif
#if defined(SCTP_AUTH_DELETE_KEY) || (defined(HAVE_DECL_SCTP_AUTH_DELETE_KEY) && HAVE_DECL_SCTP_AUTH_DELETE_KEY)
  XLAT(SCTP_AUTH_DELETE_KEY),
#endif
#if defined(SCTP_PEER_AUTH_CHUNKS) || (defined(HAVE_DECL_SCTP_PEER_AUTH_CHUNKS) && HAVE_DECL_SCTP_PEER_AUTH_CHUNKS)
  XLAT(SCTP_PEER_AUTH_CHUNKS),
#endif
#if defined(SCTP_LOCAL_AUTH_CHUNKS) || (defined(HAVE_DECL_SCTP_LOCAL_AUTH_CHUNKS) && HAVE_DECL_SCTP_LOCAL_AUTH_CHUNKS)
  XLAT(SCTP_LOCAL_AUTH_CHUNKS),
#endif
#if defined(SCTP_GET_ASSOC_NUMBER) || (defined(HAVE_DECL_SCTP_GET_ASSOC_NUMBER) && HAVE_DECL_SCTP_GET_ASSOC_NUMBER)
  XLAT(SCTP_GET_ASSOC_NUMBER),
#endif
#if defined(SCTP_GET_ASSOC_ID_LIST) || (defined(HAVE_DECL_SCTP_GET_ASSOC_ID_LIST) && HAVE_DECL_SCTP_GET_ASSOC_ID_LIST)
  XLAT(SCTP_GET_ASSOC_ID_LIST),
#endif
#if defined(SCTP_AUTO_ASCONF) || (defined(HAVE_DECL_SCTP_AUTO_ASCONF) && HAVE_DECL_SCTP_AUTO_ASCONF)
  XLAT(SCTP_AUTO_ASCONF),
#endif
#if defined(SCTP_PEER_ADDR_THLDS) || (defined(HAVE_DECL_SCTP_PEER_ADDR_THLDS) && HAVE_DECL_SCTP_PEER_ADDR_THLDS)
  XLAT(SCTP_PEER_ADDR_THLDS),
#endif
#if defined(SCTP_RECVRCVINFO) || (defined(HAVE_DECL_SCTP_RECVRCVINFO) && HAVE_DECL_SCTP_RECVRCVINFO)
  XLAT(SCTP_RECVRCVINFO),
#endif
#if defined(SCTP_RECVNXTINFO) || (defined(HAVE_DECL_SCTP_RECVNXTINFO) && HAVE_DECL_SCTP_RECVNXTINFO)
  XLAT(SCTP_RECVNXTINFO),
#endif
#if defined(SCTP_DEFAULT_SNDINFO) || (defined(HAVE_DECL_SCTP_DEFAULT_SNDINFO) && HAVE_DECL_SCTP_DEFAULT_SNDINFO)
  XLAT(SCTP_DEFAULT_SNDINFO),
#endif
/* linux specific things */
#if defined(SCTP_SOCKOPT_BINDX_ADD) || (defined(HAVE_DECL_SCTP_SOCKOPT_BINDX_ADD) && HAVE_DECL_SCTP_SOCKOPT_BINDX_ADD)
  XLAT(SCTP_SOCKOPT_BINDX_ADD),
#endif
#if defined(SCTP_SOCKOPT_BINDX_REM) || (defined(HAVE_DECL_SCTP_SOCKOPT_BINDX_REM) && HAVE_DECL_SCTP_SOCKOPT_BINDX_REM)
  XLAT(SCTP_SOCKOPT_BINDX_REM),
#endif
#if defined(SCTP_SOCKOPT_PEELOFF) || (defined(HAVE_DECL_SCTP_SOCKOPT_PEELOFF) && HAVE_DECL_SCTP_SOCKOPT_PEELOFF)
  XLAT(SCTP_SOCKOPT_PEELOFF),
#endif
#if defined(SCTP_GET_PEER_ADDRS_NUM_OLD) || (defined(HAVE_DECL_SCTP_GET_PEER_ADDRS_NUM_OLD) && HAVE_DECL_SCTP_GET_PEER_ADDRS_NUM_OLD)
  XLAT(SCTP_GET_PEER_ADDRS_NUM_OLD),
#endif
#if defined(SCTP_GET_PEER_ADDRS_OLD) || (defined(HAVE_DECL_SCTP_GET_PEER_ADDRS_OLD) && HAVE_DECL_SCTP_GET_PEER_ADDRS_OLD)
  XLAT(SCTP_GET_PEER_ADDRS_OLD),
#endif
#if defined(SCTP_GET_LOCAL_ADDRS_NUM_OLD) || (defined(HAVE_DECL_SCTP_GET_LOCAL_ADDRS_NUM_OLD) && HAVE_DECL_SCTP_GET_LOCAL_ADDRS_NUM_OLD)
  XLAT(SCTP_GET_LOCAL_ADDRS_NUM_OLD),
#endif
#if defined(SCTP_GET_LOCAL_ADDRS_OLD) || (defined(HAVE_DECL_SCTP_GET_LOCAL_ADDRS_OLD) && HAVE_DECL_SCTP_GET_LOCAL_ADDRS_OLD)
  XLAT(SCTP_GET_LOCAL_ADDRS_OLD),
#endif
#if defined(SCTP_SOCKOPT_CONNECTX_OLD) || (defined(HAVE_DECL_SCTP_SOCKOPT_CONNECTX_OLD) && HAVE_DECL_SCTP_SOCKOPT_CONNECTX_OLD)
  XLAT(SCTP_SOCKOPT_CONNECTX_OLD),
#endif
#if defined(SCTP_GET_PEER_ADDRS) || (defined(HAVE_DECL_SCTP_GET_PEER_ADDRS) && HAVE_DECL_SCTP_GET_PEER_ADDRS)
  XLAT(SCTP_GET_PEER_ADDRS),
#endif
#if defined(SCTP_GET_LOCAL_ADDRS) || (defined(HAVE_DECL_SCTP_GET_LOCAL_ADDRS) && HAVE_DECL_SCTP_GET_LOCAL_ADDRS)
  XLAT(SCTP_GET_LOCAL_ADDRS),
#endif
#if defined(SCTP_SOCKOPT_CONNECTX) || (defined(HAVE_DECL_SCTP_SOCKOPT_CONNECTX) && HAVE_DECL_SCTP_SOCKOPT_CONNECTX)
  XLAT(SCTP_SOCKOPT_CONNECTX),
#endif
#if defined(SCTP_SOCKOPT_CONNECTX3) || (defined(HAVE_DECL_SCTP_SOCKOPT_CONNECTX3) && HAVE_DECL_SCTP_SOCKOPT_CONNECTX3)
  XLAT(SCTP_SOCKOPT_CONNECTX3),
#endif
#if defined(SCTP_GET_ASSOC_STATS) || (defined(HAVE_DECL_SCTP_GET_ASSOC_STATS) && HAVE_DECL_SCTP_GET_ASSOC_STATS)
  XLAT(SCTP_GET_ASSOC_STATS),
#endif
#if defined(SCTP_PR_SUPPORTED) || (defined(HAVE_DECL_SCTP_PR_SUPPORTED) && HAVE_DECL_SCTP_PR_SUPPORTED)
  XLAT(SCTP_PR_SUPPORTED),
#endif
#if defined(SCTP_DEFAULT_PRINFO) || (defined(HAVE_DECL_SCTP_DEFAULT_PRINFO) && HAVE_DECL_SCTP_DEFAULT_PRINFO)
  XLAT(SCTP_DEFAULT_PRINFO),
#endif
#if defined(SCTP_PR_ASSOC_STATUS) || (defined(HAVE_DECL_SCTP_PR_ASSOC_STATUS) && HAVE_DECL_SCTP_PR_ASSOC_STATUS)
  XLAT(SCTP_PR_ASSOC_STATUS),
#endif
#if defined(SCTP_PR_STREAM_STATUS) || (defined(HAVE_DECL_SCTP_PR_STREAM_STATUS) && HAVE_DECL_SCTP_PR_STREAM_STATUS)
  XLAT(SCTP_PR_STREAM_STATUS),
#endif
#if defined(SCTP_RECONFIG_SUPPORTED) || (defined(HAVE_DECL_SCTP_RECONFIG_SUPPORTED) && HAVE_DECL_SCTP_RECONFIG_SUPPORTED)
  XLAT(SCTP_RECONFIG_SUPPORTED),
#endif
#if defined(SCTP_ENABLE_STREAM_RESET) || (defined(HAVE_DECL_SCTP_ENABLE_STREAM_RESET) && HAVE_DECL_SCTP_ENABLE_STREAM_RESET)
  XLAT(SCTP_ENABLE_STREAM_RESET),
#endif
#if defined(SCTP_RESET_STREAMS) || (defined(HAVE_DECL_SCTP_RESET_STREAMS) && HAVE_DECL_SCTP_RESET_STREAMS)
  XLAT(SCTP_RESET_STREAMS),
#endif
#if defined(SCTP_RESET_ASSOC) || (defined(HAVE_DECL_SCTP_RESET_ASSOC) && HAVE_DECL_SCTP_RESET_ASSOC)
  XLAT(SCTP_RESET_ASSOC),
#endif
#if defined(SCTP_ADD_STREAMS) || (defined(HAVE_DECL_SCTP_ADD_STREAMS) && HAVE_DECL_SCTP_ADD_STREAMS)
  XLAT(SCTP_ADD_STREAMS),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
