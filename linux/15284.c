cocci_test_suite() {
	int cocci_id/* drivers/leds/leds-max8997.c 99 */;
	bool cocci_id/* drivers/leds/leds-max8997.c 97 */;
	enum max8997_led_mode cocci_id/* drivers/leds/leds-max8997.c 48 */;
	struct max8997_led {
		struct max8997_dev *iodev;
		struct led_classdev cdev;
		bool enabled;
		int id;
		enum max8997_led_mode led_mode;
		struct mutex mutex;
	} cocci_id/* drivers/leds/leds-max8997.c 38 */;
	struct platform_driver cocci_id/* drivers/leds/leds-max8997.c 287 */;
	char cocci_id/* drivers/leds/leds-max8997.c 238 */[20];
	struct max8997_platform_data *cocci_id/* drivers/leds/leds-max8997.c 236 */;
	struct max8997_dev *cocci_id/* drivers/leds/leds-max8997.c 235 */;
	struct platform_device *cocci_id/* drivers/leds/leds-max8997.c 233 */;
	struct attribute *cocci_id/* drivers/leds/leds-max8997.c 227 */[];
	const char *cocci_id/* drivers/leds/leds-max8997.c 198 */;
	size_t cocci_id/* drivers/leds/leds-max8997.c 198 */;
	struct device_attribute *cocci_id/* drivers/leds/leds-max8997.c 164 */;
	char *cocci_id/* drivers/leds/leds-max8997.c 164 */;
	struct device *cocci_id/* drivers/leds/leds-max8997.c 163 */;
	ssize_t cocci_id/* drivers/leds/leds-max8997.c 163 */;
	struct max8997_led cocci_id/* drivers/leds/leds-max8997.c 152 */;
	struct max8997_led *cocci_id/* drivers/leds/leds-max8997.c 151 */;
	enum led_brightness cocci_id/* drivers/leds/leds-max8997.c 149 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-max8997.c 148 */;
	void cocci_id/* drivers/leds/leds-max8997.c 148 */;
	u8 cocci_id/* drivers/leds/leds-max8997.c 101 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-max8997.c 100 */;
}
