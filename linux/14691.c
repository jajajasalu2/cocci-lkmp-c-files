cocci_test_suite() {
	struct clk_init_data cocci_id/* drivers/clk/uniphier/clk-uniphier-mux.c 62 */;
	const struct uniphier_clk_mux_data *cocci_id/* drivers/clk/uniphier/clk-uniphier-mux.c 59 */;
	const char *cocci_id/* drivers/clk/uniphier/clk-uniphier-mux.c 58 */;
	struct regmap *cocci_id/* drivers/clk/uniphier/clk-uniphier-mux.c 57 */;
	struct device *cocci_id/* drivers/clk/uniphier/clk-uniphier-mux.c 56 */;
	const struct clk_ops cocci_id/* drivers/clk/uniphier/clk-uniphier-mux.c 50 */;
	unsigned int cocci_id/* drivers/clk/uniphier/clk-uniphier-mux.c 36 */;
	int cocci_id/* drivers/clk/uniphier/clk-uniphier-mux.c 34 */;
	struct uniphier_clk_mux *cocci_id/* drivers/clk/uniphier/clk-uniphier-mux.c 33 */;
	u8 cocci_id/* drivers/clk/uniphier/clk-uniphier-mux.c 31 */;
	struct clk_hw *cocci_id/* drivers/clk/uniphier/clk-uniphier-mux.c 31 */;
	struct uniphier_clk_mux cocci_id/* drivers/clk/uniphier/clk-uniphier-mux.c 21 */;
	struct uniphier_clk_mux {
		struct clk_hw hw;
		struct regmap *regmap;
		unsigned int reg;
		const unsigned int *masks;
		const unsigned int *vals;
	} cocci_id/* drivers/clk/uniphier/clk-uniphier-mux.c 13 */;
}
