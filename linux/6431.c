cocci_test_suite() {
	struct tps_info cocci_id/* drivers/regulator/tps6507x-regulator.c 87 */[];
	struct tps_info {
		const char *name;
		u8 table_len;
		const unsigned int *table;
		bool defdcdc_default;
	} cocci_id/* drivers/regulator/tps6507x-regulator.c 78 */;
	const unsigned int cocci_id/* drivers/regulator/tps6507x-regulator.c 68 */[];
	void __exit cocci_id/* drivers/regulator/tps6507x-regulator.c 459 */;
	void cocci_id/* drivers/regulator/tps6507x-regulator.c 459 */;
	int __init cocci_id/* drivers/regulator/tps6507x-regulator.c 453 */;
	struct platform_driver cocci_id/* drivers/regulator/tps6507x-regulator.c 446 */;
	struct tps6507x_reg_platform_data *cocci_id/* drivers/regulator/tps6507x-regulator.c 410 */;
	struct tps6507x_board *cocci_id/* drivers/regulator/tps6507x-regulator.c 385 */;
	struct regulator_init_data *cocci_id/* drivers/regulator/tps6507x-regulator.c 382 */;
	struct regulator_config cocci_id/* drivers/regulator/tps6507x-regulator.c 381 */;
	struct tps6507x_dev *cocci_id/* drivers/regulator/tps6507x-regulator.c 379 */;
	struct platform_device *cocci_id/* drivers/regulator/tps6507x-regulator.c 377 */;
	u32 cocci_id/* drivers/regulator/tps6507x-regulator.c 367 */;
	struct tps_info *cocci_id/* drivers/regulator/tps6507x-regulator.c 366 */;
	struct regulator_config *cocci_id/* drivers/regulator/tps6507x-regulator.c 363 */;
	const struct regulator_desc *cocci_id/* drivers/regulator/tps6507x-regulator.c 362 */;
	struct device_node *cocci_id/* drivers/regulator/tps6507x-regulator.c 361 */;
	const struct regulator_ops cocci_id/* drivers/regulator/tps6507x-regulator.c 351 */;
	unsigned cocci_id/* drivers/regulator/tps6507x-regulator.c 304 */;
	struct regulator_dev *cocci_id/* drivers/regulator/tps6507x-regulator.c 244 */;
	u8 cocci_id/* drivers/regulator/tps6507x-regulator.c 162 */;
	struct tps6507x_pmic *cocci_id/* drivers/regulator/tps6507x-regulator.c 162 */;
	int cocci_id/* drivers/regulator/tps6507x-regulator.c 162 */;
	struct tps6507x_pmic {
		struct regulator_desc desc[TPS6507X_NUM_REGULATOR];
		struct tps6507x_dev *mfd;
		struct tps_info *info[TPS6507X_NUM_REGULATOR];
		struct mutex io_lock;
	} cocci_id/* drivers/regulator/tps6507x-regulator.c 115 */;
}
