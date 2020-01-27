cocci_test_suite() {
	struct pt_regs cocci_id/* arch/ia64/kernel/setup.c 998 */;
	struct ia64_pal_retval cocci_id/* arch/ia64/kernel/setup.c 986 */;
	char *cocci_id/* arch/ia64/kernel/setup.c 980 */;
	long cocci_id/* arch/ia64/kernel/setup.c 968 */;
	struct cpuinfo_ia64 *cocci_id/* arch/ia64/kernel/setup.c 947 */;
	unsigned int cocci_id/* arch/ia64/kernel/setup.c 946 */;
	pal_vm_info_2_u_t cocci_id/* arch/ia64/kernel/setup.c 945 */;
	void cocci_id/* arch/ia64/kernel/setup.c 942 */(void *);
	struct screen_info cocci_id/* arch/ia64/kernel/setup.c 88 */;
	pal_cache_config_info_t cocci_id/* arch/ia64/kernel/setup.c 879 */;
	struct ia64_boot_param *cocci_id/* arch/ia64/kernel/setup.c 87 */;
	pal_status_t cocci_id/* arch/ia64/kernel/setup.c 828 */;
	pal_vm_info_1_u_t cocci_id/* arch/ia64/kernel/setup.c 826 */;
	union {
		unsigned long bits[5];
		struct {
			char vendor[16];
			u64 ppn;
			unsigned number:8;
			unsigned revision:8;
			unsigned model:8;
			unsigned family:8;
			unsigned archrev:8;
			unsigned reserved:24;
			u64 features;
		} field;
	} cocci_id/* arch/ia64/kernel/setup.c 805 */;
	char cocci_id/* arch/ia64/kernel/setup.c 776 */[128];
	__u8 cocci_id/* arch/ia64/kernel/setup.c 773 */;
	char cocci_id/* arch/ia64/kernel/setup.c 770 */[MAX_BRANDS][128];
	const struct seq_operations cocci_id/* arch/ia64/kernel/setup.c 762 */;
	unsigned long cocci_id/* arch/ia64/kernel/setup.c 76 */[NR_CPUS];
	void cocci_id/* arch/ia64/kernel/setup.c 757 */;
	loff_t *cocci_id/* arch/ia64/kernel/setup.c 751 */;
	struct seq_file *cocci_id/* arch/ia64/kernel/setup.c 751 */;
	void *cocci_id/* arch/ia64/kernel/setup.c 750 */;
	char cocci_id/* arch/ia64/kernel/setup.c 73 */[64];
	struct {
		unsigned long mask;
		const char *feature_name;
	} cocci_id/* arch/ia64/kernel/setup.c 664 */[];
	char **cocci_id/* arch/ia64/kernel/setup.c 551 */;
	u64 *cocci_id/* arch/ia64/kernel/setup.c 525 */;
	int __init cocci_id/* arch/ia64/kernel/setup.c 464 */;
	phys_addr_t cocci_id/* arch/ia64/kernel/setup.c 393 */;
	unsigned long long cocci_id/* arch/ia64/kernel/setup.c 278 */;
	int *cocci_id/* arch/ia64/kernel/setup.c 276 */;
	void __init cocci_id/* arch/ia64/kernel/setup.c 276 */;
	int __init cocci_id/* arch/ia64/kernel/setup.c 268 */;
	size_t cocci_id/* arch/ia64/kernel/setup.c 268 */;
	struct rsvd_region cocci_id/* arch/ia64/kernel/setup.c 231 */;
	struct rsvd_region *cocci_id/* arch/ia64/kernel/setup.c 221 */;
	void (*cocci_id/* arch/ia64/kernel/setup.c 185 */)(unsigned long,
							   unsigned long, int);
	u64 cocci_id/* arch/ia64/kernel/setup.c 183 */;
	int cocci_id/* arch/ia64/kernel/setup.c 147 */;
	struct rsvd_region cocci_id/* arch/ia64/kernel/setup.c 132 */[IA64_MAX_RSVD_REGIONS + 1]__initdata;
	struct io_space cocci_id/* arch/ia64/kernel/setup.c 111 */[MAX_IO_SPACES];
	unsigned long cocci_id/* arch/ia64/kernel/setup.c 1079 */;
	void __init cocci_id/* arch/ia64/kernel/setup.c 1076 */;
	struct resource cocci_id/* arch/ia64/kernel/setup.c 102 */;
	__typeof__(struct cpuinfo_ia64) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(unsigned long) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
