cocci_test_suite() {
	const struct pv88080_buck_voltage cocci_id/* drivers/regulator/pv88080-regulator.c 98 */[2];
	const unsigned int cocci_id/* drivers/regulator/pv88080-regulator.c 90 */[];
	const struct regmap_config cocci_id/* drivers/regulator/pv88080-regulator.c 81 */;
	struct pv88080_compatible_regmap {
		struct pv88080_buck_regmap buck_regmap[PV88080_MAX_REGULATORS - 1];
		int hvbuck_enable_reg;
		int hvbuck_vsel_reg;
		int hvbuck_enable_mask;
		int hvbuck_vsel_mask;
	} cocci_id/* drivers/regulator/pv88080-regulator.c 71 */;
	struct pv88080_buck_regmap {
		int buck_enable_reg;
		int buck_vsel_reg;
		int buck_mode_reg;
		int buck_limit_reg;
		int buck_vdac_range_reg;
		int buck_vrange_gain_reg;
		int buck_enable_mask;
		int buck_vsel_mask;
		int buck_limit_mask;
	} cocci_id/* drivers/regulator/pv88080-regulator.c 57 */;
	struct i2c_driver cocci_id/* drivers/regulator/pv88080-regulator.c 563 */;
	const struct i2c_device_id cocci_id/* drivers/regulator/pv88080-regulator.c 555 */[];
	struct pv88080_buck_voltage {
		int min_uV;
		int max_uV;
		int uV_step;
	} cocci_id/* drivers/regulator/pv88080-regulator.c 51 */;
	struct pv88080 {
		struct device *dev;
		struct regmap *regmap;
		struct regulator_dev *rdev[PV88080_MAX_REGULATORS];
		unsigned long type;
		const struct pv88080_compatible_regmap *regmap_config;
	} cocci_id/* drivers/regulator/pv88080-regulator.c 43 */;
	unsigned long cocci_id/* drivers/regulator/pv88080-regulator.c 413 */;
	struct pv88080 cocci_id/* drivers/regulator/pv88080-regulator.c 394 */;
	struct regulator_config cocci_id/* drivers/regulator/pv88080-regulator.c 390 */;
	const struct of_device_id *cocci_id/* drivers/regulator/pv88080-regulator.c 389 */;
	const struct pv88080_compatible_regmap *cocci_id/* drivers/regulator/pv88080-regulator.c 388 */;
	struct pv88080 *cocci_id/* drivers/regulator/pv88080-regulator.c 387 */;
	struct regulator_init_data *cocci_id/* drivers/regulator/pv88080-regulator.c 386 */;
	const struct i2c_device_id *cocci_id/* drivers/regulator/pv88080-regulator.c 384 */;
	struct i2c_client *cocci_id/* drivers/regulator/pv88080-regulator.c 383 */;
	struct pv88080_regulator {
		struct regulator_desc desc;
		unsigned int mode_reg;
		unsigned int conf2;
		unsigned int conf5;
	} cocci_id/* drivers/regulator/pv88080-regulator.c 36 */;
	irqreturn_t cocci_id/* drivers/regulator/pv88080-regulator.c 326 */;
	struct pv88080_regulator cocci_id/* drivers/regulator/pv88080-regulator.c 316 */[];
	enum pv88080_types{TYPE_PV88080_AA, TYPE_PV88080_BA,} cocci_id/* drivers/regulator/pv88080-regulator.c 31 */;
	const struct regulator_ops cocci_id/* drivers/regulator/pv88080-regulator.c 260 */;
	enum{PV88080_ID_BUCK1, PV88080_ID_BUCK2, PV88080_ID_BUCK3, PV88080_ID_HVBUCK,} cocci_id/* drivers/regulator/pv88080-regulator.c 23 */;
	int cocci_id/* drivers/regulator/pv88080-regulator.c 213 */;
	struct pv88080_regulator *cocci_id/* drivers/regulator/pv88080-regulator.c 211 */;
	struct regulator_dev *cocci_id/* drivers/regulator/pv88080-regulator.c 209 */;
	unsigned int cocci_id/* drivers/regulator/pv88080-regulator.c 209 */;
	void *cocci_id/* drivers/regulator/pv88080-regulator.c 201 */;
	const struct of_device_id cocci_id/* drivers/regulator/pv88080-regulator.c 200 */[];
	const struct pv88080_compatible_regmap cocci_id/* drivers/regulator/pv88080-regulator.c 111 */;
}
