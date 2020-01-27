cocci_test_suite() {
	struct max77686_clk_init_data cocci_id/* drivers/clk/clk-max77686.c 99 */;
	const struct max77686_hw_clk_info cocci_id/* drivers/clk/clk-max77686.c 87 */[MAX77620_CLKS_NUM];
	const struct max77686_hw_clk_info cocci_id/* drivers/clk/clk-max77686.c 73 */[MAX77802_CLKS_NUM];
	const struct max77686_hw_clk_info cocci_id/* drivers/clk/clk-max77686.c 54 */[MAX77686_CLKS_NUM];
	struct max77686_clk_driver_data {
		enum max77686_chip_name chip;
		struct max77686_clk_init_data *max_clk_data;
		size_t num_clks;
	} cocci_id/* drivers/clk/clk-max77686.c 48 */;
	struct max77686_clk_init_data {
		struct regmap *regmap;
		struct clk_hw hw;
		struct clk_init_data clk_idata;
		const struct max77686_hw_clk_info *clk_info;
	} cocci_id/* drivers/clk/clk-max77686.c 41 */;
	struct max77686_hw_clk_info {
		const char *name;
		u32 clk_reg;
		u32 clk_enable_mask;
		u32 flags;
	} cocci_id/* drivers/clk/clk-max77686.c 34 */;
	struct platform_driver cocci_id/* drivers/clk/clk-max77686.c 280 */;
	enum max77686_chip_name{CHIP_MAX77686, CHIP_MAX77802, CHIP_MAX77620,} cocci_id/* drivers/clk/clk-max77686.c 28 */;
	const struct platform_device_id cocci_id/* drivers/clk/clk-max77686.c 272 */[];
	const char *cocci_id/* drivers/clk/clk-max77686.c 213 */;
	struct regmap *cocci_id/* drivers/clk/clk-max77686.c 168 */;
	const struct max77686_hw_clk_info *cocci_id/* drivers/clk/clk-max77686.c 167 */;
	struct max77686_clk_driver_data *cocci_id/* drivers/clk/clk-max77686.c 166 */;
	const struct platform_device_id *cocci_id/* drivers/clk/clk-max77686.c 165 */;
	struct device *cocci_id/* drivers/clk/clk-max77686.c 163 */;
	struct platform_device *cocci_id/* drivers/clk/clk-max77686.c 161 */;
	unsigned int cocci_id/* drivers/clk/clk-max77686.c 151 */;
	struct of_phandle_args *cocci_id/* drivers/clk/clk-max77686.c 148 */;
	void *cocci_id/* drivers/clk/clk-max77686.c 148 */;
	const struct clk_ops cocci_id/* drivers/clk/clk-max77686.c 140 */;
	unsigned long cocci_id/* drivers/clk/clk-max77686.c 134 */;
	u32 cocci_id/* drivers/clk/clk-max77686.c 124 */;
	struct max77686_clk_init_data *cocci_id/* drivers/clk/clk-max77686.c 122 */;
	struct clk_hw *cocci_id/* drivers/clk/clk-max77686.c 120 */;
	int cocci_id/* drivers/clk/clk-max77686.c 120 */;
	void cocci_id/* drivers/clk/clk-max77686.c 111 */;
}
