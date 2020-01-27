cocci_test_suite() {
	u32 cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 96 */;
	unsigned int cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 95 */;
	struct irq_chip *cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 94 */;
	struct brcmstb_l2_intc_data *cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 93 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 91 */;
	void cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 91 */;
	struct brcmstb_l2_intc_data {
		struct irq_domain *domain;
		struct irq_chip_generic *gc;
		int status_offset;
		int mask_offset;
		bool can_wake;
		u32 saved_mask;
	} cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 56 */;
	const struct brcmstb_intc_init_params cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 36 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 272 */;
	int __init cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 272 */;
	struct brcmstb_intc_init_params {
		irq_flow_handler_t handler;
		int cpu_status;
		int cpu_clear;
		int cpu_mask_status;
		int cpu_mask_set;
		int cpu_mask_clear;
	} cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 26 */;
	void __iomem *cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 169 */;
	int cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 166 */;
	struct irq_chip_type *cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 165 */;
	const struct brcmstb_intc_init_params *cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 160 */;
	unsigned long cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 143 */;
	struct irq_chip_generic *cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 140 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-brcmstb-l2.c 138 */;
}
