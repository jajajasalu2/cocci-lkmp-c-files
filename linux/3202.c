cocci_test_suite() {
	struct ab8500_temp *cocci_id/* drivers/hwmon/ab8500.c 88 */;
	u8 cocci_id/* drivers/hwmon/ab8500.c 85 */;
	struct abx500_temp *cocci_id/* drivers/hwmon/ab8500.c 85 */;
	int *cocci_id/* drivers/hwmon/ab8500.c 85 */;
	int cocci_id/* drivers/hwmon/ab8500.c 85 */;
	const struct abx500_res_to_temp *cocci_id/* drivers/hwmon/ab8500.c 65 */;
	struct ab8500_gpadc_cfg *cocci_id/* drivers/hwmon/ab8500.c 61 */;
	struct ab8500_temp {
		struct iio_channel *aux1;
		struct iio_channel *aux2;
		struct ab8500_btemp *btemp;
		struct delayed_work power_off_work;
		struct ab8500_gpadc_cfg cfg;
		struct abx500_temp *abx500_data;
	} cocci_id/* drivers/hwmon/ab8500.c 46 */;
	struct ab8500_gpadc_cfg {
		const struct abx500_res_to_temp *temp_tbl;
		int tbl_sz;
		int vcc;
		int r_up;
	} cocci_id/* drivers/hwmon/ab8500.c 39 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/ab8500.c 134 */;
	struct device_attribute *cocci_id/* drivers/hwmon/ab8500.c 131 */;
	char *cocci_id/* drivers/hwmon/ab8500.c 131 */;
	struct device *cocci_id/* drivers/hwmon/ab8500.c 130 */;
	ssize_t cocci_id/* drivers/hwmon/ab8500.c 130 */;
	struct ab8500_temp cocci_id/* drivers/hwmon/ab8500.c 116 */;
	struct work_struct *cocci_id/* drivers/hwmon/ab8500.c 113 */;
	void cocci_id/* drivers/hwmon/ab8500.c 113 */;
}
