cocci_test_suite() {
	int *cocci_id/* drivers/regulator/tps62360-regulator.c 96 */;
	int cocci_id/* drivers/regulator/tps62360-regulator.c 96 */;
	bool cocci_id/* drivers/regulator/tps62360-regulator.c 95 */;
	struct tps62360_chip *cocci_id/* drivers/regulator/tps62360-regulator.c 95 */;
	struct tps62360_chip {
		struct device *dev;
		struct regulator_desc desc;
		struct regulator_dev *rdev;
		struct regmap *regmap;
		int vsel0_gpio;
		int vsel1_gpio;
		u8 voltage_reg_mask;
		bool en_internal_pulldn;
		bool en_discharge;
		bool valid_gpios;
		int lru_index[4];
		int curr_vset_vsel[4];
		int curr_vset_id;
	} cocci_id/* drivers/regulator/tps62360-regulator.c 63 */;
	enum chips{TPS62360, TPS62361, TPS62362, TPS62363,} cocci_id/* drivers/regulator/tps62360-regulator.c 54 */;
	void __exit cocci_id/* drivers/regulator/tps62360-regulator.c 531 */;
	void cocci_id/* drivers/regulator/tps62360-regulator.c 531 */;
	int __init cocci_id/* drivers/regulator/tps62360-regulator.c 525 */;
	struct i2c_driver cocci_id/* drivers/regulator/tps62360-regulator.c 515 */;
	const struct i2c_device_id cocci_id/* drivers/regulator/tps62360-regulator.c 505 */[];
	long cocci_id/* drivers/regulator/tps62360-regulator.c 374 */;
	const struct of_device_id *cocci_id/* drivers/regulator/tps62360-regulator.c 367 */;
	struct regulator_config cocci_id/* drivers/regulator/tps62360-regulator.c 345 */;
	const struct i2c_device_id *cocci_id/* drivers/regulator/tps62360-regulator.c 343 */;
	struct i2c_client *cocci_id/* drivers/regulator/tps62360-regulator.c 342 */;
	void *cocci_id/* drivers/regulator/tps62360-regulator.c 333 */;
	const struct of_device_id cocci_id/* drivers/regulator/tps62360-regulator.c 332 */[];
	struct device_node *cocci_id/* drivers/regulator/tps62360-regulator.c 300 */;
	const struct regulator_desc *cocci_id/* drivers/regulator/tps62360-regulator.c 297 */;
	struct device *cocci_id/* drivers/regulator/tps62360-regulator.c 296 */;
	struct tps62360_regulator_platform_data *cocci_id/* drivers/regulator/tps62360-regulator.c 295 */;
	const struct regmap_config cocci_id/* drivers/regulator/tps62360-regulator.c 288 */;
	struct regulator_ops cocci_id/* drivers/regulator/tps62360-regulator.c 236 */;
	unsigned cocci_id/* drivers/regulator/tps62360-regulator.c 139 */;
	unsigned int cocci_id/* drivers/regulator/tps62360-regulator.c 125 */;
	struct regulator_dev *cocci_id/* drivers/regulator/tps62360-regulator.c 121 */;
}