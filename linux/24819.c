cocci_test_suite() {
	void __exit cocci_id/* net/netfilter/nfnetlink_acct.c 536 */;
	void cocci_id/* net/netfilter/nfnetlink_acct.c 536 */;
	int __init cocci_id/* net/netfilter/nfnetlink_acct.c 513 */;
	struct pernet_operations cocci_id/* net/netfilter/nfnetlink_acct.c 508 */;
	void __net_exit cocci_id/* net/netfilter/nfnetlink_acct.c 496 */;
	int __net_init cocci_id/* net/netfilter/nfnetlink_acct.c 489 */;
	const struct sk_buff *cocci_id/* net/netfilter/nfnetlink_acct.c 438 */;
	const char *cocci_id/* net/netfilter/nfnetlink_acct.c 403 */;
	const struct nfnetlink_subsystem cocci_id/* net/netfilter/nfnetlink_acct.c 394 */;
	struct nfacct_filter {
		u32 value;
		u32 mask;
	} cocci_id/* net/netfilter/nfnetlink_acct.c 39 */;
	const struct nfnl_callback cocci_id/* net/netfilter/nfnetlink_acct.c 379 */[NFNL_MSG_ACCT_MAX];
	const struct nla_policy cocci_id/* net/netfilter/nfnetlink_acct.c 370 */[NFACCT_MAX + 1];
	char *cocci_id/* net/netfilter/nfnetlink_acct.c 347 */;
	struct nf_acct *cocci_id/* net/netfilter/nfnetlink_acct.c 345 */;
	struct netlink_ext_ack *cocci_id/* net/netfilter/nfnetlink_acct.c 343 */;
	const struct nlattr *const cocci_id/* net/netfilter/nfnetlink_acct.c 342 */[];
	const struct nlmsghdr *cocci_id/* net/netfilter/nfnetlink_acct.c 341 */;
	struct sk_buff *cocci_id/* net/netfilter/nfnetlink_acct.c 341 */;
	struct sock *cocci_id/* net/netfilter/nfnetlink_acct.c 340 */;
	struct net *cocci_id/* net/netfilter/nfnetlink_acct.c 340 */;
	int cocci_id/* net/netfilter/nfnetlink_acct.c 340 */;
	void *cocci_id/* net/netfilter/nfnetlink_acct.c 281 */;
	struct nf_acct {
		atomic64_t pkts;
		atomic64_t bytes;
		unsigned long flags;
		struct list_head head;
		refcount_t refcnt;
		char name[NFACCT_NAME_MAX];
		struct rcu_head rcu_head;
		char data[0];
	} cocci_id/* net/netfilter/nfnetlink_acct.c 28 */;
	struct netlink_dump_control cocci_id/* net/netfilter/nfnetlink_acct.c 277 */;
	struct nfacct_filter cocci_id/* net/netfilter/nfnetlink_acct.c 256 */;
	struct nfacct_filter *cocci_id/* net/netfilter/nfnetlink_acct.c 242 */;
	struct nlattr *cocci_id/* net/netfilter/nfnetlink_acct.c 241 */[NFACCT_FILTER_MAX + 1];
	const struct nlattr *const cocci_id/* net/netfilter/nfnetlink_acct.c 240 */;
	const struct nla_policy cocci_id/* net/netfilter/nfnetlink_acct.c 233 */[NFACCT_FILTER_MAX + 1];
	struct netlink_callback *cocci_id/* net/netfilter/nfnetlink_acct.c 227 */;
	unsigned long cocci_id/* net/netfilter/nfnetlink_acct.c 217 */;
	const struct nfacct_filter *cocci_id/* net/netfilter/nfnetlink_acct.c 192 */;
	u64 *cocci_id/* net/netfilter/nfnetlink_acct.c 171 */;
	u64 cocci_id/* net/netfilter/nfnetlink_acct.c 137 */;
	unsigned int cocci_id/* net/netfilter/nfnetlink_acct.c 136 */;
	struct nfgenmsg *cocci_id/* net/netfilter/nfnetlink_acct.c 135 */;
	struct nlmsghdr *cocci_id/* net/netfilter/nfnetlink_acct.c 134 */;
	u32 cocci_id/* net/netfilter/nfnetlink_acct.c 131 */;
	struct nf_acct cocci_id/* net/netfilter/nfnetlink_acct.c 104 */;
}