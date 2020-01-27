cocci_test_suite() {
	long cocci_id/* drivers/iio/dac/ltc1660.c 51 */;
	int *cocci_id/* drivers/iio/dac/ltc1660.c 49 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ltc1660.c 48 */;
	struct ltc1660_priv {
		struct spi_device *spi;
		struct regmap *regmap;
		struct regulator *vref_reg;
		unsigned int value[LTC1660_NUM_CHANNELS];
		unsigned int vref_mv;
	} cocci_id/* drivers/iio/dac/ltc1660.c 39 */;
	enum ltc1660_supported_device_ids{ID_LTC1660, ID_LTC1665,} cocci_id/* drivers/iio/dac/ltc1660.c 34 */;
	const struct regmap_config cocci_id/* drivers/iio/dac/ltc1660.c 29 */;
	struct spi_driver cocci_id/* drivers/iio/dac/ltc1660.c 236 */;
	const struct spi_device_id cocci_id/* drivers/iio/dac/ltc1660.c 229 */[];
	void *cocci_id/* drivers/iio/dac/ltc1660.c 223 */;
	const struct of_device_id cocci_id/* drivers/iio/dac/ltc1660.c 222 */[];
	const struct spi_device_id *cocci_id/* drivers/iio/dac/ltc1660.c 159 */;
	struct ltc1660_priv *cocci_id/* drivers/iio/dac/ltc1660.c 158 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/ltc1660.c 157 */;
	struct spi_device *cocci_id/* drivers/iio/dac/ltc1660.c 155 */;
	int cocci_id/* drivers/iio/dac/ltc1660.c 155 */;
	struct device *cocci_id/* drivers/iio/dac/ltc1660.c 147 */;
	int __maybe_unused cocci_id/* drivers/iio/dac/ltc1660.c 147 */;
	const struct iio_info cocci_id/* drivers/iio/dac/ltc1660.c 135 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/dac/ltc1660.c 130 */[][LTC1660_NUM_CHANNELS];
}
