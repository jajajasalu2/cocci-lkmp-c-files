cocci_test_suite() {
	struct stk8ba50_data {
		struct i2c_client *client;
		struct mutex lock;
		int range;
		u8 sample_rate_idx;
		struct iio_trigger *dready_trig;
		bool dready_trigger_on;
		s16 buffer[8];
	} cocci_id/* drivers/iio/accel/stk8ba50.c 87 */;
	const int cocci_id/* drivers/iio/accel/stk8ba50.c 81 */[];
	const struct {
		u8 reg_val;
		u16 samp_freq;
	} cocci_id/* drivers/iio/accel/stk8ba50.c 72 */[];
	const struct {
		u8 reg_val;
		u32 scale_val;
	} cocci_id/* drivers/iio/accel/stk8ba50.c 64 */[];
	struct i2c_driver cocci_id/* drivers/iio/accel/stk8ba50.c 550 */;
	const struct acpi_device_id cocci_id/* drivers/iio/accel/stk8ba50.c 543 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/accel/stk8ba50.c 537 */[];
	struct device *cocci_id/* drivers/iio/accel/stk8ba50.c 521 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/accel/stk8ba50.c 385 */;
	struct i2c_client *cocci_id/* drivers/iio/accel/stk8ba50.c 384 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/accel/stk8ba50.c 377 */;
	struct stk8ba50_data *cocci_id/* drivers/iio/accel/stk8ba50.c 372 */;
	struct iio_dev *cocci_id/* drivers/iio/accel/stk8ba50.c 370 */;
	int cocci_id/* drivers/iio/accel/stk8ba50.c 370 */;
	irqreturn_t cocci_id/* drivers/iio/accel/stk8ba50.c 352 */;
	void *cocci_id/* drivers/iio/accel/stk8ba50.c 352 */;
	u8 *cocci_id/* drivers/iio/accel/stk8ba50.c 327 */;
	struct iio_poll_func *cocci_id/* drivers/iio/accel/stk8ba50.c 313 */;
	const struct iio_info cocci_id/* drivers/iio/accel/stk8ba50.c 305 */;
	int *cocci_id/* drivers/iio/accel/stk8ba50.c 210 */;
	long cocci_id/* drivers/iio/accel/stk8ba50.c 210 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/accel/stk8ba50.c 209 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/accel/stk8ba50.c 177 */;
	bool cocci_id/* drivers/iio/accel/stk8ba50.c 156 */;
	struct iio_trigger *cocci_id/* drivers/iio/accel/stk8ba50.c 155 */;
	u8 cocci_id/* drivers/iio/accel/stk8ba50.c 141 */;
	const struct attribute_group cocci_id/* drivers/iio/accel/stk8ba50.c 137 */;
	struct attribute *cocci_id/* drivers/iio/accel/stk8ba50.c 131 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/accel/stk8ba50.c 120 */[];
}
