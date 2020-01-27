cocci_test_suite() {
	struct xdr_buf cocci_id/* net/sunrpc/svcsock.c 977 */;
	__be32 cocci_id/* net/sunrpc/svcsock.c 964 */;
	__be32 *cocci_id/* net/sunrpc/svcsock.c 963 */;
	struct rpc_rqst *cocci_id/* net/sunrpc/svcsock.c 961 */;
	struct rpc_xprt *cocci_id/* net/sunrpc/svcsock.c 960 */;
	struct svc_sock *cocci_id/* net/sunrpc/svcsock.c 958 */;
	struct svc_rqst *cocci_id/* net/sunrpc/svcsock.c 958 */;
	struct kvec cocci_id/* net/sunrpc/svcsock.c 924 */;
	struct sockaddr cocci_id/* net/sunrpc/svcsock.c 841 */;
	struct lock_class_key cocci_id/* net/sunrpc/svcsock.c 75 */[2];
	struct svc_xprt *cocci_id/* net/sunrpc/svcsock.c 71 */(struct svc_serv *,
							       int,
							       struct net *,
							       struct sockaddr *,
							       int, int);
	void cocci_id/* net/sunrpc/svcsock.c 67 */(struct svc_xprt *);
	int cocci_id/* net/sunrpc/svcsock.c 65 */(struct svc_rqst *);
	struct svc_sock *cocci_id/* net/sunrpc/svcsock.c 63 */(struct svc_serv *,
							       struct socket *,
							       int flags);
	struct sockaddr_in *cocci_id/* net/sunrpc/svcsock.c 444 */;
	struct linger cocci_id/* net/sunrpc/svcsock.c 426 */;
	struct sock *cocci_id/* net/sunrpc/svcsock.c 378 */;
	struct msghdr cocci_id/* net/sunrpc/svcsock.c 327 */;
	struct svc_sock cocci_id/* net/sunrpc/svcsock.c 326 */;
	unsigned int cocci_id/* net/sunrpc/svcsock.c 323 */;
	size_t cocci_id/* net/sunrpc/svcsock.c 323 */;
	ssize_t cocci_id/* net/sunrpc/svcsock.c 322 */;
	const char *cocci_id/* net/sunrpc/svcsock.c 288 */;
	const struct sock *cocci_id/* net/sunrpc/svcsock.c 287 */;
	struct cmsghdr *cocci_id/* net/sunrpc/svcsock.c 248 */;
	union {
		struct cmsghdr hdr;
		long all[SVC_PKTINFO_SPACE / sizeof(long)];
	} cocci_id/* net/sunrpc/svcsock.c 244 */;
	struct page *cocci_id/* net/sunrpc/svcsock.c 181 */;
	unsigned long cocci_id/* net/sunrpc/svcsock.c 181 */;
	struct xdr_buf *cocci_id/* net/sunrpc/svcsock.c 180 */;
	struct sockaddr_in6 *cocci_id/* net/sunrpc/svcsock.c 165 */;
	struct in6_pktinfo *cocci_id/* net/sunrpc/svcsock.c 164 */;
	struct in_pktinfo *cocci_id/* net/sunrpc/svcsock.c 152 */;
	union svc_pktinfo_u cocci_id/* net/sunrpc/svcsock.c 144 */;
	char cocci_id/* net/sunrpc/svcsock.c 1403 */[RPC_MAX_ADDRBUFLEN];
	union svc_pktinfo_u {
		struct in_pktinfo pkti;
		struct in6_pktinfo pkti6;
	} cocci_id/* net/sunrpc/svcsock.c 139 */;
	struct svc_xprt *cocci_id/* net/sunrpc/svcsock.c 1388 */;
	struct sockaddr *cocci_id/* net/sunrpc/svcsock.c 1349 */;
	struct sockaddr_storage cocci_id/* net/sunrpc/svcsock.c 1348 */;
	struct socket *cocci_id/* net/sunrpc/svcsock.c 1346 */;
	const size_t cocci_id/* net/sunrpc/svcsock.c 1343 */;
	const struct cred *cocci_id/* net/sunrpc/svcsock.c 1343 */;
	const int cocci_id/* net/sunrpc/svcsock.c 1342 */;
	struct svc_serv *cocci_id/* net/sunrpc/svcsock.c 1342 */;
	char *cocci_id/* net/sunrpc/svcsock.c 1342 */;
	bool cocci_id/* net/sunrpc/svcsock.c 1314 */;
	struct net *cocci_id/* net/sunrpc/svcsock.c 1314 */;
	void cocci_id/* net/sunrpc/svcsock.c 1197 */;
	struct svc_xprt_class cocci_id/* net/sunrpc/svcsock.c 1183 */;
	const struct svc_xprt_ops cocci_id/* net/sunrpc/svcsock.c 1170 */;
	struct sk_buff *cocci_id/* net/sunrpc/svcsock.c 115 */;
	struct kvec *cocci_id/* net/sunrpc/svcsock.c 1003 */;
	struct page **cocci_id/* net/sunrpc/svcsock.c 1003 */;
	int cocci_id/* net/sunrpc/svcsock.c 1003 */;
}
