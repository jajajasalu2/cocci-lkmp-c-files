cocci_test_suite() {
	struct device_node *cocci_id/* drivers/regulator/s2mps11.c 870 */;
	unsigned int cocci_id/* drivers/regulator/s2mps11.c 868 */;
	struct s2mps11_info *cocci_id/* drivers/regulator/s2mps11.c 867 */;
	struct of_regulator_match *cocci_id/* drivers/regulator/s2mps11.c 867 */;
	struct platform_device *cocci_id/* drivers/regulator/s2mps11.c 866 */;
	unsigned int cocci_id/* drivers/regulator/s2mps11.c 838 */[3];
	struct gpio_desc **cocci_id/* drivers/regulator/s2mps11.c 836 */;
	void cocci_id/* drivers/regulator/s2mps11.c 833 */;
	const struct regulator_linear_range cocci_id/* drivers/regulator/s2mps11.c 777 */[];
	unsigned char cocci_id/* drivers/regulator/s2mps11.c 51 */;
	int cocci_id/* drivers/regulator/s2mps11.c 49 */;
	const struct regulator_desc cocci_id/* drivers/regulator/s2mps11.c 440 */[];
	const struct regulator_ops cocci_id/* drivers/regulator/s2mps11.c 344 */;
	struct s2mps11_info {
		int ramp_delay2;
		int ramp_delay34;
		int ramp_delay5;
		int ramp_delay16;
		int ramp_delay7810;
		int ramp_delay9;
		enum sec_device_type dev_type;
	DECLARE_BITMAP(suspend_state,S2MPS_REGULATOR_MAX)
		;
		struct gpio_desc **ext_control_gpiod;
	} cocci_id/* drivers/regulator/s2mps11.c 26 */;
	struct platform_driver cocci_id/* drivers/regulator/s2mps11.c 1256 */;
	const struct platform_device_id cocci_id/* drivers/regulator/s2mps11.c 1246 */[];
	struct regulator_dev *cocci_id/* drivers/regulator/s2mps11.c 1203 */;
	struct s2mps11_info cocci_id/* drivers/regulator/s2mps11.c 1131 */;
	const struct regulator_desc *cocci_id/* drivers/regulator/s2mps11.c 1129 */;
	struct regulator_config cocci_id/* drivers/regulator/s2mps11.c 1125 */;
	struct sec_platform_data *cocci_id/* drivers/regulator/s2mps11.c 1123 */;
	struct sec_pmic_dev *cocci_id/* drivers/regulator/s2mps11.c 1122 */;
}
