cocci_test_suite() {
	struct max9485_clk_hw cocci_id/* drivers/clk/clk-max9485.c 88 */;
	struct max9485_driver_data {
		struct clk *xclk;
		struct i2c_client *client;
		u8 reg_value;
		struct regulator *supply;
		struct gpio_desc *reset_gpio;
		struct max9485_clk_hw hw[MAX9485_NUM_CLKS];
	} cocci_id/* drivers/clk/clk-max9485.c 77 */;
	struct max9485_clk_hw {
		struct clk_hw hw;
		struct clk_init_data init;
		u8 enable_bit;
		struct max9485_driver_data *drvdata;
	} cocci_id/* drivers/clk/clk-max9485.c 70 */;
	struct max9485_driver_data cocci_id/* drivers/clk/clk-max9485.c 68 */;
	const struct max9485_rate cocci_id/* drivers/clk/clk-max9485.c 43 */[];
	struct i2c_driver cocci_id/* drivers/clk/clk-max9485.c 374 */;
	const struct i2c_device_id cocci_id/* drivers/clk/clk-max9485.c 368 */[];
	const struct of_device_id cocci_id/* drivers/clk/clk-max9485.c 362 */[];
	const struct dev_pm_ops cocci_id/* drivers/clk/clk-max9485.c 358 */;
	int __maybe_unused cocci_id/* drivers/clk/clk-max9485.c 344 */;
	struct max9485_rate {
		unsigned long out;
		u8 reg_value;
	} cocci_id/* drivers/clk/clk-max9485.c 34 */;
	const char *cocci_id/* drivers/clk/clk-max9485.c 262 */;
	struct device *cocci_id/* drivers/clk/clk-max9485.c 261 */;
	const struct i2c_device_id *cocci_id/* drivers/clk/clk-max9485.c 258 */;
	struct i2c_client *cocci_id/* drivers/clk/clk-max9485.c 257 */;
	struct of_phandle_args *cocci_id/* drivers/clk/clk-max9485.c 249 */;
	void *cocci_id/* drivers/clk/clk-max9485.c 249 */;
	const struct max9485_clk cocci_id/* drivers/clk/clk-max9485.c 209 */[MAX9485_NUM_CLKS];
	struct max9485_clk {
		const char *name;
		int parent_index;
		const struct clk_ops ops;
		u8 enable_bit;
	} cocci_id/* drivers/clk/clk-max9485.c 202 */;
	unsigned int cocci_id/* drivers/clk/clk-max9485.c 177 */;
	unsigned long *cocci_id/* drivers/clk/clk-max9485.c 163 */;
	long cocci_id/* drivers/clk/clk-max9485.c 162 */;
	const struct max9485_rate *cocci_id/* drivers/clk/clk-max9485.c 153 */;
	u8 cocci_id/* drivers/clk/clk-max9485.c 152 */;
	struct max9485_driver_data *cocci_id/* drivers/clk/clk-max9485.c 151 */;
	unsigned long cocci_id/* drivers/clk/clk-max9485.c 147 */;
	void cocci_id/* drivers/clk/clk-max9485.c 119 */;
	struct max9485_clk_hw *cocci_id/* drivers/clk/clk-max9485.c 112 */;
	struct clk_hw *cocci_id/* drivers/clk/clk-max9485.c 110 */;
	int cocci_id/* drivers/clk/clk-max9485.c 110 */;
}
