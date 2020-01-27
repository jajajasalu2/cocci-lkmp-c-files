cocci_test_suite() {
	struct aat1290_led *cocci_id/* drivers/leds/leds-aat1290.c 96 */;
	int cocci_id/* drivers/leds/leds-aat1290.c 96 */;
	void cocci_id/* drivers/leds/leds-aat1290.c 96 */;
	struct led_classdev_flash cocci_id/* drivers/leds/leds-aat1290.c 93 */;
	struct aat1290_led cocci_id/* drivers/leds/leds-aat1290.c 87 */;
	struct aat1290_led {
		struct platform_device *pdev;
		struct mutex lock;
		struct led_classdev_flash fled_cdev;
		struct v4l2_flash *v4l2_flash;
		struct gpio_desc *gpio_fl_en;
		struct gpio_desc *gpio_en_set;
		int *mm_current_scale;
		bool movie_mode;
		unsigned int torch_brightness;
	} cocci_id/* drivers/leds/leds-aat1290.c 61 */;
	struct platform_driver cocci_id/* drivers/leds/leds-aat1290.c 543 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-aat1290.c 537 */[];
	struct aat1290_led_config_data {
		u32 max_mm_current;
		u32 max_flash_current;
		u32 max_flash_tm;
		bool has_external_strobe;
		enum led_brightness max_brightness;
	} cocci_id/* drivers/leds/leds-aat1290.c 48 */;
	struct v4l2_flash_config cocci_id/* drivers/leds/leds-aat1290.c 468 */;
	struct aat1290_led_config_data cocci_id/* drivers/leds/leds-aat1290.c 467 */;
	struct led_init_data cocci_id/* drivers/leds/leds-aat1290.c 466 */;
	struct platform_device *cocci_id/* drivers/leds/leds-aat1290.c 459 */;
	const struct led_flash_ops cocci_id/* drivers/leds/leds-aat1290.c 454 */;
	const struct v4l2_flash_ops cocci_id/* drivers/leds/leds-aat1290.c 440 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-aat1290.c 425 */;
	struct v4l2_flash_config *cocci_id/* drivers/leds/leds-aat1290.c 423 */;
	struct pinctrl *cocci_id/* drivers/leds/leds-aat1290.c 403 */;
	bool cocci_id/* drivers/leds/leds-aat1290.c 398 */;
	struct led_classdev_flash *cocci_id/* drivers/leds/leds-aat1290.c 391 */;
	enum led_brightness cocci_id/* drivers/leds/leds-aat1290.c 389 */;
	s32 cocci_id/* drivers/leds/leds-aat1290.c 388 */;
	struct v4l2_flash *cocci_id/* drivers/leds/leds-aat1290.c 388 */;
	struct led_flash_setting *cocci_id/* drivers/leds/leds-aat1290.c 362 */;
	struct aat1290_led_config_data *cocci_id/* drivers/leds/leds-aat1290.c 359 */;
	struct device_node **cocci_id/* drivers/leds/leds-aat1290.c 333 */;
	const int cocci_id/* drivers/leds/leds-aat1290.c 311 */[];
	struct device_node *cocci_id/* drivers/leds/leds-aat1290.c 220 */;
	struct device *cocci_id/* drivers/leds/leds-aat1290.c 219 */;
	u32 cocci_id/* drivers/leds/leds-aat1290.c 204 */;
	unsigned int cocci_id/* drivers/leds/leds-aat1290.c 127 */;
}
