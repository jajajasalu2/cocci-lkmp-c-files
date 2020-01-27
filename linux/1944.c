cocci_test_suite() {
	u8 cocci_id/* drivers/iio/pressure/hp206c.c 94 */[3];
	const char cocci_id/* drivers/iio/pressure/hp206c.c 78 */[];
	const int cocci_id/* drivers/iio/pressure/hp206c.c 77 */[];
	const struct hp206c_osr_setting cocci_id/* drivers/iio/pressure/hp206c.c 69 */[];
	struct hp206c_osr_setting {
		u8 osr_mask;
		unsigned int temp_conv_time_us;
		unsigned int pres_conv_time_us;
	} cocci_id/* drivers/iio/pressure/hp206c.c 62 */;
	struct hp206c_data {
		struct mutex mutex;
		struct i2c_client *client;
		int temp_osr_index;
		int pres_osr_index;
	} cocci_id/* drivers/iio/pressure/hp206c.c 55 */;
	struct i2c_driver cocci_id/* drivers/iio/pressure/hp206c.c 410 */;
	const struct acpi_device_id cocci_id/* drivers/iio/pressure/hp206c.c 403 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/pressure/hp206c.c 396 */[];
	const struct i2c_device_id *cocci_id/* drivers/iio/pressure/hp206c.c 354 */;
	const struct iio_info cocci_id/* drivers/iio/pressure/hp206c.c 347 */;
	const struct attribute_group cocci_id/* drivers/iio/pressure/hp206c.c 343 */;
	struct attribute *cocci_id/* drivers/iio/pressure/hp206c.c 338 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/pressure/hp206c.c 321 */[];
	const struct hp206c_osr_setting *cocci_id/* drivers/iio/pressure/hp206c.c 208 */;
	long cocci_id/* drivers/iio/pressure/hp206c.c 204 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/pressure/hp206c.c 203 */;
	int *cocci_id/* drivers/iio/pressure/hp206c.c 203 */;
	struct i2c_client *cocci_id/* drivers/iio/pressure/hp206c.c 173 */;
	struct hp206c_data *cocci_id/* drivers/iio/pressure/hp206c.c 172 */;
	unsigned int cocci_id/* drivers/iio/pressure/hp206c.c 169 */;
	u8 cocci_id/* drivers/iio/pressure/hp206c.c 168 */;
	struct iio_dev *cocci_id/* drivers/iio/pressure/hp206c.c 167 */;
	int cocci_id/* drivers/iio/pressure/hp206c.c 167 */;
	bool cocci_id/* drivers/iio/pressure/hp206c.c 125 */;
}
