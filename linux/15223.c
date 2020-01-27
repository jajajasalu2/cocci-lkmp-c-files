cocci_test_suite() {
	const char *cocci_id/* drivers/leds/leds-spi-byte.c 87 */;
	struct device *cocci_id/* drivers/leds/leds-spi-byte.c 85 */;
	struct device_node *cocci_id/* drivers/leds/leds-spi-byte.c 84 */;
	const struct of_device_id *cocci_id/* drivers/leds/leds-spi-byte.c 83 */;
	struct spi_device *cocci_id/* drivers/leds/leds-spi-byte.c 81 */;
	u8 cocci_id/* drivers/leds/leds-spi-byte.c 69 */;
	struct spi_byte_led cocci_id/* drivers/leds/leds-spi-byte.c 68 */;
	struct spi_byte_led *cocci_id/* drivers/leds/leds-spi-byte.c 68 */;
	enum led_brightness cocci_id/* drivers/leds/leds-spi-byte.c 66 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-spi-byte.c 65 */;
	int cocci_id/* drivers/leds/leds-spi-byte.c 65 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-spi-byte.c 58 */[];
	const struct spi_byte_chipdef cocci_id/* drivers/leds/leds-spi-byte.c 53 */;
	struct spi_byte_led {
		struct led_classdev ldev;
		struct spi_device *spi;
		char name[LED_MAX_NAME_SIZE];
		struct mutex mutex;
		const struct spi_byte_chipdef *cdef;
	} cocci_id/* drivers/leds/leds-spi-byte.c 45 */;
	struct spi_byte_chipdef {
		u8 off_value;
		u8 max_value;
	} cocci_id/* drivers/leds/leds-spi-byte.c 38 */;
	struct spi_driver cocci_id/* drivers/leds/leds-spi-byte.c 147 */;
}
