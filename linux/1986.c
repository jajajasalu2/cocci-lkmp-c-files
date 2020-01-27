cocci_test_suite() {
	long cocci_id/* drivers/iio/dac/m62332.c 79 */;
	int *cocci_id/* drivers/iio/dac/m62332.c 77 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/m62332.c 76 */;
	u8 cocci_id/* drivers/iio/dac/m62332.c 37 */[2];
	u8 cocci_id/* drivers/iio/dac/m62332.c 33 */;
	struct i2c_driver cocci_id/* drivers/iio/dac/m62332.c 249 */;
	const struct i2c_device_id cocci_id/* drivers/iio/dac/m62332.c 243 */[];
	struct m62332_data {
		struct i2c_client *client;
		struct regulator *vcc;
		struct mutex mutex;
		u8 raw[M62332_CHANNELS];
#ifdef CONFIG_PM_SLEEP
		u8 save[M62332_CHANNELS];
#endif
	} cocci_id/* drivers/iio/dac/m62332.c 23 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/m62332.c 190 */;
	struct m62332_data *cocci_id/* drivers/iio/dac/m62332.c 189 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/dac/m62332.c 187 */;
	struct i2c_client *cocci_id/* drivers/iio/dac/m62332.c 186 */;
	int cocci_id/* drivers/iio/dac/m62332.c 186 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/dac/m62332.c 181 */[M62332_CHANNELS];
	const struct iio_info cocci_id/* drivers/iio/dac/m62332.c 165 */;
	struct device *cocci_id/* drivers/iio/dac/m62332.c 145 */;
}
