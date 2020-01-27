cocci_test_suite() {
	struct ti_sci_inta_vint_desc cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 97 */;
	struct ti_sci_inta_irq_domain {
		const struct ti_sci_handle *sci;
		struct ti_sci_resource *vint;
		struct ti_sci_resource *global_event;
		struct list_head vint_list;
		struct mutex vint_mutex;
		void __iomem *base;
		struct platform_device *pdev;
	} cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 86 */;
	struct ti_sci_inta_vint_desc {
		struct irq_domain *domain;
		struct list_head list;
	DECLARE_BITMAP(event_map,MAX_EVENTS_PER_VINT)
		;
		struct ti_sci_inta_event_desc events[MAX_EVENTS_PER_VINT];
		unsigned int parent_virq;
		u16 vint_id;
	} cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 66 */;
	struct platform_driver cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 605 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 599 */[];
	struct resource *cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 523 */;
	struct device *cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 522 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 520 */;
	struct platform_device *cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 517 */;
	struct msi_domain_info cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 510 */;
	struct msi_domain_ops cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 506 */;
	struct ti_sci_inta_event_desc {
		u16 global_event;
		u32 hwirq;
		u8 vint_bit;
	} cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 50 */;
	struct msi_desc *cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 498 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 487 */;
	msi_alloc_info_t *cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 479 */;
	void *cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 477 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 439 */;
	bool cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 406 */;
	const struct cpumask *cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 406 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 395 */;
	void cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 395 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 228 */;
	int cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 190 */;
	struct ti_sci_inta_irq_domain *cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 187 */;
	u32 cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 185 */;
	u16 cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 184 */;
	struct ti_sci_inta_vint_desc *cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 183 */;
	struct ti_sci_inta_event_desc *cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 183 */;
	unsigned int cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 141 */;
	struct irq_fwspec cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 140 */;
	unsigned long cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 110 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-ti-sci-inta.c 104 */;
}
