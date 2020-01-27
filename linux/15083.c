cocci_test_suite() {
	struct clk_si544 *cocci_id/* drivers/clk/clk-si544.c 91 */;
	struct clk_si544_muldiv {
		u32 fb_div_frac;
		u16 fb_div_int;
		u16 hs_div;
		u8 ls_div_bits;
		s32 delta_m;
	} cocci_id/* drivers/clk/clk-si544.c 82 */;
	struct clk_si544 cocci_id/* drivers/clk/clk-si544.c 71 */;
	struct clk_si544 {
		struct clk_hw hw;
		struct regmap *regmap;
		struct i2c_client *i2c_client;
		enum si544_speed_grade speed_grade;
	} cocci_id/* drivers/clk/clk-si544.c 65 */;
	enum si544_speed_grade{si544a, si544b, si544c,} cocci_id/* drivers/clk/clk-si544.c 59 */;
	struct i2c_driver cocci_id/* drivers/clk/clk-si544.c 518 */;
	const struct of_device_id cocci_id/* drivers/clk/clk-si544.c 510 */[];
	const struct i2c_device_id cocci_id/* drivers/clk/clk-si544.c 502 */[];
	struct clk_init_data cocci_id/* drivers/clk/clk-si544.c 458 */;
	const struct i2c_device_id *cocci_id/* drivers/clk/clk-si544.c 455 */;
	struct i2c_client *cocci_id/* drivers/clk/clk-si544.c 454 */;
	const struct regmap_config cocci_id/* drivers/clk/clk-si544.c 446 */;
	struct device *cocci_id/* drivers/clk/clk-si544.c 435 */;
	const struct clk_ops cocci_id/* drivers/clk/clk-si544.c 426 */;
	s64 cocci_id/* drivers/clk/clk-si544.c 355 */;
	s32 cocci_id/* drivers/clk/clk-si544.c 353 */;
	unsigned long *cocci_id/* drivers/clk/clk-si544.c 331 */;
	long cocci_id/* drivers/clk/clk-si544.c 330 */;
	struct clk_si544_muldiv cocci_id/* drivers/clk/clk-si544.c 320 */;
	u64 cocci_id/* drivers/clk/clk-si544.c 281 */;
	u32 cocci_id/* drivers/clk/clk-si544.c 280 */;
	const struct clk_si544_muldiv *cocci_id/* drivers/clk/clk-si544.c 278 */;
	u8 cocci_id/* drivers/clk/clk-si544.c 226 */;
	struct clk_si544_muldiv *cocci_id/* drivers/clk/clk-si544.c 220 */;
	int cocci_id/* drivers/clk/clk-si544.c 220 */;
	unsigned long cocci_id/* drivers/clk/clk-si544.c 197 */;
	bool cocci_id/* drivers/clk/clk-si544.c 196 */;
	const struct clk_si544 *cocci_id/* drivers/clk/clk-si544.c 196 */;
	u8 cocci_id/* drivers/clk/clk-si544.c 159 */[3];
	u8 cocci_id/* drivers/clk/clk-si544.c 129 */[6];
	unsigned int cocci_id/* drivers/clk/clk-si544.c 114 */;
	struct clk_hw *cocci_id/* drivers/clk/clk-si544.c 111 */;
	void cocci_id/* drivers/clk/clk-si544.c 104 */;
}
