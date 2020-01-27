cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/hwmon/ntc_thermistor.c 710 */;
	struct ntc_data cocci_id/* drivers/hwmon/ntc_thermistor.c 679 */;
	const struct platform_device_id *cocci_id/* drivers/hwmon/ntc_thermistor.c 639 */;
	const struct of_device_id *cocci_id/* drivers/hwmon/ntc_thermistor.c 637 */;
	struct platform_device *cocci_id/* drivers/hwmon/ntc_thermistor.c 634 */;
	const struct hwmon_chip_info cocci_id/* drivers/hwmon/ntc_thermistor.c 629 */;
	const struct hwmon_ops cocci_id/* drivers/hwmon/ntc_thermistor.c 624 */;
	const struct hwmon_channel_info *cocci_id/* drivers/hwmon/ntc_thermistor.c 618 */[];
	umode_t cocci_id/* drivers/hwmon/ntc_thermistor.c 603 */;
	enum hwmon_sensor_types cocci_id/* drivers/hwmon/ntc_thermistor.c 603 */;
	const void *cocci_id/* drivers/hwmon/ntc_thermistor.c 603 */;
	long *cocci_id/* drivers/hwmon/ntc_thermistor.c 576 */;
	struct device *cocci_id/* drivers/hwmon/ntc_thermistor.c 575 */;
	const struct platform_device_id cocci_id/* drivers/hwmon/ntc_thermistor.c 49 */[];
	int *cocci_id/* drivers/hwmon/ntc_thermistor.c 476 */;
	void cocci_id/* drivers/hwmon/ntc_thermistor.c 475 */;
	u32 cocci_id/* drivers/hwmon/ntc_thermistor.c 448 */;
	struct ntc_thermistor_platform_data *cocci_id/* drivers/hwmon/ntc_thermistor.c 447 */;
	struct ntc_data *cocci_id/* drivers/hwmon/ntc_thermistor.c 445 */;
	unsigned int cocci_id/* drivers/hwmon/ntc_thermistor.c 445 */;
	int cocci_id/* drivers/hwmon/ntc_thermistor.c 445 */;
	u64 cocci_id/* drivers/hwmon/ntc_thermistor.c 436 */;
	struct device_node *cocci_id/* drivers/hwmon/ntc_thermistor.c 386 */;
	enum iio_chan_type cocci_id/* drivers/hwmon/ntc_thermistor.c 385 */;
	enum{NTC_B57330V2103, NTC_B57891S0103, NTC_NCP03WB473, NTC_NCP03WF104, NTC_NCP15WB473, NTC_NCP15WL333, NTC_NCP15XH103, NTC_NCP18WB473, NTC_NCP21WB473, NTC_LAST,} cocci_id/* drivers/hwmon/ntc_thermistor.c 36 */;
	const struct of_device_id cocci_id/* drivers/hwmon/ntc_thermistor.c 346 */[];
	s64 cocci_id/* drivers/hwmon/ntc_thermistor.c 340 */;
	struct iio_channel *cocci_id/* drivers/hwmon/ntc_thermistor.c 328 */;
	struct ntc_data {
		struct ntc_thermistor_platform_data *pdata;
		const struct ntc_compensation *comp;
		int n_comp;
	} cocci_id/* drivers/hwmon/ntc_thermistor.c 319 */;
	const struct ntc_type cocci_id/* drivers/hwmon/ntc_thermistor.c 310 */[];
	struct ntc_type {
		const struct ntc_compensation *comp;
		int n_comp;
	} cocci_id/* drivers/hwmon/ntc_thermistor.c 302 */;
	struct ntc_compensation {
		int temp_c;
		unsigned int ohm;
	} cocci_id/* drivers/hwmon/ntc_thermistor.c 27 */;
	const struct ntc_compensation cocci_id/* drivers/hwmon/ntc_thermistor.c 219 */[];
}
