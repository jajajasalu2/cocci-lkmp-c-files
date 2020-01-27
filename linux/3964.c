cocci_test_suite() {
	struct gic_chip_pm *cocci_id/* drivers/irqchip/irq-gic-pm.c 71 */;
	const struct gic_clk_data *cocci_id/* drivers/irqchip/irq-gic-pm.c 70 */;
	struct device *cocci_id/* drivers/irqchip/irq-gic-pm.c 69 */;
	struct platform_device *cocci_id/* drivers/irqchip/irq-gic-pm.c 67 */;
	int cocci_id/* drivers/irqchip/irq-gic-pm.c 67 */;
	struct gic_chip_data *cocci_id/* drivers/irqchip/irq-gic-pm.c 28 */;
	struct gic_chip_pm {
		struct gic_chip_data *chip_data;
		const struct gic_clk_data *clk_data;
		struct clk_bulk_data *clks;
	} cocci_id/* drivers/irqchip/irq-gic-pm.c 19 */;
	struct platform_driver cocci_id/* drivers/irqchip/irq-gic-pm.c 153 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-gic-pm.c 147 */[];
	const struct gic_clk_data cocci_id/* drivers/irqchip/irq-gic-pm.c 142 */;
	struct gic_clk_data {
		unsigned int num_clocks;
		const char *const *clocks;
	} cocci_id/* drivers/irqchip/irq-gic-pm.c 14 */;
	const char *const cocci_id/* drivers/irqchip/irq-gic-pm.c 138 */[];
}
