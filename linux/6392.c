cocci_test_suite() {
	struct regulator_dev *cocci_id/* drivers/regulator/ltc3676.c 90 */;
	struct ltc3676 {
		struct regmap *regmap;
		struct device *dev;
		struct regulator_desc regulator_descs[LTC3676_NUM_REGULATORS];
		struct regulator_dev *regulators[LTC3676_NUM_REGULATORS];
	} cocci_id/* drivers/regulator/ltc3676.c 66 */;
	enum ltc3676_reg{LTC3676_SW1, LTC3676_SW2, LTC3676_SW3, LTC3676_SW4, LTC3676_LDO1, LTC3676_LDO2, LTC3676_LDO3, LTC3676_LDO4, LTC3676_NUM_REGULATORS,} cocci_id/* drivers/regulator/ltc3676.c 54 */;
	struct i2c_driver cocci_id/* drivers/regulator/ltc3676.c 378 */;
	const struct of_device_id cocci_id/* drivers/regulator/ltc3676.c 372 */[];
	const struct i2c_device_id cocci_id/* drivers/regulator/ltc3676.c 366 */[];
	struct regulator_config cocci_id/* drivers/regulator/ltc3676.c 333 */;
	struct regulator_init_data *cocci_id/* drivers/regulator/ltc3676.c 308 */;
	const struct i2c_device_id *cocci_id/* drivers/regulator/ltc3676.c 305 */;
	struct i2c_client *cocci_id/* drivers/regulator/ltc3676.c 304 */;
	unsigned int cocci_id/* drivers/regulator/ltc3676.c 271 */;
	struct device *cocci_id/* drivers/regulator/ltc3676.c 270 */;
	struct ltc3676 *cocci_id/* drivers/regulator/ltc3676.c 269 */;
	irqreturn_t cocci_id/* drivers/regulator/ltc3676.c 267 */;
	void *cocci_id/* drivers/regulator/ltc3676.c 267 */;
	int cocci_id/* drivers/regulator/ltc3676.c 267 */;
	const struct regmap_config cocci_id/* drivers/regulator/ltc3676.c 255 */;
	bool cocci_id/* drivers/regulator/ltc3676.c 235 */;
	struct regulator_desc cocci_id/* drivers/regulator/ltc3676.c 224 */[LTC3676_NUM_REGULATORS];
	const struct regulator_ops cocci_id/* drivers/regulator/ltc3676.c 189 */;
	u32 cocci_id/* drivers/regulator/ltc3676.c 151 */[2];
	struct regulator_desc *cocci_id/* drivers/regulator/ltc3676.c 150 */;
	struct regulator_config *cocci_id/* drivers/regulator/ltc3676.c 147 */;
	const struct regulator_desc *cocci_id/* drivers/regulator/ltc3676.c 146 */;
	struct device_node *cocci_id/* drivers/regulator/ltc3676.c 145 */;
	uint64_t cocci_id/* drivers/regulator/ltc3676.c 137 */;
	u32 cocci_id/* drivers/regulator/ltc3676.c 135 */;
	unsigned cocci_id/* drivers/regulator/ltc3676.c 118 */;
}
