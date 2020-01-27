cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/video/backlight/adp8870_bl.c 981 */;
	const struct i2c_device_id cocci_id/* drivers/video/backlight/adp8870_bl.c 975 */[];
	struct backlight_properties cocci_id/* drivers/video/backlight/adp8870_bl.c 850 */;
	const struct i2c_device_id *cocci_id/* drivers/video/backlight/adp8870_bl.c 848 */;
	const struct attribute_group cocci_id/* drivers/video/backlight/adp8870_bl.c 843 */;
	struct attribute *cocci_id/* drivers/video/backlight/adp8870_bl.c 825 */[];
	unsigned long cocci_id/* drivers/video/backlight/adp8870_bl.c 792 */;
	const char *cocci_id/* drivers/video/backlight/adp8870_bl.c 789 */;
	size_t cocci_id/* drivers/video/backlight/adp8870_bl.c 789 */;
	uint16_t cocci_id/* drivers/video/backlight/adp8870_bl.c 746 */;
	uint8_t cocci_id/* drivers/video/backlight/adp8870_bl.c 745 */;
	int cocci_id/* drivers/video/backlight/adp8870_bl.c 744 */;
	struct adp8870_bl *cocci_id/* drivers/video/backlight/adp8870_bl.c 743 */;
	struct device_attribute *cocci_id/* drivers/video/backlight/adp8870_bl.c 741 */;
	char *cocci_id/* drivers/video/backlight/adp8870_bl.c 741 */;
	struct device *cocci_id/* drivers/video/backlight/adp8870_bl.c 740 */;
	ssize_t cocci_id/* drivers/video/backlight/adp8870_bl.c 740 */;
	struct adp8870_backlight_platform_data *cocci_id/* drivers/video/backlight/adp8870_bl.c 429 */;
	const struct backlight_ops cocci_id/* drivers/video/backlight/adp8870_bl.c 420 */;
	struct backlight_device *cocci_id/* drivers/video/backlight/adp8870_bl.c 413 */;
	struct i2c_client *cocci_id/* drivers/video/backlight/adp8870_bl.c 353 */;
	struct led_info *cocci_id/* drivers/video/backlight/adp8870_bl.c 245 */;
	struct adp8870_led *cocci_id/* drivers/video/backlight/adp8870_bl.c 244 */;
	struct adp8870_led cocci_id/* drivers/video/backlight/adp8870_bl.c 208 */;
	enum led_brightness cocci_id/* drivers/video/backlight/adp8870_bl.c 204 */;
	struct led_classdev *cocci_id/* drivers/video/backlight/adp8870_bl.c 203 */;
	void cocci_id/* drivers/video/backlight/adp8870_bl.c 203 */;
	struct work_struct *cocci_id/* drivers/video/backlight/adp8870_bl.c 195 */;
	u8 cocci_id/* drivers/video/backlight/adp8870_bl.c 143 */;
	uint8_t *cocci_id/* drivers/video/backlight/adp8870_bl.c 128 */;
	struct adp8870_led {
		struct led_classdev cdev;
		struct work_struct work;
		struct i2c_client *client;
		enum led_brightness new_brightness;
		int id;
		int flags;
	} cocci_id/* drivers/video/backlight/adp8870_bl.c 119 */;
	struct adp8870_bl {
		struct i2c_client *client;
		struct backlight_device *bl;
		struct adp8870_led *led;
		struct adp8870_backlight_platform_data *pdata;
		struct mutex lock;
		unsigned long cached_daylight_max;
		int id;
		int revid;
		int current_brightness;
	} cocci_id/* drivers/video/backlight/adp8870_bl.c 107 */;
}
