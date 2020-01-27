cocci_test_suite() {
	bool cocci_id/* drivers/iio/accel/mxc4005.c 92 */;
	struct device *cocci_id/* drivers/iio/accel/mxc4005.c 92 */;
	const struct attribute_group cocci_id/* drivers/iio/accel/mxc4005.c 88 */;
	struct attribute *cocci_id/* drivers/iio/accel/mxc4005.c 83 */[];
	const struct {
		u8 range;
		int scale;
	} cocci_id/* drivers/iio/accel/mxc4005.c 71 */[];
	struct mxc4005_data {
		struct device *dev;
		struct mutex mutex;
		struct regmap *regmap;
		struct iio_trigger *dready_trig;
		__be16 buffer[8];
		bool trigger_enabled;
	} cocci_id/* drivers/iio/accel/mxc4005.c 54 */;
	struct i2c_driver cocci_id/* drivers/iio/accel/mxc4005.c 487 */;
	const struct i2c_device_id cocci_id/* drivers/iio/accel/mxc4005.c 481 */[];
	enum mxc4005_range{MXC4005_RANGE_2G, MXC4005_RANGE_4G, MXC4005_RANGE_8G,} cocci_id/* drivers/iio/accel/mxc4005.c 48 */;
	const struct acpi_device_id cocci_id/* drivers/iio/accel/mxc4005.c 475 */[];
	enum mxc4005_axis{AXIS_X, AXIS_Y, AXIS_Z,} cocci_id/* drivers/iio/accel/mxc4005.c 42 */;
	struct regmap *cocci_id/* drivers/iio/accel/mxc4005.c 393 */;
	struct iio_dev *cocci_id/* drivers/iio/accel/mxc4005.c 392 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/accel/mxc4005.c 389 */;
	struct i2c_client *cocci_id/* drivers/iio/accel/mxc4005.c 388 */;
	unsigned int cocci_id/* drivers/iio/accel/mxc4005.c 375 */;
	struct mxc4005_data *cocci_id/* drivers/iio/accel/mxc4005.c 372 */;
	int cocci_id/* drivers/iio/accel/mxc4005.c 372 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/accel/mxc4005.c 367 */;
	struct iio_trigger *cocci_id/* drivers/iio/accel/mxc4005.c 328 */;
	struct iio_poll_func *cocci_id/* drivers/iio/accel/mxc4005.c 295 */;
	irqreturn_t cocci_id/* drivers/iio/accel/mxc4005.c 293 */;
	void *cocci_id/* drivers/iio/accel/mxc4005.c 293 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/accel/mxc4005.c 286 */[];
	const unsigned long cocci_id/* drivers/iio/accel/mxc4005.c 264 */[];
	const struct iio_info cocci_id/* drivers/iio/accel/mxc4005.c 258 */;
	int *cocci_id/* drivers/iio/accel/mxc4005.c 207 */;
	long cocci_id/* drivers/iio/accel/mxc4005.c 207 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/accel/mxc4005.c 206 */;
	u8 *cocci_id/* drivers/iio/accel/mxc4005.c 153 */;
	__be16 cocci_id/* drivers/iio/accel/mxc4005.c 150 */;
	const struct regmap_config cocci_id/* drivers/iio/accel/mxc4005.c 121 */;
}
