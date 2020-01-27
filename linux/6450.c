cocci_test_suite() {
	struct rc5t583_regulator_info cocci_id/* drivers/regulator/rc5t583-regulator.c 83 */[RC5T583_REGULATOR_MAX];
	const struct regulator_ops cocci_id/* drivers/regulator/rc5t583-regulator.c 46 */;
	struct rc5t583_regulator_info *cocci_id/* drivers/regulator/rc5t583-regulator.c 39 */;
	struct regulator_dev *cocci_id/* drivers/regulator/rc5t583-regulator.c 37 */;
	int cocci_id/* drivers/regulator/rc5t583-regulator.c 37 */;
	struct rc5t583_regulator_info {
		int deepsleep_id;
		uint8_t reg_disc_reg;
		uint8_t disc_bit;
		uint8_t deepsleep_reg;
		int enable_uv_per_us;
		struct regulator_desc desc;
	} cocci_id/* drivers/regulator/rc5t583-regulator.c 22 */;
	void __exit cocci_id/* drivers/regulator/rc5t583-regulator.c 162 */;
	void cocci_id/* drivers/regulator/rc5t583-regulator.c 162 */;
	int __init cocci_id/* drivers/regulator/rc5t583-regulator.c 156 */;
	struct platform_driver cocci_id/* drivers/regulator/rc5t583-regulator.c 149 */;
	struct regulator_config cocci_id/* drivers/regulator/rc5t583-regulator.c 104 */;
	struct rc5t583_platform_data *cocci_id/* drivers/regulator/rc5t583-regulator.c 103 */;
	struct rc5t583 *cocci_id/* drivers/regulator/rc5t583-regulator.c 102 */;
	struct platform_device *cocci_id/* drivers/regulator/rc5t583-regulator.c 100 */;
}
