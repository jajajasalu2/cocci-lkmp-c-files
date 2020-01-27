cocci_test_suite() {
	unsigned long cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 68 */;
	struct irq_chip_generic *cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 66 */;
	struct irq_chip *cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 59 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 55 */;
	void cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 55 */;
	struct bcm7120_l2_intc_data {
		unsigned int n_words;
		void __iomem *map_base[MAX_MAPPINGS];
		void __iomem *pair_base[MAX_WORDS];
		int en_offset[MAX_WORDS];
		int stat_offset[MAX_WORDS];
		struct irq_domain *domain;
		bool can_wake;
		u32 irq_fwd_mask[MAX_WORDS];
		struct bcm7120_l1_intc_data *l1_data;
		int num_parent_irqs;
		const __be32 *map_mask_prop;
	} cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 41 */;
	struct bcm7120_l1_intc_data {
		struct bcm7120_l2_intc_data *b;
		u32 irq_map_mask[MAX_WORDS];
	} cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 36 */;
	u32 cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 226 */[MAX_WORDS];
	struct irq_chip_type *cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 223 */;
	const char *cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 218 */;
	int (*cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 216 */)(struct device_node *,
								  struct bcm7120_l2_intc_data *);
	void __iomem *cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 190 */;
	int __init cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 183 */;
	__be32 cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 175 */;
	unsigned int cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 114 */;
	struct bcm7120_l1_intc_data *cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 112 */;
	u32 *cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 110 */;
	struct bcm7120_l2_intc_data *cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 109 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 108 */;
	int cocci_id/* drivers/irqchip/irq-bcm7120-l2.c 108 */;
}
