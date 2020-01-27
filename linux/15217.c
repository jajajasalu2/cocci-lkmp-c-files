cocci_test_suite() {
	size_t cocci_id/* drivers/leds/leds-el15203000.c 89 */;
	u8 cocci_id/* drivers/leds/leds-el15203000.c 88 */[2];
	u8 cocci_id/* drivers/leds/leds-el15203000.c 85 */;
	struct el15203000_led *cocci_id/* drivers/leds/leds-el15203000.c 85 */;
	int cocci_id/* drivers/leds/leds-el15203000.c 85 */;
	struct el15203000 {
		struct device *dev;
		struct mutex lock;
		struct spi_device *spi;
		unsigned long delay;
		size_t count;
		struct el15203000_led leds[];
	} cocci_id/* drivers/leds/leds-el15203000.c 76 */;
	struct el15203000_led {
		struct el15203000 *priv;
		struct led_classdev ldev;
		u32 reg;
	} cocci_id/* drivers/leds/leds-el15203000.c 70 */;
	enum el15203000_command{EL_OFF='0', EL_ON='1', EL_SCREEN_BREATHING='2', EL_PIPE_CASCADE='2', EL_PIPE_INV_CASCADE='3', EL_PIPE_BOUNCE='4', EL_PIPE_INV_BOUNCE='5',} cocci_id/* drivers/leds/leds-el15203000.c 55 */;
	struct spi_driver cocci_id/* drivers/leds/leds-el15203000.c 343 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-el15203000.c 336 */[];
	struct el15203000 *cocci_id/* drivers/leds/leds-el15203000.c 301 */;
	struct spi_device *cocci_id/* drivers/leds/leds-el15203000.c 299 */;
	struct led_init_data cocci_id/* drivers/leds/leds-el15203000.c 249 */;
	struct fwnode_handle *cocci_id/* drivers/leds/leds-el15203000.c 245 */;
	struct el15203000_led cocci_id/* drivers/leds/leds-el15203000.c 236 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-el15203000.c 233 */;
	u32 cocci_id/* drivers/leds/leds-el15203000.c 193 */;
	struct led_pattern *cocci_id/* drivers/leds/leds-el15203000.c 192 */;
	bool cocci_id/* drivers/leds/leds-el15203000.c 181 */;
	const struct led_pattern *cocci_id/* drivers/leds/leds-el15203000.c 181 */;
	enum led_brightness cocci_id/* drivers/leds/leds-el15203000.c 129 */;
}
