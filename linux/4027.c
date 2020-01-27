cocci_test_suite() {
	enum al_fic_state cocci_id/* drivers/irqchip/irq-al-fic.c 68 */;
	irq_flow_handler_t cocci_id/* drivers/irqchip/irq-al-fic.c 49 */;
	struct al_fic {
		void __iomem *base;
		struct irq_domain *domain;
		const char *name;
		unsigned int parent_irq;
		enum al_fic_state state;
	} cocci_id/* drivers/irqchip/irq-al-fic.c 37 */;
	enum al_fic_state{AL_FIC_UNCONFIGURED=0, AL_FIC_CONFIGURED_LEVEL, AL_FIC_CONFIGURED_RISING_EDGE,} cocci_id/* drivers/irqchip/irq-al-fic.c 31 */;
	struct al_fic *cocci_id/* drivers/irqchip/irq-al-fic.c 247 */;
	unsigned int cocci_id/* drivers/irqchip/irq-al-fic.c 246 */;
	void __iomem *cocci_id/* drivers/irqchip/irq-al-fic.c 245 */;
	int cocci_id/* drivers/irqchip/irq-al-fic.c 244 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-al-fic.c 241 */;
	int __init cocci_id/* drivers/irqchip/irq-al-fic.c 241 */;
	const char *cocci_id/* drivers/irqchip/irq-al-fic.c 202 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-al-fic.c 130 */;
	u32 cocci_id/* drivers/irqchip/irq-al-fic.c 115 */;
	unsigned long cocci_id/* drivers/irqchip/irq-al-fic.c 113 */;
	struct irq_chip_generic *cocci_id/* drivers/irqchip/irq-al-fic.c 112 */;
	struct irq_chip *cocci_id/* drivers/irqchip/irq-al-fic.c 111 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-al-fic.c 110 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-al-fic.c 107 */;
	void cocci_id/* drivers/irqchip/irq-al-fic.c 107 */;
}
