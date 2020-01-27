cocci_test_suite() {
	const int cocci_id/* drivers/iio/adc/ad7124.c 95 */[3];
	const unsigned int cocci_id/* drivers/iio/adc/ad7124.c 91 */[8];
	enum ad7124_power_mode{AD7124_LOW_POWER, AD7124_MID_POWER, AD7124_FULL_POWER,} cocci_id/* drivers/iio/adc/ad7124.c 85 */;
	enum ad7124_ref_sel{AD7124_REFIN1, AD7124_REFIN2, AD7124_INT_REF, AD7124_AVDD_REF,} cocci_id/* drivers/iio/adc/ad7124.c 78 */;
	enum ad7124_ids{ID_AD7124_4, ID_AD7124_8,} cocci_id/* drivers/iio/adc/ad7124.c 73 */;
	struct spi_driver cocci_id/* drivers/iio/adc/ad7124.c 689 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/ad7124.c 682 */[];
	const struct spi_device_id cocci_id/* drivers/iio/adc/ad7124.c 675 */[];
	const struct spi_device_id *cocci_id/* drivers/iio/adc/ad7124.c 571 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ad7124.c 569 */;
	unsigned int cocci_id/* drivers/iio/adc/ad7124.c 448 */[2];
	struct ad7124_channel_config *cocci_id/* drivers/iio/adc/ad7124.c 447 */;
	struct iio_chan_spec *cocci_id/* drivers/iio/adc/ad7124.c 446 */;
	struct device_node *cocci_id/* drivers/iio/adc/ad7124.c 442 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ad7124.c 441 */;
	struct ad7124_state *cocci_id/* drivers/iio/adc/ad7124.c 407 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ad7124.c 373 */;
	const struct attribute_group cocci_id/* drivers/iio/adc/ad7124.c 369 */;
	struct attribute *cocci_id/* drivers/iio/adc/ad7124.c 364 */[];
	int *cocci_id/* drivers/iio/adc/ad7124.c 284 */;
	long cocci_id/* drivers/iio/adc/ad7124.c 284 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ad7124.c 283 */;
	const struct ad_sigma_delta_info cocci_id/* drivers/iio/adc/ad7124.c 220 */;
	struct ad7124_state cocci_id/* drivers/iio/adc/ad7124.c 211 */;
	struct ad_sigma_delta *cocci_id/* drivers/iio/adc/ad7124.c 209 */;
	enum ad_sigma_delta_mode cocci_id/* drivers/iio/adc/ad7124.c 199 */;
	unsigned long cocci_id/* drivers/iio/adc/ad7124.c 181 */;
	unsigned int cocci_id/* drivers/iio/adc/ad7124.c 160 */;
	const int *cocci_id/* drivers/iio/adc/ad7124.c 159 */;
	int cocci_id/* drivers/iio/adc/ad7124.c 159 */;
	struct ad7124_chip_info cocci_id/* drivers/iio/adc/ad7124.c 150 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ad7124.c 133 */;
	struct ad7124_state {
		const struct ad7124_chip_info *chip_info;
		struct ad_sigma_delta sd;
		struct ad7124_channel_config *channel_config;
		struct regulator *vref[4];
		struct clk *mclk;
		unsigned int adc_control;
		unsigned int num_channels;
	} cocci_id/* drivers/iio/adc/ad7124.c 123 */;
	struct ad7124_channel_config {
		enum ad7124_ref_sel refsel;
		bool bipolar;
		bool buf_positive;
		bool buf_negative;
		unsigned int ain;
		unsigned int vref_mv;
		unsigned int pga_bits;
		unsigned int odr;
	} cocci_id/* drivers/iio/adc/ad7124.c 112 */;
	struct ad7124_chip_info {
		unsigned int num_inputs;
	} cocci_id/* drivers/iio/adc/ad7124.c 108 */;
	const char *const cocci_id/* drivers/iio/adc/ad7124.c 101 */[];
}
