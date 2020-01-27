cocci_test_suite() {
	struct clk_init_data cocci_id/* drivers/clk/rockchip/clk-muxgrf.c 62 */;
	struct rockchip_muxgrf_clock *cocci_id/* drivers/clk/rockchip/clk-muxgrf.c 61 */;
	struct regmap *cocci_id/* drivers/clk/rockchip/clk-muxgrf.c 58 */;
	int cocci_id/* drivers/clk/rockchip/clk-muxgrf.c 58 */;
	const char *const *cocci_id/* drivers/clk/rockchip/clk-muxgrf.c 57 */;
	u8 cocci_id/* drivers/clk/rockchip/clk-muxgrf.c 57 */;
	const char *cocci_id/* drivers/clk/rockchip/clk-muxgrf.c 56 */;
	struct clk *cocci_id/* drivers/clk/rockchip/clk-muxgrf.c 56 */;
	const struct clk_ops cocci_id/* drivers/clk/rockchip/clk-muxgrf.c 50 */;
	unsigned int cocci_id/* drivers/clk/rockchip/clk-muxgrf.c 24 */;
	struct clk_hw *cocci_id/* drivers/clk/rockchip/clk-muxgrf.c 21 */;
	struct rockchip_muxgrf_clock cocci_id/* drivers/clk/rockchip/clk-muxgrf.c 19 */;
	struct rockchip_muxgrf_clock {
		struct clk_hw hw;
		struct regmap *regmap;
		u32 reg;
		u32 shift;
		u32 width;
		int flags;
	} cocci_id/* drivers/clk/rockchip/clk-muxgrf.c 10 */;
}
