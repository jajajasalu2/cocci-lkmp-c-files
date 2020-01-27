cocci_test_suite() {
	void notrace cocci_id/* arch/sparc/kernel/irq_64.c 968 */;
	struct sun5_timer *cocci_id/* arch/sparc/kernel/irq_64.c 927 */;
	const unsigned int *cocci_id/* arch/sparc/kernel/irq_64.c 912 */;
	struct device_node *cocci_id/* arch/sparc/kernel/irq_64.c 911 */;
	u64 cocci_id/* arch/sparc/kernel/irq_64.c 907 */;
	struct sun5_timer {
		u64 count0;
		u64 limit0;
		u64 count1;
		u64 limit1;
	} cocci_id/* arch/sparc/kernel/irq_64.c 899 */;
	struct irq_data *cocci_id/* arch/sparc/kernel/irq_64.c 879 */;
	struct irq_desc *cocci_id/* arch/sparc/kernel/irq_64.c 878 */;
	void *cocci_id/* arch/sparc/kernel/irq_64.c 859 */;
	struct pt_regs *cocci_id/* arch/sparc/kernel/irq_64.c 814 */;
	void __irq_entry cocci_id/* arch/sparc/kernel/irq_64.c 814 */;
	void *cocci_id/* arch/sparc/kernel/irq_64.c 811 */[NR_CPUS];
	struct ino_bucket cocci_id/* arch/sparc/kernel/irq_64.c 76 */;
	struct irq_chip *cocci_id/* arch/sparc/kernel/irq_64.c 705 */;
	u32 cocci_id/* arch/sparc/kernel/irq_64.c 678 */;
	void (*cocci_id/* arch/sparc/kernel/irq_64.c 650 */)(struct irq_handler_data *data,
							     u32 devhandle,
							     unsigned int devino);
	struct irq_handler_data cocci_id/* arch/sparc/kernel/irq_64.c 635 */;
	struct ino_bucket *cocci_id/* arch/sparc/kernel/irq_64.c 615 */;
	struct irq_handler_data *cocci_id/* arch/sparc/kernel/irq_64.c 614 */;
	struct irq_chip cocci_id/* arch/sparc/kernel/irq_64.c 585 */;
	bool cocci_id/* arch/sparc/kernel/irq_64.c 396 */;
	cpumask_t cocci_id/* arch/sparc/kernel/irq_64.c 351 */;
	const struct cpumask *cocci_id/* arch/sparc/kernel/irq_64.c 349 */;
	struct seq_file *cocci_id/* arch/sparc/kernel/irq_64.c 302 */;
	int cocci_id/* arch/sparc/kernel/irq_64.c 302 */;
	void (*cocci_id/* arch/sparc/kernel/irq_64.c 293 */)(unsigned int,
							     void *, void *);
	unsigned int cocci_id/* arch/sparc/kernel/irq_64.c 287 */;
	void cocci_id/* arch/sparc/kernel/irq_64.c 287 */;
	struct irq_handler_data {
		union {
			struct {
				unsigned int dev_handle;
				unsigned int dev_ino;
			};
			unsigned long sysino;
		};
		struct ino_bucket bucket;
		unsigned long iclr;
		unsigned long imap;
	} cocci_id/* arch/sparc/kernel/irq_64.c 198 */;
	unsigned int __init cocci_id/* arch/sparc/kernel/irq_64.c 185 */;
	int __init cocci_id/* arch/sparc/kernel/irq_64.c 176 */;
	char *cocci_id/* arch/sparc/kernel/irq_64.c 109 */;
	struct irqaction cocci_id/* arch/sparc/kernel/irq_64.c 1089 */;
	struct trap_per_cpu *cocci_id/* arch/sparc/kernel/irq_64.c 1033 */;
	unsigned long *cocci_id/* arch/sparc/kernel/irq_64.c 1018 */;
	unsigned long cocci_id/* arch/sparc/kernel/irq_64.c 1018 */;
	void __init cocci_id/* arch/sparc/kernel/irq_64.c 1018 */;
}
