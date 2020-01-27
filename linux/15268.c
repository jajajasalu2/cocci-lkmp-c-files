cocci_test_suite() {
	u32 cocci_id/* drivers/leds/leds-sunfire.c 73 */;
	struct sunfire_led *cocci_id/* drivers/leds/leds-sunfire.c 33 */;
	u8 cocci_id/* drivers/leds/leds-sunfire.c 31 */;
	enum led_brightness cocci_id/* drivers/leds/leds-sunfire.c 31 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-sunfire.c 30 */;
	void cocci_id/* drivers/leds/leds-sunfire.c 30 */;
	struct sunfire_led cocci_id/* drivers/leds/leds-sunfire.c 28 */;
	void __exit cocci_id/* drivers/leds/leds-sunfire.c 248 */;
	int __init cocci_id/* drivers/leds/leds-sunfire.c 243 */;
	struct sunfire_led {
		struct led_classdev led_cdev;
		void __iomem *reg;
	} cocci_id/* drivers/leds/leds-sunfire.c 24 */;
	struct platform_driver *constcocci_id/* drivers/leds/leds-sunfire.c 238 */[];
	struct platform_driver cocci_id/* drivers/leds/leds-sunfire.c 222 */;
	struct platform_device *cocci_id/* drivers/leds/leds-sunfire.c 193 */;
	int cocci_id/* drivers/leds/leds-sunfire.c 193 */;
	struct led_type cocci_id/* drivers/leds/leds-sunfire.c 177 */[NUM_LEDS_PER_BOARD];
	void __iomem *cocci_id/* drivers/leds/leds-sunfire.c 145 */;
	struct sunfire_drvdata *cocci_id/* drivers/leds/leds-sunfire.c 129 */;
	struct led_type *cocci_id/* drivers/leds/leds-sunfire.c 127 */;
	struct sunfire_drvdata {
		struct sunfire_led leds[NUM_LEDS_PER_BOARD];
	} cocci_id/* drivers/leds/leds-sunfire.c 122 */;
	struct led_type {
		const char *name;
		set_handler handler;
		const char *default_trigger;
	} cocci_id/* drivers/leds/leds-sunfire.c 115 */;
	void (*cocci_id/* drivers/leds/leds-sunfire.c 114 */)(struct led_classdev *,
							      enum led_brightness);
}
