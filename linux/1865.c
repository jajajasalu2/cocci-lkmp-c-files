cocci_test_suite() {
	long cocci_id/* drivers/iio/adc/ti-adc128s052.c 61 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ti-adc128s052.c 60 */;
	int *cocci_id/* drivers/iio/adc/ti-adc128s052.c 60 */;
	u8 cocci_id/* drivers/iio/adc/ti-adc128s052.c 34 */;
	struct adc128 *cocci_id/* drivers/iio/adc/ti-adc128s052.c 34 */;
	int cocci_id/* drivers/iio/adc/ti-adc128s052.c 34 */;
	struct adc128 {
		struct spi_device *spi;
		struct regulator *reg;
		struct mutex lock;
		u8 buffer[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/adc/ti-adc128s052.c 25 */;
	struct spi_driver cocci_id/* drivers/iio/adc/ti-adc128s052.c 222 */;
	const struct acpi_device_id cocci_id/* drivers/iio/adc/ti-adc128s052.c 215 */[];
	const struct spi_device_id cocci_id/* drivers/iio/adc/ti-adc128s052.c 202 */[];
	struct adc128_configuration {
		const struct iio_chan_spec *channels;
		u8 num_channels;
	} cocci_id/* drivers/iio/adc/ti-adc128s052.c 20 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/ti-adc128s052.c 190 */[];
	unsigned long cocci_id/* drivers/iio/adc/ti-adc128s052.c 142 */;
	unsigned int cocci_id/* drivers/iio/adc/ti-adc128s052.c 137 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ti-adc128s052.c 136 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ti-adc128s052.c 134 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ti-adc128s052.c 130 */;
	const struct adc128_configuration cocci_id/* drivers/iio/adc/ti-adc128s052.c 124 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ti-adc128s052.c 112 */[];
}
