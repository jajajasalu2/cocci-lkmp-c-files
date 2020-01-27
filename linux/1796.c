cocci_test_suite() {
	const struct {
		u8 mode,data;
	} cocci_id/* drivers/iio/light/isl29125.c 79 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/light/isl29125.c 72 */[];
	struct isl29125_data {
		struct i2c_client *client;
		u8 conf1;
		u16 buffer[8];
	} cocci_id/* drivers/iio/light/isl29125.c 51 */;
	struct i2c_driver cocci_id/* drivers/iio/light/isl29125.c 342 */;
	const struct i2c_device_id cocci_id/* drivers/iio/light/isl29125.c 336 */[];
	struct device *cocci_id/* drivers/iio/light/isl29125.c 325 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/isl29125.c 247 */;
	struct i2c_client *cocci_id/* drivers/iio/light/isl29125.c 246 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/light/isl29125.c 240 */;
	struct isl29125_data *cocci_id/* drivers/iio/light/isl29125.c 227 */;
	struct iio_dev *cocci_id/* drivers/iio/light/isl29125.c 225 */;
	int cocci_id/* drivers/iio/light/isl29125.c 225 */;
	const struct iio_info cocci_id/* drivers/iio/light/isl29125.c 210 */;
	const struct attribute_group cocci_id/* drivers/iio/light/isl29125.c 206 */;
	struct attribute *cocci_id/* drivers/iio/light/isl29125.c 201 */[];
	struct iio_poll_func *cocci_id/* drivers/iio/light/isl29125.c 175 */;
	irqreturn_t cocci_id/* drivers/iio/light/isl29125.c 173 */;
	void *cocci_id/* drivers/iio/light/isl29125.c 173 */;
	int *cocci_id/* drivers/iio/light/isl29125.c 123 */;
	long cocci_id/* drivers/iio/light/isl29125.c 123 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/isl29125.c 122 */;
}
