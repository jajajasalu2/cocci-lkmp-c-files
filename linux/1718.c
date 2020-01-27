cocci_test_suite() {
	void *cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 793 */;
	void cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 793 */;
	u32 cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 763 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 759 */;
	struct iio_trigger *cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 750 */;
	struct device *cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 710 */;
	unsigned int cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 709 */;
	bool cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 706 */;
	struct bmi160_data *cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 706 */;
	int cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 706 */;
	struct irq_data *cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 687 */;
	u8 cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 659 */;
	enum bmi160_int_pin cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 656 */;
	struct iio_dev *cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 655 */;
	struct device_node *cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 637 */;
	enum bmi160_int_pin *cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 637 */;
	const char *cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 563 */;
	unsigned long cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 554 */;
	struct regmap *cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 552 */;
	const struct acpi_device_id *cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 517 */;
	const struct iio_info cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 509 */;
	const struct attribute_group cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 505 */;
	struct attribute *cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 497 */[];
	 cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 494 */(in_anglvel_scale_available,
								"0.001065 0.000532 0.000266 0.000133 0.000066");
	 cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 491 */(in_accel_scale_available,
								"0.000598 0.001197 0.002394 0.004788");
	 cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 488 */(in_anglvel_sampling_frequency_available,
								"25 50 100 200 400 800 1600 3200");
	 cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 485 */(in_accel_sampling_frequency_available,
								"0.78125 1.5625 3.125 6.25 12.5 25 50 100 200 400 800 1600");
	long cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 436 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 435 */;
	__le16 cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 414 */[16];
	struct iio_poll_func *cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 411 */;
	irqreturn_t cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 409 */;
	enum bmi160_sensor_type cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 352 */;
	__le16 cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 351 */;
	int *cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 347 */;
	enum iio_chan_type cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 277 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 267 */[];
	const struct bmi160_odr_item cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 256 */[];
	struct bmi160_odr_item {
		const struct bmi160_odr *tbl;
		int num;
	} cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 251 */;
	const struct bmi160_odr cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 225 */[];
	const struct bmi160_scale_item cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 214 */[];
	struct bmi160_scale_item {
		const struct bmi160_scale *tbl;
		int num;
	} cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 209 */;
	const struct bmi160_scale cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 194 */[];
	struct bmi160_odr {
		u8 bits;
		int odr;
		int uodr;
	} cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 188 */;
	struct bmi160_scale {
		u8 bits;
		int uscale;
	} cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 183 */;
	unsigned long cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 178 */[];
	struct bmi160_regs cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 157 */[];
	struct bmi160_regs {
		u8 data;
		u8 config;
		u8 config_odr_mask;
		u8 config_bwp_mask;
		u8 range;
		u8 pmu_cmd_normal;
		u8 pmu_cmd_suspend;
	} cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 147 */;
	const struct regmap_config cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 141 */;
	enum bmi160_int_pin{BMI160_PIN_INT1, BMI160_PIN_INT2,} cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 136 */;
	enum bmi160_sensor_type{BMI160_ACCEL=0, BMI160_GYRO, BMI160_EXT_MAGN, BMI160_NUM_SENSORS,} cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 129 */;
	enum bmi160_scan_axis{BMI160_SCAN_EXT_MAGN_X=0, BMI160_SCAN_EXT_MAGN_Y, BMI160_SCAN_EXT_MAGN_Z, BMI160_SCAN_RHALL, BMI160_SCAN_GYRO_X, BMI160_SCAN_GYRO_Y, BMI160_SCAN_GYRO_Z, BMI160_SCAN_ACCEL_X, BMI160_SCAN_ACCEL_Y, BMI160_SCAN_ACCEL_Z, BMI160_SCAN_TIMESTAMP,} cocci_id/* drivers/iio/imu/bmi160/bmi160_core.c 115 */;
}
