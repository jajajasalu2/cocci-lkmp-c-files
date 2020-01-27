cocci_test_suite() {
	struct lp855x {
		const char *chipname;
		enum lp855x_chip_id chip_id;
		enum lp855x_brightness_ctrl_mode mode;
		struct lp855x_device_config *cfg;
		struct i2c_client *client;
		struct backlight_device *bl;
		struct device *dev;
		struct lp855x_platform_data *pdata;
		struct pwm_device *pwm;
		struct regulator *supply;
		struct regulator *enable;
	} cocci_id/* drivers/video/backlight/lp855x_bl.c 63 */;
	struct lp855x_device_config {
		int (*pre_init_device)(struct lp855x *);
		u8 reg_brightness;
		u8 reg_devicectrl;
		int (*post_init_device)(struct lp855x *);
	} cocci_id/* drivers/video/backlight/lp855x_bl.c 56 */;
	struct i2c_driver cocci_id/* drivers/video/backlight/lp855x_bl.c 531 */;
	const struct i2c_device_id cocci_id/* drivers/video/backlight/lp855x_bl.c 519 */[];
	const struct of_device_id cocci_id/* drivers/video/backlight/lp855x_bl.c 507 */[];
	enum lp855x_brightness_ctrl_mode{PWM_BASED=1, REGISTER_BASED,} cocci_id/* drivers/video/backlight/lp855x_bl.c 42 */;
	struct lp855x cocci_id/* drivers/video/backlight/lp855x_bl.c 406 */;
	const struct i2c_device_id *cocci_id/* drivers/video/backlight/lp855x_bl.c 398 */;
	struct i2c_client *cocci_id/* drivers/video/backlight/lp855x_bl.c 398 */;
	struct lp855x_rom_data *cocci_id/* drivers/video/backlight/lp855x_bl.c 369 */;
	struct device_node *cocci_id/* drivers/video/backlight/lp855x_bl.c 348 */;
	const struct attribute_group cocci_id/* drivers/video/backlight/lp855x_bl.c 340 */;
	struct attribute *cocci_id/* drivers/video/backlight/lp855x_bl.c 334 */[];
	struct device_attribute *cocci_id/* drivers/video/backlight/lp855x_bl.c 318 */;
	char *cocci_id/* drivers/video/backlight/lp855x_bl.c 318 */;
	struct device *cocci_id/* drivers/video/backlight/lp855x_bl.c 317 */;
	ssize_t cocci_id/* drivers/video/backlight/lp855x_bl.c 317 */;
	const char *cocci_id/* drivers/video/backlight/lp855x_bl.c 288 */;
	struct lp855x_platform_data *cocci_id/* drivers/video/backlight/lp855x_bl.c 287 */;
	struct backlight_properties cocci_id/* drivers/video/backlight/lp855x_bl.c 286 */;
	struct backlight_device *cocci_id/* drivers/video/backlight/lp855x_bl.c 285 */;
	const struct backlight_ops cocci_id/* drivers/video/backlight/lp855x_bl.c 278 */;
	u8 cocci_id/* drivers/video/backlight/lp855x_bl.c 273 */;
	struct pwm_device *cocci_id/* drivers/video/backlight/lp855x_bl.c 238 */;
	unsigned int cocci_id/* drivers/video/backlight/lp855x_bl.c 236 */;
	void cocci_id/* drivers/video/backlight/lp855x_bl.c 234 */;
	struct lp855x_device_config cocci_id/* drivers/video/backlight/lp855x_bl.c 150 */;
	struct lp855x *cocci_id/* drivers/video/backlight/lp855x_bl.c 131 */;
	int cocci_id/* drivers/video/backlight/lp855x_bl.c 131 */;
	bool cocci_id/* drivers/video/backlight/lp855x_bl.c 100 */;
}
