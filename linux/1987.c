cocci_test_suite() {
	int *cocci_id/* drivers/iio/dac/ti-dac7612.c 69 */;
	long cocci_id/* drivers/iio/dac/ti-dac7612.c 69 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ti-dac7612.c 68 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/dac/ti-dac7612.c 62 */[];
	u16 cocci_id/* drivers/iio/dac/ti-dac7612.c 32 */;
	struct dac7612 *cocci_id/* drivers/iio/dac/ti-dac7612.c 32 */;
	int cocci_id/* drivers/iio/dac/ti-dac7612.c 32 */;
	struct dac7612 {
		struct spi_device *spi;
		struct gpio_desc *loaddacs;
		uint16_t cache[2];
		uint8_t data[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/dac/ti-dac7612.c 20 */;
	struct spi_driver cocci_id/* drivers/iio/dac/ti-dac7612.c 172 */;
	const struct of_device_id cocci_id/* drivers/iio/dac/ti-dac7612.c 164 */[];
	const struct spi_device_id cocci_id/* drivers/iio/dac/ti-dac7612.c 158 */[];
	struct iio_dev *cocci_id/* drivers/iio/dac/ti-dac7612.c 118 */;
	struct spi_device *cocci_id/* drivers/iio/dac/ti-dac7612.c 116 */;
	const struct iio_info cocci_id/* drivers/iio/dac/ti-dac7612.c 111 */;
}
