cocci_test_suite() {
	struct da9211 *cocci_id/* drivers/regulator/da9211-regulator.c 95 */;
	int cocci_id/* drivers/regulator/da9211-regulator.c 94 */;
	struct regulator_dev *cocci_id/* drivers/regulator/da9211-regulator.c 92 */;
	unsigned int cocci_id/* drivers/regulator/da9211-regulator.c 92 */;
	const int cocci_id/* drivers/regulator/da9211-regulator.c 73 */[];
	const struct regmap_config cocci_id/* drivers/regulator/da9211-regulator.c 57 */;
	struct i2c_driver cocci_id/* drivers/regulator/da9211-regulator.c 524 */;
	const struct of_device_id cocci_id/* drivers/regulator/da9211-regulator.c 510 */[];
	const struct i2c_device_id cocci_id/* drivers/regulator/da9211-regulator.c 496 */[];
	const struct regmap_range_cfg cocci_id/* drivers/regulator/da9211-regulator.c 45 */[];
	struct da9211 cocci_id/* drivers/regulator/da9211-regulator.c 426 */;
	const struct i2c_device_id *cocci_id/* drivers/regulator/da9211-regulator.c 420 */;
	struct i2c_client *cocci_id/* drivers/regulator/da9211-regulator.c 419 */;
	struct regulator_config cocci_id/* drivers/regulator/da9211-regulator.c 353 */;
	struct da9211 {
		struct device *dev;
		struct regmap *regmap;
		struct da9211_pdata *pdata;
		struct regulator_dev *rdev[DA9211_MAX_REGULATORS];
		int num_regulator;
		int chip_irq;
		int chip_id;
	} cocci_id/* drivers/regulator/da9211-regulator.c 35 */;
	irqreturn_t cocci_id/* drivers/regulator/da9211-regulator.c 307 */;
	void *cocci_id/* drivers/regulator/da9211-regulator.c 307 */;
	struct device_node *cocci_id/* drivers/regulator/da9211-regulator.c 256 */;
	struct device *cocci_id/* drivers/regulator/da9211-regulator.c 253 */;
	struct da9211_pdata *cocci_id/* drivers/regulator/da9211-regulator.c 252 */;
	struct of_regulator_match cocci_id/* drivers/regulator/da9211-regulator.c 247 */[];
	struct regulator_desc cocci_id/* drivers/regulator/da9211-regulator.c 241 */[];
	const struct regulator_ops cocci_id/* drivers/regulator/da9211-regulator.c 212 */;
	const int *cocci_id/* drivers/regulator/da9211-regulator.c 185 */;
}
