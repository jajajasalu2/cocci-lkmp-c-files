cocci_test_suite() {
	const unsigned int cocci_id/* drivers/regulator/hi6421-regulator.c 95 */[];
	const struct regulator_linear_range cocci_id/* drivers/regulator/hi6421-regulator.c 90 */[];
	struct platform_driver cocci_id/* drivers/regulator/hi6421-regulator.c 574 */;
	const struct platform_device_id cocci_id/* drivers/regulator/hi6421-regulator.c 568 */[];
	struct regulator_config cocci_id/* drivers/regulator/hi6421-regulator.c 538 */;
	struct hi6421_pmic *cocci_id/* drivers/regulator/hi6421-regulator.c 535 */;
	struct platform_device *cocci_id/* drivers/regulator/hi6421-regulator.c 533 */;
	enum hi6421_regulator_id{HI6421_LDO0, HI6421_LDO1, HI6421_LDO2, HI6421_LDO3, HI6421_LDO4, HI6421_LDO5, HI6421_LDO6, HI6421_LDO7, HI6421_LDO8, HI6421_LDO9, HI6421_LDO10, HI6421_LDO11, HI6421_LDO12, HI6421_LDO13, HI6421_LDO14, HI6421_LDO15, HI6421_LDO16, HI6421_LDO17, HI6421_LDO18, HI6421_LDO19, HI6421_LDO20, HI6421_LDOAUDIO, HI6421_BUCK0, HI6421_BUCK1, HI6421_BUCK2, HI6421_BUCK3, HI6421_BUCK4, HI6421_BUCK5, HI6421_NUM_REGULATORS,} cocci_id/* drivers/regulator/hi6421-regulator.c 45 */;
	int cocci_id/* drivers/regulator/hi6421-regulator.c 434 */;
	u32 cocci_id/* drivers/regulator/hi6421-regulator.c 401 */;
	struct hi6421_regulator_info *cocci_id/* drivers/regulator/hi6421-regulator.c 400 */;
	struct regulator_dev *cocci_id/* drivers/regulator/hi6421-regulator.c 398 */;
	unsigned int cocci_id/* drivers/regulator/hi6421-regulator.c 398 */;
	struct hi6421_regulator_info {
		struct regulator_desc desc;
		u8 mode_mask;
		u32 eco_microamp;
	} cocci_id/* drivers/regulator/hi6421-regulator.c 38 */;
	struct hi6421_regulator_pdata *cocci_id/* drivers/regulator/hi6421-regulator.c 369 */;
	struct hi6421_regulator_info cocci_id/* drivers/regulator/hi6421-regulator.c 306 */[HI6421_NUM_REGULATORS];
	struct hi6421_regulator_pdata {
		struct mutex lock;
	} cocci_id/* drivers/regulator/hi6421-regulator.c 28 */;
	const struct regulator_ops cocci_id/* drivers/regulator/hi6421-regulator.c 113 */;
}
