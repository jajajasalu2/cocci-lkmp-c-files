cocci_test_suite() {
	const char *const cocci_id/* drivers/clk/clk-oxnas.c 85 */[];
	const struct clk_ops cocci_id/* drivers/clk/clk-oxnas.c 75 */;
	struct clk_oxnas_gate *cocci_id/* drivers/clk/clk-oxnas.c 70 */;
	struct clk_hw *cocci_id/* drivers/clk/clk-oxnas.c 68 */;
	void cocci_id/* drivers/clk/clk-oxnas.c 68 */;
	int cocci_id/* drivers/clk/clk-oxnas.c 59 */;
	unsigned int cocci_id/* drivers/clk/clk-oxnas.c 50 */;
	struct clk_oxnas_gate cocci_id/* drivers/clk/clk-oxnas.c 43 */;
	struct oxnas_stdclk_data {
		struct clk_hw_onecell_data *onecell_data;
		struct clk_oxnas_gate **gates;
		unsigned int ngates;
		struct clk_oxnas_pll **plls;
		unsigned int nplls;
	} cocci_id/* drivers/clk/clk-oxnas.c 28 */;
	struct platform_driver cocci_id/* drivers/clk/clk-oxnas.c 245 */;
	struct clk_oxnas_gate {
		struct clk_hw hw;
		unsigned int bit;
		struct regmap *regmap;
	} cocci_id/* drivers/clk/clk-oxnas.c 22 */;
	struct regmap *cocci_id/* drivers/clk/clk-oxnas.c 213 */;
	const struct of_device_id *cocci_id/* drivers/clk/clk-oxnas.c 212 */;
	const struct oxnas_stdclk_data *cocci_id/* drivers/clk/clk-oxnas.c 211 */;
	struct device_node *cocci_id/* drivers/clk/clk-oxnas.c 210 */;
	struct platform_device *cocci_id/* drivers/clk/clk-oxnas.c 208 */;
	const struct of_device_id cocci_id/* drivers/clk/clk-oxnas.c 202 */[];
	struct oxnas_stdclk_data cocci_id/* drivers/clk/clk-oxnas.c 190 */;
	struct clk_hw_onecell_data cocci_id/* drivers/clk/clk-oxnas.c 155 */;
	struct clk_oxnas_gate *cocci_id/* drivers/clk/clk-oxnas.c 111 */[];
}
