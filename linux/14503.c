cocci_test_suite() {
	struct axs10x_pll_clk {
		struct clk_hw hw;
		void __iomem *base;
		void __iomem *lock;
		const struct axs10x_pll_cfg *pll_cfg;
		struct device *dev;
	} cocci_id/* drivers/clk/axs10x/pll_clock.c 94 */;
	const struct axs10x_pll_cfg cocci_id/* drivers/clk/axs10x/pll_clock.c 77 */[];
	struct axs10x_pll_cfg {
		u32 rate;
		u32 idiv;
		u32 fbdiv;
		u32 odiv;
	} cocci_id/* drivers/clk/axs10x/pll_clock.c 70 */;
	struct platform_driver cocci_id/* drivers/clk/axs10x/pll_clock.c 332 */;
	const struct of_device_id cocci_id/* drivers/clk/axs10x/pll_clock.c 326 */[];
	struct device_node *cocci_id/* drivers/clk/axs10x/pll_clock.c 269 */;
	void __init cocci_id/* drivers/clk/axs10x/pll_clock.c 269 */;
	struct clk_init_data cocci_id/* drivers/clk/axs10x/pll_clock.c 224 */;
	struct axs10x_pll_clk *cocci_id/* drivers/clk/axs10x/pll_clock.c 223 */;
	const char *cocci_id/* drivers/clk/axs10x/pll_clock.c 222 */;
	struct device *cocci_id/* drivers/clk/axs10x/pll_clock.c 221 */;
	struct platform_device *cocci_id/* drivers/clk/axs10x/pll_clock.c 219 */;
	const struct clk_ops cocci_id/* drivers/clk/axs10x/pll_clock.c 213 */;
	const struct axs10x_pll_cfg *cocci_id/* drivers/clk/axs10x/pll_clock.c 162 */;
	unsigned long *cocci_id/* drivers/clk/axs10x/pll_clock.c 157 */;
	long cocci_id/* drivers/clk/axs10x/pll_clock.c 156 */;
	u64 cocci_id/* drivers/clk/axs10x/pll_clock.c 142 */;
	struct clk_hw *cocci_id/* drivers/clk/axs10x/pll_clock.c 139 */;
	unsigned long cocci_id/* drivers/clk/axs10x/pll_clock.c 139 */;
	unsigned int cocci_id/* drivers/clk/axs10x/pll_clock.c 126 */;
	int cocci_id/* drivers/clk/axs10x/pll_clock.c 126 */;
	u32 cocci_id/* drivers/clk/axs10x/pll_clock.c 118 */;
	struct axs10x_pll_clk cocci_id/* drivers/clk/axs10x/pll_clock.c 115 */;
	void cocci_id/* drivers/clk/axs10x/pll_clock.c 102 */;
}
