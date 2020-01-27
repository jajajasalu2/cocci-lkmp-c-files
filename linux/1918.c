cocci_test_suite() {
	struct spi_driver cocci_id/* drivers/iio/adc/ti-ads7950.c 715 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/ti-ads7950.c 698 */[];
	const struct spi_device_id cocci_id/* drivers/iio/adc/ti-ads7950.c 681 */[];
	struct ti_ads7950_state {
		struct spi_device *spi;
		struct spi_transfer ring_xfer;
		struct spi_transfer scan_single_xfer[3];
		struct spi_message ring_msg;
		struct spi_message scan_single_msg;
		struct mutex slock;
		struct gpio_chip chip;
		struct regulator *reg;
		unsigned int vref_mv;
		unsigned int cmd_settings_bitmask;
		unsigned int gpio_cmd_settings_bitmask;
		u16 rx_buf[TI_ADS7950_MAX_CHAN + 2 + TI_ADS7950_TIMESTAMP_SIZE]
							____cacheline_aligned;
		u16 tx_buf[TI_ADS7950_MAX_CHAN + 2];
		u16 single_tx;
		u16 single_rx;
	} cocci_id/* drivers/iio/adc/ti-ads7950.c 66 */;
	const struct ti_ads7950_chip_info *cocci_id/* drivers/iio/adc/ti-ads7950.c 536 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ti-ads7950.c 535 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ti-ads7950.c 532 */;
	unsigned int cocci_id/* drivers/iio/adc/ti-ads7950.c 494 */;
	struct ti_ads7950_state *cocci_id/* drivers/iio/adc/ti-ads7950.c 471 */;
	struct gpio_chip *cocci_id/* drivers/iio/adc/ti-ads7950.c 468 */;
	int cocci_id/* drivers/iio/adc/ti-ads7950.c 468 */;
	void cocci_id/* drivers/iio/adc/ti-ads7950.c 406 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ti-ads7950.c 401 */;
	int *cocci_id/* drivers/iio/adc/ti-ads7950.c 369 */;
	long cocci_id/* drivers/iio/adc/ti-ads7950.c 369 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ti-ads7950.c 368 */;
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ti-ads7950.c 306 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ti-ads7950.c 304 */;
	void *cocci_id/* drivers/iio/adc/ti-ads7950.c 304 */;
	const unsigned long *cocci_id/* drivers/iio/adc/ti-ads7950.c 284 */;
	const struct ti_ads7950_chip_info cocci_id/* drivers/iio/adc/ti-ads7950.c 228 */[];
	enum ti_ads7950_id{TI_ADS7950, TI_ADS7951, TI_ADS7952, TI_ADS7953, TI_ADS7954, TI_ADS7955, TI_ADS7956, TI_ADS7957, TI_ADS7958, TI_ADS7959, TI_ADS7960, TI_ADS7961,} cocci_id/* drivers/iio/adc/ti-ads7950.c 121 */;
	struct ti_ads7950_chip_info {
		const struct iio_chan_spec *channels;
		unsigned int num_channels;
	} cocci_id/* drivers/iio/adc/ti-ads7950.c 116 */;
}
