cocci_test_suite() {
	const struct manufacturer_info __initconst cocci_id/* arch/sparc/kernel/cpu.c 63 */[];
	unsigned long cocci_id/* arch/sparc/kernel/cpu.c 543 */;
	struct manufacturer_info {
		int psr_impl;
		struct cpu_info cpu_info[NOCPU];
		struct fpu_info fpu_info[NOFPU];
	} cocci_id/* arch/sparc/kernel/cpu.c 48 */;
	int cocci_id/* arch/sparc/kernel/cpu.c 442 */;
	int __init cocci_id/* arch/sparc/kernel/cpu.c 440 */;
	const struct seq_operations cocci_id/* arch/sparc/kernel/cpu.c 432 */;
	void cocci_id/* arch/sparc/kernel/cpu.c 428 */;
	loff_t *cocci_id/* arch/sparc/kernel/cpu.c 422 */;
	struct seq_file *cocci_id/* arch/sparc/kernel/cpu.c 422 */;
	void *cocci_id/* arch/sparc/kernel/cpu.c 422 */;
	struct fpu_info {
		int fp_vers;
		const char *name;
	} cocci_id/* arch/sparc/kernel/cpu.c 40 */;
	unsigned int cocci_id/* arch/sparc/kernel/cpu.c 366 */;
	struct cpu_info {
		int psr_vers;
		const char *name;
		const char *pmu_name;
	} cocci_id/* arch/sparc/kernel/cpu.c 34 */;
	void *__unused cocci_id/* arch/sparc/kernel/cpu.c 323 */;
	const struct fpu_info *cocci_id/* arch/sparc/kernel/cpu.c 283 */;
	const struct cpu_info *cocci_id/* arch/sparc/kernel/cpu.c 282 */;
	const struct manufacturer_info *cocci_id/* arch/sparc/kernel/cpu.c 265 */;
	void __init cocci_id/* arch/sparc/kernel/cpu.c 263 */;
	const char *cocci_id/* arch/sparc/kernel/cpu.c 258 */;
	__typeof__(cpuinfo_sparc) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
