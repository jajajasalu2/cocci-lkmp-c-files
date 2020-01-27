cocci_test_suite() {
	const char *cocci_id/* drivers/leds/leds-bcm6358.c 98 */;
	struct bcm6358_led *cocci_id/* drivers/leds/leds-bcm6358.c 97 */;
	spinlock_t *cocci_id/* drivers/leds/leds-bcm6358.c 95 */;
	void __iomem *cocci_id/* drivers/leds/leds-bcm6358.c 95 */;
	u32 cocci_id/* drivers/leds/leds-bcm6358.c 94 */;
	struct device_node *cocci_id/* drivers/leds/leds-bcm6358.c 94 */;
	struct device *cocci_id/* drivers/leds/leds-bcm6358.c 94 */;
	int cocci_id/* drivers/leds/leds-bcm6358.c 94 */;
	struct bcm6358_led cocci_id/* drivers/leds/leds-bcm6358.c 79 */;
	enum led_brightness cocci_id/* drivers/leds/leds-bcm6358.c 76 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-bcm6358.c 75 */;
	void cocci_id/* drivers/leds/leds-bcm6358.c 75 */;
	struct bcm6358_led {
		struct led_classdev cdev;
		void __iomem *mem;
		spinlock_t *lock;
		unsigned long pin;
		bool active_low;
	} cocci_id/* drivers/leds/leds-bcm6358.c 38 */;
	struct platform_driver cocci_id/* drivers/leds/leds-bcm6358.c 219 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-bcm6358.c 213 */[];
	struct platform_device *cocci_id/* drivers/leds/leds-bcm6358.c 149 */;
	unsigned long cocci_id/* drivers/leds/leds-bcm6358.c 121 */;
}
