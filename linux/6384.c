cocci_test_suite() {
	struct hi6421v530_regulator_info cocci_id/* drivers/regulator/hi6421v530-regulator.c 98 */[];
	const struct regulator_ops cocci_id/* drivers/regulator/hi6421v530-regulator.c 58 */;
	const unsigned int cocci_id/* drivers/regulator/hi6421v530-regulator.c 53 */[];
	enum hi6421v530_regulator_id{HI6421V530_LDO3, HI6421V530_LDO9, HI6421V530_LDO11, HI6421V530_LDO15, HI6421V530_LDO16,} cocci_id/* drivers/regulator/hi6421v530-regulator.c 33 */;
	struct hi6421v530_regulator_info {
		struct regulator_desc rdesc;
		u8 mode_mask;
		u32 eco_microamp;
	} cocci_id/* drivers/regulator/hi6421v530-regulator.c 26 */;
	struct platform_driver cocci_id/* drivers/regulator/hi6421v530-regulator.c 199 */;
	const struct platform_device_id cocci_id/* drivers/regulator/hi6421v530-regulator.c 193 */[];
	struct regulator_config cocci_id/* drivers/regulator/hi6421v530-regulator.c 167 */;
	struct hi6421_pmic *cocci_id/* drivers/regulator/hi6421v530-regulator.c 165 */;
	struct platform_device *cocci_id/* drivers/regulator/hi6421v530-regulator.c 163 */;
	int cocci_id/* drivers/regulator/hi6421v530-regulator.c 126 */;
	struct hi6421v530_regulator_info *cocci_id/* drivers/regulator/hi6421v530-regulator.c 114 */;
	struct regulator_dev *cocci_id/* drivers/regulator/hi6421v530-regulator.c 112 */;
	unsigned int cocci_id/* drivers/regulator/hi6421v530-regulator.c 111 */;
}
