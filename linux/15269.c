cocci_test_suite() {
	bool cocci_id/* drivers/leds/leds-cpcap.c 81 */;
	u8 cocci_id/* drivers/leds/leds-cpcap.c 73 */;
	u16 cocci_id/* drivers/leds/leds-cpcap.c 73 */;
	struct cpcap_led {
		struct led_classdev led;
		const struct cpcap_led_info *info;
		struct device *dev;
		struct regmap *regmap;
		struct mutex update_lock;
		struct regulator *vdd;
		bool powered;
		u32 current_limit;
	} cocci_id/* drivers/leds/leds-cpcap.c 61 */;
	const struct cpcap_led_info cocci_id/* drivers/leds/leds-cpcap.c 44 */;
	struct platform_driver cocci_id/* drivers/leds/leds-cpcap.c 220 */;
	struct cpcap_led_info {
		u16 reg;
		u16 mask;
		u16 limit;
		u16 init_mask;
		u16 init_val;
	} cocci_id/* drivers/leds/leds-cpcap.c 17 */;
	struct cpcap_led *cocci_id/* drivers/leds/leds-cpcap.c 162 */;
	const struct of_device_id *cocci_id/* drivers/leds/leds-cpcap.c 161 */;
	struct platform_device *cocci_id/* drivers/leds/leds-cpcap.c 159 */;
	int cocci_id/* drivers/leds/leds-cpcap.c 159 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-cpcap.c 149 */[];
	struct cpcap_led cocci_id/* drivers/leds/leds-cpcap.c 105 */;
	enum led_brightness cocci_id/* drivers/leds/leds-cpcap.c 103 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-cpcap.c 103 */;
}
