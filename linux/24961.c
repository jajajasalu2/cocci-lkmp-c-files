cocci_test_suite() {
	struct sockaddr_nl cocci_id/* net/netlink/af_netlink.c 985 */;
	unsigned long cocci_id/* net/netlink/af_netlink.c 982 */;
	struct sockaddr_nl *cocci_id/* net/netlink/af_netlink.c 980 */;
	struct sockaddr *cocci_id/* net/netlink/af_netlink.c 974 */;
	long unsigned int cocci_id/* net/netlink/af_netlink.c 960 */;
	char *cocci_id/* net/netlink/af_netlink.c 950 */;
	unsigned long *cocci_id/* net/netlink/af_netlink.c 931 */;
	const char *const cocci_id/* net/netlink/af_netlink.c 92 */[MAX_LINKS + 1];
	const struct socket *cocci_id/* net/netlink/af_netlink.c 909 */;
	struct lock_class_key cocci_id/* net/netlink/af_netlink.c 90 */[MAX_LINKS];
	const struct sk_buff *cocci_id/* net/netlink/af_netlink.c 887 */;
	struct user_namespace *cocci_id/* net/netlink/af_netlink.c 853 */;
	bool cocci_id/* net/netlink/af_netlink.c 852 */;
	const struct netlink_skb_parms *cocci_id/* net/netlink/af_netlink.c 852 */;
	s32 cocci_id/* net/netlink/af_netlink.c 810 */;
	struct netlink_notify cocci_id/* net/netlink/af_netlink.c 769 */;
	struct listeners {
		struct rcu_head rcu;
		unsigned long masks[0];
	} cocci_id/* net/netlink/af_netlink.c 72 */;
	struct netlink_sock cocci_id/* net/netlink/af_netlink.c 714 */;
	struct rcu_head *cocci_id/* net/netlink/af_netlink.c 712 */;
	void (*cocci_id/* net/netlink/af_netlink.c 659 */)(struct net *net,
							   int group);
	int (*cocci_id/* net/netlink/af_netlink.c 658 */)(struct net *net,
							  int group);
	struct netlink_sock *cocci_id/* net/netlink/af_netlink.c 625 */;
	struct mutex *cocci_id/* net/netlink/af_netlink.c 621 */;
	struct socket *cocci_id/* net/netlink/af_netlink.c 620 */;
	struct net *cocci_id/* net/netlink/af_netlink.c 620 */;
	struct proto cocci_id/* net/netlink/af_netlink.c 614 */;
	const struct proto_ops cocci_id/* net/netlink/af_netlink.c 531 */;
	struct netlink_compare_arg cocci_id/* net/netlink/af_netlink.c 509 */;
	u32 cocci_id/* net/netlink/af_netlink.c 497 */;
	struct netlink_compare_arg *cocci_id/* net/netlink/af_netlink.c 489 */;
	const struct netlink_sock *cocci_id/* net/netlink/af_netlink.c 483 */;
	const struct netlink_compare_arg *cocci_id/* net/netlink/af_netlink.c 482 */;
	const void *cocci_id/* net/netlink/af_netlink.c 480 */;
	struct rhashtable_compare_arg *cocci_id/* net/netlink/af_netlink.c 479 */;
	struct netlink_compare_arg {
		possible_net_t pnet;
		u32 portid;
	} cocci_id/* net/netlink/af_netlink.c 469 */;
	struct work_struct *cocci_id/* net/netlink/af_netlink.c 406 */;
	struct netlink_tap *cocci_id/* net/netlink/af_netlink.c 306 */;
	struct sk_buff *cocci_id/* net/netlink/af_netlink.c 303 */;
	struct netlink_tap_net *cocci_id/* net/netlink/af_netlink.c 303 */;
	u16 cocci_id/* net/netlink/af_netlink.c 290 */;
	struct sk_buff cocci_id/* net/netlink/af_netlink.c 2758 */;
	struct netlink_skb_parms cocci_id/* net/netlink/af_netlink.c 2758 */;
	int __init cocci_id/* net/netlink/af_netlink.c 2750 */;
	u32 *cocci_id/* net/netlink/af_netlink.c 2739 */;
	struct net_device *cocci_id/* net/netlink/af_netlink.c 273 */;
	struct pernet_operations __net_initdata cocci_id/* net/netlink/af_netlink.c 2728 */;
	void __init cocci_id/* net/netlink/af_netlink.c 2708 */;
	void __net_exit cocci_id/* net/netlink/af_netlink.c 2701 */;
	struct nl_seq_iter cocci_id/* net/netlink/af_netlink.c 2695 */;
	int __net_init cocci_id/* net/netlink/af_netlink.c 2691 */;
	const struct net_proto_family cocci_id/* net/netlink/af_netlink.c 2685 */;
	struct notifier_block *cocci_id/* net/netlink/af_netlink.c 2652 */;
	const struct seq_operations cocci_id/* net/netlink/af_netlink.c 2644 */;
	loff_t *cocci_id/* net/netlink/af_netlink.c 2600 */;
	loff_t cocci_id/* net/netlink/af_netlink.c 2588 */;
	struct nl_seq_iter *cocci_id/* net/netlink/af_netlink.c 2556 */;
	struct seq_file *cocci_id/* net/netlink/af_netlink.c 2554 */;
	void *cocci_id/* net/netlink/af_netlink.c 2554 */;
	struct nl_seq_iter {
		struct seq_net_private p;
		struct rhashtable_iter hti;
		int link;
	} cocci_id/* net/netlink/af_netlink.c 2536 */;
	struct netlink_tap_net cocci_id/* net/netlink/af_netlink.c 247 */;
	int (*cocci_id/* net/netlink/af_netlink.c 2451 */)(struct sk_buff *,
							   struct nlmsghdr *,
							   struct netlink_ext_ack *);
	struct pernet_operations cocci_id/* net/netlink/af_netlink.c 244 */;
	u8 *cocci_id/* net/netlink/af_netlink.c 2431 */;
	size_t cocci_id/* net/netlink/af_netlink.c 2381 */;
	struct nlmsgerr *cocci_id/* net/netlink/af_netlink.c 2380 */;
	const struct netlink_ext_ack *cocci_id/* net/netlink/af_netlink.c 2376 */;
	struct netlink_callback *cocci_id/* net/netlink/af_netlink.c 2303 */;
	struct netlink_dump_control *cocci_id/* net/netlink/af_netlink.c 2300 */;
	const struct nlmsghdr *cocci_id/* net/netlink/af_netlink.c 2299 */;
	struct netlink_ext_ack cocci_id/* net/netlink/af_netlink.c 2190 */;
	struct nlmsghdr *cocci_id/* net/netlink/af_netlink.c 2164 */;
	void cocci_id/* net/netlink/af_netlink.c 2155 */;
	struct netlink_table *cocci_id/* net/netlink/af_netlink.c 2112 */;
	struct listeners *cocci_id/* net/netlink/af_netlink.c 2111 */;
	struct sock *cocci_id/* net/netlink/af_netlink.c 2109 */;
	unsigned int cocci_id/* net/netlink/af_netlink.c 2109 */;
	int cocci_id/* net/netlink/af_netlink.c 2109 */;
	struct netlink_kernel_cfg *cocci_id/* net/netlink/af_netlink.c 2026 */;
	struct module *cocci_id/* net/netlink/af_netlink.c 2025 */;
	struct scm_cookie cocci_id/* net/netlink/af_netlink.c 1927 */;
	struct msghdr *cocci_id/* net/netlink/af_netlink.c 1832 */;
	struct nl_pktinfo cocci_id/* net/netlink/af_netlink.c 1826 */;
	u32 __user *cocci_id/* net/netlink/af_netlink.c 1780 */;
	struct netlink_tap_net {
		struct list_head netlink_tap_all;
		struct mutex netlink_tap_lock;
	} cocci_id/* net/netlink/af_netlink.c 174 */;
	int __user *cocci_id/* net/netlink/af_netlink.c 1723 */;
	char __user *cocci_id/* net/netlink/af_netlink.c 1723 */;
	unsigned int __user *cocci_id/* net/netlink/af_netlink.c 1633 */;
	struct netlink_set_err_data cocci_id/* net/netlink/af_netlink.c 1584 */;
	struct netlink_set_err_data *cocci_id/* net/netlink/af_netlink.c 1546 */;
	struct netlink_set_err_data {
		struct sock *exclude_sk;
		u32 portid;
		u32 group;
		int code;
	} cocci_id/* net/netlink/af_netlink.c 1539 */;
	gfp_t cocci_id/* net/netlink/af_netlink.c 1532 */;
	struct netlink_broadcast_data cocci_id/* net/netlink/af_netlink.c 1486 */;
	int (*cocci_id/* net/netlink/af_netlink.c 1482 */)(struct sock *dsk,
							   struct sk_buff *skb,
							   void *data);
	const struct rhashtable_params cocci_id/* net/netlink/af_netlink.c 147 */;
	struct netlink_broadcast_data *cocci_id/* net/netlink/af_netlink.c 1403 */;
	atomic_t cocci_id/* net/netlink/af_netlink.c 140 */;
	struct netlink_broadcast_data {
		struct sock *exclude_sk;
		struct net *net;
		u32 portid;
		u32 group;
		int failure;
		int delivery_failure;
		int congested;
		int delivered;
		gfp_t allocation;
		struct sk_buff *skb,*skb2;
		int (*tx_filter)(struct sock *dsk, struct sk_buff *skb,
				 void *data);
		void *tx_data;
	} cocci_id/* net/netlink/af_netlink.c 1387 */;
	long cocci_id/* net/netlink/af_netlink.c 1316 */;
	int cocci_id/* net/netlink/af_netlink.c 128 */(struct sock *sk);
	long *cocci_id/* net/netlink/af_netlink.c 1203 */;
	struct skb_shared_info cocci_id/* net/netlink/af_netlink.c 1177 */;
	struct inode *cocci_id/* net/netlink/af_netlink.c 1153 */;
	struct file *cocci_id/* net/netlink/af_netlink.c 1151 */;
}
