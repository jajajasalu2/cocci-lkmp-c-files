cocci_test_suite() {
	struct mt6323_leds {
		struct device *dev;
		struct mt6397_chip *hw;
		struct mutex lock;
		struct mt6323_led *led[MT6323_MAX_LEDS];
	} cocci_id/* drivers/leds/leds-mt6323.c 99 */;
	struct mt6323_led {
		int id;
		struct mt6323_leds *parent;
		struct led_classdev cdev;
		enum led_brightness current_brightness;
	} cocci_id/* drivers/leds/leds-mt6323.c 82 */;
	struct mt6323_leds cocci_id/* drivers/leds/leds-mt6323.c 73 */;
	struct platform_driver cocci_id/* drivers/leds/leds-mt6323.c 480 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-mt6323.c 474 */[];
	struct mt6397_chip *cocci_id/* drivers/leds/leds-mt6323.c 374 */;
	struct device_node *cocci_id/* drivers/leds/leds-mt6323.c 372 */;
	struct device *cocci_id/* drivers/leds/leds-mt6323.c 371 */;
	struct platform_device *cocci_id/* drivers/leds/leds-mt6323.c 369 */;
	const char *cocci_id/* drivers/leds/leds-mt6323.c 342 */;
	u8 cocci_id/* drivers/leds/leds-mt6323.c 248 */;
	unsigned long cocci_id/* drivers/leds/leds-mt6323.c 247 */;
	unsigned long *cocci_id/* drivers/leds/leds-mt6323.c 241 */;
	int cocci_id/* drivers/leds/leds-mt6323.c 163 */;
	unsigned int cocci_id/* drivers/leds/leds-mt6323.c 162 */;
	struct regmap *cocci_id/* drivers/leds/leds-mt6323.c 161 */;
	struct mt6323_leds *cocci_id/* drivers/leds/leds-mt6323.c 160 */;
	struct mt6323_led cocci_id/* drivers/leds/leds-mt6323.c 159 */;
	struct mt6323_led *cocci_id/* drivers/leds/leds-mt6323.c 159 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-mt6323.c 157 */;
	enum led_brightness cocci_id/* drivers/leds/leds-mt6323.c 156 */;
	u32 cocci_id/* drivers/leds/leds-mt6323.c 113 */;
}
