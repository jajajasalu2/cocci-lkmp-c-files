cocci_test_suite() {
	struct ads124s_private {
		const struct ads124s_chip_info *chip_info;
		struct gpio_desc *reset_gpio;
		struct spi_device *spi;
		struct mutex lock;
		u8 data[5]____cacheline_aligned;
	} cocci_id/* drivers/iio/adc/ti-ads124s08.c 95 */;
	struct ads124s_chip_info {
		const struct iio_chan_spec *channels;
		unsigned int num_channels;
	} cocci_id/* drivers/iio/adc/ti-ads124s08.c 90 */;
	enum ads124s_id{ADS124S08_ID, ADS124S06_ID,} cocci_id/* drivers/iio/adc/ti-ads124s08.c 85 */;
	struct spi_driver cocci_id/* drivers/iio/adc/ti-ads124s08.c 364 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/ti-ads124s08.c 357 */[];
	const struct spi_device_id cocci_id/* drivers/iio/adc/ti-ads124s08.c 350 */[];
	const struct spi_device_id *cocci_id/* drivers/iio/adc/ti-ads124s08.c 308 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ti-ads124s08.c 307 */;
	struct ads124s_private *cocci_id/* drivers/iio/adc/ti-ads124s08.c 306 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ti-ads124s08.c 304 */;
	int cocci_id/* drivers/iio/adc/ti-ads124s08.c 304 */;
	u32 cocci_id/* drivers/iio/adc/ti-ads124s08.c 273 */[ADS124S08_MAX_CHANNELS + sizeof(s64) / sizeof(u16)];
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ti-ads124s08.c 270 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ti-ads124s08.c 268 */;
	void *cocci_id/* drivers/iio/adc/ti-ads124s08.c 268 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ti-ads124s08.c 264 */;
	int *cocci_id/* drivers/iio/adc/ti-ads124s08.c 218 */;
	long cocci_id/* drivers/iio/adc/ti-ads124s08.c 218 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ti-ads124s08.c 217 */;
	struct spi_transfer cocci_id/* drivers/iio/adc/ti-ads124s08.c 192 */[];
	u32 cocci_id/* drivers/iio/adc/ti-ads124s08.c 191 */;
	unsigned int cocci_id/* drivers/iio/adc/ti-ads124s08.c 187 */;
	u8 cocci_id/* drivers/iio/adc/ti-ads124s08.c 152 */;
	const struct ads124s_chip_info cocci_id/* drivers/iio/adc/ti-ads124s08.c 141 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ti-ads124s08.c 117 */[];
}
