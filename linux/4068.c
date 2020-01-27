cocci_test_suite() {
	u32 cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 94 */;
	struct irqsteer_data *cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 94 */;
	int cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 94 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 89 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 80 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 79 */;
	unsigned int cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 79 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 73 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 59 */;
	unsigned long cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 40 */;
	struct platform_driver cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 305 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 300 */[];
	const struct dev_pm_ops cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 296 */;
	struct device *cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 280 */;
	struct irqsteer_data {
		void __iomem *regs;
		struct clk *ipg_clk;
		int irq[CHAN_MAX_OUTPUT_INT];
		int irq_count;
		raw_spinlock_t lock;
		int reg_num;
		int channel;
		struct irq_domain *domain;
		u32 *saved_reg;
	} cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 27 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 145 */;
	struct platform_device *cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 143 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 106 */;
	void cocci_id/* drivers/irqchip/irq-imx-irqsteer.c 106 */;
}
