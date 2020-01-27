cocci_test_suite() {
	const struct bd718xx_regulator_data cocci_id/* drivers/regulator/bd718x7-regulator.c 778 */[];
	const struct of_dvs_setting cocci_id/* drivers/regulator/bd718x7-regulator.c 458 */[];
	struct regulator_config *cocci_id/* drivers/regulator/bd718x7-regulator.c 455 */;
	struct device_node *cocci_id/* drivers/regulator/bd718x7-regulator.c 453 */;
	struct regmap *cocci_id/* drivers/regulator/bd718x7-regulator.c 362 */;
	const struct of_dvs_setting *cocci_id/* drivers/regulator/bd718x7-regulator.c 359 */;
	struct of_dvs_setting {
		const char *prop;
		unsigned int reg;
	} cocci_id/* drivers/regulator/bd718x7-regulator.c 354 */;
	const struct reg_init cocci_id/* drivers/regulator/bd718x7-regulator.c 336 */[];
	struct bd718xx_regulator_data {
		struct regulator_desc desc;
		const struct reg_init init;
		const struct reg_init *additional_inits;
		int additional_init_amnt;
	} cocci_id/* drivers/regulator/bd718x7-regulator.c 319 */;
	struct reg_init {
		unsigned int reg;
		unsigned int mask;
		unsigned int val;
	} cocci_id/* drivers/regulator/bd718x7-regulator.c 314 */;
	unsigned int cocci_id/* drivers/regulator/bd718x7-regulator.c 30 */;
	struct regulator_dev *cocci_id/* drivers/regulator/bd718x7-regulator.c 26 */;
	int cocci_id/* drivers/regulator/bd718x7-regulator.c 26 */;
	const unsigned int cocci_id/* drivers/regulator/bd718x7-regulator.c 181 */[];
	const struct regulator_linear_range cocci_id/* drivers/regulator/bd718x7-regulator.c 166 */[];
	struct platform_driver cocci_id/* drivers/regulator/bd718x7-regulator.c 1284 */;
	const struct regulator_ops cocci_id/* drivers/regulator/bd718x7-regulator.c 128 */;
	const struct bd718xx_regulator_data *cocci_id/* drivers/regulator/bd718x7-regulator.c 1222 */;
	const struct regulator_desc *cocci_id/* drivers/regulator/bd718x7-regulator.c 1220 */;
	bool cocci_id/* drivers/regulator/bd718x7-regulator.c 1166 */;
	struct bd718xx_pmic_inits cocci_id/* drivers/regulator/bd718x7-regulator.c 1154 */[ROHM_CHIP_TYPE_AMOUNT];
	struct regulator_config cocci_id/* drivers/regulator/bd718x7-regulator.c 1153 */;
	struct bd718xx *cocci_id/* drivers/regulator/bd718x7-regulator.c 1152 */;
	struct platform_device *cocci_id/* drivers/regulator/bd718x7-regulator.c 1150 */;
	struct bd718xx_pmic_inits {
		const struct bd718xx_regulator_data *r_datas;
		unsigned int r_amount;
	} cocci_id/* drivers/regulator/bd718x7-regulator.c 1145 */;
}
