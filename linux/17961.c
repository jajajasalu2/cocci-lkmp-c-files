cocci_test_suite() {
	void *cocci_id/* arch/sparc/kernel/leon_smp.c 78 */;
	volatile unsigned long *cocci_id/* arch/sparc/kernel/leon_smp.c 64 */;
	unsigned long cocci_id/* arch/sparc/kernel/leon_smp.c 64 */;
	void cocci_id/* arch/sparc/kernel/leon_smp.c 58 */(void);
	volatile unsigned long cocci_id/* arch/sparc/kernel/leon_smp.c 56 */[NR_CPUS];
	ctxd_t *cocci_id/* arch/sparc/kernel/leon_smp.c 54 */;
	const struct sparc32_ipi_ops cocci_id/* arch/sparc/kernel/leon_smp.c 457 */;
	smpfunc_t cocci_id/* arch/sparc/kernel/leon_smp.c 377 */;
	cpumask_t cocci_id/* arch/sparc/kernel/leon_smp.c 377 */;
	struct smp_funcall {
		smpfunc_t func;
		unsigned long arg1;
		unsigned long arg2;
		unsigned long arg3;
		unsigned long arg4;
		unsigned long arg5;
		unsigned long processors_in[NR_CPUS];
		unsigned long processors_out[NR_CPUS];
	} cocci_id/* arch/sparc/kernel/leon_smp.c 363 */;
	int *cocci_id/* arch/sparc/kernel/leon_smp.c 287 */;
	struct tt_entry *cocci_id/* arch/sparc/kernel/leon_smp.c 280 */;
	struct device_node *cocci_id/* arch/sparc/kernel/leon_smp.c 279 */;
	struct property *cocci_id/* arch/sparc/kernel/leon_smp.c 278 */;
	struct leon_ipi_work *cocci_id/* arch/sparc/kernel/leon_smp.c 277 */;
	struct leon_ipi_work cocci_id/* arch/sparc/kernel/leon_smp.c 269 */;
	struct leon_ipi_work {
		int single;
		int msk;
		int resched;
	} cocci_id/* arch/sparc/kernel/leon_smp.c 263 */;
	struct task_struct *cocci_id/* arch/sparc/kernel/leon_smp.c 183 */;
	unsigned int cocci_id/* arch/sparc/kernel/leon_smp.c 168 */;
	int cocci_id/* arch/sparc/kernel/leon_smp.c 162 */;
	void __init cocci_id/* arch/sparc/kernel/leon_smp.c 160 */;
	void cocci_id/* arch/sparc/kernel/leon_smp.c 160 */;
	struct linux_prom_registers cocci_id/* arch/sparc/kernel/leon_smp.c 108 */;
}
