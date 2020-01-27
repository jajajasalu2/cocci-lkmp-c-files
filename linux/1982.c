cocci_test_suite() {
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ad7303.c 99 */;
	struct ad7303_state *cocci_id/* drivers/iio/dac/ad7303.c 98 */;
	int cocci_id/* drivers/iio/dac/ad7303.c 98 */;
	size_t cocci_id/* drivers/iio/dac/ad7303.c 73 */;
	const char *cocci_id/* drivers/iio/dac/ad7303.c 72 */;
	uintptr_t cocci_id/* drivers/iio/dac/ad7303.c 63 */;
	char *cocci_id/* drivers/iio/dac/ad7303.c 63 */;
	ssize_t cocci_id/* drivers/iio/dac/ad7303.c 62 */;
	uint8_t cocci_id/* drivers/iio/dac/ad7303.c 53 */;
	unsigned int cocci_id/* drivers/iio/dac/ad7303.c 52 */;
	struct ad7303_state {
		struct spi_device *spi;
		uint16_t config;
		uint8_t dac_cache[2];
		struct regulator *vdd_reg;
		struct regulator *vref_reg;
		struct mutex lock;
		__be16 data ____cacheline_aligned;
	} cocci_id/* drivers/iio/dac/ad7303.c 36 */;
	struct spi_driver cocci_id/* drivers/iio/dac/ad7303.c 299 */;
	const struct spi_device_id cocci_id/* drivers/iio/dac/ad7303.c 293 */[];
	const struct of_device_id cocci_id/* drivers/iio/dac/ad7303.c 287 */[];
	struct ad7303_platform_data *cocci_id/* drivers/iio/dac/ad7303.c 231 */;
	bool cocci_id/* drivers/iio/dac/ad7303.c 205 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/ad7303.c 203 */;
	const struct spi_device_id *cocci_id/* drivers/iio/dac/ad7303.c 202 */;
	struct spi_device *cocci_id/* drivers/iio/dac/ad7303.c 200 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/dac/ad7303.c 195 */[];
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/dac/ad7303.c 168 */[];
	const struct iio_info cocci_id/* drivers/iio/dac/ad7303.c 163 */;
	int *cocci_id/* drivers/iio/dac/ad7303.c 113 */;
	long cocci_id/* drivers/iio/dac/ad7303.c 113 */;
}
