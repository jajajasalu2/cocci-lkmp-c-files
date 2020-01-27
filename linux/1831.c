cocci_test_suite() {
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ad7266.c 84 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ad7266.c 82 */;
	void *cocci_id/* drivers/iio/adc/ad7266.c 82 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/adc/ad7266.c 75 */;
	struct spi_driver cocci_id/* drivers/iio/adc/ad7266.c 510 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/ad7266.c 503 */[];
	unsigned int cocci_id/* drivers/iio/adc/ad7266.c 387 */;
	struct ad7266_platform_data *cocci_id/* drivers/iio/adc/ad7266.c 384 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ad7266.c 382 */;
	const char *constcocci_id/* drivers/iio/adc/ad7266.c 378 */[];
	int cocci_id/* drivers/iio/adc/ad7266.c 363 */;
	const struct ad7266_chan_info *cocci_id/* drivers/iio/adc/ad7266.c 362 */;
	bool cocci_id/* drivers/iio/adc/ad7266.c 361 */;
	struct ad7266_state *cocci_id/* drivers/iio/adc/ad7266.c 360 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ad7266.c 358 */;
	void cocci_id/* drivers/iio/adc/ad7266.c 358 */;
	const struct ad7266_chan_info cocci_id/* drivers/iio/adc/ad7266.c 315 */[];
	struct ad7266_chan_info {
		const struct iio_chan_spec *channels;
		unsigned int num_channels;
		const unsigned long *scan_masks;
	} cocci_id/* drivers/iio/adc/ad7266.c 306 */;
	const unsigned long cocci_id/* drivers/iio/adc/ad7266.c 284 */[];
	const struct iio_info cocci_id/* drivers/iio/adc/ad7266.c 279 */;
	struct ad7266_state {
		struct spi_device *spi;
		struct regulator *reg;
		unsigned long vref_mv;
		struct spi_transfer single_xfer[3];
		struct spi_message single_msg;
		enum ad7266_range range;
		enum ad7266_mode mode;
		bool fixed_addr;
		struct gpio gpios[3];
		struct {
			__be16 sample[2];
			s64 timestamp;
		} data ____cacheline_aligned;
	} cocci_id/* drivers/iio/adc/ad7266.c 26 */;
	unsigned long cocci_id/* drivers/iio/adc/ad7266.c 151 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ad7266.c 148 */;
	int *cocci_id/* drivers/iio/adc/ad7266.c 148 */;
	long cocci_id/* drivers/iio/adc/ad7266.c 148 */;
	const unsigned long *cocci_id/* drivers/iio/adc/ad7266.c 124 */;
}
