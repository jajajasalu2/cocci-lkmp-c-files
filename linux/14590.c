cocci_test_suite() {
	const struct pic32_sys_pll_data cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 96 */;
	const struct pic32_periph_clk_data cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 69 */[];
	const struct pic32_ref_osc_data cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 61 */[];
	const char *cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 32 */[];
	int __init cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 261 */;
	void cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 261 */;
	struct platform_driver cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 253 */;
	const struct of_device_id cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 247 */[];
	struct clk **cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 157 */;
	struct clk *cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 156 */;
	struct pic32_clk_common *cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 155 */;
	struct device_node *cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 153 */;
	const char *const cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 152 */[];
	struct platform_device *cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 150 */;
	struct pic32mzda_clk_data cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 139 */;
	struct pic32mzda_clk_data *cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 137 */;
	void *cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 135 */;
	unsigned long cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 135 */;
	struct notifier_block *cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 134 */;
	int cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 134 */;
	struct pic32mzda_clk_data {
		struct clk *clks[MAXCLKS];
		struct pic32_clk_common core;
		struct clk_onecell_data onecell_data;
		struct notifier_block failsafe_notifier;
	} cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 127 */;
	int cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 122 */[];
	const struct pic32_sec_osc_data cocci_id/* drivers/clk/microchip/clk-pic32mzda.c 110 */;
}
