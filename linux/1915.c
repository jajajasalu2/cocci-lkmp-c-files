cocci_test_suite() {
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ti-tlc4541.c 92 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ti-tlc4541.c 90 */;
	void *cocci_id/* drivers/iio/adc/ti-tlc4541.c 90 */;
	const struct tlc4541_chip_info cocci_id/* drivers/iio/adc/ti-tlc4541.c 79 */[];
	enum tlc4541_id{TLC3541, TLC4541,} cocci_id/* drivers/iio/adc/ti-tlc4541.c 52 */;
	struct tlc4541_chip_info {
		const struct iio_chan_spec *channels;
		unsigned int num_channels;
	} cocci_id/* drivers/iio/adc/ti-tlc4541.c 47 */;
	struct tlc4541_state {
		struct spi_device *spi;
		struct regulator *reg;
		struct spi_transfer scan_single_xfer[3];
		struct spi_message scan_single_msg;
		__be16 rx_buf[8]____cacheline_aligned;
	} cocci_id/* drivers/iio/adc/ti-tlc4541.c 32 */;
	struct spi_driver cocci_id/* drivers/iio/adc/ti-tlc4541.c 254 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/ti-tlc4541.c 247 */[];
	const struct of_device_id cocci_id/* drivers/iio/adc/ti-tlc4541.c 239 */[];
	int8_t cocci_id/* drivers/iio/adc/ti-tlc4541.c 165 */;
	const struct tlc4541_chip_info *cocci_id/* drivers/iio/adc/ti-tlc4541.c 163 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ti-tlc4541.c 162 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ti-tlc4541.c 159 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ti-tlc4541.c 155 */;
	long cocci_id/* drivers/iio/adc/ti-tlc4541.c 126 */;
	int *cocci_id/* drivers/iio/adc/ti-tlc4541.c 124 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ti-tlc4541.c 123 */;
	struct tlc4541_state *cocci_id/* drivers/iio/adc/ti-tlc4541.c 109 */;
	int cocci_id/* drivers/iio/adc/ti-tlc4541.c 109 */;
}
