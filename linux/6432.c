cocci_test_suite() {
	void cocci_id/* drivers/regulator/pwm-regulator.c 54 */;
	struct pwm_voltages {
		unsigned int uV;
		unsigned int dutycycle;
	} cocci_id/* drivers/regulator/pwm-regulator.c 46 */;
	struct platform_driver cocci_id/* drivers/regulator/pwm-regulator.c 395 */;
	const struct of_device_id cocci_id/* drivers/regulator/pwm-regulator.c 389 */[];
	enum gpiod_flags cocci_id/* drivers/regulator/pwm-regulator.c 323 */;
	struct regulator_config cocci_id/* drivers/regulator/pwm-regulator.c 321 */;
	const struct regulator_init_data *cocci_id/* drivers/regulator/pwm-regulator.c 318 */;
	u32 cocci_id/* drivers/regulator/pwm-regulator.c 294 */;
	u32 cocci_id/* drivers/regulator/pwm-regulator.c 293 */[2];
	struct platform_device *cocci_id/* drivers/regulator/pwm-regulator.c 290 */;
	u32 *cocci_id/* drivers/regulator/pwm-regulator.c 275 */;
	struct pwm_regulator_data {
		struct pwm_device *pwm;
		struct pwm_voltages *duty_cycle_table;
		struct pwm_continuous_reg_data continuous;
		struct regulator_desc desc;
		int state;
		struct gpio_desc *enb_gpio;
	} cocci_id/* drivers/regulator/pwm-regulator.c 27 */;
	struct pwm_voltages *cocci_id/* drivers/regulator/pwm-regulator.c 257 */;
	struct device_node *cocci_id/* drivers/regulator/pwm-regulator.c 256 */;
	const struct regulator_desc cocci_id/* drivers/regulator/pwm-regulator.c 246 */;
	const struct regulator_ops cocci_id/* drivers/regulator/pwm-regulator.c 238 */;
	struct pwm_continuous_reg_data {
		unsigned int min_uV_dutycycle;
		unsigned int max_uV_dutycycle;
		unsigned int dutycycle_unit;
	} cocci_id/* drivers/regulator/pwm-regulator.c 21 */;
	unsigned int *cocci_id/* drivers/regulator/pwm-regulator.c 182 */;
	u64 cocci_id/* drivers/regulator/pwm-regulator.c 175 */;
	struct pwm_state cocci_id/* drivers/regulator/pwm-regulator.c 154 */;
	unsigned int cocci_id/* drivers/regulator/pwm-regulator.c 148 */;
	struct pwm_regulator_data *cocci_id/* drivers/regulator/pwm-regulator.c 126 */;
	struct regulator_dev *cocci_id/* drivers/regulator/pwm-regulator.c 124 */;
	int cocci_id/* drivers/regulator/pwm-regulator.c 124 */;
	unsigned cocci_id/* drivers/regulator/pwm-regulator.c 105 */;
}
