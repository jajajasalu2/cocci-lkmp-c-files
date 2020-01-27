cocci_test_suite() {
	unsigned long cocci_id/* drivers/clk/x86/clk-pmc-atom.c 95 */;
	struct clk_plt_data {
		struct clk_plt_fixed **parents;
		u8 nparents;
		struct clk_plt *clks[PMC_CLK_NUM];
		struct clk_lookup *mclk_lookup;
		struct clk_lookup *ether_clk_lookup;
	} cocci_id/* drivers/clk/x86/clk-pmc-atom.c 46 */;
	struct clk_plt cocci_id/* drivers/clk/x86/clk-pmc-atom.c 44 */;
	struct platform_driver cocci_id/* drivers/clk/x86/clk-pmc-atom.c 383 */;
	struct clk_plt {
		struct clk_hw hw;
		void __iomem *reg;
		struct clk_lookup *lookup;
		spinlock_t lock;
	} cocci_id/* drivers/clk/x86/clk-pmc-atom.c 36 */;
	struct clk_plt_data *cocci_id/* drivers/clk/x86/clk-pmc-atom.c 319 */;
	const struct pmc_clk_data *cocci_id/* drivers/clk/x86/clk-pmc-atom.c 317 */;
	struct platform_device *cocci_id/* drivers/clk/x86/clk-pmc-atom.c 315 */;
	struct clk_plt_fixed {
		struct clk_hw *clk;
		struct clk_lookup *lookup;
	} cocci_id/* drivers/clk/x86/clk-pmc-atom.c 31 */;
	const struct pmc_clk *cocci_id/* drivers/clk/x86/clk-pmc-atom.c 268 */;
	unsigned int cocci_id/* drivers/clk/x86/clk-pmc-atom.c 252 */;
	const char **cocci_id/* drivers/clk/x86/clk-pmc-atom.c 251 */;
	const char *cocci_id/* drivers/clk/x86/clk-pmc-atom.c 214 */;
	struct clk_plt_fixed *cocci_id/* drivers/clk/x86/clk-pmc-atom.c 213 */;
	struct clk_init_data cocci_id/* drivers/clk/x86/clk-pmc-atom.c 166 */;
	const struct clk_ops cocci_id/* drivers/clk/x86/clk-pmc-atom.c 151 */;
	struct clk_plt *cocci_id/* drivers/clk/x86/clk-pmc-atom.c 136 */;
	struct clk_hw *cocci_id/* drivers/clk/x86/clk-pmc-atom.c 134 */;
	void cocci_id/* drivers/clk/x86/clk-pmc-atom.c 134 */;
	int cocci_id/* drivers/clk/x86/clk-pmc-atom.c 125 */;
	u32 cocci_id/* drivers/clk/x86/clk-pmc-atom.c 118 */;
	u8 cocci_id/* drivers/clk/x86/clk-pmc-atom.c 115 */;
}
