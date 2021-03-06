cocci_test_suite() {
	unsigned long cocci_id/* net/bridge/netfilter/ebtables.c 980 */;
	struct xt_action_param *cocci_id/* net/bridge/netfilter/ebtables.c 92 */;
	const struct ebt_entry_watcher *cocci_id/* net/bridge/netfilter/ebtables.c 80 */;
	struct ebt_entries *cocci_id/* net/bridge/netfilter/ebtables.c 794 */;
	struct ebt_standard_target *cocci_id/* net/bridge/netfilter/ebtables.c 792 */;
	struct ebt_standard_target cocci_id/* net/bridge/netfilter/ebtables.c 788 */;
	const struct ebt_entry_target *cocci_id/* net/bridge/netfilter/ebtables.c 766 */;
	const struct ebt_entry *cocci_id/* net/bridge/netfilter/ebtables.c 765 */;
	struct ebt_entry *cocci_id/* net/bridge/netfilter/ebtables.c 765 */;
	char *cocci_id/* net/bridge/netfilter/ebtables.c 762 */;
	unsigned int cocci_id/* net/bridge/netfilter/ebtables.c 762 */;
	const struct ebt_entries *cocci_id/* net/bridge/netfilter/ebtables.c 761 */;
	struct ebt_cl_stack *cocci_id/* net/bridge/netfilter/ebtables.c 761 */;
	int cocci_id/* net/bridge/netfilter/ebtables.c 761 */;
	struct ebt_entry_target cocci_id/* net/bridge/netfilter/ebtables.c 734 */;
	struct xt_target cocci_id/* net/bridge/netfilter/ebtables.c 67 */;
	struct xt_tgchk_param cocci_id/* net/bridge/netfilter/ebtables.c 653 */;
	struct xt_mtchk_param cocci_id/* net/bridge/netfilter/ebtables.c 652 */;
	size_t cocci_id/* net/bridge/netfilter/ebtables.c 650 */;
	struct xt_tgdtor_param cocci_id/* net/bridge/netfilter/ebtables.c 619 */;
	struct xt_mtdtor_param cocci_id/* net/bridge/netfilter/ebtables.c 583 */;
	compat_int_t cocci_id/* net/bridge/netfilter/ebtables.c 58 */;
	struct ebt_cl_stack {
		struct ebt_chainstack cs;
		int from;
		unsigned int hookmask;
	} cocci_id/* net/bridge/netfilter/ebtables.c 545 */;
	struct ebt_entry cocci_id/* net/bridge/netfilter/ebtables.c 531 */;
	compat_int_t *cocci_id/* net/bridge/netfilter/ebtables.c 49 */;
	const struct ebt_replace *cocci_id/* net/bridge/netfilter/ebtables.c 427 */;
	struct ebt_entry_watcher cocci_id/* net/bridge/netfilter/ebtables.c 399 */;
	struct xt_tgchk_param *cocci_id/* net/bridge/netfilter/ebtables.c 391 */;
	struct ebt_entry_match cocci_id/* net/bridge/netfilter/ebtables.c 362 */;
	struct xt_mtchk_param *cocci_id/* net/bridge/netfilter/ebtables.c 354 */;
	struct mutex *cocci_id/* net/bridge/netfilter/ebtables.c 328 */;
	struct list_head *cocci_id/* net/bridge/netfilter/ebtables.c 327 */;
	struct {
		struct list_head list;
		char name[EBT_FUNCTION_MAXNAMELEN];
	} *cocci_id/* net/bridge/netfilter/ebtables.c 311 */;
	void __exit cocci_id/* net/bridge/netfilter/ebtables.c 2454 */;
	int __init cocci_id/* net/bridge/netfilter/ebtables.c 2438 */;
	struct nf_sockopt_ops cocci_id/* net/bridge/netfilter/ebtables.c 2421 */;
	struct sock *cocci_id/* net/bridge/netfilter/ebtables.c 2344 */;
	struct ebt_entries __user *cocci_id/* net/bridge/netfilter/ebtables.c 2285 */;
	char __user *cocci_id/* net/bridge/netfilter/ebtables.c 2279 */;
	struct ebt_entries_buf_state cocci_id/* net/bridge/netfilter/ebtables.c 2209 */;
	struct ebt_table_info *cocci_id/* net/bridge/netfilter/ebtables.c 2207 */;
	struct ebt_replace cocci_id/* net/bridge/netfilter/ebtables.c 2191 */;
	struct ebt_counter cocci_id/* net/bridge/netfilter/ebtables.c 2186 */;
	struct ebt_table_info cocci_id/* net/bridge/netfilter/ebtables.c 2185 */;
	struct compat_ebt_replace cocci_id/* net/bridge/netfilter/ebtables.c 2170 */;
	void __user *cocci_id/* net/bridge/netfilter/ebtables.c 2168 */;
	struct ebt_replace *cocci_id/* net/bridge/netfilter/ebtables.c 2167 */;
	struct ebt_entries_buf_state *cocci_id/* net/bridge/netfilter/ebtables.c 2150 */;
	unsigned char *cocci_id/* net/bridge/netfilter/ebtables.c 2149 */;
	unsigned int cocci_id/* net/bridge/netfilter/ebtables.c 2051 */[4];
	struct xt_action_param cocci_id/* net/bridge/netfilter/ebtables.c 193 */;
	struct xt_target *cocci_id/* net/bridge/netfilter/ebtables.c 1911 */;
	struct xt_match *cocci_id/* net/bridge/netfilter/ebtables.c 1910 */;
	char cocci_id/* net/bridge/netfilter/ebtables.c 1909 */[EBT_EXTENSION_MAXNAMELEN];
	const unsigned char *cocci_id/* net/bridge/netfilter/ebtables.c 1907 */;
	enum compat_mwt cocci_id/* net/bridge/netfilter/ebtables.c 1905 */;
	struct compat_ebt_entry_mwt *cocci_id/* net/bridge/netfilter/ebtables.c 1904 */;
	enum compat_mwt{EBT_COMPAT_MATCH, EBT_COMPAT_WATCHER, EBT_COMPAT_TARGET,} cocci_id/* net/bridge/netfilter/ebtables.c 1898 */;
	struct ebt_chainstack *cocci_id/* net/bridge/netfilter/ebtables.c 189 */;
	struct ebt_entries_buf_state {
		char *buf_kern_start;
		u32 buf_kern_len;
		u32 buf_kern_offset;
		u32 buf_user_offset;
	} cocci_id/* net/bridge/netfilter/ebtables.c 1856 */;
	struct ebt_counter *cocci_id/* net/bridge/netfilter/ebtables.c 1804 */;
	const struct nf_hook_state *cocci_id/* net/bridge/netfilter/ebtables.c 180 */;
	struct sk_buff *cocci_id/* net/bridge/netfilter/ebtables.c 179 */;
	void *cocci_id/* net/bridge/netfilter/ebtables.c 1743 */;
	struct compat_ebt_replace *cocci_id/* net/bridge/netfilter/ebtables.c 1733 */;
	const void *cocci_id/* net/bridge/netfilter/ebtables.c 1732 */;
	const struct ebt_table_info *cocci_id/* net/bridge/netfilter/ebtables.c 1731 */;
	struct ebt_entry_watcher *cocci_id/* net/bridge/netfilter/ebtables.c 1723 */;
	struct ebt_entry_match *cocci_id/* net/bridge/netfilter/ebtables.c 1716 */;
	int *cocci_id/* net/bridge/netfilter/ebtables.c 1716 */;
	struct ebt_entries cocci_id/* net/bridge/netfilter/ebtables.c 1670 */;
	compat_uint_t cocci_id/* net/bridge/netfilter/ebtables.c 1666 */;
	u32 cocci_id/* net/bridge/netfilter/ebtables.c 1665 */;
	struct ebt_entry __user *cocci_id/* net/bridge/netfilter/ebtables.c 1664 */;
	struct ebt_entry_target *cocci_id/* net/bridge/netfilter/ebtables.c 1663 */;
	unsigned int *cocci_id/* net/bridge/netfilter/ebtables.c 1661 */;
	void __user **cocci_id/* net/bridge/netfilter/ebtables.c 1660 */;
	const struct xt_target *cocci_id/* net/bridge/netfilter/ebtables.c 1624 */;
	struct compat_ebt_entry_mwt __user *cocci_id/* net/bridge/netfilter/ebtables.c 1593 */;
	const struct xt_match *cocci_id/* net/bridge/netfilter/ebtables.c 1592 */;
	struct compat_ebt_entry_mwt cocci_id/* net/bridge/netfilter/ebtables.c 1571 */;
	struct compat_ebt_entry_mwt {
		union {
			struct {
				char name[EBT_EXTENSION_MAXNAMELEN];
				u8 revision;
			};
			compat_uptr_t ptr;
		} u;
		compat_uint_t match_size;
		compat_uint_t data[0]__attribute__((aligned(__alignof__(struct compat_ebt_replace))));
	} cocci_id/* net/bridge/netfilter/ebtables.c 1555 */;
	struct compat_ebt_replace {
		char name[EBT_TABLE_MAXNAMELEN];
		compat_uint_t valid_hooks;
		compat_uint_t nentries;
		compat_uint_t entries_size;
		compat_uptr_t hook_entry[NF_BR_NUMHOOKS];
		compat_uint_t num_counters;
		compat_uptr_t counters;
		compat_uptr_t entries;
	} cocci_id/* net/bridge/netfilter/ebtables.c 1540 */;
	const int *cocci_id/* net/bridge/netfilter/ebtables.c 1415 */;
	const struct ebt_counter *cocci_id/* net/bridge/netfilter/ebtables.c 1384 */;
	const struct ebt_entry_match *cocci_id/* net/bridge/netfilter/ebtables.c 1329 */;
	int __user *cocci_id/* net/bridge/netfilter/ebtables.c 1321 */;
	u8 __user *cocci_id/* net/bridge/netfilter/ebtables.c 1320 */;
	u8 cocci_id/* net/bridge/netfilter/ebtables.c 1311 */;
	struct ebt_counter __user *cocci_id/* net/bridge/netfilter/ebtables.c 1249 */;
	const char *cocci_id/* net/bridge/netfilter/ebtables.c 1248 */;
	__be16 cocci_id/* net/bridge/netfilter/ebtables.c 123 */;
	const struct net_bridge_port *cocci_id/* net/bridge/netfilter/ebtables.c 122 */;
	const struct ethhdr *cocci_id/* net/bridge/netfilter/ebtables.c 121 */;
	const struct net_device *cocci_id/* net/bridge/netfilter/ebtables.c 119 */;
	const struct sk_buff *cocci_id/* net/bridge/netfilter/ebtables.c 118 */;
	struct ebt_table cocci_id/* net/bridge/netfilter/ebtables.c 1158 */;
	struct ebt_replace_kernel *cocci_id/* net/bridge/netfilter/ebtables.c 1148 */;
	const struct nf_hook_ops *cocci_id/* net/bridge/netfilter/ebtables.c 1144 */;
	struct ebt_table **cocci_id/* net/bridge/netfilter/ebtables.c 1144 */;
	const struct ebt_table *cocci_id/* net/bridge/netfilter/ebtables.c 1143 */;
	struct net *cocci_id/* net/bridge/netfilter/ebtables.c 1128 */;
	struct ebt_table *cocci_id/* net/bridge/netfilter/ebtables.c 1128 */;
	void cocci_id/* net/bridge/netfilter/ebtables.c 1128 */;
	const void __user *cocci_id/* net/bridge/netfilter/ebtables.c 1072 */;
}
