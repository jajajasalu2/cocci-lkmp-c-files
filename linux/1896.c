cocci_test_suite() {
	struct ad7292_state {
		struct spi_device *spi;
		struct regulator *reg;
		unsigned short vref_mv;
		__be16 d16 ____cacheline_aligned;
		u8 d8[2];
	} cocci_id/* drivers/iio/adc/ad7292.c 78 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ad7292.c 50 */[];
	struct spi_driver cocci_id/* drivers/iio/adc/ad7292.c 338 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/ad7292.c 332 */[];
	const struct spi_device_id cocci_id/* drivers/iio/adc/ad7292.c 326 */[];
	bool cocci_id/* drivers/iio/adc/ad7292.c 260 */;
	struct device_node *cocci_id/* drivers/iio/adc/ad7292.c 259 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ad7292.c 258 */;
	struct ad7292_state *cocci_id/* drivers/iio/adc/ad7292.c 257 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ad7292.c 255 */;
	int cocci_id/* drivers/iio/adc/ad7292.c 255 */;
	void *cocci_id/* drivers/iio/adc/ad7292.c 248 */;
	void cocci_id/* drivers/iio/adc/ad7292.c 248 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ad7292.c 244 */;
	unsigned int cocci_id/* drivers/iio/adc/ad7292.c 205 */;
	int *cocci_id/* drivers/iio/adc/ad7292.c 202 */;
	long cocci_id/* drivers/iio/adc/ad7292.c 202 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ad7292.c 201 */;
	struct spi_transfer cocci_id/* drivers/iio/adc/ad7292.c 121 */[];
}
