cocci_test_suite() {
	struct ktd2692_context cocci_id/* drivers/leds/leds-ktd2692.c 92 */;
	struct led_classdev_flash *cocci_id/* drivers/leds/leds-ktd2692.c 90 */;
	struct ktd2692_context *cocci_id/* drivers/leds/leds-ktd2692.c 89 */;
	struct ktd2692_context {
		struct led_classdev_flash fled_cdev;
		struct mutex lock;
		struct regulator *regulator;
		struct gpio_desc *aux_gpio;
		struct gpio_desc *ctrl_gpio;
		enum ktd2692_led_mode mode;
		enum led_brightness torch_brightness;
	} cocci_id/* drivers/leds/leds-ktd2692.c 74 */;
	struct ktd2692_led_config_data {
		u32 movie_max_microamp;
		u32 flash_max_microamp;
		u32 flash_max_timeout;
		enum led_brightness max_brightness;
	} cocci_id/* drivers/leds/leds-ktd2692.c 63 */;
	enum ktd2692_led_mode{KTD2692_MODE_DISABLE=0, KTD2692_MODE_MOVIE, KTD2692_MODE_FLASH,} cocci_id/* drivers/leds/leds-ktd2692.c 57 */;
	enum ktd2692_bitset{KTD2692_LOW=0, KTD2692_HIGH,} cocci_id/* drivers/leds/leds-ktd2692.c 51 */;
	struct platform_driver cocci_id/* drivers/leds/leds-ktd2692.c 402 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-ktd2692.c 396 */[];
	struct ktd2692_led_config_data cocci_id/* drivers/leds/leds-ktd2692.c 338 */;
	struct platform_device *cocci_id/* drivers/leds/leds-ktd2692.c 333 */;
	const struct led_flash_ops cocci_id/* drivers/leds/leds-ktd2692.c 328 */;
	struct device_node *cocci_id/* drivers/leds/leds-ktd2692.c 262 */;
	struct device *cocci_id/* drivers/leds/leds-ktd2692.c 259 */;
	struct led_flash_setting *cocci_id/* drivers/leds/leds-ktd2692.c 237 */;
	struct ktd2692_led_config_data *cocci_id/* drivers/leds/leds-ktd2692.c 235 */;
	u32 cocci_id/* drivers/leds/leds-ktd2692.c 218 */;
	enum led_brightness cocci_id/* drivers/leds/leds-ktd2692.c 157 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-ktd2692.c 156 */;
	int cocci_id/* drivers/leds/leds-ktd2692.c 148 */;
	u8 cocci_id/* drivers/leds/leds-ktd2692.c 146 */;
	bool cocci_id/* drivers/leds/leds-ktd2692.c 115 */;
	void cocci_id/* drivers/leds/leds-ktd2692.c 107 */;
}
