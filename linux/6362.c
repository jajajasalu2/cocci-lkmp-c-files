cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/regulator/stpmic1_regulator.c 626 */;
	const struct of_device_id cocci_id/* drivers/regulator/stpmic1_regulator.c 619 */[];
	const struct regulator_linear_range cocci_id/* drivers/regulator/stpmic1_regulator.c 60 */[];
	struct platform_device *cocci_id/* drivers/regulator/stpmic1_regulator.c 595 */;
	struct regulator_config cocci_id/* drivers/regulator/stpmic1_regulator.c 549 */;
	struct stpmic1 *cocci_id/* drivers/regulator/stpmic1_regulator.c 547 */;
	const struct stpmic1_regulator_cfg *cocci_id/* drivers/regulator/stpmic1_regulator.c 545 */;
	struct of_regulator_match *cocci_id/* drivers/regulator/stpmic1_regulator.c 544 */;
	struct of_regulator_match cocci_id/* drivers/regulator/stpmic1_regulator.c 526 */[];
	struct regulator_dev *cocci_id/* drivers/regulator/stpmic1_regulator.c 506 */;
	irqreturn_t cocci_id/* drivers/regulator/stpmic1_regulator.c 504 */;
	void *cocci_id/* drivers/regulator/stpmic1_regulator.c 504 */;
	int cocci_id/* drivers/regulator/stpmic1_regulator.c 504 */;
	struct stpmic1_regulator_cfg *cocci_id/* drivers/regulator/stpmic1_regulator.c 496 */;
	struct regmap *cocci_id/* drivers/regulator/stpmic1_regulator.c 464 */;
	unsigned int cocci_id/* drivers/regulator/stpmic1_regulator.c 461 */;
	enum{STPMIC1_BUCK1=0, STPMIC1_BUCK2=1, STPMIC1_BUCK3=2, STPMIC1_BUCK4=3, STPMIC1_LDO1=4, STPMIC1_LDO2=5, STPMIC1_LDO3=6, STPMIC1_LDO4=7, STPMIC1_LDO5=8, STPMIC1_LDO6=9, STPMIC1_VREF_DDR=10, STPMIC1_BOOST=11, STPMIC1_VBUS_OTG=12, STPMIC1_SW_OUT=13,} cocci_id/* drivers/regulator/stpmic1_regulator.c 38 */;
	unsigned int cocci_id/* drivers/regulator/stpmic1_regulator.c 36 */(unsigned int mode);
	const struct stpmic1_regulator_cfg cocci_id/* drivers/regulator/stpmic1_regulator.c 356 */[];
	int cocci_id/* drivers/regulator/stpmic1_regulator.c 35 */(struct regulator_dev *rdev);
	unsigned int cocci_id/* drivers/regulator/stpmic1_regulator.c 34 */(struct regulator_dev *rdev);
	int cocci_id/* drivers/regulator/stpmic1_regulator.c 33 */(struct regulator_dev *rdev,
								   unsigned int mode);
	struct stpmic1_regulator_cfg {
		struct regulator_desc desc;
		u8 mask_reset_reg;
		u8 mask_reset_mask;
		u8 icc_reg;
		u8 icc_mask;
	} cocci_id/* drivers/regulator/stpmic1_regulator.c 25 */;
	const struct regulator_ops cocci_id/* drivers/regulator/stpmic1_regulator.c 182 */;
}
