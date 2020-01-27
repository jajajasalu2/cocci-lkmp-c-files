cocci_test_suite() {
	struct irq_domain *cocci_id/* drivers/irqchip/irq-mxs.c 59 */;
	struct icoll_priv cocci_id/* drivers/irqchip/irq-mxs.c 58 */;
	struct icoll_priv {
		void __iomem *vector;
		void __iomem *levelack;
		void __iomem *ctrl;
		void __iomem *stat;
		void __iomem *intr;
		void __iomem *clear;
		enum icoll_type type;
	} cocci_id/* drivers/irqchip/irq-mxs.c 48 */;
	enum icoll_type{ICOLL, ASM9260_ICOLL,} cocci_id/* drivers/irqchip/irq-mxs.c 43 */;
	int cocci_id/* drivers/irqchip/irq-mxs.c 213 */;
	void __iomem *cocci_id/* drivers/irqchip/irq-mxs.c 212 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-mxs.c 209 */;
	int __init cocci_id/* drivers/irqchip/irq-mxs.c 209 */;
	void __iomem *__initcocci_id/* drivers/irqchip/irq-mxs.c 172 */;
	void __init cocci_id/* drivers/irqchip/irq-mxs.c 162 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-mxs.c 157 */;
	struct irq_chip *cocci_id/* drivers/irqchip/irq-mxs.c 145 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-mxs.c 143 */;
	unsigned int cocci_id/* drivers/irqchip/irq-mxs.c 142 */;
	u32 cocci_id/* drivers/irqchip/irq-mxs.c 135 */;
	struct pt_regs *cocci_id/* drivers/irqchip/irq-mxs.c 133 */;
	void __exception_irq_entry cocci_id/* drivers/irqchip/irq-mxs.c 133 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-mxs.c 125 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-mxs.c 101 */;
	void cocci_id/* drivers/irqchip/irq-mxs.c 101 */;
}
