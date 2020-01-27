cocci_test_suite() {
	struct fixed_regulator_data {
		struct fixed_voltage_config cfg;
		struct regulator_init_data init_data;
		struct platform_device pdev;
	} cocci_id/* drivers/regulator/fixed-helper.c 8 */;
	struct regulator_consumer_supply *cocci_id/* drivers/regulator/fixed-helper.c 31 */;
	const char *cocci_id/* drivers/regulator/fixed-helper.c 30 */;
	struct platform_device *cocci_id/* drivers/regulator/fixed-helper.c 30 */;
	int cocci_id/* drivers/regulator/fixed-helper.c 30 */;
	struct fixed_regulator_data cocci_id/* drivers/regulator/fixed-helper.c 17 */;
	struct fixed_regulator_data *cocci_id/* drivers/regulator/fixed-helper.c 16 */;
	struct device *cocci_id/* drivers/regulator/fixed-helper.c 14 */;
	void cocci_id/* drivers/regulator/fixed-helper.c 14 */;
}
