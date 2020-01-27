cocci_test_suite() {
	unsigned long cocci_id/* drivers/irqchip/irq-keystone.c 90 */;
	struct keystone_irq_device *cocci_id/* drivers/irqchip/irq-keystone.c 89 */;
	irqreturn_t cocci_id/* drivers/irqchip/irq-keystone.c 87 */;
	void *cocci_id/* drivers/irqchip/irq-keystone.c 87 */;
	int cocci_id/* drivers/irqchip/irq-keystone.c 87 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-keystone.c 82 */;
	void cocci_id/* drivers/irqchip/irq-keystone.c 82 */;
	u32 cocci_id/* drivers/irqchip/irq-keystone.c 45 */;
	struct keystone_irq_device {
		struct device *dev;
		struct irq_chip chip;
		u32 mask;
		int irq;
		struct irq_domain *irqd;
		struct regmap *devctrl_regs;
		u32 devctrl_offset;
		raw_spinlock_t wa_lock;
	} cocci_id/* drivers/irqchip/irq-keystone.c 34 */;
	struct platform_driver cocci_id/* drivers/irqchip/irq-keystone.c 223 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-keystone.c 217 */[];
	struct device_node *cocci_id/* drivers/irqchip/irq-keystone.c 143 */;
	struct device *cocci_id/* drivers/irqchip/irq-keystone.c 142 */;
	struct platform_device *cocci_id/* drivers/irqchip/irq-keystone.c 140 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-keystone.c 135 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-keystone.c 125 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-keystone.c 124 */;
	unsigned int cocci_id/* drivers/irqchip/irq-keystone.c 124 */;
}
