cocci_test_suite() {
	struct ip_map {
		struct cache_head h;
		char m_class[8];
		struct in6_addr m_addr;
		struct unix_domain *m_client;
		struct rcu_head m_rcu;
	} cocci_id/* net/sunrpc/svcauth_unix.c 96 */;
	struct sunrpc_net *cocci_id/* net/sunrpc/svcauth_unix.c 895 */;
	struct net *cocci_id/* net/sunrpc/svcauth_unix.c 893 */;
	const struct cache_detail cocci_id/* net/sunrpc/svcauth_unix.c 879 */;
	kgid_t cocci_id/* net/sunrpc/svcauth_unix.c 832 */;
	void *cocci_id/* net/sunrpc/svcauth_unix.c 812 */;
	u32 cocci_id/* net/sunrpc/svcauth_unix.c 801 */;
	struct user_namespace *cocci_id/* net/sunrpc/svcauth_unix.c 800 */;
	struct svc_cred *cocci_id/* net/sunrpc/svcauth_unix.c 739 */;
	struct kvec *cocci_id/* net/sunrpc/svcauth_unix.c 737 */;
	__be32 *cocci_id/* net/sunrpc/svcauth_unix.c 735 */;
	struct svc_rqst *cocci_id/* net/sunrpc/svcauth_unix.c 735 */;
	struct group_info *cocci_id/* net/sunrpc/svcauth_unix.c 670 */;
	struct sockaddr_in6 *cocci_id/* net/sunrpc/svcauth_unix.c 668 */;
	struct sockaddr_in *cocci_id/* net/sunrpc/svcauth_unix.c 667 */;
	kuid_t cocci_id/* net/sunrpc/svcauth_unix.c 638 */;
	struct unix_gid *cocci_id/* net/sunrpc/svcauth_unix.c 482 */(struct cache_detail *cd,
								     kuid_t uid);
	char cocci_id/* net/sunrpc/svcauth_unix.c 474 */[20];
	struct unix_gid *cocci_id/* net/sunrpc/svcauth_unix.c 463 */;
	struct unix_gid cocci_id/* net/sunrpc/svcauth_unix.c 449 */;
	struct auth_domain cocci_id/* net/sunrpc/svcauth_unix.c 43 */;
	struct unix_gid {
		struct cache_head h;
		kuid_t uid;
		struct group_info *gi;
		struct rcu_head rcu;
	} cocci_id/* net/sunrpc/svcauth_unix.c 419 */;
	struct rcu_head *cocci_id/* net/sunrpc/svcauth_unix.c 41 */;
	struct auth_ops cocci_id/* net/sunrpc/svcauth_unix.c 38 */;
	struct svc_xprt *cocci_id/* net/sunrpc/svcauth_unix.c 349 */;
	struct unix_domain {
		struct auth_domain h;
	} cocci_id/* net/sunrpc/svcauth_unix.c 33 */;
	time_t cocci_id/* net/sunrpc/svcauth_unix.c 311 */;
	struct unix_domain *cocci_id/* net/sunrpc/svcauth_unix.c 311 */;
	int cocci_id/* net/sunrpc/svcauth_unix.c 310 */;
	struct cache_head *cocci_id/* net/sunrpc/svcauth_unix.c 287 */;
	struct ip_map cocci_id/* net/sunrpc/svcauth_unix.c 286 */;
	struct in6_addr *cocci_id/* net/sunrpc/svcauth_unix.c 284 */;
	struct ip_map *cocci_id/* net/sunrpc/svcauth_unix.c 283 */;
	struct cache_detail *cocci_id/* net/sunrpc/svcauth_unix.c 283 */;
	char *cocci_id/* net/sunrpc/svcauth_unix.c 283 */;
	struct in6_addr cocci_id/* net/sunrpc/svcauth_unix.c 258 */;
	struct seq_file *cocci_id/* net/sunrpc/svcauth_unix.c 253 */;
	struct unix_domain cocci_id/* net/sunrpc/svcauth_unix.c 241 */;
	struct auth_domain *cocci_id/* net/sunrpc/svcauth_unix.c 189 */;
	struct sockaddr_in6 cocci_id/* net/sunrpc/svcauth_unix.c 185 */;
	union {
		struct sockaddr sa;
		struct sockaddr_in s4;
		struct sockaddr_in6 s6;
	} cocci_id/* net/sunrpc/svcauth_unix.c 180 */;
	char cocci_id/* net/sunrpc/svcauth_unix.c 179 */[8];
	int cocci_id/* net/sunrpc/svcauth_unix.c 169 */(struct cache_detail *cd,
							struct ip_map *ipm,
							struct unix_domain *udom,
							time_t expiry);
	struct ip_map *cocci_id/* net/sunrpc/svcauth_unix.c 168 */(struct cache_detail *cd,
								   char *class,
								   struct in6_addr *addr);
	char cocci_id/* net/sunrpc/svcauth_unix.c 155 */[40];
	char **cocci_id/* net/sunrpc/svcauth_unix.c 153 */;
	int *cocci_id/* net/sunrpc/svcauth_unix.c 153 */;
	void cocci_id/* net/sunrpc/svcauth_unix.c 142 */;
	const struct in6_addr *cocci_id/* net/sunrpc/svcauth_unix.c 115 */;
	struct cache_head cocci_id/* net/sunrpc/svcauth_unix.c 106 */;
	struct kref *cocci_id/* net/sunrpc/svcauth_unix.c 104 */;
}
