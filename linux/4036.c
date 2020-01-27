cocci_test_suite() {
	bool cocci_id/* drivers/irqchip/irq-mvebu-sei.c 95 */;
	const struct cpumask *cocci_id/* drivers/irqchip/irq-mvebu-sei.c 94 */;
	u32 cocci_id/* drivers/irqchip/irq-mvebu-sei.c 59 */;
	struct mvebu_sei *cocci_id/* drivers/irqchip/irq-mvebu-sei.c 58 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-mvebu-sei.c 56 */;
	void cocci_id/* drivers/irqchip/irq-mvebu-sei.c 56 */;
	struct platform_driver cocci_id/* drivers/irqchip/irq-mvebu-sei.c 500 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-mvebu-sei.c 492 */[];
	struct mvebu_sei_caps cocci_id/* drivers/irqchip/irq-mvebu-sei.c 481 */;
	struct mvebu_sei {
		struct device *dev;
		void __iomem *base;
		struct resource *res;
		struct irq_domain *sei_domain;
		struct irq_domain *ap_domain;
		struct irq_domain *cp_domain;
		const struct mvebu_sei_caps *caps;
		struct mutex cp_msi_lock;
	DECLARE_BITMAP(cp_msi_bitmap,SEI_IRQ_COUNT)
		;
		raw_spinlock_t mask_lock;
	} cocci_id/* drivers/irqchip/irq-mvebu-sei.c 39 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-mvebu-sei.c 370 */;
	struct platform_device *cocci_id/* drivers/irqchip/irq-mvebu-sei.c 368 */;
	struct mvebu_sei_caps {
		struct mvebu_sei_interrupt_range ap_range;
		struct mvebu_sei_interrupt_range cp_range;
	} cocci_id/* drivers/irqchip/irq-mvebu-sei.c 34 */;
	struct irq_chip *cocci_id/* drivers/irqchip/irq-mvebu-sei.c 328 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-mvebu-sei.c 325 */;
	struct msi_domain_info cocci_id/* drivers/irqchip/irq-mvebu-sei.c 319 */;
	struct msi_domain_ops cocci_id/* drivers/irqchip/irq-mvebu-sei.c 316 */;
	struct mvebu_sei_interrupt_range {
		u32 first;
		u32 size;
	} cocci_id/* drivers/irqchip/irq-mvebu-sei.c 29 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-mvebu-sei.c 235 */;
	unsigned long cocci_id/* drivers/irqchip/irq-mvebu-sei.c 213 */;
	struct irq_fwspec cocci_id/* drivers/irqchip/irq-mvebu-sei.c 212 */;
	void *cocci_id/* drivers/irqchip/irq-mvebu-sei.c 209 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-mvebu-sei.c 208 */;
	unsigned int cocci_id/* drivers/irqchip/irq-mvebu-sei.c 208 */;
	int cocci_id/* drivers/irqchip/irq-mvebu-sei.c 208 */;
	unsigned int *cocci_id/* drivers/irqchip/irq-mvebu-sei.c 200 */;
	unsigned long *cocci_id/* drivers/irqchip/irq-mvebu-sei.c 199 */;
	struct irq_fwspec *cocci_id/* drivers/irqchip/irq-mvebu-sei.c 198 */;
	phys_addr_t cocci_id/* drivers/irqchip/irq-mvebu-sei.c 142 */;
	struct msi_msg *cocci_id/* drivers/irqchip/irq-mvebu-sei.c 139 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-mvebu-sei.c 129 */;
	enum irqchip_irq_state cocci_id/* drivers/irqchip/irq-mvebu-sei.c 101 */;
}
