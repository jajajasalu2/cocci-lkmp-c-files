cocci_test_suite() {
	struct spi_transfer cocci_id/* drivers/iio/adc/ad7949.c 96 */[];
	struct spi_message cocci_id/* drivers/iio/adc/ad7949.c 95 */;
	unsigned int cocci_id/* drivers/iio/adc/ad7949.c 89 */;
	int *cocci_id/* drivers/iio/adc/ad7949.c 88 */;
	u16 cocci_id/* drivers/iio/adc/ad7949.c 60 */;
	struct ad7949_adc_chip {
		struct mutex lock;
		struct regulator *vref;
		struct iio_dev *indio_dev;
		struct spi_device *spi;
		u8 resolution;
		u16 cfg;
		unsigned int current_channel;
		u16 buffer ____cacheline_aligned;
	} cocci_id/* drivers/iio/adc/ad7949.c 49 */;
	struct spi_driver cocci_id/* drivers/iio/adc/ad7949.c 325 */;
	const struct ad7949_adc_spec cocci_id/* drivers/iio/adc/ad7949.c 32 */[];
	const struct spi_device_id cocci_id/* drivers/iio/adc/ad7949.c 317 */[];
	const struct of_device_id cocci_id/* drivers/iio/adc/ad7949.c 309 */[];
	struct ad7949_adc_spec {
		u8 num_channels;
		u8 resolution;
	} cocci_id/* drivers/iio/adc/ad7949.c 27 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ad7949.c 237 */;
	const struct ad7949_adc_spec *cocci_id/* drivers/iio/adc/ad7949.c 235 */;
	struct device *cocci_id/* drivers/iio/adc/ad7949.c 234 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ad7949.c 232 */;
	struct ad7949_adc_chip *cocci_id/* drivers/iio/adc/ad7949.c 213 */;
	int cocci_id/* drivers/iio/adc/ad7949.c 213 */;
	enum{ID_AD7949=0, ID_AD7682, ID_AD7689,} cocci_id/* drivers/iio/adc/ad7949.c 21 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ad7949.c 208 */;
	unsigned int *cocci_id/* drivers/iio/adc/ad7949.c 194 */;
	long cocci_id/* drivers/iio/adc/ad7949.c 161 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ad7949.c 160 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ad7949.c 148 */[];
}
