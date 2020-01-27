cocci_test_suite() {
	struct pca9685 cocci_id/* drivers/pwm/pwm-pca9685.c 82 */;
	struct i2c_driver cocci_id/* drivers/pwm/pwm-pca9685.c 566 */;
	const struct dev_pm_ops cocci_id/* drivers/pwm/pwm-pca9685.c 561 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-pca9685.c 554 */[];
	const struct acpi_device_id cocci_id/* drivers/pwm/pwm-pca9685.c 546 */[];
	const struct i2c_device_id cocci_id/* drivers/pwm/pwm-pca9685.c 539 */[];
	const struct i2c_device_id *cocci_id/* drivers/pwm/pwm-pca9685.c 439 */;
	struct i2c_client *cocci_id/* drivers/pwm/pwm-pca9685.c 438 */;
	const struct regmap_config cocci_id/* drivers/pwm/pwm-pca9685.c 431 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-pca9685.c 422 */;
	void cocci_id/* drivers/pwm/pwm-pca9685.c 384 */;
	unsigned int cocci_id/* drivers/pwm/pwm-pca9685.c 247 */;
	unsigned long long cocci_id/* drivers/pwm/pwm-pca9685.c 246 */;
	struct pca9685 *cocci_id/* drivers/pwm/pwm-pca9685.c 245 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-pca9685.c 242 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-pca9685.c 242 */;
	int cocci_id/* drivers/pwm/pwm-pca9685.c 242 */;
	struct device *cocci_id/* drivers/pwm/pwm-pca9685.c 200 */;
	struct gpio_chip *cocci_id/* drivers/pwm/pwm-pca9685.c 178 */;
	bool cocci_id/* drivers/pwm/pwm-pca9685.c 107 */;
	void *cocci_id/* drivers/pwm/pwm-pca9685.c 100 */;
	struct pca9685 {
		struct pwm_chip chip;
		struct regmap *regmap;
		int duty_ns;
		int period_ns;
#if IS_ENABLED(CONFIG_GPIOLIB)
		struct mutex lock;
		struct gpio_chip gpio;
#endif
	} cocci_id/*  1 */;
}
