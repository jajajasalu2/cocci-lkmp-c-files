cocci_test_suite() {
	unsigned long cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 77 */;
	struct syscore_ops cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 68 */;
	void cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 55 */;
	struct gpcv2_irqchip_data *cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 31 */;
	void __iomem *cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 31 */;
	int cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 31 */;
	struct gpcv2_irqchip_data cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 230 */;
	struct gpcv2_irqchip_data {
		struct raw_spinlock rlock;
		void __iomem *gpc_base;
		u32 wakeup_sources[IMR_NUM];
		u32 saved_irq_mask[IMR_NUM];
		u32 cpu2wakeup;
	} cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 21 */;
	const struct of_device_id *cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 207 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 202 */;
	int __init cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 202 */;
	const void *cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 197 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 196 */[];
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 190 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 167 */;
	struct irq_fwspec cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 166 */;
	struct irq_fwspec *cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 165 */;
	void *cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 163 */;
	unsigned int cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 162 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 161 */;
	unsigned int *cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 143 */;
	unsigned long *cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 142 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 127 */;
	u32 cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 115 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-imx-gpcv2.c 111 */;
}
