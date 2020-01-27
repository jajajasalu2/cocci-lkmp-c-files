cocci_test_suite() {
	struct clk_onecell_data *cocci_id/* drivers/clk/sunxi/clk-sun9i-mmc.c 99 */;
	struct sun9i_mmc_clk_data *cocci_id/* drivers/clk/sunxi/clk-sun9i-mmc.c 98 */;
	struct device_node *cocci_id/* drivers/clk/sunxi/clk-sun9i-mmc.c 97 */;
	struct platform_device *cocci_id/* drivers/clk/sunxi/clk-sun9i-mmc.c 95 */;
	int cocci_id/* drivers/clk/sunxi/clk-sun9i-mmc.c 95 */;
	const struct reset_control_ops cocci_id/* drivers/clk/sunxi/clk-sun9i-mmc.c 89 */;
	u32 cocci_id/* drivers/clk/sunxi/clk-sun9i-mmc.c 43 */;
	void __iomem *cocci_id/* drivers/clk/sunxi/clk-sun9i-mmc.c 42 */;
	struct sun9i_mmc_clk_data cocci_id/* drivers/clk/sunxi/clk-sun9i-mmc.c 39 */;
	unsigned long cocci_id/* drivers/clk/sunxi/clk-sun9i-mmc.c 36 */;
	struct reset_controller_dev *cocci_id/* drivers/clk/sunxi/clk-sun9i-mmc.c 35 */;
	struct sun9i_mmc_clk_data {
		spinlock_t lock;
		void __iomem *membase;
		struct clk *clk;
		struct reset_control *reset;
		struct clk_onecell_data clk_data;
		struct reset_controller_dev rcdev;
	} cocci_id/* drivers/clk/sunxi/clk-sun9i-mmc.c 26 */;
	struct platform_driver cocci_id/* drivers/clk/sunxi/clk-sun9i-mmc.c 195 */;
	const struct of_device_id cocci_id/* drivers/clk/sunxi/clk-sun9i-mmc.c 190 */[];
	struct clk *cocci_id/* drivers/clk/sunxi/clk-sun9i-mmc.c 120 */;
	struct resource *cocci_id/* drivers/clk/sunxi/clk-sun9i-mmc.c 102 */;
	const char *cocci_id/* drivers/clk/sunxi/clk-sun9i-mmc.c 100 */;
}
