cocci_test_suite() {
	struct device *cocci_id/* drivers/usb/misc/usb3503.c 73 */;
	struct usb3503 *cocci_id/* drivers/usb/misc/usb3503.c 71 */;
	int cocci_id/* drivers/usb/misc/usb3503.c 71 */;
	void __exit cocci_id/* drivers/usb/misc/usb3503.c 450 */;
	void cocci_id/* drivers/usb/misc/usb3503.c 450 */;
	struct usb3503 {
		enum usb3503_mode mode;
		struct regmap *regmap;
		struct device *dev;
		struct clk *clk;
		u8 port_off_mask;
		int gpio_intn;
		int gpio_reset;
		int gpio_connect;
		bool secondary_ref_clk;
	} cocci_id/* drivers/usb/misc/usb3503.c 44 */;
	int __init cocci_id/* drivers/usb/misc/usb3503.c 433 */;
	struct platform_driver cocci_id/* drivers/usb/misc/usb3503.c 423 */;
	struct i2c_driver cocci_id/* drivers/usb/misc/usb3503.c 412 */;
	const struct of_device_id cocci_id/* drivers/usb/misc/usb3503.c 404 */[];
	const struct i2c_device_id cocci_id/* drivers/usb/misc/usb3503.c 397 */[];
	struct platform_device *cocci_id/* drivers/usb/misc/usb3503.c 326 */;
	struct usb3503 cocci_id/* drivers/usb/misc/usb3503.c 300 */;
	const struct i2c_device_id *cocci_id/* drivers/usb/misc/usb3503.c 295 */;
	struct i2c_client *cocci_id/* drivers/usb/misc/usb3503.c 294 */;
	const u32 *cocci_id/* drivers/usb/misc/usb3503.c 165 */;
	u32 cocci_id/* drivers/usb/misc/usb3503.c 164 */;
	struct device_node *cocci_id/* drivers/usb/misc/usb3503.c 162 */;
	struct usb3503_platform_data *cocci_id/* drivers/usb/misc/usb3503.c 161 */;
	const struct regmap_config cocci_id/* drivers/usb/misc/usb3503.c 151 */;
	enum usb3503_mode cocci_id/* drivers/usb/misc/usb3503.c 127 */;
}
