cocci_test_suite() {
	struct irq_chip cocci_id/* drivers/irqchip/qcom-irq-combiner.c 99 */;
	struct combiner_reg *cocci_id/* drivers/irqchip/qcom-irq-combiner.c 86 */;
	struct irq_data *cocci_id/* drivers/irqchip/qcom-irq-combiner.c 83 */;
	int cocci_id/* drivers/irqchip/qcom-irq-combiner.c 56 */;
	u32 cocci_id/* drivers/irqchip/qcom-irq-combiner.c 51 */;
	struct irq_chip *cocci_id/* drivers/irqchip/qcom-irq-combiner.c 50 */;
	struct combiner *cocci_id/* drivers/irqchip/qcom-irq-combiner.c 49 */;
	struct irq_desc *cocci_id/* drivers/irqchip/qcom-irq-combiner.c 47 */;
	void cocci_id/* drivers/irqchip/qcom-irq-combiner.c 47 */;
	struct combiner {
		struct irq_domain *domain;
		int parent_irq;
		u32 nirqs;
		u32 nregs;
		struct combiner_reg regs[0];
	} cocci_id/* drivers/irqchip/qcom-irq-combiner.c 31 */;
	struct platform_driver cocci_id/* drivers/irqchip/qcom-irq-combiner.c 273 */;
	const struct acpi_device_id cocci_id/* drivers/irqchip/qcom-irq-combiner.c 268 */[];
	struct combiner_reg {
		void __iomem *addr;
		unsigned long enabled;
	} cocci_id/* drivers/irqchip/qcom-irq-combiner.c 26 */;
	struct platform_device *cocci_id/* drivers/irqchip/qcom-irq-combiner.c 229 */;
	int __init cocci_id/* drivers/irqchip/qcom-irq-combiner.c 229 */;
	struct get_registers_context cocci_id/* drivers/irqchip/qcom-irq-combiner.c 213 */;
	void __iomem *cocci_id/* drivers/irqchip/qcom-irq-combiner.c 181 */;
	phys_addr_t cocci_id/* drivers/irqchip/qcom-irq-combiner.c 180 */;
	struct acpi_resource_generic_register *cocci_id/* drivers/irqchip/qcom-irq-combiner.c 179 */;
	struct get_registers_context *cocci_id/* drivers/irqchip/qcom-irq-combiner.c 178 */;
	struct get_registers_context {
		struct device *dev;
		struct combiner *combiner;
		int err;
	} cocci_id/* drivers/irqchip/qcom-irq-combiner.c 170 */;
	acpi_status cocci_id/* drivers/irqchip/qcom-irq-combiner.c 157 */;
	acpi_handle cocci_id/* drivers/irqchip/qcom-irq-combiner.c 156 */;
	int *cocci_id/* drivers/irqchip/qcom-irq-combiner.c 147 */;
	struct acpi_resource *cocci_id/* drivers/irqchip/qcom-irq-combiner.c 145 */;
	void *cocci_id/* drivers/irqchip/qcom-irq-combiner.c 145 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/qcom-irq-combiner.c 139 */;
	unsigned long *cocci_id/* drivers/irqchip/qcom-irq-combiner.c 120 */;
	unsigned int *cocci_id/* drivers/irqchip/qcom-irq-combiner.c 120 */;
	struct irq_fwspec *cocci_id/* drivers/irqchip/qcom-irq-combiner.c 119 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/qcom-irq-combiner.c 106 */;
	struct irq_domain *cocci_id/* drivers/irqchip/qcom-irq-combiner.c 105 */;
	unsigned int cocci_id/* drivers/irqchip/qcom-irq-combiner.c 105 */;
}
