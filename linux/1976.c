cocci_test_suite() {
	struct ds4424_data *cocci_id/* drivers/iio/dac/ds4424.c 73 */;
	int *cocci_id/* drivers/iio/dac/ds4424.c 71 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/ds4424.c 70 */;
	int cocci_id/* drivers/iio/dac/ds4424.c 70 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/dac/ds4424.c 63 */[];
	struct ds4424_data {
		struct i2c_client *client;
		struct mutex lock;
		uint8_t save[DS4424_MAX_DAC_CHANNELS];
		struct regulator *vcc_reg;
		uint8_t raw[DS4424_MAX_DAC_CHANNELS];
	} cocci_id/* drivers/iio/dac/ds4424.c 55 */;
	enum ds4424_device_ids{ID_DS4422, ID_DS4424,} cocci_id/* drivers/iio/dac/ds4424.c 50 */;
	union ds4424_raw_data {
		struct {
			u8 dx:7;
			u8 source_bit:1;
		};
		u8 bits;
	} cocci_id/* drivers/iio/dac/ds4424.c 42 */;
	struct i2c_driver cocci_id/* drivers/iio/dac/ds4424.c 316 */;
	const struct of_device_id cocci_id/* drivers/iio/dac/ds4424.c 308 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/dac/ds4424.c 300 */[];
	const struct i2c_device_id *cocci_id/* drivers/iio/dac/ds4424.c 217 */;
	struct i2c_client *cocci_id/* drivers/iio/dac/ds4424.c 216 */;
	const struct iio_info cocci_id/* drivers/iio/dac/ds4424.c 211 */;
	struct device *cocci_id/* drivers/iio/dac/ds4424.c 192 */;
	int __maybe_unused cocci_id/* drivers/iio/dac/ds4424.c 192 */;
	union ds4424_raw_data cocci_id/* drivers/iio/dac/ds4424.c 111 */;
	long cocci_id/* drivers/iio/dac/ds4424.c 109 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ds4424.c 108 */;
}
