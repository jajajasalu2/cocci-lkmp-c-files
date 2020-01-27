cocci_test_suite() {
	const struct clk_parent_data cocci_id/* drivers/clk/clk-lochnagar.c 48 */[];
	struct lochnagar_clk_priv {
		struct device *dev;
		struct regmap *regmap;
		struct lochnagar_clk lclks[LOCHNAGAR_NUM_CLOCKS];
	} cocci_id/* drivers/clk/clk-lochnagar.c 39 */;
	struct platform_driver cocci_id/* drivers/clk/clk-lochnagar.c 292 */;
	struct lochnagar_clk {
		const char *const name;
		struct clk_hw hw;
		struct lochnagar_clk_priv *priv;
		u16 cfg_reg;
		u16 ena_mask;
		u16 src_reg;
		u16 src_mask;
	} cocci_id/* drivers/clk/clk-lochnagar.c 26 */;
	struct lochnagar_config *cocci_id/* drivers/clk/clk-lochnagar.c 246 */;
	const struct of_device_id *cocci_id/* drivers/clk/clk-lochnagar.c 244 */;
	struct device *cocci_id/* drivers/clk/clk-lochnagar.c 242 */;
	struct clk_init_data cocci_id/* drivers/clk/clk-lochnagar.c 239 */;
	struct platform_device *cocci_id/* drivers/clk/clk-lochnagar.c 237 */;
	const struct of_device_id cocci_id/* drivers/clk/clk-lochnagar.c 230 */[];
	struct of_phandle_args *cocci_id/* drivers/clk/clk-lochnagar.c 217 */;
	void *cocci_id/* drivers/clk/clk-lochnagar.c 217 */;
	const struct clk_ops cocci_id/* drivers/clk/clk-lochnagar.c 209 */;
	int cocci_id/* drivers/clk/clk-lochnagar.c 195 */;
	unsigned int cocci_id/* drivers/clk/clk-lochnagar.c 194 */;
	struct regmap *cocci_id/* drivers/clk/clk-lochnagar.c 193 */;
	struct lochnagar_clk_priv *cocci_id/* drivers/clk/clk-lochnagar.c 192 */;
	struct lochnagar_clk *cocci_id/* drivers/clk/clk-lochnagar.c 191 */;
	u8 cocci_id/* drivers/clk/clk-lochnagar.c 189 */;
	struct clk_hw *cocci_id/* drivers/clk/clk-lochnagar.c 189 */;
	void cocci_id/* drivers/clk/clk-lochnagar.c 161 */;
	struct lochnagar_clk cocci_id/* drivers/clk/clk-lochnagar.c 142 */;
	const struct lochnagar_config cocci_id/* drivers/clk/clk-lochnagar.c 128 */;
	struct lochnagar_config {
		const struct clk_parent_data *parents;
		int nparents;
		const struct lochnagar_clk *clks;
	} cocci_id/* drivers/clk/clk-lochnagar.c 122 */;
	const struct lochnagar_clk cocci_id/* drivers/clk/clk-lochnagar.c 102 */[LOCHNAGAR_NUM_CLOCKS];
}
