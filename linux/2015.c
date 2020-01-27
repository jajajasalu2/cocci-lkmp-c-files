cocci_test_suite() {
	struct stk8312_data {
		struct i2c_client *client;
		struct mutex lock;
		u8 range;
		u8 sample_rate_idx;
		u8 mode;
		struct iio_trigger *dready_trig;
		bool dready_trigger_on;
		s8 buffer[16];
	} cocci_id/* drivers/iio/accel/stk8312.c 98 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/accel/stk8312.c 91 */[];
	const struct {
		int val;
		int val2;
	} cocci_id/* drivers/iio/accel/stk8312.c 66 */[];
	struct i2c_driver cocci_id/* drivers/iio/accel/stk8312.c 654 */;
	const struct acpi_device_id cocci_id/* drivers/iio/accel/stk8312.c 647 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/accel/stk8312.c 641 */[];
	struct device *cocci_id/* drivers/iio/accel/stk8312.c 625 */;
	const int cocci_id/* drivers/iio/accel/stk8312.c 62 */[][2];
	const struct i2c_device_id *cocci_id/* drivers/iio/accel/stk8312.c 501 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/accel/stk8312.c 493 */;
	struct stk8312_data *cocci_id/* drivers/iio/accel/stk8312.c 488 */;
	struct iio_dev *cocci_id/* drivers/iio/accel/stk8312.c 486 */;
	int cocci_id/* drivers/iio/accel/stk8312.c 486 */;
	irqreturn_t cocci_id/* drivers/iio/accel/stk8312.c 468 */;
	void *cocci_id/* drivers/iio/accel/stk8312.c 468 */;
	struct iio_poll_func *cocci_id/* drivers/iio/accel/stk8312.c 427 */;
	const struct iio_info cocci_id/* drivers/iio/accel/stk8312.c 419 */;
	int *cocci_id/* drivers/iio/accel/stk8312.c 333 */;
	long cocci_id/* drivers/iio/accel/stk8312.c 333 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/accel/stk8312.c 332 */;
	u8 cocci_id/* drivers/iio/accel/stk8312.c 316 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/accel/stk8312.c 235 */;
	bool cocci_id/* drivers/iio/accel/stk8312.c 214 */;
	struct iio_trigger *cocci_id/* drivers/iio/accel/stk8312.c 213 */;
	struct i2c_client *cocci_id/* drivers/iio/accel/stk8312.c 127 */;
	const struct attribute_group cocci_id/* drivers/iio/accel/stk8312.c 119 */;
	struct attribute *cocci_id/* drivers/iio/accel/stk8312.c 113 */[];
}
