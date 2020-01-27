cocci_test_suite() {
	unsigned int cocci_id/* drivers/leds/leds-mc13783.c 58 */;
	struct mc13xxx_led cocci_id/* drivers/leds/leds-mc13783.c 56 */;
	struct mc13xxx_led *cocci_id/* drivers/leds/leds-mc13783.c 55 */;
	enum led_brightness cocci_id/* drivers/leds/leds-mc13783.c 53 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-mc13783.c 52 */;
	struct mc13xxx_leds {
		struct mc13xxx *master;
		struct mc13xxx_led_devtype *devtype;
		int num_leds;
		struct mc13xxx_led *led;
	} cocci_id/* drivers/leds/leds-mc13783.c 35 */;
	struct platform_driver cocci_id/* drivers/leds/leds-mc13783.c 304 */;
	const struct platform_device_id cocci_id/* drivers/leds/leds-mc13783.c 296 */[];
	struct mc13xxx_led {
		struct led_classdev cdev;
		int id;
		struct mc13xxx_leds *leds;
	} cocci_id/* drivers/leds/leds-mc13783.c 29 */;
	const struct mc13xxx_led_devtype cocci_id/* drivers/leds/leds-mc13783.c 275 */;
	const char *cocci_id/* drivers/leds/leds-mc13783.c 223 */;
	struct mc13xxx_led_devtype {
		int led_min;
		int led_max;
		int num_regs;
		u32 ledctrl_base;
	} cocci_id/* drivers/leds/leds-mc13783.c 22 */;
	u32 cocci_id/* drivers/leds/leds-mc13783.c 185 */;
	int cocci_id/* drivers/leds/leds-mc13783.c 184 */;
	struct mc13xxx_leds *cocci_id/* drivers/leds/leds-mc13783.c 183 */;
	struct mc13xxx_led_devtype *cocci_id/* drivers/leds/leds-mc13783.c 181 */;
	struct mc13xxx *cocci_id/* drivers/leds/leds-mc13783.c 180 */;
	struct mc13xxx_leds_platform_data *cocci_id/* drivers/leds/leds-mc13783.c 179 */;
	struct device *cocci_id/* drivers/leds/leds-mc13783.c 178 */;
	struct platform_device *cocci_id/* drivers/leds/leds-mc13783.c 176 */;
	int __init cocci_id/* drivers/leds/leds-mc13783.c 176 */;
	struct device_node *cocci_id/* drivers/leds/leds-mc13783.c 116 */;
	struct mc13xxx_leds_platform_data __init *cocci_id/* drivers/leds/leds-mc13783.c 111 */;
}
