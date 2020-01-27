cocci_test_suite() {
	int cocci_id/* drivers/regulator/pv88060-regulator.c 72 */;
	struct pv88060_regulator *cocci_id/* drivers/regulator/pv88060-regulator.c 70 */;
	struct regulator_dev *cocci_id/* drivers/regulator/pv88060-regulator.c 68 */;
	unsigned int cocci_id/* drivers/regulator/pv88060-regulator.c 68 */;
	const unsigned int cocci_id/* drivers/regulator/pv88060-regulator.c 64 */[];
	const struct regmap_config cocci_id/* drivers/regulator/pv88060-regulator.c 55 */;
	struct pv88060 {
		struct device *dev;
		struct regmap *regmap;
		struct regulator_dev *rdev[PV88060_MAX_REGULATORS];
	} cocci_id/* drivers/regulator/pv88060-regulator.c 49 */;
	struct pv88060_regulator {
		struct regulator_desc desc;
		unsigned int conf;
	} cocci_id/* drivers/regulator/pv88060-regulator.c 44 */;
	struct i2c_driver cocci_id/* drivers/regulator/pv88060-regulator.c 383 */;
	const struct of_device_id cocci_id/* drivers/regulator/pv88060-regulator.c 376 */[];
	const struct i2c_device_id cocci_id/* drivers/regulator/pv88060-regulator.c 369 */[];
	void *cocci_id/* drivers/regulator/pv88060-regulator.c 356 */;
	struct pv88060 cocci_id/* drivers/regulator/pv88060-regulator.c 290 */;
	struct regulator_config cocci_id/* drivers/regulator/pv88060-regulator.c 287 */;
	struct pv88060 *cocci_id/* drivers/regulator/pv88060-regulator.c 286 */;
	struct regulator_init_data *cocci_id/* drivers/regulator/pv88060-regulator.c 285 */;
	const struct i2c_device_id *cocci_id/* drivers/regulator/pv88060-regulator.c 283 */;
	struct i2c_client *cocci_id/* drivers/regulator/pv88060-regulator.c 282 */;
	irqreturn_t cocci_id/* drivers/regulator/pv88060-regulator.c 225 */;
	enum{PV88060_ID_BUCK1, PV88060_ID_LDO1, PV88060_ID_LDO2, PV88060_ID_LDO3, PV88060_ID_LDO4, PV88060_ID_LDO5, PV88060_ID_LDO6, PV88060_ID_LDO7, PV88060_ID_SW1, PV88060_ID_SW2, PV88060_ID_SW3, PV88060_ID_SW4, PV88060_ID_SW5, PV88060_ID_SW6,} cocci_id/* drivers/regulator/pv88060-regulator.c 22 */;
	const struct pv88060_regulator cocci_id/* drivers/regulator/pv88060-regulator.c 207 */[];
	const struct regulator_ops cocci_id/* drivers/regulator/pv88060-regulator.c 117 */;
}
