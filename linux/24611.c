cocci_test_suite() {
	struct sock *cocci_id/* net/core/net_namespace.c 973 */;
	struct rtnl_net_dump_cb *cocci_id/* net/core/net_namespace.c 955 */;
	struct rtnl_net_dump_cb {
		struct net *tgt_net;
		struct net *ref_net;
		struct sk_buff *skb;
		struct net_fill_args fillargs;
		int idx;
		int s_idx;
	} cocci_id/* net/core/net_namespace.c 944 */;
	struct nlattr *cocci_id/* net/core/net_namespace.c 877 */;
	struct net_fill_args cocci_id/* net/core/net_namespace.c 871 */;
	struct nlattr *cocci_id/* net/core/net_namespace.c 870 */[NETNSA_MAX + 1];
	struct netlink_ext_ack *cocci_id/* net/core/net_namespace.c 867 */;
	void *cocci_id/* net/core/net_namespace.c 84 */;
	struct nlattr **cocci_id/* net/core/net_namespace.c 831 */;
	const struct nlmsghdr *cocci_id/* net/core/net_namespace.c 830 */;
	struct rtgenmsg *cocci_id/* net/core/net_namespace.c 804 */;
	struct nlmsghdr *cocci_id/* net/core/net_namespace.c 803 */;
	struct net_fill_args *cocci_id/* net/core/net_namespace.c 801 */;
	struct net_fill_args {
		u32 portid;
		u32 seq;
		int flags;
		int cmd;
		int nsid;
		bool add_ref;
		int ref_nsid;
	} cocci_id/* net/core/net_namespace.c 791 */;
	struct rtgenmsg cocci_id/* net/core/net_namespace.c 785 */;
	struct net_generic cocci_id/* net/core/net_namespace.c 75 */;
	const struct nla_policy cocci_id/* net/core/net_namespace.c 714 */[NETNSA_MAX + 1];
	struct pernet_operations __net_initdata cocci_id/* net/core/net_namespace.c 709 */;
	unsigned int cocci_id/* net/core/net_namespace.c 70 */;
	struct nsproxy *cocci_id/* net/core/net_namespace.c 684 */;
	struct task_struct *cocci_id/* net/core/net_namespace.c 676 */;
	pid_t cocci_id/* net/core/net_namespace.c 674 */;
	struct ns_common *cocci_id/* net/core/net_namespace.c 649 */;
	struct file *cocci_id/* net/core/net_namespace.c 648 */;
	void cocci_id/* net/core/net_namespace.c 638 */;
	struct net cocci_id/* net/core/net_namespace.c 575 */;
	struct llist_node *cocci_id/* net/core/net_namespace.c 553 */;
	const struct pernet_operations *cocci_id/* net/core/net_namespace.c 551 */;
	struct work_struct *cocci_id/* net/core/net_namespace.c 549 */;
	kgid_t cocci_id/* net/core/net_namespace.c 505 */;
	kuid_t cocci_id/* net/core/net_namespace.c 504 */;
	const struct net *cocci_id/* net/core/net_namespace.c 501 */;
	kuid_t *cocci_id/* net/core/net_namespace.c 501 */;
	kgid_t *cocci_id/* net/core/net_namespace.c 501 */;
	struct ucounts *cocci_id/* net/core/net_namespace.c 452 */;
	struct user_namespace *cocci_id/* net/core/net_namespace.c 450 */;
	unsigned long cocci_id/* net/core/net_namespace.c 449 */;
	struct key_tag cocci_id/* net/core/net_namespace.c 43 */;
	struct net_generic *cocci_id/* net/core/net_namespace.c 405 */;
	struct workqueue_struct *cocci_id/* net/core/net_namespace.c 400 */;
	struct kmem_cache *cocci_id/* net/core/net_namespace.c 399 */;
	struct pernet_operations cocci_id/* net/core/net_namespace.c 374 */;
	int __net_init cocci_id/* net/core/net_namespace.c 368 */;
	gfp_t cocci_id/* net/core/net_namespace.c 253 */;
	void cocci_id/* net/core/net_namespace.c 248 */(struct net *net,
							int cmd, int id,
							u32 portid,
							struct nlmsghdr *nlh,
							gfp_t gfp);
	bool cocci_id/* net/core/net_namespace.c 243 */;
	struct net *cocci_id/* net/core/net_namespace.c 241 */;
	int cocci_id/* net/core/net_namespace.c 241 */;
	bool *cocci_id/* net/core/net_namespace.c 218 */;
	const struct proc_ns_operations cocci_id/* net/core/net_namespace.c 1376 */;
	struct pernet_operations *cocci_id/* net/core/net_namespace.c 1130 */;
	struct list_head *cocci_id/* net/core/net_namespace.c 1129 */;
	int __init cocci_id/* net/core/net_namespace.c 1087 */;
	u32 cocci_id/* net/core/net_namespace.c 1058 */;
	struct rtnl_net_dump_cb cocci_id/* net/core/net_namespace.c 1017 */;
	struct sk_buff *cocci_id/* net/core/net_namespace.c 1015 */;
	struct netlink_callback *cocci_id/* net/core/net_namespace.c 1015 */;
}
