cocci_test_suite() {
	const struct regulator_linear_range cocci_id/* drivers/regulator/tps65086-regulator.c 74 */[];
	struct tps65086_regulator {
		struct regulator_desc desc;
		unsigned int decay_reg;
		unsigned int decay_mask;
	} cocci_id/* drivers/regulator/tps65086-regulator.c 68 */;
	enum tps65086_regulators{BUCK1, BUCK2, BUCK3, BUCK4, BUCK5, BUCK6, LDOA1, LDOA2, LDOA3, SWA1, SWB1, SWB2, VTT,} cocci_id/* drivers/regulator/tps65086-regulator.c 25 */;
	struct platform_driver cocci_id/* drivers/regulator/tps65086-regulator.c 243 */;
	const struct platform_device_id cocci_id/* drivers/regulator/tps65086-regulator.c 237 */[];
	struct regulator_dev *cocci_id/* drivers/regulator/tps65086-regulator.c 214 */;
	struct regulator_config cocci_id/* drivers/regulator/tps65086-regulator.c 213 */;
	struct tps65086 *cocci_id/* drivers/regulator/tps65086-regulator.c 212 */;
	struct platform_device *cocci_id/* drivers/regulator/tps65086-regulator.c 210 */;
	struct regulator_config *cocci_id/* drivers/regulator/tps65086-regulator.c 167 */;
	const struct regulator_desc *cocci_id/* drivers/regulator/tps65086-regulator.c 166 */;
	struct device_node *cocci_id/* drivers/regulator/tps65086-regulator.c 165 */;
	int cocci_id/* drivers/regulator/tps65086-regulator.c 165 */;
	struct tps65086_regulator cocci_id/* drivers/regulator/tps65086-regulator.c 125 */[];
	int cocci_id/* drivers/regulator/tps65086-regulator.c 121 */(struct device_node *dev,
								     const struct regulator_desc *desc,
								     struct regulator_config *config);
	struct regulator_ops cocci_id/* drivers/regulator/tps65086-regulator.c 104 */;
}
