cocci_test_suite() {
	struct adp5520_backlight_platform_data *cocci_id/* drivers/video/backlight/adp5520_bl.c 99 */;
	const struct backlight_ops cocci_id/* drivers/video/backlight/adp5520_bl.c 90 */;
	uint8_t cocci_id/* drivers/video/backlight/adp5520_bl.c 83 */;
	struct backlight_device *cocci_id/* drivers/video/backlight/adp5520_bl.c 79 */;
	struct platform_driver cocci_id/* drivers/video/backlight/adp5520_bl.c 382 */;
	struct backlight_properties cocci_id/* drivers/video/backlight/adp5520_bl.c 290 */;
	struct platform_device *cocci_id/* drivers/video/backlight/adp5520_bl.c 288 */;
	const struct attribute_group cocci_id/* drivers/video/backlight/adp5520_bl.c 284 */;
	struct attribute *cocci_id/* drivers/video/backlight/adp5520_bl.c 274 */[];
	const char *cocci_id/* drivers/video/backlight/adp5520_bl.c 237 */;
	size_t cocci_id/* drivers/video/backlight/adp5520_bl.c 237 */;
	struct device_attribute *cocci_id/* drivers/video/backlight/adp5520_bl.c 230 */;
	char *cocci_id/* drivers/video/backlight/adp5520_bl.c 230 */;
	struct device *cocci_id/* drivers/video/backlight/adp5520_bl.c 229 */;
	ssize_t cocci_id/* drivers/video/backlight/adp5520_bl.c 229 */;
	int cocci_id/* drivers/video/backlight/adp5520_bl.c 218 */;
	struct adp5520_bl *cocci_id/* drivers/video/backlight/adp5520_bl.c 217 */;
	struct adp5520_bl {
		struct device *master;
		struct adp5520_backlight_platform_data *pdata;
		struct mutex lock;
		unsigned long cached_daylight_max;
		int id;
		int current_brightness;
	} cocci_id/* drivers/video/backlight/adp5520_bl.c 17 */;
	unsigned long cocci_id/* drivers/video/backlight/adp5520_bl.c 163 */;
}
