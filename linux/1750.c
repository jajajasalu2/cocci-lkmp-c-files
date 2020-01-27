cocci_test_suite() {
	char *cocci_id/* drivers/iio/proximity/mb1232.c 87 */;
	__be16 cocci_id/* drivers/iio/proximity/mb1232.c 60 */;
	s16 cocci_id/* drivers/iio/proximity/mb1232.c 55 */;
	struct mb1232_data *cocci_id/* drivers/iio/proximity/mb1232.c 48 */;
	struct iio_dev *cocci_id/* drivers/iio/proximity/mb1232.c 47 */;
	irqreturn_t cocci_id/* drivers/iio/proximity/mb1232.c 45 */;
	void *cocci_id/* drivers/iio/proximity/mb1232.c 45 */;
	int cocci_id/* drivers/iio/proximity/mb1232.c 45 */;
	struct mb1232_data {
		struct i2c_client *client;
		struct mutex lock;
		struct completion ranging;
		int irqnr;
	} cocci_id/* drivers/iio/proximity/mb1232.c 30 */;
	struct i2c_driver cocci_id/* drivers/iio/proximity/mb1232.c 260 */;
	const struct i2c_device_id cocci_id/* drivers/iio/proximity/mb1232.c 248 */[];
	const struct of_device_id cocci_id/* drivers/iio/proximity/mb1232.c 235 */[];
	struct device *cocci_id/* drivers/iio/proximity/mb1232.c 186 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/proximity/mb1232.c 181 */;
	struct i2c_client *cocci_id/* drivers/iio/proximity/mb1232.c 180 */;
	const struct iio_info cocci_id/* drivers/iio/proximity/mb1232.c 176 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/proximity/mb1232.c 160 */[];
	long cocci_id/* drivers/iio/proximity/mb1232.c 135 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/proximity/mb1232.c 134 */;
	int *cocci_id/* drivers/iio/proximity/mb1232.c 134 */;
	s16 cocci_id/* drivers/iio/proximity/mb1232.c 120 */[8];
	struct iio_poll_func *cocci_id/* drivers/iio/proximity/mb1232.c 113 */;
}
