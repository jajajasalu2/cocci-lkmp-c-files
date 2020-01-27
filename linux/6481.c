cocci_test_suite() {
	const struct pbias_reg_info cocci_id/* drivers/regulator/pbias-regulator.c 64 */;
	const struct regulator_ops cocci_id/* drivers/regulator/pbias-regulator.c 55 */;
	const unsigned int cocci_id/* drivers/regulator/pbias-regulator.c 45 */[];
	struct pbias_of_data {
		unsigned int offset;
	} cocci_id/* drivers/regulator/pbias-regulator.c 41 */;
	struct pbias_reg_info {
		u32 enable;
		u32 enable_mask;
		u32 disable_val;
		u32 vmode;
		unsigned int enable_time;
		char *name;
		const unsigned int *pbias_volt_table;
		int n_voltages;
	} cocci_id/* drivers/regulator/pbias-regulator.c 30 */;
	struct platform_driver cocci_id/* drivers/regulator/pbias-regulator.c 230 */;
	unsigned int cocci_id/* drivers/regulator/pbias-regulator.c 159 */;
	const struct pbias_of_data *cocci_id/* drivers/regulator/pbias-regulator.c 158 */;
	const struct pbias_reg_info *cocci_id/* drivers/regulator/pbias-regulator.c 156 */;
	struct regmap *cocci_id/* drivers/regulator/pbias-regulator.c 155 */;
	struct regulator_dev *cocci_id/* drivers/regulator/pbias-regulator.c 154 */;
	struct regulator_desc *cocci_id/* drivers/regulator/pbias-regulator.c 153 */;
	struct regulator_config cocci_id/* drivers/regulator/pbias-regulator.c 152 */;
	struct resource *cocci_id/* drivers/regulator/pbias-regulator.c 151 */;
	struct device_node *cocci_id/* drivers/regulator/pbias-regulator.c 150 */;
	struct platform_device *cocci_id/* drivers/regulator/pbias-regulator.c 148 */;
	int cocci_id/* drivers/regulator/pbias-regulator.c 148 */;
	const struct of_device_id cocci_id/* drivers/regulator/pbias-regulator.c 137 */[];
	const struct pbias_of_data cocci_id/* drivers/regulator/pbias-regulator.c 133 */;
	void *cocci_id/* drivers/regulator/pbias-regulator.c 108 */;
	struct of_regulator_match cocci_id/* drivers/regulator/pbias-regulator.c 107 */[];
}
