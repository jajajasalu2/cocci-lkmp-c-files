cocci_test_suite() {
	struct rsi cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 99 */;
	struct gss_svc_data {
		struct rpc_gss_wire_cred clcred;
		__be32 *verf_start;
		struct rsc *rsci;
	} cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 978 */;
	struct xdr_buf *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 917 */;
	struct rsi *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 87 */(struct cache_detail *cd,
								       struct rsi *item);
	struct rsi *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 86 */(struct cache_detail *cd,
								       struct rsi *new,
								       struct rsi *old);
	__be32 cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 843 */;
	u32 *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 841 */;
	struct auth_ops cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 795 */;
	u32 cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 785 */;
	struct gss_ctx *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 785 */;
	struct auth_domain *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 784 */;
	struct rsi {
		struct cache_head h;
		struct xdr_netobj in_handle,in_token;
		struct xdr_netobj out_handle,out_token;
		int major_status,minor_status;
		struct rcu_head rcu_head;
	} cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 78 */;
	struct gss_domain {
		struct auth_domain h;
		u32 pseudoflavor;
	} cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 779 */;
	u8 *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 696 */;
	struct kvec cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 692 */;
	struct xdr_buf cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 688 */;
	struct gss_svc_seq_data *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 612 */;
	struct rsc *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 610 */;
	const struct cache_detail cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 552 */;
	kgid_t cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 500 */;
	struct cache_head *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 421 */;
	struct kref *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 368 */;
	struct rcu_head *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 360 */;
	struct rsc *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 350 */(struct cache_detail *cd,
									struct rsc *item);
	struct rsc *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 349 */(struct cache_detail *cd,
									struct rsc *new,
									struct rsc *old);
	struct rsc {
		struct cache_head h;
		struct xdr_netobj handle;
		struct svc_cred cred;
		struct gss_svc_seq_data seqdata;
		struct gss_ctx *mechctx;
		struct rcu_head rcu_head;
	} cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 340 */;
	struct gss_svc_seq_data {
		int sd_max;
		unsigned long sd_win[GSS_SEQ_WIN / BITS_PER_LONG];
		spinlock_t sd_lock;
	} cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 331 */;
	char **cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 189 */;
	struct gss_domain cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1835 */;
	struct gss_domain *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1835 */;
	struct auth_domain cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1834 */;
	struct rsi *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 180 */;
	struct page **cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1716 */;
	struct gss_svc_data *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1486 */;
	void cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1452 */;
	struct proc_dir_entry **cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1440 */;
	struct sunrpc_net *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1439 */;
	struct net *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1437 */;
	int cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1437 */;
	const struct file_operations cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1431 */;
	void *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1425 */;
	char cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1415 */[10];
	unsigned long cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1414 */;
	loff_t *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1410 */;
	struct file *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1409 */;
	char __user *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1409 */;
	ssize_t cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1409 */;
	char cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1385 */[20];
	const char __user *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1381 */;
	bool cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1369 */;
	struct xdr_netobj *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 135 */;
	struct gssp_upcall_data cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1290 */;
	char *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 126 */;
	struct svc_cred cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1254 */;
	uint64_t cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1238 */;
	time_t cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1224 */;
	struct gss_api_mech *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1223 */;
	long long cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1222 */;
	atomic64_t cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1221 */;
	struct rsc cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1220 */;
	uint64_t *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1218 */;
	struct gssp_upcall_data *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1217 */;
	struct cache_detail *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1216 */;
	struct page *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1117 */;
	size_t cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1106 */;
	unsigned int cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1104 */;
	struct svc_rqst *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1098 */;
	struct gssp_in_token *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1081 */;
	struct xdr_netobj cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1062 */;
	__be32 *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1034 */;
	struct kvec *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1034 */;
	struct rpc_gss_wire_cred *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1033 */;
	int *cocci_id/* net/sunrpc/auth_gss/svcauth_gss.c 1015 */;
}
