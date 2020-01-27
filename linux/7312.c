cocci_test_suite() {
	struct tosa_bl_data cocci_id/* drivers/video/backlight/tosa_bl.c 85 */;
	struct tosa_bl_data *cocci_id/* drivers/video/backlight/tosa_bl.c 82 */;
	struct backlight_properties cocci_id/* drivers/video/backlight/tosa_bl.c 81 */;
	const struct i2c_device_id *cocci_id/* drivers/video/backlight/tosa_bl.c 79 */;
	struct i2c_client *cocci_id/* drivers/video/backlight/tosa_bl.c 78 */;
	const struct backlight_ops cocci_id/* drivers/video/backlight/tosa_bl.c 73 */;
	struct backlight_properties *cocci_id/* drivers/video/backlight/tosa_bl.c 68 */;
	struct backlight_device *cocci_id/* drivers/video/backlight/tosa_bl.c 66 */;
	int cocci_id/* drivers/video/backlight/tosa_bl.c 66 */;
	struct spi_device *cocci_id/* drivers/video/backlight/tosa_bl.c 38 */;
	void cocci_id/* drivers/video/backlight/tosa_bl.c 36 */;
	struct tosa_bl_data {
		struct i2c_client *i2c;
		struct backlight_device *bl;
		struct gpio_desc *gpio;
		int comadj;
	} cocci_id/* drivers/video/backlight/tosa_bl.c 28 */;
	struct i2c_driver cocci_id/* drivers/video/backlight/tosa_bl.c 159 */;
	const struct i2c_device_id cocci_id/* drivers/video/backlight/tosa_bl.c 153 */[];
	struct device *cocci_id/* drivers/video/backlight/tosa_bl.c 142 */;
}
