cocci_test_suite() {
	u8 cocci_id/* drivers/leds/leds-cr0014114.c 65 */;
	size_t cocci_id/* drivers/leds/leds-cr0014114.c 64 */;
	const size_t cocci_id/* drivers/leds/leds-cr0014114.c 62 */;
	u8 *cocci_id/* drivers/leds/leds-cr0014114.c 62 */;
	void cocci_id/* drivers/leds/leds-cr0014114.c 62 */;
	struct cr0014114 {
		bool do_recount;
		size_t count;
		struct delayed_work work;
		struct device *dev;
		struct mutex lock;
		struct spi_device *spi;
		u8 *buf;
		unsigned long delay;
		struct cr0014114_led leds[];
	} cocci_id/* drivers/leds/leds-cr0014114.c 50 */;
	struct cr0014114_led {
		struct cr0014114 *priv;
		struct led_classdev ldev;
		u8 brightness;
	} cocci_id/* drivers/leds/leds-cr0014114.c 44 */;
	struct spi_driver cocci_id/* drivers/leds/leds-cr0014114.c 289 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-cr0014114.c 282 */[];
	struct cr0014114 *cocci_id/* drivers/leds/leds-cr0014114.c 219 */;
	struct spi_device *cocci_id/* drivers/leds/leds-cr0014114.c 217 */;
	int cocci_id/* drivers/leds/leds-cr0014114.c 217 */;
	struct led_init_data cocci_id/* drivers/leds/leds-cr0014114.c 185 */;
	struct fwnode_handle *cocci_id/* drivers/leds/leds-cr0014114.c 184 */;
	struct cr0014114_led *cocci_id/* drivers/leds/leds-cr0014114.c 183 */;
	struct cr0014114_led cocci_id/* drivers/leds/leds-cr0014114.c 167 */;
	enum led_brightness cocci_id/* drivers/leds/leds-cr0014114.c 163 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-cr0014114.c 162 */;
	struct cr0014114 cocci_id/* drivers/leds/leds-cr0014114.c 148 */;
	struct work_struct *cocci_id/* drivers/leds/leds-cr0014114.c 144 */;
	unsigned long cocci_id/* drivers/leds/leds-cr0014114.c 115 */;
}
