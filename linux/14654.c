cocci_test_suite() {
	void cocci_id/* drivers/clk/axis/clk-artpec6.c 38 */;
	const int cocci_id/* drivers/clk/axis/clk-artpec6.c 33 */[NUM_I2S_CLOCKS];
	const char *constcocci_id/* drivers/clk/axis/clk-artpec6.c 28 */[NUM_I2S_CLOCKS];
	struct artpec6_clkctrl_drvdata *cocci_id/* drivers/clk/axis/clk-artpec6.c 26 */;
	struct platform_driver cocci_id/* drivers/clk/axis/clk-artpec6.c 231 */;
	const struct of_device_id cocci_id/* drivers/clk/axis/clk-artpec6.c 226 */[];
	struct artpec6_clkctrl_drvdata {
		struct clk *clk_table[ARTPEC6_CLK_NUMCLOCKS];
		void __iomem *syscon_base;
		struct clk_onecell_data clk_data;
		spinlock_t i2scfg_lock;
	} cocci_id/* drivers/clk/axis/clk-artpec6.c 19 */;
	u32 cocci_id/* drivers/clk/axis/clk-artpec6.c 126 */;
	const char *cocci_id/* drivers/clk/axis/clk-artpec6.c 124 */[2];
	const char *cocci_id/* drivers/clk/axis/clk-artpec6.c 122 */;
	struct clk **cocci_id/* drivers/clk/axis/clk-artpec6.c 121 */;
	struct device *cocci_id/* drivers/clk/axis/clk-artpec6.c 120 */;
	struct device_node *cocci_id/* drivers/clk/axis/clk-artpec6.c 119 */;
	struct platform_device *cocci_id/* drivers/clk/axis/clk-artpec6.c 116 */;
	int cocci_id/* drivers/clk/axis/clk-artpec6.c 116 */;
}
