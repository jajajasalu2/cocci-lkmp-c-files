cocci_test_suite() {
	struct regulator_init_data *cocci_id/* drivers/regulator/fixed.c 99 */;
	struct device_node *cocci_id/* drivers/regulator/fixed.c 98 */;
	const struct regulator_desc *cocci_id/* drivers/regulator/fixed.c 95 */;
	struct device *cocci_id/* drivers/regulator/fixed.c 94 */;
	struct fixed_voltage_config *cocci_id/* drivers/regulator/fixed.c 93 */;
	struct fixed_voltage_data *cocci_id/* drivers/regulator/fixed.c 68 */;
	struct regulator_dev *cocci_id/* drivers/regulator/fixed.c 66 */;
	int cocci_id/* drivers/regulator/fixed.c 66 */;
	const struct fixed_dev_type cocci_id/* drivers/regulator/fixed.c 48 */;
	struct fixed_dev_type {
		bool has_enable_clock;
	} cocci_id/* drivers/regulator/fixed.c 40 */;
	struct fixed_voltage_data {
		struct regulator_desc desc;
		struct regulator_dev *dev;
		struct clk *enable_clock;
		unsigned int clk_enable_counter;
	} cocci_id/* drivers/regulator/fixed.c 32 */;
	void __exit cocci_id/* drivers/regulator/fixed.c 292 */;
	void cocci_id/* drivers/regulator/fixed.c 292 */;
	int __init cocci_id/* drivers/regulator/fixed.c 286 */;
	struct platform_driver cocci_id/* drivers/regulator/fixed.c 278 */;
	const struct of_device_id cocci_id/* drivers/regulator/fixed.c 263 */[];
	struct fixed_voltage_data cocci_id/* drivers/regulator/fixed.c 153 */;
	enum gpiod_flags cocci_id/* drivers/regulator/fixed.c 150 */;
	struct regulator_config cocci_id/* drivers/regulator/fixed.c 149 */;
	const struct fixed_dev_type *cocci_id/* drivers/regulator/fixed.c 148 */;
	struct platform_device *cocci_id/* drivers/regulator/fixed.c 143 */;
	struct regulator_ops cocci_id/* drivers/regulator/fixed.c 137 */;
	struct fixed_voltage_config cocci_id/* drivers/regulator/fixed.c 101 */;
}
