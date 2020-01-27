cocci_test_suite() {
	enum ad7923_id{AD7904, AD7914, AD7924,} cocci_id/* drivers/iio/adc/ad7923.c 77 */;
	struct ad7923_chip_info {
		const struct iio_chan_spec *channels;
		unsigned int num_channels;
	} cocci_id/* drivers/iio/adc/ad7923.c 72 */;
	struct ad7923_state {
		struct spi_device *spi;
		struct spi_transfer ring_xfer[5];
		struct spi_transfer scan_single_xfer[2];
		struct spi_message ring_msg;
		struct spi_message scan_single_msg;
		struct regulator *reg;
		unsigned int settings;
		__be16 rx_buf[4]____cacheline_aligned;
		__be16 tx_buf[4];
	} cocci_id/* drivers/iio/adc/ad7923.c 53 */;
	struct spi_driver cocci_id/* drivers/iio/adc/ad7923.c 355 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/ad7923.c 346 */[];
	const struct ad7923_chip_info *cocci_id/* drivers/iio/adc/ad7923.c 270 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ad7923.c 269 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ad7923.c 266 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ad7923.c 261 */;
	long cocci_id/* drivers/iio/adc/ad7923.c 228 */;
	int *cocci_id/* drivers/iio/adc/ad7923.c 226 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ad7923.c 225 */;
	struct ad7923_state *cocci_id/* drivers/iio/adc/ad7923.c 208 */;
	int cocci_id/* drivers/iio/adc/ad7923.c 208 */;
	unsigned cocci_id/* drivers/iio/adc/ad7923.c 191 */;
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ad7923.c 173 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ad7923.c 171 */;
	void *cocci_id/* drivers/iio/adc/ad7923.c 171 */;
	const unsigned long *cocci_id/* drivers/iio/adc/ad7923.c 132 */;
	const struct ad7923_chip_info cocci_id/* drivers/iio/adc/ad7923.c 113 */[];
}
