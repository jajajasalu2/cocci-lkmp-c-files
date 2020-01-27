cocci_test_suite() {
	struct apu_led_priv *cocci_id/* drivers/leds/leds-apu.c 99 */;
	enum led_brightness cocci_id/* drivers/leds/leds-apu.c 97 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-apu.c 97 */;
	void cocci_id/* drivers/leds/leds-apu.c 97 */;
	const struct dmi_system_id cocci_id/* drivers/leds/leds-apu.c 85 */[]__initconst;
	const struct apu_led_profile cocci_id/* drivers/leds/leds-apu.c 79 */[];
	struct apu_led_pdata *cocci_id/* drivers/leds/leds-apu.c 77 */;
	struct apu_led_pdata {
		struct platform_device *pdev;
		struct apu_led_priv *pled;
		spinlock_t lock;
	} cocci_id/* drivers/leds/leds-apu.c 71 */;
	struct apu_led_profile {
		const char *name;
		enum led_brightness brightness;
		unsigned long offset;
	} cocci_id/* drivers/leds/leds-apu.c 65 */;
	struct apu_led_priv {
		struct led_classdev cdev;
		struct apu_param param;
	} cocci_id/* drivers/leds/leds-apu.c 58 */;
	struct apu_param {
		void __iomem *addr;
	} cocci_id/* drivers/leds/leds-apu.c 53 */;
	void __exit cocci_id/* drivers/leds/leds-apu.c 196 */;
	struct platform_device *cocci_id/* drivers/leds/leds-apu.c 172 */;
	int __init cocci_id/* drivers/leds/leds-apu.c 170 */;
	struct platform_driver cocci_id/* drivers/leds/leds-apu.c 164 */;
	struct apu_led_priv cocci_id/* drivers/leds/leds-apu.c 112 */;
	struct device *cocci_id/* drivers/leds/leds-apu.c 106 */;
	int cocci_id/* drivers/leds/leds-apu.c 106 */;
}
