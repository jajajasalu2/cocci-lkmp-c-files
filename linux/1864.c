cocci_test_suite() {
	enum ad_sigma_delta_mode cocci_id/* drivers/iio/adc/ad7780.c 85 */;
	struct ad7780_state cocci_id/* drivers/iio/adc/ad7780.c 81 */;
	enum ad7780_supported_device_ids{ID_AD7170, ID_AD7171, ID_AD7780, ID_AD7781,} cocci_id/* drivers/iio/adc/ad7780.c 72 */;
	struct ad7780_state {
		const struct ad7780_chip_info *chip_info;
		struct regulator *reg;
		struct gpio_desc *powerdown_gpio;
		struct gpio_desc *gain_gpio;
		struct gpio_desc *filter_gpio;
		unsigned int gain;
		unsigned int odr;
		unsigned int int_vref_mv;
		struct ad_sigma_delta sd;
	} cocci_id/* drivers/iio/adc/ad7780.c 59 */;
	struct ad7780_chip_info {
		struct iio_chan_spec channel;
		unsigned int pattern_mask;
		unsigned int pattern;
		bool is_ad778x;
	} cocci_id/* drivers/iio/adc/ad7780.c 52 */;
	const unsigned int cocci_id/* drivers/iio/adc/ad7780.c 49 */[2];
	struct spi_driver cocci_id/* drivers/iio/adc/ad7780.c 364 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/ad7780.c 355 */[];
	struct iio_dev *cocci_id/* drivers/iio/adc/ad7780.c 286 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ad7780.c 283 */;
	struct device *cocci_id/* drivers/iio/adc/ad7780.c 245 */;
	struct ad7780_state *cocci_id/* drivers/iio/adc/ad7780.c 245 */;
	int cocci_id/* drivers/iio/adc/ad7780.c 245 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ad7780.c 240 */;
	const struct ad7780_chip_info cocci_id/* drivers/iio/adc/ad7780.c 213 */[];
	const struct ad_sigma_delta_info cocci_id/* drivers/iio/adc/ad7780.c 202 */;
	const struct ad7780_chip_info *cocci_id/* drivers/iio/adc/ad7780.c 188 */;
	unsigned int cocci_id/* drivers/iio/adc/ad7780.c 185 */;
	struct ad_sigma_delta *cocci_id/* drivers/iio/adc/ad7780.c 184 */;
	unsigned long long cocci_id/* drivers/iio/adc/ad7780.c 147 */;
	long cocci_id/* drivers/iio/adc/ad7780.c 109 */;
	int *cocci_id/* drivers/iio/adc/ad7780.c 107 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ad7780.c 106 */;
}
