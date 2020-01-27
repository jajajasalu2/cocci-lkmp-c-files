cocci_test_suite() {
	struct spi_driver cocci_id/* drivers/leds/leds-dac124s085.c 99 */;
	struct dac124s085_led *cocci_id/* drivers/leds/leds-dac124s085.c 53 */;
	struct dac124s085 *cocci_id/* drivers/leds/leds-dac124s085.c 52 */;
	struct spi_device *cocci_id/* drivers/leds/leds-dac124s085.c 50 */;
	int cocci_id/* drivers/leds/leds-dac124s085.c 50 */;
	const u8 *cocci_id/* drivers/leds/leds-dac124s085.c 44 */;
	u16 cocci_id/* drivers/leds/leds-dac124s085.c 38 */;
	struct dac124s085_led cocci_id/* drivers/leds/leds-dac124s085.c 36 */;
	enum led_brightness cocci_id/* drivers/leds/leds-dac124s085.c 34 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-dac124s085.c 33 */;
	struct dac124s085 {
		struct dac124s085_led leds[4];
	} cocci_id/* drivers/leds/leds-dac124s085.c 24 */;
	struct dac124s085_led {
		struct led_classdev ldev;
		struct spi_device *spi;
		int id;
		char name[sizeof("dac124s085-3")];
		struct mutex mutex;
	} cocci_id/* drivers/leds/leds-dac124s085.c 15 */;
}
