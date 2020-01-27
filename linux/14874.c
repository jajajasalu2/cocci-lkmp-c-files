cocci_test_suite() {
	unsigned long cocci_id/* drivers/clk/tegra/clk-emc.c 87 */;
	struct tegra_clk_emc {
		struct clk_hw hw;
		void __iomem *clk_regs;
		struct clk *prev_parent;
		bool changing_timing;
		struct device_node *emc_node;
		struct tegra_emc *emc;
		int num_timings;
		struct emc_timing *timings;
		spinlock_t *lock;
	} cocci_id/* drivers/clk/tegra/clk-emc.c 71 */;
	struct emc_timing {
		unsigned long rate,parent_rate;
		u8 parent_index;
		struct clk *parent;
		u32 ram_code;
	} cocci_id/* drivers/clk/tegra/clk-emc.c 64 */;
	const char cocci_id/* drivers/clk/tegra/clk-emc.c 59 */[];
	struct clk_init_data cocci_id/* drivers/clk/tegra/clk-emc.c 480 */;
	spinlock_t *cocci_id/* drivers/clk/tegra/clk-emc.c 477 */;
	struct clk *cocci_id/* drivers/clk/tegra/clk-emc.c 476 */;
	void __iomem *cocci_id/* drivers/clk/tegra/clk-emc.c 476 */;
	const struct clk_ops cocci_id/* drivers/clk/tegra/clk-emc.c 469 */;
	struct emc_timing cocci_id/* drivers/clk/tegra/clk-emc.c 442 */;
	size_t cocci_id/* drivers/clk/tegra/clk-emc.c 440 */;
	const struct emc_timing *cocci_id/* drivers/clk/tegra/clk-emc.c 421 */;
	const void *cocci_id/* drivers/clk/tegra/clk-emc.c 419 */;
	int cocci_id/* drivers/clk/tegra/clk-emc.c 419 */;
	const char *constcocci_id/* drivers/clk/tegra/clk-emc.c 40 */[];
	struct device_node *cocci_id/* drivers/clk/tegra/clk-emc.c 378 */;
	struct platform_device *cocci_id/* drivers/clk/tegra/clk-emc.c 174 */;
	struct tegra_emc *cocci_id/* drivers/clk/tegra/clk-emc.c 172 */;
	u32 cocci_id/* drivers/clk/tegra/clk-emc.c 162 */;
	struct tegra_clk_emc cocci_id/* drivers/clk/tegra/clk-emc.c 119 */;
	struct emc_timing *cocci_id/* drivers/clk/tegra/clk-emc.c 116 */;
	u8 cocci_id/* drivers/clk/tegra/clk-emc.c 115 */;
	struct tegra_clk_emc *cocci_id/* drivers/clk/tegra/clk-emc.c 114 */;
	struct clk_rate_request *cocci_id/* drivers/clk/tegra/clk-emc.c 112 */;
	struct clk_hw *cocci_id/* drivers/clk/tegra/clk-emc.c 112 */;
}
