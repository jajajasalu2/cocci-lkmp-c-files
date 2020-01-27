cocci_test_suite() {
	u16 cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 51 */;
	u32 cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 50 */;
	struct clk_hw *cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 46 */;
	struct rockchip_mmc_clock cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 23 */;
	struct rockchip_mmc_clock *cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 196 */;
	struct clk_init_data cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 195 */;
	void __iomem *cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 193 */;
	int cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 193 */;
	const char *const*cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 192 */;
	u8 cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 192 */;
	const char *cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 191 */;
	struct clk *cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 191 */;
	struct clk_notifier_data *cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 162 */;
	void *cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 159 */;
	unsigned long cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 159 */;
	struct notifier_block *cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 158 */;
	const struct clk_ops cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 150 */;
	struct rockchip_mmc_clock {
		struct clk_hw hw;
		void __iomem *reg;
		int id;
		int shift;
		int cached_phase;
		struct notifier_block clk_rate_change_nb;
	} cocci_id/* drivers/clk/rockchip/clk-mmc-phase.c 14 */;
}
