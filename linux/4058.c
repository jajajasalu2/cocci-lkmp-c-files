cocci_test_suite() {
	struct seq_file *cocci_id/* drivers/irqchip/irq-partition-percpu.c 95 */;
	bool *cocci_id/* drivers/irqchip/irq-partition-percpu.c 70 */;
	enum irqchip_irq_state cocci_id/* drivers/irqchip/irq-partition-percpu.c 69 */;
	unsigned int cocci_id/* drivers/irqchip/irq-partition-percpu.c 26 */;
	bool cocci_id/* drivers/irqchip/irq-partition-percpu.c 25 */;
	struct partition_desc *cocci_id/* drivers/irqchip/irq-partition-percpu.c 25 */;
	long cocci_id/* drivers/irqchip/irq-partition-percpu.c 221 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-partition-percpu.c 204 */;
	const struct irq_domain_ops *cocci_id/* drivers/irqchip/irq-partition-percpu.c 201 */;
	int cocci_id/* drivers/irqchip/irq-partition-percpu.c 199 */;
	struct partition_affinity *cocci_id/* drivers/irqchip/irq-partition-percpu.c 198 */;
	struct fwnode_handle *cocci_id/* drivers/irqchip/irq-partition-percpu.c 197 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-partition-percpu.c 168 */;
	void cocci_id/* drivers/irqchip/irq-partition-percpu.c 165 */;
	struct partition_desc {
		int nr_parts;
		struct partition_affinity *parts;
		struct irq_domain *domain;
		struct irq_desc *chained_desc;
		unsigned long *bitmap;
		struct irq_domain_ops ops;
	} cocci_id/* drivers/irqchip/irq-partition-percpu.c 16 */;
	struct irq_fwspec *cocci_id/* drivers/irqchip/irq-partition-percpu.c 144 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-partition-percpu.c 142 */;
	void *cocci_id/* drivers/irqchip/irq-partition-percpu.c 139 */;
	struct irq_chip *cocci_id/* drivers/irqchip/irq-partition-percpu.c 116 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-partition-percpu.c 113 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-partition-percpu.c 104 */;
}
