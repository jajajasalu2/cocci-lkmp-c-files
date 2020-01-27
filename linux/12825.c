cocci_test_suite() {
	int cocci_id/* drivers/memory/da8xx-ddrctl.c 89 */;
	const struct da8xx_ddrctl_board_settings *cocci_id/* drivers/memory/da8xx-ddrctl.c 88 */;
	const struct da8xx_ddrctl_setting *cocci_id/* drivers/memory/da8xx-ddrctl.c 86 */;
	void cocci_id/* drivers/memory/da8xx-ddrctl.c 86 */;
	const struct da8xx_ddrctl_config_knob *cocci_id/* drivers/memory/da8xx-ddrctl.c 70 */;
	const struct da8xx_ddrctl_board_settings cocci_id/* drivers/memory/da8xx-ddrctl.c 63 */[];
	const struct da8xx_ddrctl_setting cocci_id/* drivers/memory/da8xx-ddrctl.c 55 */[];
	struct da8xx_ddrctl_board_settings {
		const char *board;
		const struct da8xx_ddrctl_setting *settings;
	} cocci_id/* drivers/memory/da8xx-ddrctl.c 50 */;
	struct da8xx_ddrctl_setting {
		const char *name;
		u32 val;
	} cocci_id/* drivers/memory/da8xx-ddrctl.c 45 */;
	const struct da8xx_ddrctl_config_knob cocci_id/* drivers/memory/da8xx-ddrctl.c 36 */[];
	struct da8xx_ddrctl_config_knob {
		const char *name;
		u32 reg;
		u32 mask;
		u32 shift;
	} cocci_id/* drivers/memory/da8xx-ddrctl.c 29 */;
	struct platform_driver cocci_id/* drivers/memory/da8xx-ddrctl.c 159 */;
	const struct of_device_id cocci_id/* drivers/memory/da8xx-ddrctl.c 154 */[];
	u32 cocci_id/* drivers/memory/da8xx-ddrctl.c 109 */;
	struct device *cocci_id/* drivers/memory/da8xx-ddrctl.c 108 */;
	void __iomem *cocci_id/* drivers/memory/da8xx-ddrctl.c 107 */;
	struct resource *cocci_id/* drivers/memory/da8xx-ddrctl.c 106 */;
	struct device_node *cocci_id/* drivers/memory/da8xx-ddrctl.c 105 */;
	struct platform_device *cocci_id/* drivers/memory/da8xx-ddrctl.c 101 */;
}
