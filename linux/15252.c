cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/leds/leds-pca9532.c 99 */;
	void *cocci_id/* drivers/leds/leds-pca9532.c 89 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-pca9532.c 88 */[];
	const struct pca9532_chip_info cocci_id/* drivers/leds/leds-pca9532.c 72 */[];
	const struct i2c_device_id cocci_id/* drivers/leds/leds-pca9532.c 62 */[];
	enum{pca9530, pca9531, pca9532, pca9533,} cocci_id/* drivers/leds/leds-pca9532.c 55 */;
	int cocci_id/* drivers/leds/leds-pca9532.c 53 */(struct i2c_client *client);
	int cocci_id/* drivers/leds/leds-pca9532.c 51 */(struct i2c_client *client,
							 const struct i2c_device_id *id);
	const struct i2c_device_id *cocci_id/* drivers/leds/leds-pca9532.c 504 */;
	uintptr_t cocci_id/* drivers/leds/leds-pca9532.c 474 */;
	const char *cocci_id/* drivers/leds/leds-pca9532.c 472 */;
	struct device_node *cocci_id/* drivers/leds/leds-pca9532.c 466 */;
	struct device *cocci_id/* drivers/leds/leds-pca9532.c 466 */;
	struct pca9532_data {
		struct i2c_client *client;
		struct pca9532_led leds[16];
		struct mutex update_lock;
		struct input_dev *idev;
		struct work_struct work;
#ifdef CONFIG_LEDS_PCA9532_GPIO
		struct gpio_chip gpio;
#endif
		const struct pca9532_chip_info *chip_info;
		u8 pwm[2];
		u8 psc[2];
	} cocci_id/* drivers/leds/leds-pca9532.c 37 */;
	struct pca9532_led *cocci_id/* drivers/leds/leds-pca9532.c 368 */;
	u8 cocci_id/* drivers/leds/leds-pca9532.c 356 */;
	struct pca9532_platform_data *cocci_id/* drivers/leds/leds-pca9532.c 352 */;
	struct pca9532_chip_info {
		u8 num_leds;
	} cocci_id/* drivers/leds/leds-pca9532.c 33 */;
	struct pca9532_led cocci_id/* drivers/leds/leds-pca9532.c 31 */;
	struct gpio_chip *cocci_id/* drivers/leds/leds-pca9532.c 303 */;
	unsigned cocci_id/* drivers/leds/leds-pca9532.c 303 */;
	unsigned char cocci_id/* drivers/leds/leds-pca9532.c 296 */;
	void cocci_id/* drivers/leds/leds-pca9532.c 280 */;
	char cocci_id/* drivers/leds/leds-pca9532.c 258 */;
	enum pca9532_state cocci_id/* drivers/leds/leds-pca9532.c 253 */;
	struct pca9532_data cocci_id/* drivers/leds/leds-pca9532.c 244 */;
	struct work_struct *cocci_id/* drivers/leds/leds-pca9532.c 241 */;
	struct input_dev *cocci_id/* drivers/leds/leds-pca9532.c 222 */;
	unsigned int cocci_id/* drivers/leds/leds-pca9532.c 222 */;
	unsigned long *cocci_id/* drivers/leds/leds-pca9532.c 195 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-pca9532.c 194 */;
	struct pca9532_data *cocci_id/* drivers/leds/leds-pca9532.c 118 */;
	enum led_brightness cocci_id/* drivers/leds/leds-pca9532.c 115 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-pca9532.c 114 */;
	int cocci_id/* drivers/leds/leds-pca9532.c 114 */;
}
