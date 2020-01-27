cocci_test_suite() {
	const struct max6697_chip_data cocci_id/* drivers/hwmon/max6697.c 98 */[];
	struct max6697_data {
		struct i2c_client *client;
		enum chips type;
		const struct max6697_chip_data *chip;
		int update_interval;
		int temp_offset;
		struct mutex update_lock;
		unsigned long last_updated;
		bool valid;
		u8 temp[8][4];
#define MAX6697_TEMP_INPUT 0
#define MAX6697_TEMP_EXT 1
#define MAX6697_TEMP_MAX 2
#define MAX6697_TEMP_CRIT 3
		u32 alarms;
	} cocci_id/* drivers/hwmon/max6697.c 71 */;
	struct i2c_driver cocci_id/* drivers/hwmon/max6697.c 689 */;
	void *cocci_id/* drivers/hwmon/max6697.c 647 */;
	const struct of_device_id __maybe_unused cocci_id/* drivers/hwmon/max6697.c 644 */[];
	const struct i2c_device_id cocci_id/* drivers/hwmon/max6697.c 629 */[];
	struct max6697_chip_data {
		int channels;
		u32 have_ext;
		u32 have_crit;
		u32 have_fault;
		u8 valid_conf;
		const u8 *alarm_map;
	} cocci_id/* drivers/hwmon/max6697.c 62 */;
	enum chips cocci_id/* drivers/hwmon/max6697.c 612 */;
	struct max6697_data cocci_id/* drivers/hwmon/max6697.c 607 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/max6697.c 598 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/max6697.c 596 */;
	const struct max6697_chip_data *cocci_id/* drivers/hwmon/max6697.c 506 */;
	struct max6697_platform_data cocci_id/* drivers/hwmon/max6697.c 505 */;
	struct i2c_client *cocci_id/* drivers/hwmon/max6697.c 502 */;
	u32 cocci_id/* drivers/hwmon/max6697.c 482 */;
	const __be32 *cocci_id/* drivers/hwmon/max6697.c 472 */;
	struct max6697_platform_data *cocci_id/* drivers/hwmon/max6697.c 469 */;
	struct device_node *cocci_id/* drivers/hwmon/max6697.c 468 */;
	void cocci_id/* drivers/hwmon/max6697.c 468 */;
	const struct attribute_group cocci_id/* drivers/hwmon/max6697.c 463 */;
	struct attribute *cocci_id/* drivers/hwmon/max6697.c 404 */[];
	struct device cocci_id/* drivers/hwmon/max6697.c 382 */;
	umode_t cocci_id/* drivers/hwmon/max6697.c 379 */;
	struct kobject *cocci_id/* drivers/hwmon/max6697.c 379 */;
	struct attribute *cocci_id/* drivers/hwmon/max6697.c 379 */;
	const u8 cocci_id/* drivers/hwmon/max6697.c 34 */[];
	long cocci_id/* drivers/hwmon/max6697.c 299 */;
	size_t cocci_id/* drivers/hwmon/max6697.c 294 */;
	const char *cocci_id/* drivers/hwmon/max6697.c 293 */;
	struct max6697_data *cocci_id/* drivers/hwmon/max6697.c 281 */;
	int cocci_id/* drivers/hwmon/max6697.c 280 */;
	char *cocci_id/* drivers/hwmon/max6697.c 278 */;
	struct device_attribute *cocci_id/* drivers/hwmon/max6697.c 277 */;
	struct device *cocci_id/* drivers/hwmon/max6697.c 277 */;
	ssize_t cocci_id/* drivers/hwmon/max6697.c 277 */;
	enum chips{max6581, max6602, max6622, max6636, max6689, max6693, max6694, max6697, max6698, max6699,} cocci_id/* drivers/hwmon/max6697.c 23 */;
}
