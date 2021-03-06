cocci_test_suite() {
	u8 *cocci_id/* drivers/clk/clk-si5351.c 99 */;
	struct si5351_hw_data cocci_id/* drivers/clk/clk-si5351.c 957 */;
	struct si5351_hw_data *cocci_id/* drivers/clk/clk-si5351.c 956 */;
	struct si5351_platform_data *cocci_id/* drivers/clk/clk-si5351.c 925 */;
	void cocci_id/* drivers/clk/clk-si5351.c 902 */;
	enum si5351_disable_state cocci_id/* drivers/clk/clk-si5351.c 869 */;
	enum si5351_drive_strength cocci_id/* drivers/clk/clk-si5351.c 838 */;
	u8 cocci_id/* drivers/clk/clk-si5351.c 802 */;
	enum si5351_clkout_src cocci_id/* drivers/clk/clk-si5351.c 800 */;
	struct si5351_driver_data *cocci_id/* drivers/clk/clk-si5351.c 799 */;
	int cocci_id/* drivers/clk/clk-si5351.c 799 */;
	const char *const cocci_id/* drivers/clk/clk-si5351.c 76 */[];
	unsigned long long cocci_id/* drivers/clk/clk-si5351.c 605 */;
	enum si5351_multisynth_src cocci_id/* drivers/clk/clk-si5351.c 564 */;
	struct si5351_driver_data {
		enum si5351_variant variant;
		struct i2c_client *client;
		struct regmap *regmap;
		struct clk *pxtal;
		const char *pxtal_name;
		struct clk_hw xtal;
		struct clk *pclkin;
		const char *pclkin_name;
		struct clk_hw clkin;
		struct si5351_hw_data pll[2];
		struct si5351_hw_data *msynth;
		struct si5351_hw_data *clkout;
		size_t num_clkout;
	} cocci_id/* drivers/clk/clk-si5351.c 49 */;
	struct si5351_hw_data {
		struct clk_hw hw;
		struct si5351_driver_data *drvdata;
		struct si5351_parameters params;
		unsigned char num;
	} cocci_id/* drivers/clk/clk-si5351.c 42 */;
	enum si5351_pll_src cocci_id/* drivers/clk/clk-si5351.c 366 */;
	struct si5351_parameters {
		unsigned long p1;
		unsigned long p2;
		unsigned long p3;
		int valid;
	} cocci_id/* drivers/clk/clk-si5351.c 35 */;
	const struct clk_ops cocci_id/* drivers/clk/clk-si5351.c 296 */;
	unsigned char cocci_id/* drivers/clk/clk-si5351.c 271 */;
	unsigned long cocci_id/* drivers/clk/clk-si5351.c 265 */;
	struct si5351_driver_data cocci_id/* drivers/clk/clk-si5351.c 246 */;
	const struct regmap_config cocci_id/* drivers/clk/clk-si5351.c 206 */;
	bool cocci_id/* drivers/clk/clk-si5351.c 178 */;
	struct device *cocci_id/* drivers/clk/clk-si5351.c 178 */;
	struct i2c_driver cocci_id/* drivers/clk/clk-si5351.c 1654 */;
	const struct i2c_device_id cocci_id/* drivers/clk/clk-si5351.c 1645 */[];
	const char *cocci_id/* drivers/clk/clk-si5351.c 1370 */[4];
	struct clk_init_data cocci_id/* drivers/clk/clk-si5351.c 1369 */;
	const struct i2c_device_id *cocci_id/* drivers/clk/clk-si5351.c 1364 */;
	unsigned int cocci_id/* drivers/clk/clk-si5351.c 1341 */;
	struct of_phandle_args *cocci_id/* drivers/clk/clk-si5351.c 1338 */;
	void *cocci_id/* drivers/clk/clk-si5351.c 1338 */;
	struct clk_hw *cocci_id/* drivers/clk/clk-si5351.c 1337 */;
	u8 cocci_id/* drivers/clk/clk-si5351.c 132 */[SI5351_PARAMETERS_LENGTH];
	struct si5351_parameters *cocci_id/* drivers/clk/clk-si5351.c 130 */;
	u32 cocci_id/* drivers/clk/clk-si5351.c 1164 */;
	const __be32 *cocci_id/* drivers/clk/clk-si5351.c 1162 */;
	struct property *cocci_id/* drivers/clk/clk-si5351.c 1161 */;
	struct device_node *cocci_id/* drivers/clk/clk-si5351.c 1159 */;
	enum si5351_variant cocci_id/* drivers/clk/clk-si5351.c 1157 */;
	struct i2c_client *cocci_id/* drivers/clk/clk-si5351.c 1156 */;
	const struct of_device_id cocci_id/* drivers/clk/clk-si5351.c 1146 */[];
	const u8 *cocci_id/* drivers/clk/clk-si5351.c 111 */;
	unsigned long *cocci_id/* drivers/clk/clk-si5351.c 1029 */;
	long cocci_id/* drivers/clk/clk-si5351.c 1028 */;
}
