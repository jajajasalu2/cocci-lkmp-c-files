cocci_test_suite() {
	const struct of_phandle_args *cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 95 */;
	const struct reset_control_ops cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 88 */;
	u32 cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 51 */;
	unsigned long cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 47 */;
	int cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 46 */;
	struct reset_data cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 43 */;
	struct reset_data *cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 41 */;
	struct reset_controller_dev *cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 41 */;
	struct reset_data {
		void __iomem *reg;
		spinlock_t *lock;
		struct reset_controller_dev rcdev;
		u8 offset;
	} cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 32 */;
	const struct sun4i_a10_display_clk_data cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 239 */;
	struct sun4i_a10_display_clk_data {
		bool has_div;
		u8 num_rst;
		u8 parents;
		u8 offset_en;
		u8 offset_div;
		u8 offset_mux;
		u8 offset_rst;
		u8 width_div;
		u8 width_mux;
		u32 flags;
	} cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 16 */;
	struct clk *cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 112 */;
	void __iomem *cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 111 */;
	struct clk_mux *cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 110 */;
	struct resource cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 109 */;
	struct clk_gate *cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 108 */;
	struct clk_divider *cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 107 */;
	const char *cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 105 */;
	const char *cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 104 */[4];
	const struct sun4i_a10_display_clk_data *cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 102 */;
	struct device_node *cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 101 */;
	void __init cocci_id/* drivers/clk/sunxi/clk-sun4i-display.c 101 */;
}
