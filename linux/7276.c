cocci_test_suite() {
	struct arcxcnn {
		struct i2c_client *client;
		struct backlight_device *bl;
		struct device *dev;
		struct arcxcnn_platform_data *pdata;
	} cocci_id/* drivers/video/backlight/arcxcnn_bl.c 87 */;
	struct i2c_driver cocci_id/* drivers/video/backlight/arcxcnn_bl.c 395 */;
	const struct i2c_device_id cocci_id/* drivers/video/backlight/arcxcnn_bl.c 389 */[];
	const struct of_device_id cocci_id/* drivers/video/backlight/arcxcnn_bl.c 383 */[];
	struct arcxcnn_platform_data {
		const char *name;
		u16 initial_brightness;
		u8 leden;
		u8 led_config_0;
		u8 led_config_1;
		u8 dim_freq;
		u8 comp_config;
		u8 filter_config;
		u8 trim_config;
	} cocci_id/* drivers/video/backlight/arcxcnn_bl.c 32 */;
	const struct i2c_device_id *cocci_id/* drivers/video/backlight/arcxcnn_bl.c 244 */;
	struct i2c_client *cocci_id/* drivers/video/backlight/arcxcnn_bl.c 244 */;
	u8 cocci_id/* drivers/video/backlight/arcxcnn_bl.c 196 */;
	struct device_node *cocci_id/* drivers/video/backlight/arcxcnn_bl.c 178 */;
	struct device *cocci_id/* drivers/video/backlight/arcxcnn_bl.c 177 */;
	void cocci_id/* drivers/video/backlight/arcxcnn_bl.c 175 */;
	enum arcxcnn_chip_id{ARC2C0608,} cocci_id/* drivers/video/backlight/arcxcnn_bl.c 16 */;
	const char *cocci_id/* drivers/video/backlight/arcxcnn_bl.c 156 */;
	struct backlight_properties *cocci_id/* drivers/video/backlight/arcxcnn_bl.c 155 */;
	struct arcxcnn *cocci_id/* drivers/video/backlight/arcxcnn_bl.c 153 */;
	int cocci_id/* drivers/video/backlight/arcxcnn_bl.c 153 */;
	const struct backlight_ops cocci_id/* drivers/video/backlight/arcxcnn_bl.c 148 */;
	u32 cocci_id/* drivers/video/backlight/arcxcnn_bl.c 133 */;
	struct backlight_device *cocci_id/* drivers/video/backlight/arcxcnn_bl.c 130 */;
}
