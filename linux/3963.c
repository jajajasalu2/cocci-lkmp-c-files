cocci_test_suite() {
	struct irq_fwspec cocci_id/* drivers/irqchip/irq-crossbar.c 77 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-crossbar.c 75 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-crossbar.c 74 */;
	unsigned cocci_id/* drivers/irqchip/irq-crossbar.c 74 */;
	int cocci_id/* drivers/irqchip/irq-crossbar.c 74 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-crossbar.c 60 */;
	struct crossbar_device *cocci_id/* drivers/irqchip/irq-crossbar.c 43 */;
	struct crossbar_device {
		raw_spinlock_t lock;
		uint int_max;
		uint safe_map;
		uint max_crossbar_sources;
		uint *irq_map;
		void __iomem *crossbar_base;
		int *register_offsets;
		void (*write)(int, int);
	} cocci_id/* drivers/irqchip/irq-crossbar.c 32 */;
	__be32 cocci_id/* drivers/irqchip/irq-crossbar.c 237 */;
	const __be32 *cocci_id/* drivers/irqchip/irq-crossbar.c 199 */;
	u32 cocci_id/* drivers/irqchip/irq-crossbar.c 197 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-crossbar.c 195 */;
	int __init cocci_id/* drivers/irqchip/irq-crossbar.c 195 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-crossbar.c 189 */;
	unsigned int *cocci_id/* drivers/irqchip/irq-crossbar.c 171 */;
	unsigned long *cocci_id/* drivers/irqchip/irq-crossbar.c 170 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-crossbar.c 159 */;
	void cocci_id/* drivers/irqchip/irq-crossbar.c 152 */;
	struct irq_fwspec *cocci_id/* drivers/irqchip/irq-crossbar.c 114 */;
	void *cocci_id/* drivers/irqchip/irq-crossbar.c 112 */;
	unsigned int cocci_id/* drivers/irqchip/irq-crossbar.c 111 */;
}
