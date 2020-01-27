cocci_test_suite() {
	struct clk_hw *cocci_id/* drivers/clk/clk-palmas.c 99 */;
	unsigned long cocci_id/* drivers/clk/clk-palmas.c 55 */;
	struct palmas_clock_info cocci_id/* drivers/clk/clk-palmas.c 52 */;
	struct palmas_clock_info {
		struct device *dev;
		struct clk_hw hw;
		struct palmas *palmas;
		const struct palmas_clk32k_desc *clk_desc;
		int ext_control_pin;
	} cocci_id/* drivers/clk/clk-palmas.c 42 */;
	struct palmas_clk32k_desc {
		const char *clk_name;
		unsigned int control_reg;
		unsigned int enable_mask;
		unsigned int sleep_mask;
		unsigned int sleep_reqstr_id;
		int delay;
	} cocci_id/* drivers/clk/clk-palmas.c 33 */;
	struct platform_driver cocci_id/* drivers/clk/clk-palmas.c 288 */;
	const struct palmas_clks_of_match_data *cocci_id/* drivers/clk/clk-palmas.c 243 */;
	struct palmas *cocci_id/* drivers/clk/clk-palmas.c 241 */;
	int cocci_id/* drivers/clk/clk-palmas.c 180 */;
	unsigned int cocci_id/* drivers/clk/clk-palmas.c 179 */;
	struct device_node *cocci_id/* drivers/clk/clk-palmas.c 178 */;
	struct palmas_clock_info *cocci_id/* drivers/clk/clk-palmas.c 176 */;
	struct platform_device *cocci_id/* drivers/clk/clk-palmas.c 175 */;
	void cocci_id/* drivers/clk/clk-palmas.c 175 */;
	const struct of_device_id cocci_id/* drivers/clk/clk-palmas.c 162 */[];
	const struct palmas_clks_of_match_data cocci_id/* drivers/clk/clk-palmas.c 130 */;
	struct palmas_clks_of_match_data {
		struct clk_init_data init;
		const struct palmas_clk32k_desc desc;
	} cocci_id/* drivers/clk/clk-palmas.c 125 */;
	const struct clk_ops cocci_id/* drivers/clk/clk-palmas.c 118 */;
	u32 cocci_id/* drivers/clk/clk-palmas.c 103 */;
}
