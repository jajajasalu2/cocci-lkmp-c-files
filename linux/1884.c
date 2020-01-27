cocci_test_suite() {
	struct adcxx1c_model {
		const struct iio_chan_spec *channels;
		int bits;
	} cocci_id/* drivers/iio/adc/ti-adc081c.c 94 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ti-adc081c.c 87 */[];
	long cocci_id/* drivers/iio/adc/ti-adc081c.c 42 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ti-adc081c.c 41 */;
	int *cocci_id/* drivers/iio/adc/ti-adc081c.c 41 */;
	struct adc081c {
		struct i2c_client *i2c;
		struct regulator *ref;
		int bits;
	} cocci_id/* drivers/iio/adc/ti-adc081c.c 30 */;
	struct i2c_driver cocci_id/* drivers/iio/adc/ti-adc081c.c 255 */;
	const struct acpi_device_id cocci_id/* drivers/iio/adc/ti-adc081c.c 246 */[];
	const struct of_device_id cocci_id/* drivers/iio/adc/ti-adc081c.c 236 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/adc/ti-adc081c.c 227 */[];
	const struct acpi_device_id *cocci_id/* drivers/iio/adc/ti-adc081c.c 157 */;
	struct adcxx1c_model *cocci_id/* drivers/iio/adc/ti-adc081c.c 150 */;
	struct adc081c *cocci_id/* drivers/iio/adc/ti-adc081c.c 149 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ti-adc081c.c 148 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/adc/ti-adc081c.c 146 */;
	struct i2c_client *cocci_id/* drivers/iio/adc/ti-adc081c.c 145 */;
	int cocci_id/* drivers/iio/adc/ti-adc081c.c 145 */;
	u16 cocci_id/* drivers/iio/adc/ti-adc081c.c 131 */[8];
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ti-adc081c.c 128 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ti-adc081c.c 126 */;
	void *cocci_id/* drivers/iio/adc/ti-adc081c.c 126 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ti-adc081c.c 122 */;
	struct adcxx1c_model cocci_id/* drivers/iio/adc/ti-adc081c.c 116 */[];
	enum adcxx1c_model_id{ADC081C=0, ADC101C=1, ADC121C=2,} cocci_id/* drivers/iio/adc/ti-adc081c.c 110 */;
}
