cocci_test_suite() {
	struct netlink_notify *cocci_id/* net/netfilter/nfnetlink_queue.c 977 */;
	u_int8_t cocci_id/* net/netfilter/nfnetlink_queue.c 96 */;
	struct notifier_block cocci_id/* net/netfilter/nfnetlink_queue.c 955 */;
	struct notifier_block *cocci_id/* net/netfilter/nfnetlink_queue.c 944 */;
	unsigned long cocci_id/* net/netfilter/nfnetlink_queue.c 901 */;
	unsigned char cocci_id/* net/netfilter/nfnetlink_queue.c 871 */;
	struct nfnl_queue_net {
		spinlock_t instances_lock;
		struct hlist_head instance_table[INSTANCE_BUCKETS];
	} cocci_id/* net/netfilter/nfnetlink_queue.c 86 */;
	int (*cocci_id/* net/netfilter/nfnetlink_queue.c 81 */)(struct nf_queue_entry *,
								unsigned long);
	__be32 *cocci_id/* net/netfilter/nfnetlink_queue.c 656 */;
	struct sk_buff *cocci_id/* net/netfilter/nfnetlink_queue.c 654 */;
	struct net *cocci_id/* net/netfilter/nfnetlink_queue.c 651 */;
	int cocci_id/* net/netfilter/nfnetlink_queue.c 650 */;
	const struct nf_conn *cocci_id/* net/netfilter/nfnetlink_queue.c 642 */;
	void *cocci_id/* net/netfilter/nfnetlink_queue.c 642 */;
	const unsigned long cocci_id/* net/netfilter/nfnetlink_queue.c 641 */;
	bool cocci_id/* net/netfilter/nfnetlink_queue.c 638 */;
	const struct nf_queue_entry *cocci_id/* net/netfilter/nfnetlink_queue.c 638 */;
	struct timespec64 cocci_id/* net/netfilter/nfnetlink_queue.c 583 */;
	struct nfqnl_instance {
		struct hlist_node hlist;
		struct rcu_head rcu;
		u32 peer_portid;
		unsigned int queue_maxlen;
		unsigned int copy_range;
		unsigned int queue_dropped;
		unsigned int queue_user_dropped;
		u_int16_t queue_num;
		u_int8_t copy_mode;
		u_int32_t flags;
		spinlock_t lock ____cacheline_aligned_in_smp;
		unsigned int queue_total;
		unsigned int id_sequence;
		struct list_head queue_list;
	} cocci_id/* net/netfilter/nfnetlink_queue.c 57 */;
	struct nlattr cocci_id/* net/netfilter/nfnetlink_queue.c 440 */;
	enum nfqnl_config_mode cocci_id/* net/netfilter/nfnetlink_queue.c 423 */;
	struct nfqnl_msg_packet_timestamp cocci_id/* net/netfilter/nfnetlink_queue.c 411 */;
	struct nfqnl_msg_packet_hw cocci_id/* net/netfilter/nfnetlink_queue.c 406 */;
	u_int32_t cocci_id/* net/netfilter/nfnetlink_queue.c 399 */;
	struct nfqnl_msg_packet_hdr cocci_id/* net/netfilter/nfnetlink_queue.c 398 */;
	struct nfgenmsg cocci_id/* net/netfilter/nfnetlink_queue.c 397 */;
	char *cocci_id/* net/netfilter/nfnetlink_queue.c 394 */;
	struct nfnl_ct_hook *cocci_id/* net/netfilter/nfnetlink_queue.c 392 */;
	enum ip_conntrack_info cocci_id/* net/netfilter/nfnetlink_queue.c 391 */;
	struct nf_conn *cocci_id/* net/netfilter/nfnetlink_queue.c 390 */;
	struct net_device *cocci_id/* net/netfilter/nfnetlink_queue.c 388 */;
	struct nfgenmsg *cocci_id/* net/netfilter/nfnetlink_queue.c 386 */;
	struct nlmsghdr *cocci_id/* net/netfilter/nfnetlink_queue.c 385 */;
	struct nfqnl_msg_packet_hdr *cocci_id/* net/netfilter/nfnetlink_queue.c 384 */;
	struct nlattr *cocci_id/* net/netfilter/nfnetlink_queue.c 383 */;
	size_t cocci_id/* net/netfilter/nfnetlink_queue.c 379 */;
	__be32 **cocci_id/* net/netfilter/nfnetlink_queue.c 377 */;
	char **cocci_id/* net/netfilter/nfnetlink_queue.c 304 */;
	const struct cred *cocci_id/* net/netfilter/nfnetlink_queue.c 281 */;
	struct sock *cocci_id/* net/netfilter/nfnetlink_queue.c 279 */;
	__u32 cocci_id/* net/netfilter/nfnetlink_queue.c 266 */;
	nfqnl_cmpfn cocci_id/* net/netfilter/nfnetlink_queue.c 247 */;
	struct nf_ct_hook *cocci_id/* net/netfilter/nfnetlink_queue.c 228 */;
	unsigned int cocci_id/* net/netfilter/nfnetlink_queue.c 205 */;
	struct nfqnl_instance *cocci_id/* net/netfilter/nfnetlink_queue.c 198 */;
	struct nf_queue_entry *cocci_id/* net/netfilter/nfnetlink_queue.c 198 */;
	void cocci_id/* net/netfilter/nfnetlink_queue.c 197 */;
	struct nfqnl_instance cocci_id/* net/netfilter/nfnetlink_queue.c 167 */;
	struct rcu_head *cocci_id/* net/netfilter/nfnetlink_queue.c 165 */;
	void cocci_id/* net/netfilter/nfnetlink_queue.c 161 */(struct nfqnl_instance *queue,
							       nfqnl_cmpfn cmpfn,
							       unsigned long data);
	void __exit cocci_id/* net/netfilter/nfnetlink_queue.c 1574 */;
	int __init cocci_id/* net/netfilter/nfnetlink_queue.c 1540 */;
	struct nfnl_queue_net cocci_id/* net/netfilter/nfnetlink_queue.c 1537 */;
	struct pernet_operations cocci_id/* net/netfilter/nfnetlink_queue.c 1532 */;
	struct list_head *cocci_id/* net/netfilter/nfnetlink_queue.c 1527 */;
	void __net_exit cocci_id/* net/netfilter/nfnetlink_queue.c 1514 */;
	struct iter_state cocci_id/* net/netfilter/nfnetlink_queue.c 1507 */;
	int __net_init cocci_id/* net/netfilter/nfnetlink_queue.c 1495 */;
	const struct seq_operations cocci_id/* net/netfilter/nfnetlink_queue.c 1487 */;
	const struct nfqnl_instance *cocci_id/* net/netfilter/nfnetlink_queue.c 1476 */;
	loff_t *cocci_id/* net/netfilter/nfnetlink_queue.c 1462 */;
	loff_t cocci_id/* net/netfilter/nfnetlink_queue.c 1444 */;
	struct nfnl_queue_net *cocci_id/* net/netfilter/nfnetlink_queue.c 1412 */;
	struct iter_state *cocci_id/* net/netfilter/nfnetlink_queue.c 1410 */;
	struct seq_file *cocci_id/* net/netfilter/nfnetlink_queue.c 1408 */;
	struct hlist_node *cocci_id/* net/netfilter/nfnetlink_queue.c 1408 */;
	struct iter_state {
		struct seq_net_private p;
		unsigned int bucket;
	} cocci_id/* net/netfilter/nfnetlink_queue.c 1403 */;
	const struct nfnetlink_subsystem cocci_id/* net/netfilter/nfnetlink_queue.c 1395 */;
	const struct nfnl_callback cocci_id/* net/netfilter/nfnetlink_queue.c 1381 */[NFQNL_MSG_MAX];
	struct nfqnl_msg_config_params *cocci_id/* net/netfilter/nfnetlink_queue.c 1354 */;
	struct nfqnl_msg_config_cmd *cocci_id/* net/netfilter/nfnetlink_queue.c 1262 */;
	struct netlink_ext_ack *cocci_id/* net/netfilter/nfnetlink_queue.c 1257 */;
	const struct nf_queue_handler cocci_id/* net/netfilter/nfnetlink_queue.c 1249 */;
	struct nfqnl_msg_config_params cocci_id/* net/netfilter/nfnetlink_queue.c 1243 */;
	struct nfqnl_msg_config_cmd cocci_id/* net/netfilter/nfnetlink_queue.c 1242 */;
	const struct nla_policy cocci_id/* net/netfilter/nfnetlink_queue.c 1241 */[NFQA_CFG_MAX + 1];
	u16 cocci_id/* net/netfilter/nfnetlink_queue.c 1215 */;
	struct nfqnl_msg_verdict_hdr *cocci_id/* net/netfilter/nfnetlink_queue.c 1175 */;
	u_int16_t cocci_id/* net/netfilter/nfnetlink_queue.c 116 */;
	u32 cocci_id/* net/netfilter/nfnetlink_queue.c 116 */;
	struct nlattr *cocci_id/* net/netfilter/nfnetlink_queue.c 1135 */[NFQA_VLAN_MAX + 1];
	const struct nlattr *const cocci_id/* net/netfilter/nfnetlink_queue.c 1132 */[];
	enum ip_conntrack_info *cocci_id/* net/netfilter/nfnetlink_queue.c 1113 */;
	const struct nlmsghdr *cocci_id/* net/netfilter/nfnetlink_queue.c 1110 */;
	struct hlist_head *cocci_id/* net/netfilter/nfnetlink_queue.c 104 */;
	struct nfqnl_msg_verdict_hdr cocci_id/* net/netfilter/nfnetlink_queue.c 1019 */;
	const struct nla_policy cocci_id/* net/netfilter/nfnetlink_queue.c 1018 */[NFQA_MAX + 1];
	const struct nla_policy cocci_id/* net/netfilter/nfnetlink_queue.c 1004 */[NFQA_VLAN_MAX + 1];
}
