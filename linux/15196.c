cocci_test_suite() {
	struct lm3642_platform_data *cocci_id/* drivers/leds/leds-lm3642.c 90 */;
	struct lm3642_chip_data *cocci_id/* drivers/leds/leds-lm3642.c 87 */;
	int cocci_id/* drivers/leds/leds-lm3642.c 87 */;
	struct lm3642_chip_data {
		struct device *dev;
		struct led_classdev cdev_flash;
		struct led_classdev cdev_torch;
		struct led_classdev cdev_indicator;
		u8 br_flash;
		u8 br_torch;
		u8 br_indicator;
		enum lm3642_torch_pin_enable torch_pin;
		enum lm3642_strobe_pin_enable strobe_pin;
		enum lm3642_tx_pin_enable tx_pin;
		struct lm3642_platform_data *pdata;
		struct regmap *regmap;
		struct mutex lock;
		unsigned int last_flag;
	} cocci_id/* drivers/leds/leds-lm3642.c 64 */;
	enum lm3642_mode{MODES_STASNDBY=0, MODES_INDIC, MODES_TORCH, MODES_FLASH,} cocci_id/* drivers/leds/leds-lm3642.c 57 */;
	struct i2c_driver cocci_id/* drivers/leds/leds-lm3642.c 413 */;
	const struct i2c_device_id cocci_id/* drivers/leds/leds-lm3642.c 406 */[];
	struct device *cocci_id/* drivers/leds/leds-lm3642.c 352 */;
	const struct i2c_device_id *cocci_id/* drivers/leds/leds-lm3642.c 302 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-lm3642.c 301 */;
	struct attribute *cocci_id/* drivers/leds/leds-lm3642.c 289 */[];
	const struct regmap_config cocci_id/* drivers/leds/leds-lm3642.c 283 */;
	struct lm3642_chip_data cocci_id/* drivers/leds/leds-lm3642.c 273 */;
	enum led_brightness cocci_id/* drivers/leds/leds-lm3642.c 270 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-lm3642.c 269 */;
	unsigned int cocci_id/* drivers/leds/leds-lm3642.c 228 */;
	const char *cocci_id/* drivers/leds/leds-lm3642.c 222 */;
	size_t cocci_id/* drivers/leds/leds-lm3642.c 222 */;
	struct device_attribute *cocci_id/* drivers/leds/leds-lm3642.c 221 */;
	ssize_t cocci_id/* drivers/leds/leds-lm3642.c 220 */;
	u8 cocci_id/* drivers/leds/leds-lm3642.c 102 */;
	enum lm3642_mode cocci_id/* drivers/leds/leds-lm3642.c 102 */;
}
