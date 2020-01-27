cocci_test_suite() {
	struct regulator_dev *cocci_id/* drivers/regulator/ltc3589.c 91 */;
	const int cocci_id/* drivers/regulator/ltc3589.c 87 */[];
	struct ltc3589 {
		struct regmap *regmap;
		struct device *dev;
		enum ltc3589_variant variant;
		struct regulator_desc regulator_descs[LTC3589_NUM_REGULATORS];
		struct regulator_dev *regulators[LTC3589_NUM_REGULATORS];
	} cocci_id/* drivers/regulator/ltc3589.c 75 */;
	enum ltc3589_reg{LTC3589_SW1, LTC3589_SW2, LTC3589_SW3, LTC3589_BB_OUT, LTC3589_LDO1, LTC3589_LDO2, LTC3589_LDO3, LTC3589_LDO4, LTC3589_NUM_REGULATORS,} cocci_id/* drivers/regulator/ltc3589.c 63 */;
	enum ltc3589_variant{LTC3589, LTC3589_1, LTC3589_2,} cocci_id/* drivers/regulator/ltc3589.c 57 */;
	struct i2c_driver cocci_id/* drivers/regulator/ltc3589.c 477 */;
	const struct of_device_id cocci_id/* drivers/regulator/ltc3589.c 460 */[];
	const struct i2c_device_id cocci_id/* drivers/regulator/ltc3589.c 452 */[];
	struct regulator_config cocci_id/* drivers/regulator/ltc3589.c 423 */;
	enum ltc3589_variant cocci_id/* drivers/regulator/ltc3589.c 398 */;
	struct device *cocci_id/* drivers/regulator/ltc3589.c 387 */;
	const struct i2c_device_id *cocci_id/* drivers/regulator/ltc3589.c 385 */;
	struct i2c_client *cocci_id/* drivers/regulator/ltc3589.c 384 */;
	unsigned int cocci_id/* drivers/regulator/ltc3589.c 354 */;
	struct ltc3589 *cocci_id/* drivers/regulator/ltc3589.c 353 */;
	irqreturn_t cocci_id/* drivers/regulator/ltc3589.c 351 */;
	void *cocci_id/* drivers/regulator/ltc3589.c 351 */;
	int cocci_id/* drivers/regulator/ltc3589.c 351 */;
	const struct regmap_config cocci_id/* drivers/regulator/ltc3589.c 337 */;
	const struct reg_default cocci_id/* drivers/regulator/ltc3589.c 321 */[];
	bool cocci_id/* drivers/regulator/ltc3589.c 287 */;
	const struct regulator_desc cocci_id/* drivers/regulator/ltc3589.c 252 */[];
	u32 cocci_id/* drivers/regulator/ltc3589.c 197 */[2];
	struct regulator_desc *cocci_id/* drivers/regulator/ltc3589.c 196 */;
	struct regulator_config *cocci_id/* drivers/regulator/ltc3589.c 193 */;
	const struct regulator_desc *cocci_id/* drivers/regulator/ltc3589.c 192 */;
	struct device_node *cocci_id/* drivers/regulator/ltc3589.c 191 */;
	uint64_t cocci_id/* drivers/regulator/ltc3589.c 181 */;
	u32 cocci_id/* drivers/regulator/ltc3589.c 179 */;
	const struct regulator_ops cocci_id/* drivers/regulator/ltc3589.c 159 */;
}
