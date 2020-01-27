cocci_test_suite() {
	u32 cocci_id/* drivers/clk/keystone/pll.c 81 */;
	struct clk_pll *cocci_id/* drivers/clk/keystone/pll.c 78 */;
	struct clk_hw *cocci_id/* drivers/clk/keystone/pll.c 75 */;
	unsigned long cocci_id/* drivers/clk/keystone/pll.c 75 */;
	struct clk_pll cocci_id/* drivers/clk/keystone/pll.c 73 */;
	struct clk_pll {
		struct clk_hw hw;
		struct clk_pll_data *pll_data;
	} cocci_id/* drivers/clk/keystone/pll.c 68 */;
	struct clk_pll_data {
		bool has_pllctrl;
		u32 phy_pllm;
		u32 phy_pll_ctl0;
		void __iomem *pllm;
		void __iomem *pllod;
		void __iomem *pll_ctl0;
		u32 pllm_lower_mask;
		u32 pllm_upper_mask;
		u32 pllm_upper_shift;
		u32 plld_mask;
		u32 clkod_mask;
		u32 clkod_shift;
		u32 postdiv;
	} cocci_id/* drivers/clk/keystone/pll.c 47 */;
	const char **cocci_id/* drivers/clk/keystone/pll.c 328 */;
	const char *cocci_id/* drivers/clk/keystone/pll.c 302 */[2];
	void __iomem *cocci_id/* drivers/clk/keystone/pll.c 251 */;
	int cocci_id/* drivers/clk/keystone/pll.c 163 */;
	struct clk *cocci_id/* drivers/clk/keystone/pll.c 162 */;
	const char *cocci_id/* drivers/clk/keystone/pll.c 161 */;
	struct clk_pll_data *cocci_id/* drivers/clk/keystone/pll.c 160 */;
	bool cocci_id/* drivers/clk/keystone/pll.c 158 */;
	struct device_node *cocci_id/* drivers/clk/keystone/pll.c 158 */;
	void __init cocci_id/* drivers/clk/keystone/pll.c 158 */;
	struct clk_init_data cocci_id/* drivers/clk/keystone/pll.c 125 */;
	struct device *cocci_id/* drivers/clk/keystone/pll.c 120 */;
	const struct clk_ops cocci_id/* drivers/clk/keystone/pll.c 116 */;
}
