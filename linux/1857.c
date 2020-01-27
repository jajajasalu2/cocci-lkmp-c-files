cocci_test_suite() {
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ad7298.c 74 */[];
	struct ad7298_state {
		struct spi_device *spi;
		struct regulator *reg;
		unsigned ext_ref;
		struct spi_transfer ring_xfer[10];
		struct spi_transfer scan_single_xfer[3];
		struct spi_message ring_msg;
		struct spi_message scan_single_msg;
		__be16 rx_buf[12]____cacheline_aligned;
		__be16 tx_buf[2];
	} cocci_id/* drivers/iio/adc/ad7298.c 41 */;
	struct spi_driver cocci_id/* drivers/iio/adc/ad7298.c 377 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/ad7298.c 371 */[];
	struct iio_dev *cocci_id/* drivers/iio/adc/ad7298.c 288 */;
	struct ad7298_platform_data *cocci_id/* drivers/iio/adc/ad7298.c 286 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ad7298.c 284 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ad7298.c 279 */;
	long cocci_id/* drivers/iio/adc/ad7298.c 234 */;
	int *cocci_id/* drivers/iio/adc/ad7298.c 232 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ad7298.c 231 */;
	struct ad7298_state *cocci_id/* drivers/iio/adc/ad7298.c 215 */;
	int cocci_id/* drivers/iio/adc/ad7298.c 215 */;
	u8 *cocci_id/* drivers/iio/adc/ad7298.c 194 */;
	__be16 cocci_id/* drivers/iio/adc/ad7298.c 189 */;
	unsigned cocci_id/* drivers/iio/adc/ad7298.c 173 */;
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ad7298.c 155 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ad7298.c 153 */;
	void *cocci_id/* drivers/iio/adc/ad7298.c 153 */;
	unsigned short cocci_id/* drivers/iio/adc/ad7298.c 109 */;
	const unsigned long *cocci_id/* drivers/iio/adc/ad7298.c 105 */;
}
