cocci_test_suite() {
	void __exit cocci_id/* arch/ia64/kernel/palinfo.c 976 */;
	int __init cocci_id/* arch/ia64/kernel/palinfo.c 957 */;
	enum cpuhp_state cocci_id/* arch/ia64/kernel/palinfo.c 955 */;
	void *cocci_id/* arch/ia64/kernel/palinfo.c 941 */;
	char cocci_id/* arch/ia64/kernel/palinfo.c 929 */[3 + 4 + 1];
	struct proc_dir_entry *cocci_id/* arch/ia64/kernel/palinfo.c 927 */;
	pal_func_cpu_u_t cocci_id/* arch/ia64/kernel/palinfo.c 926 */;
	unsigned int cocci_id/* arch/ia64/kernel/palinfo.c 924 */;
	palinfo_smp_data_t cocci_id/* arch/ia64/kernel/palinfo.c 879 */;
	pal_func_cpu_u_t *cocci_id/* arch/ia64/kernel/palinfo.c 877 */;
	palinfo_smp_data_t *cocci_id/* arch/ia64/kernel/palinfo.c 866 */;
	struct {
		palinfo_func_t func;
		struct seq_file *m;
		int ret;
	} cocci_id/* arch/ia64/kernel/palinfo.c 852 */;
	union {
		u64 value;
		struct {
			unsigned req_cpu:32;
			unsigned func_id:32;
		} pal_func_cpu;
	} cocci_id/* arch/ia64/kernel/palinfo.c 836 */;
	const palinfo_entry_t cocci_id/* arch/ia64/kernel/palinfo.c 812 */[];
	struct rid_reg *cocci_id/* arch/ia64/kernel/palinfo.c 776 */;
	struct itir_reg *cocci_id/* arch/ia64/kernel/palinfo.c 775 */;
	struct gr_reg *cocci_id/* arch/ia64/kernel/palinfo.c 774 */;
	struct ifa_reg *cocci_id/* arch/ia64/kernel/palinfo.c 769 */;
	struct rid_reg {
		unsigned long ig1:1;
		unsigned long rv1:1;
		unsigned long ig2:6;
		unsigned long rid:24;
		unsigned long rv2:32;
	} *cocci_id/* arch/ia64/kernel/palinfo.c 744 */;
	struct gr_reg {
		unsigned long p:1;
		unsigned long rv1:1;
		unsigned long ma:3;
		unsigned long a:1;
		unsigned long d:1;
		unsigned long pl:2;
		unsigned long ar:3;
		unsigned long ppn:38;
		unsigned long rv2:2;
		unsigned long ed:1;
		unsigned long ig:11;
	} *cocci_id/* arch/ia64/kernel/palinfo.c 731 */;
	struct itir_reg {
		unsigned long rv1:2;
		unsigned long ps:6;
		unsigned long key:24;
		unsigned long rv2:32;
	} *cocci_id/* arch/ia64/kernel/palinfo.c 725 */;
	struct ifa_reg {
		unsigned long valid:1;
		unsigned long ig:11;
		unsigned long vpn:52;
	} *cocci_id/* arch/ia64/kernel/palinfo.c 720 */;
	unsigned long cocci_id/* arch/ia64/kernel/palinfo.c 719 */[3];
	pal_vm_info_2_u_t cocci_id/* arch/ia64/kernel/palinfo.c 717 */;
	pal_vm_info_1_u_t cocci_id/* arch/ia64/kernel/palinfo.c 716 */;
	u64 cocci_id/* arch/ia64/kernel/palinfo.c 715 */[4];
	pal_tr_valid_u_t cocci_id/* arch/ia64/kernel/palinfo.c 714 */;
	struct pal_freq_ratio cocci_id/* arch/ia64/kernel/palinfo.c 693 */;
	pal_perf_mon_info_u_t cocci_id/* arch/ia64/kernel/palinfo.c 654 */;
	u64 cocci_id/* arch/ia64/kernel/palinfo.c 653 */[16];
	pal_version_u_t cocci_id/* arch/ia64/kernel/palinfo.c 629 */;
	s64 cocci_id/* arch/ia64/kernel/palinfo.c 607 */;
	pal_bus_features_u_t cocci_id/* arch/ia64/kernel/palinfo.c 604 */;
	const char *const *cocci_id/* arch/ia64/kernel/palinfo.c 603 */;
	const char *const cocci_id/* arch/ia64/kernel/palinfo.c 575 */[];
	const char *const *const cocci_id/* arch/ia64/kernel/palinfo.c 511 */[];
	struct {
		const char *name;
		palinfo_func_t proc_read;
		struct proc_dir_entry *entry;
	} cocci_id/* arch/ia64/kernel/palinfo.c 48 */;
	int (*cocci_id/* arch/ia64/kernel/palinfo.c 46 */)(struct seq_file *);
	pal_hints_u_t cocci_id/* arch/ia64/kernel/palinfo.c 425 */;
	u64 cocci_id/* arch/ia64/kernel/palinfo.c 422 */[2];
	const char *cocci_id/* arch/ia64/kernel/palinfo.c 298 */;
	ia64_ptce_info_t cocci_id/* arch/ia64/kernel/palinfo.c 297 */;
	pal_tc_info_u_t cocci_id/* arch/ia64/kernel/palinfo.c 296 */;
	long cocci_id/* arch/ia64/kernel/palinfo.c 217 */;
	pal_cache_config_info_t cocci_id/* arch/ia64/kernel/palinfo.c 215 */;
	unsigned long cocci_id/* arch/ia64/kernel/palinfo.c 214 */;
	pal_power_mgmt_info_u_t *cocci_id/* arch/ia64/kernel/palinfo.c 187 */;
	u64 cocci_id/* arch/ia64/kernel/palinfo.c 186 */[8];
	u64 cocci_id/* arch/ia64/kernel/palinfo.c 154 */;
	u64 *cocci_id/* arch/ia64/kernel/palinfo.c 151 */;
	struct seq_file *cocci_id/* arch/ia64/kernel/palinfo.c 151 */;
	int cocci_id/* arch/ia64/kernel/palinfo.c 151 */;
	void cocci_id/* arch/ia64/kernel/palinfo.c 151 */;
	const char *cocci_id/* arch/ia64/kernel/palinfo.c 130 */[];
}
