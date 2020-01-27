cocci_test_suite() {
	unsigned int *cocci_id/* drivers/iio/dac/ad5449.c 99 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/ad5449.c 98 */;
	unsigned int cocci_id/* drivers/iio/dac/ad5449.c 98 */;
	int cocci_id/* drivers/iio/dac/ad5449.c 98 */;
	enum ad5449_type{ID_AD5426, ID_AD5429, ID_AD5432, ID_AD5439, ID_AD5443, ID_AD5449,} cocci_id/* drivers/iio/dac/ad5449.c 75 */;
	struct ad5449 {
		struct spi_device *spi;
		const struct ad5449_chip_info *chip_info;
		struct regulator_bulk_data vref_reg[AD5449_MAX_VREFS];
		bool has_sdo;
		uint16_t dac_cache[AD5449_MAX_CHANNELS];
		__be16 data[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/dac/ad5449.c 60 */;
	struct ad5449_chip_info {
		const struct iio_chan_spec *channels;
		unsigned int num_channels;
		bool has_ctrl;
	} cocci_id/* drivers/iio/dac/ad5449.c 45 */;
	struct spi_driver cocci_id/* drivers/iio/dac/ad5449.c 354 */;
	const struct spi_device_id cocci_id/* drivers/iio/dac/ad5449.c 342 */[];
	const struct spi_device_id *cocci_id/* drivers/iio/dac/ad5449.c 270 */;
	struct ad5449_platform_data *cocci_id/* drivers/iio/dac/ad5449.c 269 */;
	struct spi_device *cocci_id/* drivers/iio/dac/ad5449.c 267 */;
	const char *cocci_id/* drivers/iio/dac/ad5449.c 256 */;
	const struct ad5449_chip_info cocci_id/* drivers/iio/dac/ad5449.c 223 */[];
	const struct iio_info cocci_id/* drivers/iio/dac/ad5449.c 192 */;
	struct regulator_bulk_data *cocci_id/* drivers/iio/dac/ad5449.c 134 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ad5449.c 131 */;
	int *cocci_id/* drivers/iio/dac/ad5449.c 131 */;
	long cocci_id/* drivers/iio/dac/ad5449.c 131 */;
	struct spi_transfer cocci_id/* drivers/iio/dac/ad5449.c 103 */[];
	struct ad5449 *cocci_id/* drivers/iio/dac/ad5449.c 101 */;
}
