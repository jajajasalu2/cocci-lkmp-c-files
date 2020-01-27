cocci_test_suite() {
	const struct clk_ops cocci_id/* drivers/clk/rockchip/clk-cpu.c 98 */;
	u32 cocci_id/* drivers/clk/rockchip/clk-cpu.c 91 */;
	struct clk_hw *cocci_id/* drivers/clk/rockchip/clk-cpu.c 86 */;
	struct rockchip_cpuclk cocci_id/* drivers/clk/rockchip/clk-cpu.c 67 */;
	struct rockchip_cpuclk {
		struct clk_hw hw;
		struct clk_mux cpu_mux;
		const struct clk_ops *cpu_mux_ops;
		struct clk *alt_parent;
		void __iomem *reg_base;
		struct notifier_block clk_nb;
		unsigned int rate_count;
		struct rockchip_cpuclk_rate_table *rate_table;
		const struct rockchip_cpuclk_reg_data *reg_data;
		spinlock_t *lock;
	} cocci_id/* drivers/clk/rockchip/clk-cpu.c 52 */;
	struct clk_init_data cocci_id/* drivers/clk/rockchip/clk-cpu.c 253 */;
	struct rockchip_cpuclk *cocci_id/* drivers/clk/rockchip/clk-cpu.c 252 */;
	spinlock_t *cocci_id/* drivers/clk/rockchip/clk-cpu.c 250 */;
	void __iomem *cocci_id/* drivers/clk/rockchip/clk-cpu.c 250 */;
	int cocci_id/* drivers/clk/rockchip/clk-cpu.c 250 */;
	const struct rockchip_cpuclk_rate_table *cocci_id/* drivers/clk/rockchip/clk-cpu.c 249 */;
	const struct rockchip_cpuclk_reg_data *cocci_id/* drivers/clk/rockchip/clk-cpu.c 248 */;
	const char *const*cocci_id/* drivers/clk/rockchip/clk-cpu.c 247 */;
	u8 cocci_id/* drivers/clk/rockchip/clk-cpu.c 247 */;
	const char *cocci_id/* drivers/clk/rockchip/clk-cpu.c 246 */;
	struct clk *cocci_id/* drivers/clk/rockchip/clk-cpu.c 246 */;
	struct clk_notifier_data *cocci_id/* drivers/clk/rockchip/clk-cpu.c 232 */;
	void *cocci_id/* drivers/clk/rockchip/clk-cpu.c 230 */;
	unsigned long cocci_id/* drivers/clk/rockchip/clk-cpu.c 230 */;
	struct notifier_block *cocci_id/* drivers/clk/rockchip/clk-cpu.c 229 */;
	const struct rockchip_cpuclk_clksel *cocci_id/* drivers/clk/rockchip/clk-cpu.c 109 */;
	void cocci_id/* drivers/clk/rockchip/clk-cpu.c 102 */;
}
