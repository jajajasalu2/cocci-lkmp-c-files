cocci_test_suite() {
	u32 cocci_id/* drivers/usb/misc/usb4604.c 87 */;
	struct gpio_desc *cocci_id/* drivers/usb/misc/usb4604.c 86 */;
	struct device_node *cocci_id/* drivers/usb/misc/usb4604.c 85 */;
	enum usb4604_mode cocci_id/* drivers/usb/misc/usb4604.c 58 */;
	u8 cocci_id/* drivers/usb/misc/usb4604.c 42 */[];
	struct i2c_client *cocci_id/* drivers/usb/misc/usb4604.c 40 */;
	struct device *cocci_id/* drivers/usb/misc/usb4604.c 39 */;
	struct usb4604 *cocci_id/* drivers/usb/misc/usb4604.c 37 */;
	int cocci_id/* drivers/usb/misc/usb4604.c 37 */;
	void cocci_id/* drivers/usb/misc/usb4604.c 28 */;
	struct usb4604 {
		enum usb4604_mode mode;
		struct device *dev;
		struct gpio_desc *gpio_reset;
	} cocci_id/* drivers/usb/misc/usb4604.c 22 */;
	enum usb4604_mode{USB4604_MODE_UNKNOWN, USB4604_MODE_HUB, USB4604_MODE_STANDBY,} cocci_id/* drivers/usb/misc/usb4604.c 16 */;
	struct i2c_driver cocci_id/* drivers/usb/misc/usb4604.c 154 */;
	const struct of_device_id cocci_id/* drivers/usb/misc/usb4604.c 147 */[];
	const struct i2c_device_id cocci_id/* drivers/usb/misc/usb4604.c 140 */[];
	const struct i2c_device_id *cocci_id/* drivers/usb/misc/usb4604.c 101 */;
}
