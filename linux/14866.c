cocci_test_suite() {
	struct pll_out_data *cocci_id/* drivers/clk/tegra/clk-tegra-periph.c 957 */;
	struct tegra_clk_pll_params *cocci_id/* drivers/clk/tegra/clk-tegra-periph.c 941 */;
	struct tegra_periph_init_data *cocci_id/* drivers/clk/tegra/clk-tegra-periph.c 920 */;
	struct clk **cocci_id/* drivers/clk/tegra/clk-tegra-periph.c 917 */;
	struct clk *cocci_id/* drivers/clk/tegra/clk-tegra-periph.c 916 */;
	int cocci_id/* drivers/clk/tegra/clk-tegra-periph.c 915 */;
	struct tegra_clk *cocci_id/* drivers/clk/tegra/clk-tegra-periph.c 913 */;
	void __iomem *cocci_id/* drivers/clk/tegra/clk-tegra-periph.c 912 */;
	void __init cocci_id/* drivers/clk/tegra/clk-tegra-periph.c 912 */;
	const struct tegra_clk_periph_regs *cocci_id/* drivers/clk/tegra/clk-tegra-periph.c 868 */;
	struct pll_out_data cocci_id/* drivers/clk/tegra/clk-tegra-periph.c 851 */[];
	struct pll_out_data {
		char *div_name;
		char *pll_out_name;
		u32 offset;
		int clk_id;
		u8 div_shift;
		u8 div_flags;
		u8 rst_shift;
		spinlock_t *lock;
	} cocci_id/* drivers/clk/tegra/clk-tegra-periph.c 827 */;
	struct tegra_periph_init_data cocci_id/* drivers/clk/tegra/clk-tegra-periph.c 823 */[];
	const char *const cocci_id/* drivers/clk/tegra/clk-tegra-periph.c 589 */[];
	u32 cocci_id/* drivers/clk/tegra/clk-tegra-periph.c 493 */[];
	const char *cocci_id/* drivers/clk/tegra/clk-tegra-periph.c 490 */[];
}
