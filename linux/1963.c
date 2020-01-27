cocci_test_suite() {
	enum ad5360_type{ID_AD5360, ID_AD5361, ID_AD5362, ID_AD5363, ID_AD5370, ID_AD5371, ID_AD5372, ID_AD5373,} cocci_id/* drivers/iio/dac/ad5360.c 89 */;
	struct ad5360_state {
		struct spi_device *spi;
		const struct ad5360_chip_info *chip_info;
		struct regulator_bulk_data vref_reg[3];
		unsigned int ctrl;
		union {
			__be32 d32;
			u8 d8[4];
		} data[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/dac/ad5360.c 73 */;
	struct ad5360_chip_info {
		struct iio_chan_spec channel_template;
		unsigned int num_channels;
		unsigned int channels_per_group;
		unsigned int num_vrefs;
	} cocci_id/* drivers/iio/dac/ad5360.c 57 */;
	struct spi_driver cocci_id/* drivers/iio/dac/ad5360.c 547 */;
	const struct spi_device_id cocci_id/* drivers/iio/dac/ad5360.c 534 */[];
	enum ad5360_type cocci_id/* drivers/iio/dac/ad5360.c 458 */;
	struct spi_device *cocci_id/* drivers/iio/dac/ad5360.c 456 */;
	struct iio_chan_spec cocci_id/* drivers/iio/dac/ad5360.c 440 */;
	unsigned int cocci_id/* drivers/iio/dac/ad5360.c 437 */;
	struct iio_chan_spec *cocci_id/* drivers/iio/dac/ad5360.c 436 */;
	struct ad5360_state *cocci_id/* drivers/iio/dac/ad5360.c 435 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/ad5360.c 433 */;
	int cocci_id/* drivers/iio/dac/ad5360.c 433 */;
	const char *constcocci_id/* drivers/iio/dac/ad5360.c 429 */[];
	const struct iio_info cocci_id/* drivers/iio/dac/ad5360.c 423 */;
	long cocci_id/* drivers/iio/dac/ad5360.c 370 */;
	int *cocci_id/* drivers/iio/dac/ad5360.c 368 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ad5360.c 367 */;
	const struct attribute_group cocci_id/* drivers/iio/dac/ad5360.c 306 */;
	struct attribute *cocci_id/* drivers/iio/dac/ad5360.c 301 */[];
	bool cocci_id/* drivers/iio/dac/ad5360.c 281 */;
	const char *cocci_id/* drivers/iio/dac/ad5360.c 278 */;
	size_t cocci_id/* drivers/iio/dac/ad5360.c 278 */;
	char *cocci_id/* drivers/iio/dac/ad5360.c 250 */;
	struct device_attribute *cocci_id/* drivers/iio/dac/ad5360.c 249 */;
	struct device *cocci_id/* drivers/iio/dac/ad5360.c 248 */;
	ssize_t cocci_id/* drivers/iio/dac/ad5360.c 248 */;
	struct spi_transfer cocci_id/* drivers/iio/dac/ad5360.c 221 */[];
	const struct ad5360_chip_info cocci_id/* drivers/iio/dac/ad5360.c 117 */[];
}
