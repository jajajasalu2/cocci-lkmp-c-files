cocci_test_suite() {
	void __init cocci_id/* arch/s390/kernel/smp.c 998 */;
	void __noreturn cocci_id/* arch/s390/kernel/smp.c 956 */;
	struct pcpu *cocci_id/* arch/s390/kernel/smp.c 945 */;
	unsigned int cocci_id/* arch/s390/kernel/smp.c 943 */;
	void cocci_id/* arch/s390/kernel/smp.c 943 */;
	unsigned long cocci_id/* arch/s390/kernel/smp.c 926 */[16];
	int cocci_id/* arch/s390/kernel/smp.c 924 */;
	__vector128 __initdata cocci_id/* arch/s390/kernel/smp.c 92 */[__NUM_VXRS];
	char *cocci_id/* arch/s390/kernel/smp.c 917 */;
	int __init cocci_id/* arch/s390/kernel/smp.c 917 */;
	struct task_struct *cocci_id/* arch/s390/kernel/smp.c 880 */;
	struct pcpu cocci_id/* arch/s390/kernel/smp.c 83 */[NR_CPUS];
	cpumask_t cocci_id/* arch/s390/kernel/smp.c 763 */;
	struct sclp_core_entry *cocci_id/* arch/s390/kernel/smp.c 762 */;
	bool cocci_id/* arch/s390/kernel/smp.c 760 */;
	struct sclp_core_info *cocci_id/* arch/s390/kernel/smp.c 760 */;
	struct pcpu {
		struct lowcore *lowcore;
		unsigned long ec_mask;
		unsigned long ec_clk;
		signed char state;
		signed char polarization;
		u16 address;
	} cocci_id/* arch/s390/kernel/smp.c 73 */;
	cpumask_t *cocci_id/* arch/s390/kernel/smp.c 727 */;
	int cocci_id/* arch/s390/kernel/smp.c 725 */(int cpu);
	void __ref cocci_id/* arch/s390/kernel/smp.c 704 */;
	enum{CPU_STATE_STANDBY, CPU_STATE_CONFIGURED,} cocci_id/* arch/s390/kernel/smp.c 66 */;
	struct save_area *cocci_id/* arch/s390/kernel/smp.c 634 */;
	__vector128 *cocci_id/* arch/s390/kernel/smp.c 625 */;
	enum{ec_schedule=0, ec_call_function_single, ec_stop_cpu,} cocci_id/* arch/s390/kernel/smp.c 60 */;
	struct ec_creg_mask_parms cocci_id/* arch/s390/kernel/smp.c 568 */;
	struct ec_creg_mask_parms *cocci_id/* arch/s390/kernel/smp.c 544 */;
	struct ec_creg_mask_parms {
		unsigned long orval;
		unsigned long andval;
		int cr;
	} cocci_id/* arch/s390/kernel/smp.c 533 */;
	const struct cpumask *cocci_id/* arch/s390/kernel/smp.c 507 */;
	struct ext_code cocci_id/* arch/s390/kernel/smp.c 500 */;
	u64 cocci_id/* arch/s390/kernel/smp.c 430 */;
	void notrace cocci_id/* arch/s390/kernel/smp.c 427 */;
	void __no_sanitize_address cocci_id/* arch/s390/kernel/smp.c 316 */;
	void (*cocci_id/* arch/s390/kernel/smp.c 311 */)(void *);
	void *cocci_id/* arch/s390/kernel/smp.c 311 */;
	struct pt_regs cocci_id/* arch/s390/kernel/smp.c 285 */;
	unsigned int *cocci_id/* arch/s390/kernel/smp.c 272 */;
	u32 cocci_id/* arch/s390/kernel/smp.c 220 */;
	struct lowcore *cocci_id/* arch/s390/kernel/smp.c 192 */;
	u8 cocci_id/* arch/s390/kernel/smp.c 120 */;
	u16 cocci_id/* arch/s390/kernel/smp.c 120 */;
	unsigned long cocci_id/* arch/s390/kernel/smp.c 120 */;
	ssize_t __ref cocci_id/* arch/s390/kernel/smp.c 1190 */;
	int __ref cocci_id/* arch/s390/kernel/smp.c 1170 */;
	struct cpu *cocci_id/* arch/s390/kernel/smp.c 1142 */;
	struct attribute_group cocci_id/* arch/s390/kernel/smp.c 1111 */;
	struct attribute *cocci_id/* arch/s390/kernel/smp.c 1105 */[];
	char cocci_id/* arch/s390/kernel/smp.c 1038 */;
	const char *cocci_id/* arch/s390/kernel/smp.c 1034 */;
	size_t cocci_id/* arch/s390/kernel/smp.c 1034 */;
	struct device_attribute *cocci_id/* arch/s390/kernel/smp.c 1022 */;
	struct device *cocci_id/* arch/s390/kernel/smp.c 1021 */;
	ssize_t cocci_id/* arch/s390/kernel/smp.c 1021 */;
	__typeof__(struct cpu *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
