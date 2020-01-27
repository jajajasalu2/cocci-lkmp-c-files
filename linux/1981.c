cocci_test_suite() {
	const struct ltc2632_state *cocci_id/* drivers/iio/dac/ltc2632.c 89 */;
	long cocci_id/* drivers/iio/dac/ltc2632.c 87 */;
	int *cocci_id/* drivers/iio/dac/ltc2632.c 85 */;
	u8 cocci_id/* drivers/iio/dac/ltc2632.c 66 */[3];
	u32 cocci_id/* drivers/iio/dac/ltc2632.c 65 */;
	u8 cocci_id/* drivers/iio/dac/ltc2632.c 63 */;
	u16 cocci_id/* drivers/iio/dac/ltc2632.c 63 */;
	enum ltc2632_supported_device_ids{ID_LTC2632L12, ID_LTC2632L10, ID_LTC2632L8, ID_LTC2632H12, ID_LTC2632H10, ID_LTC2632H8,} cocci_id/* drivers/iio/dac/ltc2632.c 53 */;
	struct ltc2632_state {
		struct spi_device *spi_dev;
		unsigned int powerdown_cache_mask;
		int vref_mv;
		struct regulator *vref_reg;
	} cocci_id/* drivers/iio/dac/ltc2632.c 46 */;
	struct spi_driver cocci_id/* drivers/iio/dac/ltc2632.c 347 */;
	struct ltc2632_chip_info {
		const struct iio_chan_spec *channels;
		const int vref_mv;
	} cocci_id/* drivers/iio/dac/ltc2632.c 34 */;
	const struct of_device_id cocci_id/* drivers/iio/dac/ltc2632.c 323 */[];
	const struct spi_device_id cocci_id/* drivers/iio/dac/ltc2632.c 312 */[];
	struct ltc2632_chip_info *cocci_id/* drivers/iio/dac/ltc2632.c 234 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/ltc2632.c 233 */;
	struct ltc2632_state *cocci_id/* drivers/iio/dac/ltc2632.c 232 */;
	struct spi_device *cocci_id/* drivers/iio/dac/ltc2632.c 230 */;
	int cocci_id/* drivers/iio/dac/ltc2632.c 230 */;
	const struct ltc2632_chip_info cocci_id/* drivers/iio/dac/ltc2632.c 203 */[];
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/dac/ltc2632.c 164 */[];
	const struct iio_info cocci_id/* drivers/iio/dac/ltc2632.c 159 */;
	bool cocci_id/* drivers/iio/dac/ltc2632.c 139 */;
	size_t cocci_id/* drivers/iio/dac/ltc2632.c 137 */;
	const char *cocci_id/* drivers/iio/dac/ltc2632.c 136 */;
	char *cocci_id/* drivers/iio/dac/ltc2632.c 125 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ltc2632.c 124 */;
	uintptr_t cocci_id/* drivers/iio/dac/ltc2632.c 123 */;
	ssize_t cocci_id/* drivers/iio/dac/ltc2632.c 122 */;
}
