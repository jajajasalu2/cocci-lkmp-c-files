cocci_test_suite() {
	enum{AD7787, AD7788, AD7789, AD7790, AD7791,} cocci_id/* drivers/iio/adc/ad7791.c 94 */;
	struct spi_driver cocci_id/* drivers/iio/adc/ad7791.c 435 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/ad7791.c 425 */[];
	struct ad7791_state *cocci_id/* drivers/iio/adc/ad7791.c 352 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ad7791.c 351 */;
	struct ad7791_platform_data *cocci_id/* drivers/iio/adc/ad7791.c 350 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ad7791.c 348 */;
	int cocci_id/* drivers/iio/adc/ad7791.c 348 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ad7791.c 311 */;
	const struct attribute_group cocci_id/* drivers/iio/adc/ad7791.c 307 */;
	struct attribute *cocci_id/* drivers/iio/adc/ad7791.c 302 */[];
	unsigned int cocci_id/* drivers/iio/adc/ad7791.c 215 */;
	bool cocci_id/* drivers/iio/adc/ad7791.c 214 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ad7791.c 211 */;
	int *cocci_id/* drivers/iio/adc/ad7791.c 211 */;
	long cocci_id/* drivers/iio/adc/ad7791.c 211 */;
	const struct ad_sigma_delta_info cocci_id/* drivers/iio/adc/ad7791.c 202 */;
	enum ad_sigma_delta_mode cocci_id/* drivers/iio/adc/ad7791.c 179 */;
	struct ad_sigma_delta *cocci_id/* drivers/iio/adc/ad7791.c 171 */;
	struct ad7791_state cocci_id/* drivers/iio/adc/ad7791.c 168 */;
	const int cocci_id/* drivers/iio/adc/ad7791.c 155 */[8][2];
	struct ad7791_state {
		struct ad_sigma_delta sd;
		uint8_t mode;
		uint8_t filter;
		struct regulator *reg;
		const struct ad7791_chip_info *info;
	} cocci_id/* drivers/iio/adc/ad7791.c 146 */;
	const struct ad7791_chip_info cocci_id/* drivers/iio/adc/ad7791.c 115 */[];
	struct ad7791_chip_info {
		const struct iio_chan_spec *channels;
		unsigned int num_channels;
		enum ad7791_chip_info_flags flags;
	} cocci_id/* drivers/iio/adc/ad7791.c 109 */;
	enum ad7791_chip_info_flags{AD7791_FLAG_HAS_FILTER=(1 << 0), AD7791_FLAG_HAS_BUFFER=(1 << 1), AD7791_FLAG_HAS_UNIPOLAR=(1 << 2), AD7791_FLAG_HAS_BURNOUT=(1 << 3),} cocci_id/* drivers/iio/adc/ad7791.c 102 */;
}
