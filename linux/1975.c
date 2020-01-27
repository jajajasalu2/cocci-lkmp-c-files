cocci_test_suite() {
	const struct iio_chan_spec cocci_id/* drivers/iio/dac/ad8801.c 99 */[];
	const struct iio_info cocci_id/* drivers/iio/dac/ad8801.c 84 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ad8801.c 62 */;
	int *cocci_id/* drivers/iio/dac/ad8801.c 62 */;
	long cocci_id/* drivers/iio/dac/ad8801.c 62 */;
	u8 cocci_id/* drivers/iio/dac/ad8801.c 33 */;
	unsigned char cocci_id/* drivers/iio/dac/ad8801.c 33 */;
	struct spi_driver cocci_id/* drivers/iio/dac/ad8801.c 218 */;
	const struct spi_device_id cocci_id/* drivers/iio/dac/ad8801.c 211 */[];
	struct ad8801_state {
		struct spi_device *spi;
		unsigned char dac_cache[8];
		unsigned int vrefh_mv;
		unsigned int vrefl_mv;
		struct regulator *vrefh_reg;
		struct regulator *vrefl_reg;
		__be16 data ____cacheline_aligned;
	} cocci_id/* drivers/iio/dac/ad8801.c 21 */;
	enum ad8801_device_ids{ID_AD8801, ID_AD8803,} cocci_id/* drivers/iio/dac/ad8801.c 16 */;
	const struct spi_device_id *cocci_id/* drivers/iio/dac/ad8801.c 114 */;
	struct ad8801_state *cocci_id/* drivers/iio/dac/ad8801.c 113 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/ad8801.c 112 */;
	struct spi_device *cocci_id/* drivers/iio/dac/ad8801.c 110 */;
	int cocci_id/* drivers/iio/dac/ad8801.c 110 */;
}
