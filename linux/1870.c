cocci_test_suite() {
	enum ad7887_supported_device_ids{ID_AD7887,} cocci_id/* drivers/iio/adc/ad7887.c 72 */;
	struct ad7887_state {
		struct spi_device *spi;
		const struct ad7887_chip_info *chip_info;
		struct regulator *reg;
		struct spi_transfer xfer[4];
		struct spi_message msg[3];
		struct spi_message *ring_msg;
		unsigned char tx_cmd_buf[4];
		unsigned char data[ALIGN(4, sizeof(s64)) + sizeof(s64)]
		____cacheline_aligned;
	} cocci_id/* drivers/iio/adc/ad7887.c 53 */;
	struct ad7887_chip_info {
		u16 int_vref_mv;
		struct iio_chan_spec channel[3];
	} cocci_id/* drivers/iio/adc/ad7887.c 48 */;
	enum ad7887_channels{AD7887_CH0, AD7887_CH0_CH1, AD7887_CH1,} cocci_id/* drivers/iio/adc/ad7887.c 37 */;
	struct spi_driver cocci_id/* drivers/iio/adc/ad7887.c 354 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/ad7887.c 348 */[];
	uint8_t cocci_id/* drivers/iio/adc/ad7887.c 238 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ad7887.c 237 */;
	struct ad7887_state *cocci_id/* drivers/iio/adc/ad7887.c 236 */;
	struct ad7887_platform_data *cocci_id/* drivers/iio/adc/ad7887.c 235 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ad7887.c 233 */;
	int cocci_id/* drivers/iio/adc/ad7887.c 233 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ad7887.c 229 */;
	const struct ad7887_chip_info cocci_id/* drivers/iio/adc/ad7887.c 187 */[];
	long cocci_id/* drivers/iio/adc/ad7887.c 151 */;
	int *cocci_id/* drivers/iio/adc/ad7887.c 149 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ad7887.c 148 */;
	unsigned cocci_id/* drivers/iio/adc/ad7887.c 138 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/adc/ad7887.c 131 */;
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ad7887.c 114 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ad7887.c 112 */;
	void *cocci_id/* drivers/iio/adc/ad7887.c 112 */;
}
