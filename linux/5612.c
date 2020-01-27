cocci_test_suite() {
	struct regmap *cocci_id/* drivers/rtc/rtc-ab-eoz9.c 84 */;
	struct abeoz9_rtc_data *cocci_id/* drivers/rtc/rtc-ab-eoz9.c 83 */;
	struct device *cocci_id/* drivers/rtc/rtc-ab-eoz9.c 81 */;
	int cocci_id/* drivers/rtc/rtc-ab-eoz9.c 81 */;
	struct abeoz9_rtc_data {
		struct rtc_device *rtc;
		struct regmap *regmap;
		struct device *hwmon_dev;
	} cocci_id/* drivers/rtc/rtc-ab-eoz9.c 75 */;
	struct i2c_driver cocci_id/* drivers/rtc/rtc-ab-eoz9.c 444 */;
	const struct i2c_device_id cocci_id/* drivers/rtc/rtc-ab-eoz9.c 439 */[];
	const struct of_device_id cocci_id/* drivers/rtc/rtc-ab-eoz9.c 432 */[];
	const struct i2c_device_id *cocci_id/* drivers/rtc/rtc-ab-eoz9.c 384 */;
	struct i2c_client *cocci_id/* drivers/rtc/rtc-ab-eoz9.c 383 */;
	void cocci_id/* drivers/rtc/rtc-ab-eoz9.c 359 */;
	const struct hwmon_chip_info cocci_id/* drivers/rtc/rtc-ab-eoz9.c 354 */;
	const struct hwmon_ops cocci_id/* drivers/rtc/rtc-ab-eoz9.c 349 */;
	const struct hwmon_channel_info *cocci_id/* drivers/rtc/rtc-ab-eoz9.c 343 */[];
	const struct hwmon_channel_info cocci_id/* drivers/rtc/rtc-ab-eoz9.c 328 */;
	const u32 cocci_id/* drivers/rtc/rtc-ab-eoz9.c 323 */[];
	u32 cocci_id/* drivers/rtc/rtc-ab-eoz9.c 311 */;
	enum hwmon_sensor_types cocci_id/* drivers/rtc/rtc-ab-eoz9.c 310 */;
	umode_t cocci_id/* drivers/rtc/rtc-ab-eoz9.c 309 */;
	const void *cocci_id/* drivers/rtc/rtc-ab-eoz9.c 309 */;
	unsigned int cocci_id/* drivers/rtc/rtc-ab-eoz9.c 278 */;
	long *cocci_id/* drivers/rtc/rtc-ab-eoz9.c 273 */;
	const struct regmap_config cocci_id/* drivers/rtc/rtc-ab-eoz9.c 264 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-ab-eoz9.c 259 */;
	struct device_node *cocci_id/* drivers/rtc/rtc-ab-eoz9.c 210 */;
	u8 cocci_id/* drivers/rtc/rtc-ab-eoz9.c 127 */[ABEOZ9_SEC_LEN];
	struct rtc_time *cocci_id/* drivers/rtc/rtc-ab-eoz9.c 124 */;
}
