cocci_test_suite() {
	u32 cocci_id/* drivers/irqchip/irq-tegra.c 85 */;
	void __iomem __force *cocci_id/* drivers/irqchip/irq-tegra.c 84 */;
	struct tegra_ictlr_info *cocci_id/* drivers/irqchip/irq-tegra.c 80 */;
	struct tegra_ictlr_info {
		void __iomem *base[TEGRA_MAX_NUM_ICTLRS];
#ifdef CONFIG_PM_SLEEP
		u32 cop_ier[TEGRA_MAX_NUM_ICTLRS];
		u32 cop_iep[TEGRA_MAX_NUM_ICTLRS];
		u32 cpu_ier[TEGRA_MAX_NUM_ICTLRS];
		u32 cpu_iep[TEGRA_MAX_NUM_ICTLRS];
		u32 ictlr_wake_mask[TEGRA_MAX_NUM_ICTLRS];
#endif
	} cocci_id/* drivers/irqchip/irq-tegra.c 68 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-tegra.c 61 */[];
	const struct tegra_ictlr_soc cocci_id/* drivers/irqchip/irq-tegra.c 49 */;
	struct tegra_ictlr_soc {
		unsigned int num_ictlrs;
	} cocci_id/* drivers/irqchip/irq-tegra.c 45 */;
	unsigned int cocci_id/* drivers/irqchip/irq-tegra.c 43 */;
	void __iomem *cocci_id/* drivers/irqchip/irq-tegra.c 306 */;
	const struct tegra_ictlr_soc *cocci_id/* drivers/irqchip/irq-tegra.c 280 */;
	const struct of_device_id *cocci_id/* drivers/irqchip/irq-tegra.c 279 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-tegra.c 275 */;
	int __init cocci_id/* drivers/irqchip/irq-tegra.c 275 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-tegra.c 269 */;
	void __force *cocci_id/* drivers/irqchip/irq-tegra.c 260 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-tegra.c 243 */;
	struct irq_fwspec cocci_id/* drivers/irqchip/irq-tegra.c 241 */;
	struct irq_fwspec *cocci_id/* drivers/irqchip/irq-tegra.c 240 */;
	void *cocci_id/* drivers/irqchip/irq-tegra.c 238 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-tegra.c 236 */;
	int cocci_id/* drivers/irqchip/irq-tegra.c 236 */;
	unsigned int *cocci_id/* drivers/irqchip/irq-tegra.c 218 */;
	unsigned long *cocci_id/* drivers/irqchip/irq-tegra.c 217 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-tegra.c 201 */;
	struct syscore_ops cocci_id/* drivers/irqchip/irq-tegra.c 187 */;
	unsigned long cocci_id/* drivers/irqchip/irq-tegra.c 166 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-tegra.c 103 */;
	void cocci_id/* drivers/irqchip/irq-tegra.c 103 */;
}
