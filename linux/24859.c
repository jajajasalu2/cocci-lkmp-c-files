cocci_test_suite() {
	u8 cocci_id/* net/netfilter/nfnetlink.c 73 */;
	bool cocci_id/* net/netfilter/nfnetlink.c 73 */;
	void __exit cocci_id/* net/netfilter/nfnetlink.c 634 */;
	void cocci_id/* net/netfilter/nfnetlink.c 634 */;
	int __init cocci_id/* net/netfilter/nfnetlink.c 621 */;
	struct pernet_operations cocci_id/* net/netfilter/nfnetlink.c 616 */;
	struct list_head *cocci_id/* net/netfilter/nfnetlink.c 605 */;
	void __net_exit cocci_id/* net/netfilter/nfnetlink.c 605 */;
	struct netlink_kernel_cfg cocci_id/* net/netfilter/nfnetlink.c 589 */;
	struct sock *cocci_id/* net/netfilter/nfnetlink.c 588 */;
	int __net_init cocci_id/* net/netfilter/nfnetlink.c 586 */;
	const struct nfnetlink_subsystem *cocci_id/* net/netfilter/nfnetlink.c 569 */;
	struct net *cocci_id/* net/netfilter/nfnetlink.c 567 */;
	int cocci_id/* net/netfilter/nfnetlink.c 567 */;
	struct nlmsghdr *cocci_id/* net/netfilter/nfnetlink.c 548 */;
	struct sk_buff *cocci_id/* net/netfilter/nfnetlink.c 546 */;
	struct nfgenmsg *cocci_id/* net/netfilter/nfnetlink.c 514 */;
	struct nlattr *cocci_id/* net/netfilter/nfnetlink.c 512 */[NFNL_BATCH_MAX + 1];
	const struct nla_policy cocci_id/* net/netfilter/nfnetlink.c 504 */[NFNL_BATCH_MAX + 1];
	const int cocci_id/* net/netfilter/nfnetlink.c 48 */[NFNLGRP_MAX + 1];
	const struct nlattr **cocci_id/* net/netfilter/nfnetlink.c 434 */;
	struct {
		struct mutex mutex;
		const struct nfnetlink_subsystem __rcu *subsys;
	} cocci_id/* net/netfilter/nfnetlink.c 43 */[NFNL_SUBSYS_COUNT];
	struct nlattr *cocci_id/* net/netfilter/nfnetlink.c 416 */;
	void *cocci_id/* net/netfilter/nfnetlink.c 416 */;
	struct nlattr *cocci_id/* net/netfilter/nfnetlink.c 415 */[NFNL_MAX_ATTR_COUNT + 1];
	struct nfgenmsg cocci_id/* net/netfilter/nfnetlink.c 372 */;
	struct netlink_ext_ack cocci_id/* net/netfilter/nfnetlink.c 304 */;
	u32 cocci_id/* net/netfilter/nfnetlink.c 298 */;
	enum{NFNL_BATCH_FAILURE=(1 << 0), NFNL_BATCH_DONE=(1 << 1), NFNL_BATCH_REPLAY=(1 << 2),} cocci_id/* net/netfilter/nfnetlink.c 291 */;
	struct nfnl_err cocci_id/* net/netfilter/nfnetlink.c 254 */;
	struct nfnl_err *cocci_id/* net/netfilter/nfnetlink.c 252 */;
	const struct netlink_ext_ack *cocci_id/* net/netfilter/nfnetlink.c 250 */;
	struct nfnl_err {
		struct list_head head;
		struct nlmsghdr *nlh;
		int err;
		struct netlink_ext_ack extack;
	} cocci_id/* net/netfilter/nfnetlink.c 242 */;
	__u8 cocci_id/* net/netfilter/nfnetlink.c 201 */;
	struct netlink_ext_ack *cocci_id/* net/netfilter/nfnetlink.c 160 */;
	gfp_t cocci_id/* net/netfilter/nfnetlink.c 139 */;
	unsigned int cocci_id/* net/netfilter/nfnetlink.c 132 */;
	u16 cocci_id/* net/netfilter/nfnetlink.c 122 */;
	const struct nfnl_callback *cocci_id/* net/netfilter/nfnetlink.c 121 */;
}
