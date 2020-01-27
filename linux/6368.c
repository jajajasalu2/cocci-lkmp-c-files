cocci_test_suite() {
	struct tps65132_regulator {
		struct device *dev;
		struct tps65132_reg_pdata reg_pdata[TPS65132_MAX_REGULATORS];
	} cocci_id/* drivers/regulator/tps65132-regulator.c 56 */;
	struct tps65132_reg_pdata {
		struct gpio_desc *en_gpiod;
		struct gpio_desc *act_dis_gpiod;
		unsigned int act_dis_time_us;
		int ena_gpio_state;
	} cocci_id/* drivers/regulator/tps65132-regulator.c 49 */;
	struct i2c_driver cocci_id/* drivers/regulator/tps65132-regulator.c 271 */;
	const struct i2c_device_id cocci_id/* drivers/regulator/tps65132-regulator.c 265 */[];
	struct regulator_config cocci_id/* drivers/regulator/tps65132-regulator.c 230 */;
	struct regmap *cocci_id/* drivers/regulator/tps65132-regulator.c 229 */;
	struct regulator_dev *cocci_id/* drivers/regulator/tps65132-regulator.c 228 */;
	struct device *cocci_id/* drivers/regulator/tps65132-regulator.c 226 */;
	const struct i2c_device_id *cocci_id/* drivers/regulator/tps65132-regulator.c 224 */;
	struct i2c_client *cocci_id/* drivers/regulator/tps65132-regulator.c 223 */;
	const struct regmap_config cocci_id/* drivers/regulator/tps65132-regulator.c 214 */;
	const struct regmap_access_table cocci_id/* drivers/regulator/tps65132-regulator.c 209 */;
	const struct regmap_range cocci_id/* drivers/regulator/tps65132-regulator.c 204 */[];
	const struct regulator_desc cocci_id/* drivers/regulator/tps65132-regulator.c 199 */[TPS65132_MAX_REGULATORS];
	struct tps65132_reg_pdata *cocci_id/* drivers/regulator/tps65132-regulator.c 136 */;
	struct tps65132_regulator *cocci_id/* drivers/regulator/tps65132-regulator.c 135 */;
	struct regulator_config *cocci_id/* drivers/regulator/tps65132-regulator.c 133 */;
	const struct regulator_desc *cocci_id/* drivers/regulator/tps65132-regulator.c 132 */;
	struct device_node *cocci_id/* drivers/regulator/tps65132-regulator.c 131 */;
	int cocci_id/* drivers/regulator/tps65132-regulator.c 131 */;
	const struct regulator_ops cocci_id/* drivers/regulator/tps65132-regulator.c 120 */;
}
