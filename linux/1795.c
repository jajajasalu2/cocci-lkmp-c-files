cocci_test_suite() {
	const struct iio_event_spec cocci_id/* drivers/iio/light/tcs3472.c 70 */[];
	struct i2c_driver cocci_id/* drivers/iio/light/tcs3472.c 606 */;
	const struct i2c_device_id cocci_id/* drivers/iio/light/tcs3472.c 600 */[];
	struct tcs3472_data {
		struct i2c_client *client;
		struct mutex lock;
		u16 low_thresh;
		u16 high_thresh;
		u8 enable;
		u8 control;
		u8 atime;
		u8 apers;
		u16 buffer[8];
	} cocci_id/* drivers/iio/light/tcs3472.c 58 */;
	struct device *cocci_id/* drivers/iio/light/tcs3472.c 578 */;
	u8 cocci_id/* drivers/iio/light/tcs3472.c 544 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/tcs3472.c 442 */;
	struct i2c_client *cocci_id/* drivers/iio/light/tcs3472.c 441 */;
	const struct iio_info cocci_id/* drivers/iio/light/tcs3472.c 431 */;
	const struct attribute_group cocci_id/* drivers/iio/light/tcs3472.c 427 */;
	struct attribute *cocci_id/* drivers/iio/light/tcs3472.c 421 */[];
	size_t cocci_id/* drivers/iio/light/tcs3472.c 405 */;
	char *cocci_id/* drivers/iio/light/tcs3472.c 403 */;
	struct device_attribute *cocci_id/* drivers/iio/light/tcs3472.c 402 */;
	ssize_t cocci_id/* drivers/iio/light/tcs3472.c 401 */;
	struct iio_poll_func *cocci_id/* drivers/iio/light/tcs3472.c 373 */;
	struct tcs3472_data *cocci_id/* drivers/iio/light/tcs3472.c 355 */;
	struct iio_dev *cocci_id/* drivers/iio/light/tcs3472.c 354 */;
	irqreturn_t cocci_id/* drivers/iio/light/tcs3472.c 352 */;
	void *cocci_id/* drivers/iio/light/tcs3472.c 352 */;
	int cocci_id/* drivers/iio/light/tcs3472.c 352 */;
	unsigned int cocci_id/* drivers/iio/light/tcs3472.c 226 */;
	enum iio_event_info cocci_id/* drivers/iio/light/tcs3472.c 221 */;
	enum iio_event_direction cocci_id/* drivers/iio/light/tcs3472.c 221 */;
	int *cocci_id/* drivers/iio/light/tcs3472.c 221 */;
	enum iio_event_type cocci_id/* drivers/iio/light/tcs3472.c 220 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/tcs3472.c 220 */;
	long cocci_id/* drivers/iio/light/tcs3472.c 140 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/light/tcs3472.c 108 */[];
	const int cocci_id/* drivers/iio/light/tcs3472.c 106 */[];
}