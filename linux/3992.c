cocci_test_suite() {
	phys_addr_t cocci_id/* drivers/irqchip/irq-alpine-msi.c 95 */;
	struct msi_msg *cocci_id/* drivers/irqchip/irq-alpine-msi.c 92 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-alpine-msi.c 91 */;
	void cocci_id/* drivers/irqchip/irq-alpine-msi.c 91 */;
	unsigned cocci_id/* drivers/irqchip/irq-alpine-msi.c 79 */;
	struct alpine_msix_data *cocci_id/* drivers/irqchip/irq-alpine-msi.c 59 */;
	int cocci_id/* drivers/irqchip/irq-alpine-msi.c 59 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-alpine-msi.c 51 */;
	struct alpine_msix_data {
		spinlock_t msi_map_lock;
		phys_addr_t addr;
		u32 spi_first;
		u32 num_spis;
		unsigned long *msi_map;
	} cocci_id/* drivers/irqchip/irq-alpine-msi.c 31 */;
	struct resource cocci_id/* drivers/irqchip/irq-alpine-msi.c 234 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-alpine-msi.c 230 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-alpine-msi.c 185 */;
	void *cocci_id/* drivers/irqchip/irq-alpine-msi.c 147 */;
	struct irq_fwspec cocci_id/* drivers/irqchip/irq-alpine-msi.c 122 */;
	unsigned int cocci_id/* drivers/irqchip/irq-alpine-msi.c 120 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-alpine-msi.c 119 */;
	struct msi_domain_info cocci_id/* drivers/irqchip/irq-alpine-msi.c 104 */;
}
