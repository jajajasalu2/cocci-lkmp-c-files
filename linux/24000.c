cocci_test_suite() {
	struct clusterip_config cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 93 */;
	void __exit cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 895 */;
	struct rcu_head *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 88 */;
	int __init cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 867 */;
	struct notifier_block cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 863 */;
	struct clusterip_net cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 860 */;
	struct pernet_operations cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 856 */;
	char cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 779 */[PROC_WRITELEN + 1];
	loff_t *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 775 */;
	size_t cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 775 */;
	const char __user *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 774 */;
	ssize_t cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 774 */;
	struct seq_file *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 750 */;
	struct inode *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 745 */;
	struct file *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 745 */;
	const struct seq_operations cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 738 */;
	struct clusterip_seq_position *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 705 */;
	struct clusterip_seq_position cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 690 */;
	struct clusterip_seq_position {
		unsigned int pos;
		unsigned int weight;
		unsigned int bit;
		unsigned long val;
	} cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 670 */;
	const struct nf_hook_ops cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 657 */;
	struct clusterip_net {
		struct list_head configs;
		spinlock_t lock;
#ifdef CONFIG_PROC_FS
		struct proc_dir_entry *procdir;
		struct mutex mutex;
#endif
	} cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 64 */;
	struct arp_payload *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 610 */;
	const struct file_operations cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 61 */;
	struct arphdr *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 609 */;
	const struct nf_hook_state *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 607 */;
	struct sk_buff *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 606 */;
	void *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 605 */;
	unsigned int cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 604 */;
	int cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 590 */;
	char cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 589 */[HBUFFERLEN];
	void cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 586 */;
	struct arp_payload {
		u_int8_t src_hw[ETH_ALEN];
		__be32 src_ip;
		u_int8_t dst_hw[ETH_ALEN];
		__be32 dst_ip;
	}__packed cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 578 */;
	struct compat_ipt_clusterip_tgt_info cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 567 */;
	struct ipt_clusterip_tgt_info cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 564 */;
	struct xt_target cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 558 */;
	struct compat_ipt_clusterip_tgt_info {
		u_int32_t flags;
		u_int8_t clustermac[6];
		u_int16_t num_total_nodes;
		u_int16_t num_local_nodes;
		u_int16_t local_nodes[CLUSTERIP_MAX_NODES];
		u_int32_t hash_mode;
		u_int32_t hash_initval;
		compat_uptr_t config;
	} cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 545 */;
	const struct xt_tgdtor_param *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 531 */;
	const struct ipt_entry *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 461 */;
	struct ipt_clusterip_tgt_info *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 460 */;
	const struct xt_tgchk_param *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 458 */;
	enum ip_conntrack_info cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 401 */;
	struct nf_conn *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 400 */;
	const struct xt_action_param *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 397 */;
	struct clusterip_config {
		struct list_head list;
		refcount_t refcount;
		refcount_t entries;
		__be32 clusterip;
		u_int8_t clustermac[ETH_ALEN];
		int ifindex;
		u_int16_t num_total_nodes;
		unsigned long local_nodes;
#ifdef CONFIG_PROC_FS
		struct proc_dir_entry *pde;
#endif
		enum clusterip_hashmode hash_mode;
		u_int32_t hash_initval;
		struct rcu_head rcu;
		struct net *net;
		char ifname[IFNAMSIZ];
	} cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 38 */;
	u16 cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 348 */[2];
	const u_int16_t *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 347 */;
	unsigned long cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 341 */;
	const struct iphdr *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 340 */;
	const struct clusterip_config *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 338 */;
	const struct sk_buff *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 337 */;
	u_int32_t cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 336 */;
	bool cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 322 */;
	u_int16_t cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 308 */;
	char cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 276 */[16];
	struct net_device *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 233 */;
	const char *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 229 */;
	const struct ipt_clusterip_tgt_info *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 228 */;
	struct notifier_block *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 188 */;
	struct clusterip_net *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 140 */;
	__be32 cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 137 */;
	struct net *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 137 */;
	struct clusterip_config *cocci_id/* net/ipv4/netfilter/ipt_CLUSTERIP.c 136 */;
}
