cocci_test_suite() {
	struct device_attribute *cocci_id/* drivers/hwmon/gpio-fan.c 71 */;
	char *cocci_id/* drivers/hwmon/gpio-fan.c 71 */;
	struct device *cocci_id/* drivers/hwmon/gpio-fan.c 70 */;
	ssize_t cocci_id/* drivers/hwmon/gpio-fan.c 70 */;
	irqreturn_t cocci_id/* drivers/hwmon/gpio-fan.c 61 */;
	void *cocci_id/* drivers/hwmon/gpio-fan.c 61 */;
	struct platform_driver cocci_id/* drivers/hwmon/gpio-fan.c 586 */;
	struct gpio_fan_data cocci_id/* drivers/hwmon/gpio-fan.c 55 */;
	struct work_struct *cocci_id/* drivers/hwmon/gpio-fan.c 52 */;
	struct platform_device *cocci_id/* drivers/hwmon/gpio-fan.c 493 */;
	const struct of_device_id cocci_id/* drivers/hwmon/gpio-fan.c 482 */[];
	struct gpio_fan_speed cocci_id/* drivers/hwmon/gpio-fan.c 462 */;
	struct gpio_desc *cocci_id/* drivers/hwmon/gpio-fan.c 432 */;
	const __be32 *cocci_id/* drivers/hwmon/gpio-fan.c 416 */;
	struct property *cocci_id/* drivers/hwmon/gpio-fan.c 415 */;
	u32 cocci_id/* drivers/hwmon/gpio-fan.c 414 */;
	unsigned cocci_id/* drivers/hwmon/gpio-fan.c 413 */;
	struct device_node *cocci_id/* drivers/hwmon/gpio-fan.c 411 */;
	struct gpio_fan_speed *cocci_id/* drivers/hwmon/gpio-fan.c 409 */;
	const struct thermal_cooling_device_ops cocci_id/* drivers/hwmon/gpio-fan.c 398 */;
	unsigned long cocci_id/* drivers/hwmon/gpio-fan.c 387 */;
	unsigned long *cocci_id/* drivers/hwmon/gpio-fan.c 375 */;
	struct thermal_cooling_device *cocci_id/* drivers/hwmon/gpio-fan.c 374 */;
	struct gpio_desc **cocci_id/* drivers/hwmon/gpio-fan.c 338 */;
	const struct attribute_group *cocci_id/* drivers/hwmon/gpio-fan.c 330 */[];
	const struct attribute_group cocci_id/* drivers/hwmon/gpio-fan.c 325 */;
	struct attribute *cocci_id/* drivers/hwmon/gpio-fan.c 313 */[];
	struct device cocci_id/* drivers/hwmon/gpio-fan.c 302 */;
	struct attribute *cocci_id/* drivers/hwmon/gpio-fan.c 300 */;
	umode_t cocci_id/* drivers/hwmon/gpio-fan.c 299 */;
	struct kobject *cocci_id/* drivers/hwmon/gpio-fan.c 299 */;
	struct gpio_fan_data {
		struct device *dev;
		struct device *hwmon_dev;
		struct thermal_cooling_device *cdev;
		struct mutex lock;
		int num_gpios;
		struct gpio_desc **gpios;
		int num_speed;
		struct gpio_fan_speed *speed;
		int speed_index;
#ifdef CONFIG_PM_SLEEP
		int resume_speed;
#endif
		bool pwm_enable;
		struct gpio_desc *alarm_gpio;
		struct work_struct alarm_work;
	} cocci_id/* drivers/hwmon/gpio-fan.c 29 */;
	struct gpio_fan_speed {
		int rpm;
		int ctrl_val;
	} cocci_id/* drivers/hwmon/gpio-fan.c 24 */;
	const char *cocci_id/* drivers/hwmon/gpio-fan.c 211 */;
	size_t cocci_id/* drivers/hwmon/gpio-fan.c 211 */;
	u8 cocci_id/* drivers/hwmon/gpio-fan.c 169 */;
	struct gpio_fan_data *cocci_id/* drivers/hwmon/gpio-fan.c 114 */;
	int cocci_id/* drivers/hwmon/gpio-fan.c 114 */;
	void cocci_id/* drivers/hwmon/gpio-fan.c 105 */;
}
