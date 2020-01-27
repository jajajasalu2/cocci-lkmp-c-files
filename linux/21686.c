cocci_test_suite() {
	void __init cocci_id/* arch/s390/kernel/irq.c 98 */;
	const struct irq_class cocci_id/* arch/s390/kernel/irq.c 62 */[];
	const struct irq_class cocci_id/* arch/s390/kernel/irq.c 51 */[NR_IRQS_BASE];
	struct irq_class {
		int irq;
		char *name;
		char *desc;
	} cocci_id/* arch/s390/kernel/irq.c 35 */;
	struct irq_stat cocci_id/* arch/s390/kernel/irq.c 32 */;
	enum irq_subclass cocci_id/* arch/s390/kernel/irq.c 317 */;
	unsigned char cocci_id/* arch/s390/kernel/irq.c 315 */[64];
	struct irqaction cocci_id/* arch/s390/kernel/irq.c 297 */;
	struct ext_code *cocci_id/* arch/s390/kernel/irq.c 282 */;
	struct ext_int_info *cocci_id/* arch/s390/kernel/irq.c 279 */;
	struct ext_code cocci_id/* arch/s390/kernel/irq.c 278 */;
	irqreturn_t cocci_id/* arch/s390/kernel/irq.c 275 */;
	void *cocci_id/* arch/s390/kernel/irq.c 275 */;
	ext_int_handler_t cocci_id/* arch/s390/kernel/irq.c 237 */;
	u16 cocci_id/* arch/s390/kernel/irq.c 230 */;
	struct ext_int_info {
		ext_int_handler_t handler;
		struct hlist_node entry;
		struct rcu_head rcu;
		u16 code;
	} cocci_id/* arch/s390/kernel/irq.c 220 */;
	struct hlist_head cocci_id/* arch/s390/kernel/irq.c 218 */[32]____cacheline_aligned;
	unsigned long cocci_id/* arch/s390/kernel/irq.c 201 */;
	unsigned int cocci_id/* arch/s390/kernel/irq.c 191 */;
	loff_t *cocci_id/* arch/s390/kernel/irq.c 154 */;
	struct seq_file *cocci_id/* arch/s390/kernel/irq.c 152 */;
	struct irq_desc *cocci_id/* arch/s390/kernel/irq.c 123 */;
	struct pt_regs *cocci_id/* arch/s390/kernel/irq.c 106 */;
	int cocci_id/* arch/s390/kernel/irq.c 106 */;
	void cocci_id/* arch/s390/kernel/irq.c 106 */;
}
