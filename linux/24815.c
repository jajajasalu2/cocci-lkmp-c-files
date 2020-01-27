cocci_test_suite() {
	struct recent_net {
		struct list_head tables;
#ifdef CONFIG_PROC_FS
		struct proc_dir_entry *xt_recent;
#endif
	} cocci_id/* net/netfilter/xt_recent.c 88 */;
	struct recent_table {
		struct list_head list;
		char name[XT_RECENT_NAME_LEN];
		union nf_inet_addr mask;
		unsigned int refcnt;
		unsigned int entries;
		u8 nstamps_max_mask;
		struct list_head lru_list;
		struct list_head iphash[0];
	} cocci_id/* net/netfilter/xt_recent.c 77 */;
	void __exit cocci_id/* net/netfilter/xt_recent.c 749 */;
	int __init cocci_id/* net/netfilter/xt_recent.c 730 */;
	struct xt_match cocci_id/* net/netfilter/xt_recent.c 687 */[]__read_mostly;
	struct recent_net cocci_id/* net/netfilter/xt_recent.c 684 */;
	struct pernet_operations cocci_id/* net/netfilter/xt_recent.c 680 */;
	void __net_exit cocci_id/* net/netfilter/xt_recent.c 675 */;
	int __net_init cocci_id/* net/netfilter/xt_recent.c 667 */;
	struct recent_entry {
		struct list_head list;
		struct list_head lru_list;
		union nf_inet_addr addr;
		u_int16_t family;
		u_int8_t ttl;
		u_int8_t index;
		u_int16_t nstamps;
		unsigned long stamps[0];
	} cocci_id/* net/netfilter/xt_recent.c 66 */;
	void *cocci_id/* net/netfilter/xt_recent.c 593 */;
	const char *cocci_id/* net/netfilter/xt_recent.c 557 */;
	char cocci_id/* net/netfilter/xt_recent.c 556 */[sizeof("+b335:1d35:1e55:dead:c0de:1715:5afe:c0de")];
	loff_t *cocci_id/* net/netfilter/xt_recent.c 552 */;
	size_t cocci_id/* net/netfilter/xt_recent.c 552 */;
	const char __user *cocci_id/* net/netfilter/xt_recent.c 551 */;
	struct file *cocci_id/* net/netfilter/xt_recent.c 551 */;
	ssize_t cocci_id/* net/netfilter/xt_recent.c 550 */;
	struct inode *cocci_id/* net/netfilter/xt_recent.c 538 */;
	const struct seq_operations cocci_id/* net/netfilter/xt_recent.c 531 */;
	const struct list_head *cocci_id/* net/netfilter/xt_recent.c 493 */;
	const struct recent_entry *cocci_id/* net/netfilter/xt_recent.c 492 */;
	struct recent_iter_state *cocci_id/* net/netfilter/xt_recent.c 490 */;
	struct seq_file *cocci_id/* net/netfilter/xt_recent.c 488 */;
	loff_t cocci_id/* net/netfilter/xt_recent.c 477 */;
	unsigned int cocci_id/* net/netfilter/xt_recent.c 47 */;
	struct recent_iter_state {
		const struct recent_table *table;
		unsigned int bucket;
	} cocci_id/* net/netfilter/xt_recent.c 466 */;
	const struct xt_mtdtor_param *cocci_id/* net/netfilter/xt_recent.c 443 */;
	struct xt_recent_mtinfo cocci_id/* net/netfilter/xt_recent.c 431 */;
	struct xt_recent_mtinfo_v1 cocci_id/* net/netfilter/xt_recent.c 428 */;
	const struct xt_recent_mtinfo_v0 *cocci_id/* net/netfilter/xt_recent.c 427 */;
	kgid_t cocci_id/* net/netfilter/xt_recent.c 332 */;
	kuid_t cocci_id/* net/netfilter/xt_recent.c 331 */;
	struct proc_dir_entry *cocci_id/* net/netfilter/xt_recent.c 330 */;
	const struct xt_mtchk_param *cocci_id/* net/netfilter/xt_recent.c 324 */;
	int cocci_id/* net/netfilter/xt_recent.c 324 */;
	const struct ipv6hdr *cocci_id/* net/netfilter/xt_recent.c 254 */;
	const struct iphdr *cocci_id/* net/netfilter/xt_recent.c 245 */;
	union nf_inet_addr cocci_id/* net/netfilter/xt_recent.c 240 */;
	const struct xt_recent_mtinfo_v1 *cocci_id/* net/netfilter/xt_recent.c 237 */;
	struct recent_net *cocci_id/* net/netfilter/xt_recent.c 236 */;
	struct net *cocci_id/* net/netfilter/xt_recent.c 235 */;
	const struct sk_buff *cocci_id/* net/netfilter/xt_recent.c 233 */;
	struct xt_action_param *cocci_id/* net/netfilter/xt_recent.c 233 */;
	bool cocci_id/* net/netfilter/xt_recent.c 232 */;
	struct recent_entry cocci_id/* net/netfilter/xt_recent.c 179 */;
	u_int8_t cocci_id/* net/netfilter/xt_recent.c 173 */;
	u_int16_t cocci_id/* net/netfilter/xt_recent.c 173 */;
	struct recent_table *cocci_id/* net/netfilter/xt_recent.c 172 */;
	struct recent_entry *cocci_id/* net/netfilter/xt_recent.c 171 */;
	unsigned long cocci_id/* net/netfilter/xt_recent.c 155 */;
	void cocci_id/* net/netfilter/xt_recent.c 155 */;
	const struct recent_table *cocci_id/* net/netfilter/xt_recent.c 124 */;
	u32 *cocci_id/* net/netfilter/xt_recent.c 119 */;
	u32 cocci_id/* net/netfilter/xt_recent.c 113 */;
	const union nf_inet_addr *cocci_id/* net/netfilter/xt_recent.c 111 */;
	u_int32_t cocci_id/* net/netfilter/xt_recent.c 109 */;
	const struct file_operations cocci_id/* net/netfilter/xt_recent.c 106 */;
}
