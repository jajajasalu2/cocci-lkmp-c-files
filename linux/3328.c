cocci_test_suite() {
	const struct hwmon_ops cocci_id/* drivers/hwmon/raspberrypi-hwmon.c 95 */;
	const struct hwmon_channel_info *cocci_id/* drivers/hwmon/raspberrypi-hwmon.c 89 */[];
	umode_t cocci_id/* drivers/hwmon/raspberrypi-hwmon.c 83 */;
	enum hwmon_sensor_types cocci_id/* drivers/hwmon/raspberrypi-hwmon.c 83 */;
	const void *cocci_id/* drivers/hwmon/raspberrypi-hwmon.c 83 */;
	long *cocci_id/* drivers/hwmon/raspberrypi-hwmon.c 75 */;
	struct rpi_hwmon_data cocci_id/* drivers/hwmon/raspberrypi-hwmon.c 62 */;
	struct rpi_hwmon_data *cocci_id/* drivers/hwmon/raspberrypi-hwmon.c 60 */;
	struct work_struct *cocci_id/* drivers/hwmon/raspberrypi-hwmon.c 58 */;
	void cocci_id/* drivers/hwmon/raspberrypi-hwmon.c 58 */;
	int cocci_id/* drivers/hwmon/raspberrypi-hwmon.c 30 */;
	u32 cocci_id/* drivers/hwmon/raspberrypi-hwmon.c 29 */;
	struct rpi_hwmon_data {
		struct device *hwmon_dev;
		struct rpi_firmware *fw;
		u32 last_throttled;
		struct delayed_work get_values_poll_work;
	} cocci_id/* drivers/hwmon/raspberrypi-hwmon.c 20 */;
	struct platform_driver cocci_id/* drivers/hwmon/raspberrypi-hwmon.c 140 */;
	struct device *cocci_id/* drivers/hwmon/raspberrypi-hwmon.c 107 */;
	struct platform_device *cocci_id/* drivers/hwmon/raspberrypi-hwmon.c 105 */;
	const struct hwmon_chip_info cocci_id/* drivers/hwmon/raspberrypi-hwmon.c 100 */;
}
