cocci_test_suite() {
	u8 cocci_id/* drivers/mfd/twl-core.c 996 */;
	u32 cocci_id/* drivers/mfd/twl-core.c 995 */;
	struct clk *cocci_id/* drivers/mfd/twl-core.c 994 */;
	struct twl4030_clock_init_data *cocci_id/* drivers/mfd/twl-core.c 991 */;
	void cocci_id/* drivers/mfd/twl-core.c 990 */;
	struct regulator_init_data cocci_id/* drivers/mfd/twl-core.c 782 */;
	struct regulator_consumer_supply cocci_id/* drivers/mfd/twl-core.c 769 */;
	unsigned long cocci_id/* drivers/mfd/twl-core.c 709 */;
	struct twl4030_platform_data *cocci_id/* drivers/mfd/twl-core.c 708 */;
	struct regulator_init_data *cocci_id/* drivers/mfd/twl-core.c 695 */;
	struct twl_regulator_driver_data *cocci_id/* drivers/mfd/twl-core.c 677 */;
	struct twl_regulator_driver_data cocci_id/* drivers/mfd/twl-core.c 664 */;
	struct regulator_consumer_supply *cocci_id/* drivers/mfd/twl-core.c 661 */;
	bool cocci_id/* drivers/mfd/twl-core.c 653 */;
	int cocci_id/* drivers/mfd/twl-core.c 653 */;
	void *cocci_id/* drivers/mfd/twl-core.c 652 */;
	const char *cocci_id/* drivers/mfd/twl-core.c 651 */;
	struct device *cocci_id/* drivers/mfd/twl-core.c 651 */;
	unsigned cocci_id/* drivers/mfd/twl-core.c 651 */;
	struct resource cocci_id/* drivers/mfd/twl-core.c 625 */[2];
	struct twl_client *cocci_id/* drivers/mfd/twl-core.c 600 */;
	struct platform_device *cocci_id/* drivers/mfd/twl-core.c 599 */;
	u8 *cocci_id/* drivers/mfd/twl-core.c 468 */;
	struct regmap *cocci_id/* drivers/mfd/twl-core.c 411 */;
	const struct regmap_config cocci_id/* drivers/mfd/twl-core.c 358 */[3];
	const struct regmap_config cocci_id/* drivers/mfd/twl-core.c 295 */[4];
	const struct regmap_access_table cocci_id/* drivers/mfd/twl-core.c 290 */;
	const struct regmap_range cocci_id/* drivers/mfd/twl-core.c 286 */[];
	unsigned int cocci_id/* drivers/mfd/twl-core.c 272 */;
	const struct reg_default cocci_id/* drivers/mfd/twl-core.c 196 */[];
	struct twl_mapping cocci_id/* drivers/mfd/twl-core.c 160 */[];
	struct twl_private *cocci_id/* drivers/mfd/twl-core.c 158 */;
	struct twl_private {
		bool ready;
		u32 twl_idcode;
		unsigned int twl_id;
		struct twl_mapping *twl_map;
		struct twl_client *twl_modules;
	} cocci_id/* drivers/mfd/twl-core.c 149 */;
	struct twl_mapping {
		unsigned char sid;
		unsigned char base;
	} cocci_id/* drivers/mfd/twl-core.c 144 */;
	struct twl_client {
		struct i2c_client *client;
		struct regmap *regmap;
	} cocci_id/* drivers/mfd/twl-core.c 138 */;
	struct i2c_driver cocci_id/* drivers/mfd/twl-core.c 1272 */;
	const struct i2c_device_id cocci_id/* drivers/mfd/twl-core.c 1257 */[];
	int __maybe_unused cocci_id/* drivers/mfd/twl-core.c 1245 */;
	struct twl_client cocci_id/* drivers/mfd/twl-core.c 1131 */;
	struct twl_private cocci_id/* drivers/mfd/twl-core.c 1107 */;
	const struct regmap_config *cocci_id/* drivers/mfd/twl-core.c 1073 */;
	struct device_node *cocci_id/* drivers/mfd/twl-core.c 1071 */;
	const struct i2c_device_id *cocci_id/* drivers/mfd/twl-core.c 1068 */;
	struct i2c_client *cocci_id/* drivers/mfd/twl-core.c 1068 */;
	struct of_dev_auxdata cocci_id/* drivers/mfd/twl-core.c 1061 */[];
}
