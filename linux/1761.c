cocci_test_suite() {
	const struct iio_chan_spec cocci_id/* drivers/iio/humidity/hdc100x.c 84 */[];
	const struct attribute_group cocci_id/* drivers/iio/humidity/hdc100x.c 80 */;
	struct attribute *cocci_id/* drivers/iio/humidity/hdc100x.c 73 */[];
	const struct {
		int shift;
		int mask;
	} cocci_id/* drivers/iio/humidity/hdc100x.c 50 */[2];
	const int cocci_id/* drivers/iio/humidity/hdc100x.c 44 */[][3];
	struct i2c_driver cocci_id/* drivers/iio/humidity/hdc100x.c 424 */;
	const struct of_device_id cocci_id/* drivers/iio/humidity/hdc100x.c 414 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/humidity/hdc100x.c 403 */[];
	const struct i2c_device_id *cocci_id/* drivers/iio/humidity/hdc100x.c 358 */;
	const struct iio_info cocci_id/* drivers/iio/humidity/hdc100x.c 351 */;
	struct hdc100x_data {
		struct i2c_client *client;
		struct mutex lock;
		u16 config;
		int adc_int_us[2];
	} cocci_id/* drivers/iio/humidity/hdc100x.c 34 */;
	u8 *cocci_id/* drivers/iio/humidity/hdc100x.c 336 */;
	s16 cocci_id/* drivers/iio/humidity/hdc100x.c 325 */[8];
	struct iio_poll_func *cocci_id/* drivers/iio/humidity/hdc100x.c 319 */;
	irqreturn_t cocci_id/* drivers/iio/humidity/hdc100x.c 317 */;
	void *cocci_id/* drivers/iio/humidity/hdc100x.c 317 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/humidity/hdc100x.c 312 */;
	struct hdc100x_data *cocci_id/* drivers/iio/humidity/hdc100x.c 278 */;
	struct iio_dev *cocci_id/* drivers/iio/humidity/hdc100x.c 276 */;
	int cocci_id/* drivers/iio/humidity/hdc100x.c 276 */;
	long cocci_id/* drivers/iio/humidity/hdc100x.c 193 */;
	int *cocci_id/* drivers/iio/humidity/hdc100x.c 192 */;
	char *cocci_id/* drivers/iio/humidity/hdc100x.c 178 */;
	__be16 cocci_id/* drivers/iio/humidity/hdc100x.c 165 */;
	struct i2c_client *cocci_id/* drivers/iio/humidity/hdc100x.c 162 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/humidity/hdc100x.c 160 */;
	const unsigned long cocci_id/* drivers/iio/humidity/hdc100x.c 124 */[];
}
