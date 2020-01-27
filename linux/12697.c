cocci_test_suite() {
	struct device_node *cocci_id/* drivers/bus/tegra-gmi.c 91 */;
	u32 cocci_id/* drivers/bus/tegra-gmi.c 78 */;
	struct tegra_gmi *cocci_id/* drivers/bus/tegra-gmi.c 76 */;
	void cocci_id/* drivers/bus/tegra-gmi.c 76 */;
	int cocci_id/* drivers/bus/tegra-gmi.c 53 */;
	struct tegra_gmi {
		struct device *dev;
		void __iomem *base;
		struct clk *clk;
		struct reset_control *rst;
		u32 snor_config;
		u32 snor_timing0;
		u32 snor_timing1;
	} cocci_id/* drivers/bus/tegra-gmi.c 42 */;
	struct platform_driver cocci_id/* drivers/bus/tegra-gmi.c 272 */;
	const struct of_device_id cocci_id/* drivers/bus/tegra-gmi.c 265 */[];
	struct resource *cocci_id/* drivers/bus/tegra-gmi.c 209 */;
	struct device *cocci_id/* drivers/bus/tegra-gmi.c 207 */;
	struct platform_device *cocci_id/* drivers/bus/tegra-gmi.c 205 */;
}
