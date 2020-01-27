cocci_test_suite() {
	const struct cpu_dfs_regs cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 77 */;
	struct ap_cpu_clk cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 75 */;
	struct cpu_dfs_regs {
		unsigned int divider_reg;
		unsigned int force_reg;
		unsigned int ratio_reg;
		unsigned int ratio_state_reg;
		unsigned int divider_mask;
		unsigned int cluster_offset;
		unsigned int force_mask;
		int divider_offset;
		int divider_ratio;
		int ratio_offset;
		int ratio_state_offset;
		int ratio_state_cluster_offset;
	} cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 39 */;
	struct platform_driver cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 348 */;
	const struct of_device_id cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 336 */[];
	struct clk *cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 287 */;
	const char *cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 286 */;
	struct clk_init_data cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 285 */;
	char *cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 284 */;
	struct regmap *cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 237 */;
	struct clk_hw_onecell_data *cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 235 */;
	struct device_node *cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 234 */;
	struct device *cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 233 */;
	struct platform_device *cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 230 */;
	const struct clk_ops cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 224 */;
	unsigned long *cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 215 */;
	long cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 214 */;
	int cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 149 */;
	unsigned int cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 148 */;
	struct ap_cpu_clk *cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 147 */;
	struct clk_hw *cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 144 */;
	unsigned long cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 144 */;
	struct ap_cpu_clk {
		unsigned int cluster;
		const char *clk_name;
		struct device *dev;
		struct clk_hw hw;
		struct regmap *pll_cr_base;
		const struct cpu_dfs_regs *pll_regs;
	} cocci_id/* drivers/clk/mvebu/ap-cpu-clk.c 135 */;
}
