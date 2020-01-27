cocci_test_suite() {
	const char *const cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 86 */[];
	struct platform_driver cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 426 */;
	const struct of_device_id cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 421 */[];
	enum{CP110_CLK_TYPE_CORE, CP110_CLK_TYPE_GATABLE,} cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 42 */;
	struct platform_device *cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 401 */;
	int cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 401 */;
	char *cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 227 */[ARRAY_SIZE(gate_base_names)];
	struct device *cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 219 */;
	struct device_node *cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 216 */;
	unsigned int cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 199 */;
	struct clk_hw_onecell_data *cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 198 */;
	void *cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 196 */;
	struct of_phandle_args *cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 195 */;
	struct clk_init_data cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 161 */;
	u8 cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 157 */;
	struct regmap *cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 157 */;
	const char *cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 155 */;
	const struct clk_ops cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 149 */;
	u32 cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 142 */;
	struct cp110_gate_clk *cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 133 */;
	struct clk_hw *cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 131 */;
	void cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 131 */;
	struct cp110_gate_clk cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 119 */;
	struct cp110_gate_clk {
		struct clk_hw hw;
		struct regmap *regmap;
		u8 bit_idx;
	} cocci_id/* drivers/clk/mvebu/cp110-system-controller.c 113 */;
}
