cocci_test_suite() {
	struct pmc_clk_init_data *cocci_id/* drivers/clk/tegra/clk-tegra-pmc.c 78 */;
	int cocci_id/* drivers/clk/tegra/clk-tegra-pmc.c 75 */;
	struct clk **cocci_id/* drivers/clk/tegra/clk-tegra-pmc.c 74 */;
	struct clk *cocci_id/* drivers/clk/tegra/clk-tegra-pmc.c 73 */;
	struct tegra_clk *cocci_id/* drivers/clk/tegra/clk-tegra-pmc.c 71 */;
	void __iomem *cocci_id/* drivers/clk/tegra/clk-tegra-pmc.c 70 */;
	void __init cocci_id/* drivers/clk/tegra/clk-tegra-pmc.c 70 */;
	struct pmc_clk_init_data cocci_id/* drivers/clk/tegra/clk-tegra-pmc.c 64 */[];
	const char *cocci_id/* drivers/clk/tegra/clk-tegra-pmc.c 52 */[];
	struct pmc_clk_init_data {
		char *mux_name;
		char *gate_name;
		const char **parents;
		int num_parents;
		int mux_id;
		int gate_id;
		char *dev_name;
		u8 mux_shift;
		u8 gate_shift;
	} cocci_id/* drivers/clk/tegra/clk-tegra-pmc.c 25 */;
}
