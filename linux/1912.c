cocci_test_suite() {
	struct spi_device *cocci_id/* drivers/iio/adc/ti-ads8344.c 77 */;
	bool cocci_id/* drivers/iio/adc/ti-ads8344.c 75 */;
	struct ads8344 *cocci_id/* drivers/iio/adc/ti-ads8344.c 74 */;
	int cocci_id/* drivers/iio/adc/ti-ads8344.c 74 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ti-ads8344.c 55 */[];
	struct ads8344 {
		struct spi_device *spi;
		struct regulator *reg;
		struct mutex lock;
		u8 tx_buf ____cacheline_aligned;
		u16 rx_buf;
	} cocci_id/* drivers/iio/adc/ti-ads8344.c 22 */;
	struct spi_driver cocci_id/* drivers/iio/adc/ti-ads8344.c 192 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/ti-ads8344.c 186 */[];
	struct iio_dev *cocci_id/* drivers/iio/adc/ti-ads8344.c 136 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ti-ads8344.c 130 */;
	long cocci_id/* drivers/iio/adc/ti-ads8344.c 101 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ti-ads8344.c 100 */;
	int *cocci_id/* drivers/iio/adc/ti-ads8344.c 100 */;
}
