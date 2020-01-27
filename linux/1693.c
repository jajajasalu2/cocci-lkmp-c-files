cocci_test_suite() {
	const struct regmap_config cocci_id/* drivers/iio/health/max30100.c 96 */;
	bool cocci_id/* drivers/iio/health/max30100.c 79 */;
	struct device *cocci_id/* drivers/iio/health/max30100.c 79 */;
	struct max30100_data {
		struct i2c_client *client;
		struct iio_dev *indio_dev;
		struct mutex lock;
		struct regmap *regmap;
		__be16 buffer[2];
	} cocci_id/* drivers/iio/health/max30100.c 70 */;
	struct i2c_driver cocci_id/* drivers/iio/health/max30100.c 502 */;
	const struct of_device_id cocci_id/* drivers/iio/health/max30100.c 496 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/health/max30100.c 490 */[];
	struct iio_buffer *cocci_id/* drivers/iio/health/max30100.c 422 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/health/max30100.c 419 */;
	struct i2c_client *cocci_id/* drivers/iio/health/max30100.c 418 */;
	const struct iio_info cocci_id/* drivers/iio/health/max30100.c 414 */;
	long cocci_id/* drivers/iio/health/max30100.c 380 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/health/max30100.c 379 */;
	unsigned int *cocci_id/* drivers/iio/health/max30100.c 275 */;
	unsigned int cocci_id/* drivers/iio/health/max30100.c 271 */[2];
	struct device_node *cocci_id/* drivers/iio/health/max30100.c 270 */;
	int *cocci_id/* drivers/iio/health/max30100.c 247 */;
	irqreturn_t cocci_id/* drivers/iio/health/max30100.c 225 */;
	void *cocci_id/* drivers/iio/health/max30100.c 225 */;
	u8 *cocci_id/* drivers/iio/health/max30100.c 220 */;
	unsigned int cocci_id/* drivers/iio/health/max30100.c 199 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/health/max30100.c 192 */;
	struct max30100_data *cocci_id/* drivers/iio/health/max30100.c 175 */;
	struct iio_dev *cocci_id/* drivers/iio/health/max30100.c 173 */;
	int cocci_id/* drivers/iio/health/max30100.c 173 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/health/max30100.c 116 */[];
	const unsigned long cocci_id/* drivers/iio/health/max30100.c 114 */[];
	const unsigned int cocci_id/* drivers/iio/health/max30100.c 108 */[];
}
