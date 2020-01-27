cocci_test_suite() {
	int cocci_id/* drivers/regulator/pv88090-regulator.c 94 */;
	struct pv88090_regulator *cocci_id/* drivers/regulator/pv88090-regulator.c 92 */;
	struct regulator_dev *cocci_id/* drivers/regulator/pv88090-regulator.c 90 */;
	unsigned int cocci_id/* drivers/regulator/pv88090-regulator.c 90 */;
	const struct pv88090_buck_voltage cocci_id/* drivers/regulator/pv88090-regulator.c 71 */[3];
	const unsigned int cocci_id/* drivers/regulator/pv88090-regulator.c 60 */[];
	const struct regmap_config cocci_id/* drivers/regulator/pv88090-regulator.c 51 */;
	struct pv88090_buck_voltage {
		int min_uV;
		int max_uV;
		int uV_step;
	} cocci_id/* drivers/regulator/pv88090-regulator.c 45 */;
	struct i2c_driver cocci_id/* drivers/regulator/pv88090-regulator.c 404 */;
	const struct of_device_id cocci_id/* drivers/regulator/pv88090-regulator.c 397 */[];
	const struct i2c_device_id cocci_id/* drivers/regulator/pv88090-regulator.c 390 */[];
	struct pv88090 {
		struct device *dev;
		struct regmap *regmap;
		struct regulator_dev *rdev[PV88090_MAX_REGULATORS];
	} cocci_id/* drivers/regulator/pv88090-regulator.c 39 */;
	void *cocci_id/* drivers/regulator/pv88090-regulator.c 377 */;
	struct pv88090_regulator {
		struct regulator_desc desc;
		unsigned int conf;
		unsigned int conf2;
	} cocci_id/* drivers/regulator/pv88090-regulator.c 33 */;
	struct pv88090 cocci_id/* drivers/regulator/pv88090-regulator.c 284 */;
	struct regulator_config cocci_id/* drivers/regulator/pv88090-regulator.c 280 */;
	struct pv88090 *cocci_id/* drivers/regulator/pv88090-regulator.c 279 */;
	struct regulator_init_data *cocci_id/* drivers/regulator/pv88090-regulator.c 278 */;
	const struct i2c_device_id *cocci_id/* drivers/regulator/pv88090-regulator.c 276 */;
	struct i2c_client *cocci_id/* drivers/regulator/pv88090-regulator.c 275 */;
	enum{PV88090_ID_BUCK1, PV88090_ID_BUCK2, PV88090_ID_BUCK3, PV88090_ID_LDO1, PV88090_ID_LDO2,} cocci_id/* drivers/regulator/pv88090-regulator.c 22 */;
	irqreturn_t cocci_id/* drivers/regulator/pv88090-regulator.c 218 */;
	struct pv88090_regulator cocci_id/* drivers/regulator/pv88090-regulator.c 207 */[];
	const struct regulator_ops cocci_id/* drivers/regulator/pv88090-regulator.c 139 */;
}
