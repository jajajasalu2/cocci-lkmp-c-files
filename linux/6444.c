cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/regulator/bcm590xx-regulator.c 354 */;
	struct regulator_desc cocci_id/* drivers/regulator/bcm590xx-regulator.c 294 */;
	struct regulator_dev *cocci_id/* drivers/regulator/bcm590xx-regulator.c 281 */;
	struct bcm590xx_info *cocci_id/* drivers/regulator/bcm590xx-regulator.c 280 */;
	struct regulator_config cocci_id/* drivers/regulator/bcm590xx-regulator.c 279 */;
	struct bcm590xx_reg *cocci_id/* drivers/regulator/bcm590xx-regulator.c 278 */;
	struct bcm590xx *cocci_id/* drivers/regulator/bcm590xx-regulator.c 277 */;
	struct platform_device *cocci_id/* drivers/regulator/bcm590xx-regulator.c 275 */;
	const struct regulator_ops cocci_id/* drivers/regulator/bcm590xx-regulator.c 259 */;
	int cocci_id/* drivers/regulator/bcm590xx-regulator.c 209 */;
	struct bcm590xx_reg {
		struct regulator_desc *desc;
		struct bcm590xx *mfd;
	} cocci_id/* drivers/regulator/bcm590xx-regulator.c 194 */;
	struct bcm590xx_info cocci_id/* drivers/regulator/bcm590xx-regulator.c 164 */[];
	struct bcm590xx_info {
		const char *name;
		const char *vin_name;
		u8 n_voltages;
		const unsigned int *volt_table;
		u8 n_linear_ranges;
		const struct regulator_linear_range *linear_ranges;
	} cocci_id/* drivers/regulator/bcm590xx-regulator.c 140 */;
	const struct regulator_linear_range cocci_id/* drivers/regulator/bcm590xx-regulator.c 119 */[];
	const unsigned int cocci_id/* drivers/regulator/bcm590xx-regulator.c 103 */[];
}
