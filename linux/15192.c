cocci_test_suite() {
	struct bcm6328_led {
		struct led_classdev cdev;
		void __iomem *mem;
		spinlock_t *lock;
		unsigned long pin;
		unsigned long *blink_leds;
		unsigned long *blink_delay;
		bool active_low;
	} cocci_id/* drivers/leds/leds-bcm6328.c 63 */;
	struct platform_driver cocci_id/* drivers/leds/leds-bcm6328.c 423 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-bcm6328.c 417 */[];
	struct platform_device *cocci_id/* drivers/leds/leds-bcm6328.c 344 */;
	const char *cocci_id/* drivers/leds/leds-bcm6328.c 281 */;
	spinlock_t *cocci_id/* drivers/leds/leds-bcm6328.c 205 */;
	void __iomem *cocci_id/* drivers/leds/leds-bcm6328.c 205 */;
	u32 cocci_id/* drivers/leds/leds-bcm6328.c 204 */;
	struct device_node *cocci_id/* drivers/leds/leds-bcm6328.c 204 */;
	struct device *cocci_id/* drivers/leds/leds-bcm6328.c 204 */;
	struct bcm6328_led cocci_id/* drivers/leds/leds-bcm6328.c 155 */;
	struct bcm6328_led *cocci_id/* drivers/leds/leds-bcm6328.c 154 */;
	unsigned long *cocci_id/* drivers/leds/leds-bcm6328.c 152 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-bcm6328.c 151 */;
	int cocci_id/* drivers/leds/leds-bcm6328.c 151 */;
	unsigned long cocci_id/* drivers/leds/leds-bcm6328.c 139 */;
	enum led_brightness cocci_id/* drivers/leds/leds-bcm6328.c 123 */;
	void cocci_id/* drivers/leds/leds-bcm6328.c 105 */;
}
