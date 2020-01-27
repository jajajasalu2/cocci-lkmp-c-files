cocci_test_suite() {
	struct regulator_desc *cocci_id/* drivers/regulator/sy8824x.c 89 */;
	struct regulator_config *cocci_id/* drivers/regulator/sy8824x.c 87 */;
	const struct regulator_ops cocci_id/* drivers/regulator/sy8824x.c 73 */;
	int cocci_id/* drivers/regulator/sy8824x.c 62 */;
	u32 cocci_id/* drivers/regulator/sy8824x.c 61 */;
	const struct sy8824_config *cocci_id/* drivers/regulator/sy8824x.c 60 */;
	struct sy8824_device_info *cocci_id/* drivers/regulator/sy8824x.c 59 */;
	struct regulator_dev *cocci_id/* drivers/regulator/sy8824x.c 57 */;
	unsigned int cocci_id/* drivers/regulator/sy8824x.c 57 */;
	struct sy8824_device_info {
		struct device *dev;
		struct regulator_desc desc;
		struct regulator_init_data *regulator;
		const struct sy8824_config *cfg;
	} cocci_id/* drivers/regulator/sy8824x.c 30 */;
	struct i2c_driver cocci_id/* drivers/regulator/sy8824x.c 220 */;
	const struct i2c_device_id cocci_id/* drivers/regulator/sy8824x.c 214 */[];
	const struct of_device_id cocci_id/* drivers/regulator/sy8824x.c 193 */[];
	struct sy8824_config {
		unsigned int vol_reg;
		unsigned int mode_reg;
		unsigned int enable_reg;
		unsigned int vsel_min;
		unsigned int vsel_step;
		unsigned int vsel_count;
	} cocci_id/* drivers/regulator/sy8824x.c 19 */;
	const struct sy8824_config cocci_id/* drivers/regulator/sy8824x.c 175 */;
	struct sy8824_device_info cocci_id/* drivers/regulator/sy8824x.c 125 */;
	struct regmap *cocci_id/* drivers/regulator/sy8824x.c 122 */;
	struct regulator_config cocci_id/* drivers/regulator/sy8824x.c 121 */;
	struct device_node *cocci_id/* drivers/regulator/sy8824x.c 119 */;
	struct device *cocci_id/* drivers/regulator/sy8824x.c 118 */;
	const struct i2c_device_id *cocci_id/* drivers/regulator/sy8824x.c 116 */;
	struct i2c_client *cocci_id/* drivers/regulator/sy8824x.c 115 */;
	const struct regmap_config cocci_id/* drivers/regulator/sy8824x.c 110 */;
}
