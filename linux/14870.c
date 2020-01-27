cocci_test_suite() {
	u8 cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 65 */;
	u32 cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 57 */;
	struct tegra_clk_emc cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 50 */;
	struct tegra_clk_emc {
		struct clk_hw hw;
		void __iomem *reg;
		bool mc_same_freq;
		bool want_low_jitter;
		tegra20_clk_emc_round_cb *round_cb;
		void *cb_arg;
	} cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 38 */;
	const char *constcocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 34 */[];
	struct clk *cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 280 */;
	struct clk_init_data cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 247 */;
	void __iomem *cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 244 */;
	bool cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 239 */;
	void *cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 224 */;
	tegra20_clk_emc_round_cb *cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 223 */;
	void cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 223 */;
	const struct clk_ops cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 214 */;
	long cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 174 */;
	unsigned int cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 173 */;
	unsigned long cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 171 */;
	struct tegra_clk_emc *cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 169 */;
	struct clk_rate_request *cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 167 */;
	struct clk_hw *cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 167 */;
	int cocci_id/* drivers/clk/tegra/clk-tegra20-emc.c 167 */;
}
