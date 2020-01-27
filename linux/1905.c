cocci_test_suite() {
	__be32 cocci_id/* drivers/iio/adc/ti-adc161s626.c 93 */;
	void *cocci_id/* drivers/iio/adc/ti-adc161s626.c 85 */;
	__be16 cocci_id/* drivers/iio/adc/ti-adc161s626.c 83 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ti-adc161s626.c 77 */;
	int *cocci_id/* drivers/iio/adc/ti-adc161s626.c 77 */;
	struct ti_adc_data {
		struct iio_dev *indio_dev;
		struct spi_device *spi;
		struct regulator *ref;
		u8 read_size;
		u8 shift;
		u8 buffer[16]____cacheline_aligned;
	} cocci_id/* drivers/iio/adc/ti-adc161s626.c 65 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ti-adc161s626.c 31 */[];
	enum{TI_ADC141S626, TI_ADC161S626,} cocci_id/* drivers/iio/adc/ti-adc161s626.c 26 */;
	struct spi_driver cocci_id/* drivers/iio/adc/ti-adc161s626.c 259 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/ti-adc161s626.c 252 */[];
	const struct of_device_id cocci_id/* drivers/iio/adc/ti-adc161s626.c 245 */[];
	struct ti_adc_data *cocci_id/* drivers/iio/adc/ti-adc161s626.c 174 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ti-adc161s626.c 173 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ti-adc161s626.c 171 */;
	int cocci_id/* drivers/iio/adc/ti-adc161s626.c 171 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ti-adc161s626.c 167 */;
	long cocci_id/* drivers/iio/adc/ti-adc161s626.c 132 */;
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ti-adc161s626.c 113 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ti-adc161s626.c 111 */;
}
