cocci_test_suite() {
	char cocci_id/* drivers/clk/samsung/clk-exynos-clkout.c 71 */[];
	int cocci_id/* drivers/clk/samsung/clk-exynos-clkout.c 58 */;
	struct clk *cocci_id/* drivers/clk/samsung/clk-exynos-clkout.c 57 */[EXYNOS_CLKOUT_PARENTS];
	const char *cocci_id/* drivers/clk/samsung/clk-exynos-clkout.c 56 */[EXYNOS_CLKOUT_PARENTS];
	u32 cocci_id/* drivers/clk/samsung/clk-exynos-clkout.c 54 */;
	struct syscore_ops cocci_id/* drivers/clk/samsung/clk-exynos-clkout.c 49 */;
	void cocci_id/* drivers/clk/samsung/clk-exynos-clkout.c 44 */;
	struct exynos_clkout *cocci_id/* drivers/clk/samsung/clk-exynos-clkout.c 35 */;
	struct exynos_clkout {
		struct clk_gate gate;
		struct clk_mux mux;
		spinlock_t slock;
		void __iomem *reg;
		u32 pmu_debug_save;
		struct clk_hw_onecell_data data;
	} cocci_id/* drivers/clk/samsung/clk-exynos-clkout.c 26 */;
	struct device_node *cocci_id/* drivers/clk/samsung/clk-exynos-clkout.c 138 */;
	void __init cocci_id/* drivers/clk/samsung/clk-exynos-clkout.c 138 */;
}
