cocci_test_suite() {
	struct nic78bx_led cocci_id/* drivers/leds/leds-nic78bx.c 78 */[];
	u8 cocci_id/* drivers/leds/leds-nic78bx.c 69 */;
	unsigned long cocci_id/* drivers/leds/leds-nic78bx.c 68 */;
	struct nic78bx_led *cocci_id/* drivers/leds/leds-nic78bx.c 67 */;
	enum led_brightness cocci_id/* drivers/leds/leds-nic78bx.c 65 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-nic78bx.c 65 */;
	void cocci_id/* drivers/leds/leds-nic78bx.c 44 */;
	struct nic78bx_led cocci_id/* drivers/leds/leds-nic78bx.c 41 */;
	struct nic78bx_led {
		u8 bit;
		u8 mask;
		struct nic78bx_led_data *data;
		struct led_classdev cdev;
	} cocci_id/* drivers/leds/leds-nic78bx.c 32 */;
	struct nic78bx_led_data {
		u16 io_base;
		spinlock_t lock;
		struct platform_device *pdev;
	} cocci_id/* drivers/leds/leds-nic78bx.c 26 */;
	struct platform_driver cocci_id/* drivers/leds/leds-nic78bx.c 187 */;
	const struct acpi_device_id cocci_id/* drivers/leds/leds-nic78bx.c 181 */[];
	struct resource *cocci_id/* drivers/leds/leds-nic78bx.c 125 */;
	struct nic78bx_led_data *cocci_id/* drivers/leds/leds-nic78bx.c 124 */;
	struct device *cocci_id/* drivers/leds/leds-nic78bx.c 123 */;
	struct platform_device *cocci_id/* drivers/leds/leds-nic78bx.c 121 */;
	int cocci_id/* drivers/leds/leds-nic78bx.c 121 */;
}
