cocci_test_suite() {
	const struct regulator_linear_range cocci_id/* drivers/regulator/act8945a-regulator.c 76 */[];
	struct act8945a_pmic {
		struct regmap *regmap;
		u32 op_mode[ACT8945A_ID_MAX];
	} cocci_id/* drivers/regulator/act8945a-regulator.c 71 */;
	enum{ACT8945A_ID_DCDC1, ACT8945A_ID_DCDC2, ACT8945A_ID_DCDC3, ACT8945A_ID_LDO1, ACT8945A_ID_LDO2, ACT8945A_ID_LDO3, ACT8945A_ID_LDO4, ACT8945A_ID_MAX,} cocci_id/* drivers/regulator/act8945a-regulator.c 60 */;
	struct platform_driver cocci_id/* drivers/regulator/act8945a-regulator.c 348 */;
	void cocci_id/* drivers/regulator/act8945a-regulator.c 338 */;
	struct device *cocci_id/* drivers/regulator/act8945a-regulator.c 325 */;
	int __maybe_unused cocci_id/* drivers/regulator/act8945a-regulator.c 325 */;
	bool cocci_id/* drivers/regulator/act8945a-regulator.c 281 */;
	const struct regulator_desc *cocci_id/* drivers/regulator/act8945a-regulator.c 277 */;
	struct regulator_config cocci_id/* drivers/regulator/act8945a-regulator.c 276 */;
	struct platform_device *cocci_id/* drivers/regulator/act8945a-regulator.c 274 */;
	const struct regulator_desc cocci_id/* drivers/regulator/act8945a-regulator.c 264 */[];
	const struct regulator_ops cocci_id/* drivers/regulator/act8945a-regulator.c 220 */;
	int cocci_id/* drivers/regulator/act8945a-regulator.c 212 */;
	struct act8945a_pmic *cocci_id/* drivers/regulator/act8945a-regulator.c 211 */;
	struct regulator_dev *cocci_id/* drivers/regulator/act8945a-regulator.c 209 */;
	unsigned int cocci_id/* drivers/regulator/act8945a-regulator.c 209 */;
	struct regmap *cocci_id/* drivers/regulator/act8945a-regulator.c 157 */;
}
