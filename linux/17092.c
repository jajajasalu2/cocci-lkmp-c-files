cocci_test_suite() {
	int cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 953 */;
	const __be32 *cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 952 */;
	struct dt_cpu_feature *cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 950 */;
	void __init cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 950 */;
	u64 cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 83 */;
	void cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 81 */;
	void (*cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 79 */)(void);
	struct {
		u64 lpcr;
		u64 lpcr_clear;
		u64 hfscr;
		u64 fscr;
	} cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 72 */;
	long cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 67 */(struct pt_regs *regs);
	bool cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 663 */;
	const struct dt_cpu_feature_match *cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 662 */;
	bool __init cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 660 */;
	u32 cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 650 */;
	char *cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 634 */;
	bool __initdata cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 632 */;
	struct dt_cpu_feature_match __initdata cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 562 */[];
	struct dt_cpu_feature_match {
		const char *name;
		int (*enable)(struct dt_cpu_feature *f);
		u64 cpu_ftr_bit_mask;
	} cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 556 */;
	struct dt_cpu_feature {
		const char *name;
		uint32_t isa;
		uint32_t usable_privilege;
		uint32_t hv_support;
		uint32_t os_support;
		uint32_t hfscr_bit_nr;
		uint32_t fscr_bit_nr;
		uint32_t hwcap_bit_nr;
		unsigned long node;
		int enabled;
		int disabled;
	} cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 41 */;
	uint32_t cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 212 */;
	struct cpu_spec __initdata cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 114 */;
	char cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 112 */[64];
	struct dt_cpu_feature cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 1036 */;
	int *cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 1008 */;
	void *cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 1006 */;
	const char *cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 1005 */;
	unsigned long cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 1004 */;
	int __init cocci_id/* arch/powerpc/kernel/dt_cpu_ftrs.c 1004 */;
}
