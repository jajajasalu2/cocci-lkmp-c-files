cocci_test_suite() {
	int __init cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 959 */;
	enum cpuhp_state cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 957 */;
	void cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 880 */;
	struct rdt_options *cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 805 */;
	bool __init cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 802 */;
	char *cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 776 */;
	struct rdt_options cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 764 */[]__initdata;
	struct rdt_options {
		char *name;
		int flag;
		bool force_off,force_on;
	} cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 758 */;
	enum{RDT_FLAG_CMT, RDT_FLAG_MBM_TOTAL, RDT_FLAG_MBM_LOCAL, RDT_FLAG_L3_CAT, RDT_FLAG_L3_CDP, RDT_FLAG_L2_CAT, RDT_FLAG_L2_CDP, RDT_FLAG_MBA,} cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 741 */;
	struct rdtgroup *cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 691 */;
	struct resctrl_pqr_state *cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 667 */;
	int cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 665 */;
	struct rdt_resource cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 62 */[];
	struct list_head *cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 560 */;
	void cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 54 */(struct rdt_domain *d,
								 struct msr_param *m,
								 struct rdt_resource *r);
	size_t cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 510 */;
	u32 *cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 486 */;
	struct msr_param cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 485 */;
	struct rdt_domain cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 452 */;
	struct list_head **cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 443 */;
	void *cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 418 */;
	unsigned int cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 399 */;
	struct rdt_domain *cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 397 */;
	struct msr_param *cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 397 */;
	unsigned long cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 376 */;
	struct cpu_cacheinfo *cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 351 */;
	union cpuid_0x10_1_eax cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 305 */;
	u32 cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 257 */;
	union cpuid_0x10_x_edx cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 256 */;
	union cpuid_0x10_3_eax cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 255 */;
	bool cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 253 */;
	struct rdt_resource *cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 253 */;
	void __exit cocci_id/* arch/x86/kernel/cpu/resctrl/core.c 1001 */;
	__typeof__(struct resctrl_pqr_state) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
