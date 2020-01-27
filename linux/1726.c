cocci_test_suite() {
	struct iio_dev *cocci_id/* drivers/iio/imu/fxos8700_core.c 616 */;
	const char *cocci_id/* drivers/iio/imu/fxos8700_core.c 614 */;
	struct regmap *cocci_id/* drivers/iio/imu/fxos8700_core.c 613 */;
	void *cocci_id/* drivers/iio/imu/fxos8700_core.c 605 */;
	void cocci_id/* drivers/iio/imu/fxos8700_core.c 605 */;
	struct device *cocci_id/* drivers/iio/imu/fxos8700_core.c 553 */;
	unsigned int cocci_id/* drivers/iio/imu/fxos8700_core.c 552 */;
	bool cocci_id/* drivers/iio/imu/fxos8700_core.c 549 */;
	struct fxos8700_data *cocci_id/* drivers/iio/imu/fxos8700_core.c 549 */;
	int cocci_id/* drivers/iio/imu/fxos8700_core.c 549 */;
	const struct iio_info cocci_id/* drivers/iio/imu/fxos8700_core.c 543 */;
	const struct attribute_group cocci_id/* drivers/iio/imu/fxos8700_core.c 539 */;
	struct attribute *cocci_id/* drivers/iio/imu/fxos8700_core.c 531 */[];
	long cocci_id/* drivers/iio/imu/fxos8700_core.c 481 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/imu/fxos8700_core.c 480 */;
	const int cocci_id/* drivers/iio/imu/fxos8700_core.c 458 */;
	enum fxos8700_sensor cocci_id/* drivers/iio/imu/fxos8700_core.c 398 */;
	u8 cocci_id/* drivers/iio/imu/fxos8700_core.c 396 */;
	int *cocci_id/* drivers/iio/imu/fxos8700_core.c 394 */;
	enum iio_chan_type cocci_id/* drivers/iio/imu/fxos8700_core.c 318 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/imu/fxos8700_core.c 308 */[];
	const struct fxos8700_odr cocci_id/* drivers/iio/imu/fxos8700_core.c 297 */[];
	const struct fxos8700_scale cocci_id/* drivers/iio/imu/fxos8700_core.c 286 */[];
	struct fxos8700_odr {
		u8 bits;
		int odr;
		int uodr;
	} cocci_id/* drivers/iio/imu/fxos8700_core.c 280 */;
	struct fxos8700_scale {
		u8 bits;
		int uscale;
	} cocci_id/* drivers/iio/imu/fxos8700_core.c 275 */;
	enum fxos8700_int_pin{FXOS8700_PIN_INT1, FXOS8700_PIN_INT2,} cocci_id/* drivers/iio/imu/fxos8700_core.c 270 */;
	enum fxos8700_sensor{FXOS8700_ACCEL=0, FXOS8700_MAGN, FXOS8700_NUM_SENSORS,} cocci_id/* drivers/iio/imu/fxos8700_core.c 264 */;
	enum fxos8700_scan_axis{FXOS8700_SCAN_ACCEL_X=0, FXOS8700_SCAN_ACCEL_Y, FXOS8700_SCAN_ACCEL_Z, FXOS8700_SCAN_MAGN_X, FXOS8700_SCAN_MAGN_Y, FXOS8700_SCAN_MAGN_Z, FXOS8700_SCAN_RHALL, FXOS8700_SCAN_TIMESTAMP,} cocci_id/* drivers/iio/imu/fxos8700_core.c 253 */;
	enum fxos8700_accel_scale_bits{MODE_2G=0, MODE_4G, MODE_8G,} cocci_id/* drivers/iio/imu/fxos8700_core.c 246 */;
	const struct regmap_config cocci_id/* drivers/iio/imu/fxos8700_core.c 228 */;
	const struct regmap_access_table cocci_id/* drivers/iio/imu/fxos8700_core.c 218 */;
	const struct regmap_range cocci_id/* drivers/iio/imu/fxos8700_core.c 174 */[];
	struct fxos8700_data {
		struct regmap *regmap;
		struct iio_trigger *trig;
		__be16 buf[FXOS8700_DATA_BUF_SIZE]____cacheline_aligned;
	} cocci_id/* drivers/iio/imu/fxos8700_core.c 167 */;
}
