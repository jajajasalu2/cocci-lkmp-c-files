cocci_test_suite() {
	unsigned long cocci_id/* arch/sparc/kernel/sun4d_smp.c 68 */;
	void *cocci_id/* arch/sparc/kernel/sun4d_smp.c 66 */;
	int cocci_id/* arch/sparc/kernel/sun4d_smp.c 45 */;
	void cocci_id/* arch/sparc/kernel/sun4d_smp.c 45 */;
	unsigned char cocci_id/* arch/sparc/kernel/sun4d_smp.c 43 */[32];
	void cocci_id/* arch/sparc/kernel/sun4d_smp.c 41 */(void);
	const struct sparc32_ipi_ops cocci_id/* arch/sparc/kernel/sun4d_smp.c 393 */;
	char cocci_id/* arch/sparc/kernel/sun4d_smp.c 370 */[];
	int cocci_id/* arch/sparc/kernel/sun4d_smp.c 369 */[NR_CPUS];
	struct clock_event_device *cocci_id/* arch/sparc/kernel/sun4d_smp.c 368 */;
	struct pt_regs *cocci_id/* arch/sparc/kernel/sun4d_smp.c 364 */;
	volatile unsigned long *cocci_id/* arch/sparc/kernel/sun4d_smp.c 33 */;
	volatile int cocci_id/* arch/sparc/kernel/sun4d_smp.c 30 */;
	smpfunc_t cocci_id/* arch/sparc/kernel/sun4d_smp.c 284 */;
	cpumask_t cocci_id/* arch/sparc/kernel/sun4d_smp.c 284 */;
	struct smp_funcall {
		smpfunc_t func;
		unsigned long arg1;
		unsigned long arg2;
		unsigned long arg3;
		unsigned long arg4;
		unsigned long arg5;
		unsigned char processors_in[NR_CPUS];
		unsigned char processors_out[NR_CPUS];
	} cocci_id/* arch/sparc/kernel/sun4d_smp.c 270 */;
	struct sun4d_ipi_work *cocci_id/* arch/sparc/kernel/sun4d_smp.c 196 */;
	struct sun4d_ipi_work cocci_id/* arch/sparc/kernel/sun4d_smp.c 190 */;
	struct sun4d_ipi_work {
		int single;
		int msk;
		int resched;
	} cocci_id/* arch/sparc/kernel/sun4d_smp.c 184 */;
	int *cocci_id/* arch/sparc/kernel/sun4d_smp.c 166 */;
	char *cocci_id/* arch/sparc/kernel/sun4d_smp.c 143 */;
	unsigned int cocci_id/* arch/sparc/kernel/sun4d_smp.c 136 */;
	unsigned long *cocci_id/* arch/sparc/kernel/sun4d_smp.c 124 */;
	struct task_struct *cocci_id/* arch/sparc/kernel/sun4d_smp.c 122 */;
	void __init cocci_id/* arch/sparc/kernel/sun4d_smp.c 114 */;
}
