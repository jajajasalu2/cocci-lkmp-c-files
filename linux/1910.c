cocci_test_suite() {
	const struct of_device_id cocci_id/* drivers/iio/adc/max1027.c 83 */[];
	const struct spi_device_id cocci_id/* drivers/iio/adc/max1027.c 71 */[];
	enum max1027_id{max1027, max1029, max1031, max1227, max1229, max1231,} cocci_id/* drivers/iio/adc/max1027.c 62 */;
	struct spi_driver cocci_id/* drivers/iio/adc/max1027.c 520 */;
	struct spi_device *cocci_id/* drivers/iio/adc/max1027.c 420 */;
	const struct iio_info cocci_id/* drivers/iio/adc/max1027.c 414 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/adc/max1027.c 409 */;
	struct iio_poll_func *cocci_id/* drivers/iio/adc/max1027.c 393 */;
	irqreturn_t cocci_id/* drivers/iio/adc/max1027.c 391 */;
	void *cocci_id/* drivers/iio/adc/max1027.c 391 */;
	bool cocci_id/* drivers/iio/adc/max1027.c 359 */;
	struct iio_trigger *cocci_id/* drivers/iio/adc/max1027.c 359 */;
	u8 cocci_id/* drivers/iio/adc/max1027.c 344 */;
	u8 *cocci_id/* drivers/iio/adc/max1027.c 336 */;
	struct max1027_state *cocci_id/* drivers/iio/adc/max1027.c 335 */;
	unsigned *cocci_id/* drivers/iio/adc/max1027.c 333 */;
	unsigned cocci_id/* drivers/iio/adc/max1027.c 332 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/max1027.c 331 */;
	int cocci_id/* drivers/iio/adc/max1027.c 331 */;
	int *cocci_id/* drivers/iio/adc/max1027.c 293 */;
	long cocci_id/* drivers/iio/adc/max1027.c 293 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/max1027.c 292 */;
	struct max1027_state {
		const struct max1027_chip_info *info;
		struct spi_device *spi;
		struct iio_trigger *trig;
		__be16 *buffer;
		struct mutex lock;
		u8 reg ____cacheline_aligned;
	} cocci_id/* drivers/iio/adc/max1027.c 231 */;
	const struct max1027_chip_info cocci_id/* drivers/iio/adc/max1027.c 198 */[];
	struct max1027_chip_info {
		const struct iio_chan_spec *channels;
		unsigned int num_channels;
		const unsigned long *available_scan_masks;
	} cocci_id/* drivers/iio/adc/max1027.c 192 */;
	const unsigned long cocci_id/* drivers/iio/adc/max1027.c 177 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/max1027.c 153 */[];
}
