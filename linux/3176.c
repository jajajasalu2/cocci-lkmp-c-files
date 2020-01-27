cocci_test_suite() {
	unsigned int cocci_id/* drivers/hwmon/lochnagar-hwmon.c 94 */;
	enum lochnagar_measure_mode cocci_id/* drivers/hwmon/lochnagar-hwmon.c 92 */;
	struct regmap *cocci_id/* drivers/hwmon/lochnagar-hwmon.c 91 */;
	int cocci_id/* drivers/hwmon/lochnagar-hwmon.c 91 */;
	bool cocci_id/* drivers/hwmon/lochnagar-hwmon.c 76 */;
	u64 cocci_id/* drivers/hwmon/lochnagar-hwmon.c 74 */;
	u32 cocci_id/* drivers/hwmon/lochnagar-hwmon.c 72 */;
	long cocci_id/* drivers/hwmon/lochnagar-hwmon.c 72 */;
	enum lochnagar_measure_mode{LN2_CURR=0, LN2_VOLT, LN2_TEMP,} cocci_id/* drivers/hwmon/lochnagar-hwmon.c 52 */;
	struct lochnagar_hwmon {
		struct regmap *regmap;
		long power_nsamples[ARRAY_SIZE(lochnagar_chan_names)];
		struct mutex sensor_lock;
	} cocci_id/* drivers/hwmon/lochnagar-hwmon.c 43 */;
	struct platform_driver cocci_id/* drivers/hwmon/lochnagar-hwmon.c 401 */;
	struct lochnagar_hwmon *cocci_id/* drivers/hwmon/lochnagar-hwmon.c 376 */;
	struct device *cocci_id/* drivers/hwmon/lochnagar-hwmon.c 374 */;
	struct platform_device *cocci_id/* drivers/hwmon/lochnagar-hwmon.c 372 */;
	const struct of_device_id cocci_id/* drivers/hwmon/lochnagar-hwmon.c 366 */[];
	const struct hwmon_chip_info cocci_id/* drivers/hwmon/lochnagar-hwmon.c 361 */;
	const struct hwmon_channel_info *cocci_id/* drivers/hwmon/lochnagar-hwmon.c 324 */[];
	const char *const cocci_id/* drivers/hwmon/lochnagar-hwmon.c 32 */[];
	const struct hwmon_ops cocci_id/* drivers/hwmon/lochnagar-hwmon.c 317 */;
	const char **cocci_id/* drivers/hwmon/lochnagar-hwmon.c 288 */;
	long *cocci_id/* drivers/hwmon/lochnagar-hwmon.c 258 */;
	enum hwmon_sensor_types cocci_id/* drivers/hwmon/lochnagar-hwmon.c 238 */;
	umode_t cocci_id/* drivers/hwmon/lochnagar-hwmon.c 237 */;
	const void *cocci_id/* drivers/hwmon/lochnagar-hwmon.c 237 */;
	u32 *cocci_id/* drivers/hwmon/lochnagar-hwmon.c 142 */;
}
