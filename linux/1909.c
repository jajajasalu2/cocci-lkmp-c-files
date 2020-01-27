cocci_test_suite() {
	struct spi_transfer cocci_id/* drivers/iio/adc/max1118.c 67 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/max1118.c 57 */[];
	struct max1118 {
		struct spi_device *spi;
		struct mutex lock;
		struct regulator *reg;
		u8 data ____cacheline_aligned;
	} cocci_id/* drivers/iio/adc/max1118.c 34 */;
	struct spi_driver cocci_id/* drivers/iio/adc/max1118.c 290 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/max1118.c 280 */[];
	enum max1118_id{max1117, max1118, max1119,} cocci_id/* drivers/iio/adc/max1118.c 28 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/max1118.c 270 */[];
	u8 cocci_id/* drivers/iio/adc/max1118.c 162 */[16];
	struct iio_poll_func *cocci_id/* drivers/iio/adc/max1118.c 159 */;
	irqreturn_t cocci_id/* drivers/iio/adc/max1118.c 157 */;
	void *cocci_id/* drivers/iio/adc/max1118.c 157 */;
	const struct iio_info cocci_id/* drivers/iio/adc/max1118.c 153 */;
	int *cocci_id/* drivers/iio/adc/max1118.c 128 */;
	long cocci_id/* drivers/iio/adc/max1118.c 128 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/max1118.c 127 */;
	const struct spi_device_id *cocci_id/* drivers/iio/adc/max1118.c 108 */;
	struct max1118 *cocci_id/* drivers/iio/adc/max1118.c 107 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/max1118.c 106 */;
	struct spi_device *cocci_id/* drivers/iio/adc/max1118.c 104 */;
	int cocci_id/* drivers/iio/adc/max1118.c 104 */;
}
