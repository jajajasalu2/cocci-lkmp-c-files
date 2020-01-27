cocci_test_suite() {
	u64 cocci_id/* drivers/clk/pistachio/clk-pll.c 94 */;
	struct pistachio_clk_pll {
		struct clk_hw hw;
		void __iomem *base;
		struct pistachio_pll_rate_table *rates;
		unsigned int nr_rates;
	} cocci_id/* drivers/clk/pistachio/clk-pll.c 71 */;
	enum pll_mode{PLL_MODE_FRAC, PLL_MODE_INT,} cocci_id/* drivers/clk/pistachio/clk-pll.c 66 */;
	struct clk *cocci_id/* drivers/clk/pistachio/clk-pll.c 500 */;
	unsigned int cocci_id/* drivers/clk/pistachio/clk-pll.c 498 */;
	struct pistachio_pll *cocci_id/* drivers/clk/pistachio/clk-pll.c 497 */;
	struct pistachio_clk_provider *cocci_id/* drivers/clk/pistachio/clk-pll.c 496 */;
	void cocci_id/* drivers/clk/pistachio/clk-pll.c 496 */;
	struct clk_init_data cocci_id/* drivers/clk/pistachio/clk-pll.c 453 */;
	enum pistachio_pll_type cocci_id/* drivers/clk/pistachio/clk-pll.c 448 */;
	void __iomem *cocci_id/* drivers/clk/pistachio/clk-pll.c 447 */;
	const struct clk_ops cocci_id/* drivers/clk/pistachio/clk-pll.c 307 */;
	const char *cocci_id/* drivers/clk/pistachio/clk-pll.c 200 */;
	int cocci_id/* drivers/clk/pistachio/clk-pll.c 157 */;
	unsigned long *cocci_id/* drivers/clk/pistachio/clk-pll.c 143 */;
	long cocci_id/* drivers/clk/pistachio/clk-pll.c 142 */;
	unsigned long cocci_id/* drivers/clk/pistachio/clk-pll.c 129 */;
	struct pistachio_pll_rate_table *cocci_id/* drivers/clk/pistachio/clk-pll.c 128 */;
	u32 cocci_id/* drivers/clk/pistachio/clk-pll.c 108 */;
	struct pistachio_clk_pll *cocci_id/* drivers/clk/pistachio/clk-pll.c 107 */;
	enum pll_mode cocci_id/* drivers/clk/pistachio/clk-pll.c 105 */;
	struct clk_hw *cocci_id/* drivers/clk/pistachio/clk-pll.c 105 */;
	struct pistachio_clk_pll cocci_id/* drivers/clk/pistachio/clk-pll.c 102 */;
}
