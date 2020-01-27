cocci_test_suite() {
	unsigned int cocci_id/* drivers/irqchip/irq-versatile-fpga.c 80 */;
	u32 cocci_id/* drivers/irqchip/irq-versatile-fpga.c 72 */;
	struct fpga_irq_data *cocci_id/* drivers/irqchip/irq-versatile-fpga.c 71 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-versatile-fpga.c 69 */;
	void cocci_id/* drivers/irqchip/irq-versatile-fpga.c 69 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-versatile-fpga.c 53 */;
	struct fpga_irq_data cocci_id/* drivers/irqchip/irq-versatile-fpga.c 50 */[CONFIG_VERSATILE_FPGA_IRQ_NR];
	struct fpga_irq_data {
		void __iomem *base;
		struct irq_chip chip;
		u32 valid;
		struct irq_domain *domain;
		u8 used_irqs;
	} cocci_id/* drivers/irqchip/irq-versatile-fpga.c 41 */;
	int __init cocci_id/* drivers/irqchip/irq-versatile-fpga.c 187 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-versatile-fpga.c 142 */;
	const char *cocci_id/* drivers/irqchip/irq-versatile-fpga.c 141 */;
	void __iomem *cocci_id/* drivers/irqchip/irq-versatile-fpga.c 141 */;
	void __init cocci_id/* drivers/irqchip/irq-versatile-fpga.c 141 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-versatile-fpga.c 136 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-versatile-fpga.c 122 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-versatile-fpga.c 121 */;
	int cocci_id/* drivers/irqchip/irq-versatile-fpga.c 113 */;
	struct pt_regs *cocci_id/* drivers/irqchip/irq-versatile-fpga.c 111 */;
	void __exception_irq_entry cocci_id/* drivers/irqchip/irq-versatile-fpga.c 111 */;
}
