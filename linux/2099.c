cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/power/reset/ocelot-reset.c 93 */;
	const struct of_device_id cocci_id/* drivers/power/reset/ocelot-reset.c 88 */[];
	struct device *cocci_id/* drivers/power/reset/ocelot-reset.c 63 */;
	struct resource *cocci_id/* drivers/power/reset/ocelot-reset.c 61 */;
	struct ocelot_reset_context *cocci_id/* drivers/power/reset/ocelot-reset.c 60 */;
	struct platform_device *cocci_id/* drivers/power/reset/ocelot-reset.c 58 */;
	int cocci_id/* drivers/power/reset/ocelot-reset.c 58 */;
	struct ocelot_reset_context cocci_id/* drivers/power/reset/ocelot-reset.c 39 */;
	void *cocci_id/* drivers/power/reset/ocelot-reset.c 37 */;
	unsigned long cocci_id/* drivers/power/reset/ocelot-reset.c 37 */;
	struct notifier_block *cocci_id/* drivers/power/reset/ocelot-reset.c 36 */;
	struct ocelot_reset_context {
		void __iomem *base;
		struct regmap *cpu_ctrl;
		struct notifier_block restart_handler;
	} cocci_id/* drivers/power/reset/ocelot-reset.c 18 */;
}
