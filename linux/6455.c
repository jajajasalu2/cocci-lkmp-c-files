cocci_test_suite() {
	struct mt6380_regulator_info {
		struct regulator_desc desc;
		u32 vselon_reg;
		u32 modeset_reg;
		u32 modeset_mask;
	} cocci_id/* drivers/regulator/mt6380-regulator.c 84 */;
	struct platform_driver cocci_id/* drivers/regulator/mt6380-regulator.c 330 */;
	const struct of_device_id cocci_id/* drivers/regulator/mt6380-regulator.c 324 */[];
	const struct platform_device_id cocci_id/* drivers/regulator/mt6380-regulator.c 318 */[];
	struct regulator_config cocci_id/* drivers/regulator/mt6380-regulator.c 298 */;
	struct regmap *cocci_id/* drivers/regulator/mt6380-regulator.c 297 */;
	struct platform_device *cocci_id/* drivers/regulator/mt6380-regulator.c 295 */;
	struct mt6380_regulator_info cocci_id/* drivers/regulator/mt6380-regulator.c 272 */[];
	const struct regulator_ops cocci_id/* drivers/regulator/mt6380-regulator.c 262 */;
	struct mt6380_regulator_info *cocci_id/* drivers/regulator/mt6380-regulator.c 213 */;
	int cocci_id/* drivers/regulator/mt6380-regulator.c 212 */;
	struct regulator_dev *cocci_id/* drivers/regulator/mt6380-regulator.c 208 */;
	unsigned int cocci_id/* drivers/regulator/mt6380-regulator.c 208 */;
	const unsigned int cocci_id/* drivers/regulator/mt6380-regulator.c 167 */[];
	const struct regulator_linear_range cocci_id/* drivers/regulator/mt6380-regulator.c 155 */[];
}
