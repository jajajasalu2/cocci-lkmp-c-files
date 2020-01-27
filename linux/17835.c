cocci_test_suite() {
	struct sal_to_os_boot *cocci_id/* arch/ia64/kernel/smpboot.c 84 */;
	pal_logical_to_physical_t cocci_id/* arch/ia64/kernel/smpboot.c 793 */;
	u16 cocci_id/* arch/ia64/kernel/smpboot.c 792 */;
	struct cpuinfo_ia64 *cocci_id/* arch/ia64/kernel/smpboot.c 789 */;
	struct sal_to_os_boot cocci_id/* arch/ia64/kernel/smpboot.c 78 */[NR_CPUS];
	struct fptr *cocci_id/* arch/ia64/kernel/smpboot.c 777 */;
	struct fptr {
		unsigned long fp;
		unsigned long gp;
	} *cocci_id/* arch/ia64/kernel/smpboot.c 770 */;
	void __init cocci_id/* arch/ia64/kernel/smpboot.c 767 */;
	struct task_struct *cocci_id/* arch/ia64/kernel/smpboot.c 727 */;
	unsigned int cocci_id/* arch/ia64/kernel/smpboot.c 673 */;
	void cocci_id/* arch/ia64/kernel/smpboot.c 673 */;
	int cocci_id/* arch/ia64/kernel/smpboot.c 647 */;
	const struct cpumask *cocci_id/* arch/ia64/kernel/smpboot.c 610 */;
	struct irq_data *cocci_id/* arch/ia64/kernel/smpboot.c 609 */;
	void cocci_id/* arch/ia64/kernel/smpboot.c 604 */(void);
	void *cocci_id/* arch/ia64/kernel/smpboot.c 444 */;
	volatile int cocci_id/* arch/ia64/kernel/smpboot.c 358 */;
	struct {
		long rt;
		long master;
		long diff;
		long lat;
	} cocci_id/* arch/ia64/kernel/smpboot.c 281 */[NUM_ROUNDS];
	long *cocci_id/* arch/ia64/kernel/smpboot.c 215 */;
	long cocci_id/* arch/ia64/kernel/smpboot.c 214 */;
	char *cocci_id/* arch/ia64/kernel/smpboot.c 147 */;
	int __init cocci_id/* arch/ia64/kernel/smpboot.c 146 */;
	unsigned char cocci_id/* arch/ia64/kernel/smpboot.c 136 */;
	char __initdata cocci_id/* arch/ia64/kernel/smpboot.c 134 */;
	unsigned long cocci_id/* arch/ia64/kernel/smpboot.c 132 */;
	struct smp_boot_data cocci_id/* arch/ia64/kernel/smpboot.c 130 */;
	cpumask_t cocci_id/* arch/ia64/kernel/smpboot.c 128 */;
	volatile int cocci_id/* arch/ia64/kernel/smpboot.c 125 */[NR_CPUS];
	cpumask_t cocci_id/* arch/ia64/kernel/smpboot.c 117 */[NR_CPUS]__cacheline_aligned;
	volatile unsigned long cocci_id/* arch/ia64/kernel/smpboot.c 103 */[SLAVE + 1];
	__typeof__(int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
