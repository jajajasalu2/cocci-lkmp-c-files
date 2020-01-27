cocci_test_suite() {
	int cocci_id/* arch/x86/kernel/cpu/common.c 825 */;
	struct cpuinfo_x86 *cocci_id/* arch/x86/kernel/cpu/common.c 823 */;
	void cocci_id/* arch/x86/kernel/cpu/common.c 823 */;
	u32 cocci_id/* arch/x86/kernel/cpu/common.c 809 */;
	unsigned int *cocci_id/* arch/x86/kernel/cpu/common.c 801 */;
	u16 __read_mostly cocci_id/* arch/x86/kernel/cpu/common.c 711 */[NR_INFO];
	unsigned int cocci_id/* arch/x86/kernel/cpu/common.c 668 */;
	cpumask_var_t cocci_id/* arch/x86/kernel/cpu/common.c 66 */;
	const struct cpu_dev *cocci_id/* arch/x86/kernel/cpu/common.c 620 */[X86_VENDOR_NUM];
	long cocci_id/* arch/x86/kernel/cpu/common.c 591 */;
	struct desc_ptr cocci_id/* arch/x86/kernel/cpu/common.c 589 */;
	__u32 cocci_id/* arch/x86/kernel/cpu/common.c 567 */[NCAPINTS + NBUGINTS]__aligned(sizeof(unsigned long));
	const struct legacy_cpu_model_info *cocci_id/* arch/x86/kernel/cpu/common.c 547 */;
	s32 cocci_id/* arch/x86/kernel/cpu/common.c 522 */;
	const struct cpuid_dependent_feature *cocci_id/* arch/x86/kernel/cpu/common.c 509 */;
	bool cocci_id/* arch/x86/kernel/cpu/common.c 507 */;
	const struct cpuid_dependent_feature cocci_id/* arch/x86/kernel/cpu/common.c 499 */[];
	struct cpuid_dependent_feature {
		u32 feature;
		u32 level;
	} cocci_id/* arch/x86/kernel/cpu/common.c 494 */;
	struct pkru_state *cocci_id/* arch/x86/kernel/cpu/common.c 445 */;
	char *cocci_id/* arch/x86/kernel/cpu/common.c 220 */;
	int __init cocci_id/* arch/x86/kernel/cpu/common.c 220 */;
	struct cpuinfo_x86 cocci_id/* arch/x86/kernel/cpu/common.c 1935 */;
	unsigned long cocci_id/* arch/x86/kernel/cpu/common.c 1911 */;
	struct task_struct *cocci_id/* arch/x86/kernel/cpu/common.c 1856 */;
	struct tss_struct *cocci_id/* arch/x86/kernel/cpu/common.c 1855 */;
	struct desc_struct cocci_id/* arch/x86/kernel/cpu/common.c 1785 */;
	struct stack_canary cocci_id/* arch/x86/kernel/cpu/common.c 1733 */;
	struct fixed_percpu_data cocci_id/* arch/x86/kernel/cpu/common.c 1648 */;
	const char *cocci_id/* arch/x86/kernel/cpu/common.c 1496 */;
	void cocci_id/* arch/x86/kernel/cpu/common.c 1378 */(void);
	const struct cpu_dev *cocci_id/* arch/x86/kernel/cpu/common.c 1275 */;
	const struct cpu_dev *const*cocci_id/* arch/x86/kernel/cpu/common.c 1267 */;
	u64 cocci_id/* arch/x86/kernel/cpu/common.c 1109 */;
	void __init cocci_id/* arch/x86/kernel/cpu/common.c 1107 */;
	const struct x86_cpu_id *cocci_id/* arch/x86/kernel/cpu/common.c 1092 */;
	bool __init cocci_id/* arch/x86/kernel/cpu/common.c 1090 */;
	const struct cpu_dev cocci_id/* arch/x86/kernel/cpu/common.c 104 */;
	const __initconst struct x86_cpu_id cocci_id/* arch/x86/kernel/cpu/common.c 1039 */[];
	__typeof__(u32) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct task_struct *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct irq_stack *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct cpu_entry_area *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(unsigned long) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(unsigned int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
