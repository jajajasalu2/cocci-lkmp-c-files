cocci_test_suite() {
	struct spear_shirq *cocci_id/* drivers/irqchip/spear-shirq.c 97 */[];
	struct spear_shirq cocci_id/* drivers/irqchip/spear-shirq.c 88 */;
	struct irq_chip cocci_id/* drivers/irqchip/spear-shirq.c 82 */;
	u32 __iomem *cocci_id/* drivers/irqchip/spear-shirq.c 62 */;
	struct irq_data *cocci_id/* drivers/irqchip/spear-shirq.c 58 */;
	struct spear_shirq {
		void __iomem *base;
		u32 status_reg;
		u32 mask_reg;
		u32 mask;
		u32 virq_base;
		u32 nr_irqs;
		u32 offset;
		struct irq_chip *irq_chip;
	} cocci_id/* drivers/irqchip/spear-shirq.c 41 */;
	void __iomem *cocci_id/* drivers/irqchip/spear-shirq.c 223 */;
	struct irq_domain *cocci_id/* drivers/irqchip/spear-shirq.c 222 */;
	struct device_node *cocci_id/* drivers/irqchip/spear-shirq.c 219 */;
	struct spear_shirq **cocci_id/* drivers/irqchip/spear-shirq.c 218 */;
	int __init cocci_id/* drivers/irqchip/spear-shirq.c 218 */;
	void __init cocci_id/* drivers/irqchip/spear-shirq.c 201 */;
	int cocci_id/* drivers/irqchip/spear-shirq.c 194 */;
	u32 cocci_id/* drivers/irqchip/spear-shirq.c 188 */;
	struct spear_shirq *cocci_id/* drivers/irqchip/spear-shirq.c 187 */;
	struct irq_desc *cocci_id/* drivers/irqchip/spear-shirq.c 185 */;
	void cocci_id/* drivers/irqchip/spear-shirq.c 185 */;
}
