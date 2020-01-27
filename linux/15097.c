cocci_test_suite() {
	u8 cocci_id/* drivers/clk/clk-si570.c 98 */[6];
	enum clk_si570_variant{si57x, si59x,} cocci_id/* drivers/clk/clk-si570.c 79 */;
	struct clk_si570 cocci_id/* drivers/clk/clk-si570.c 77 */;
	struct clk_si570 {
		struct clk_hw hw;
		struct regmap *regmap;
		unsigned int div_offset;
		u64 max_freq;
		u64 fxtal;
		unsigned int n1;
		unsigned int hs_div;
		u64 rfreq;
		u64 frequency;
		struct i2c_client *i2c_client;
	} cocci_id/* drivers/clk/clk-si570.c 65 */;
	struct i2c_driver cocci_id/* drivers/clk/clk-si570.c 508 */;
	const struct of_device_id cocci_id/* drivers/clk/clk-si570.c 499 */[];
	const struct i2c_device_id cocci_id/* drivers/clk/clk-si570.c 490 */[];
	enum clk_si570_variant cocci_id/* drivers/clk/clk-si570.c 404 */;
	u32 cocci_id/* drivers/clk/clk-si570.c 402 */;
	struct clk_init_data cocci_id/* drivers/clk/clk-si570.c 401 */;
	const struct i2c_device_id *cocci_id/* drivers/clk/clk-si570.c 398 */;
	struct i2c_client *cocci_id/* drivers/clk/clk-si570.c 397 */;
	const struct regmap_config cocci_id/* drivers/clk/clk-si570.c 388 */;
	bool cocci_id/* drivers/clk/clk-si570.c 366 */;
	struct device *cocci_id/* drivers/clk/clk-si570.c 366 */;
	const struct clk_ops cocci_id/* drivers/clk/clk-si570.c 360 */;
	unsigned long *cocci_id/* drivers/clk/clk-si570.c 241 */;
	long cocci_id/* drivers/clk/clk-si570.c 240 */;
	struct clk_hw *cocci_id/* drivers/clk/clk-si570.c 220 */;
	const uint8_t cocci_id/* drivers/clk/clk-si570.c 192 */[];
	u64 cocci_id/* drivers/clk/clk-si570.c 191 */;
	unsigned int cocci_id/* drivers/clk/clk-si570.c 190 */;
	u64 *cocci_id/* drivers/clk/clk-si570.c 187 */;
	unsigned int *cocci_id/* drivers/clk/clk-si570.c 187 */;
	struct clk_si570 *cocci_id/* drivers/clk/clk-si570.c 186 */;
	unsigned long cocci_id/* drivers/clk/clk-si570.c 186 */;
	int cocci_id/* drivers/clk/clk-si570.c 186 */;
	u8 cocci_id/* drivers/clk/clk-si570.c 161 */[5];
}
