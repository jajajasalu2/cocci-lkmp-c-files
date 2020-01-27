cocci_test_suite() {
	const struct iio_chan_spec cocci_id/* drivers/iio/dac/ad5764.c 94 */[];
	enum ad5764_type{ID_AD5744, ID_AD5744R, ID_AD5764, ID_AD5764R,} cocci_id/* drivers/iio/dac/ad5764.c 67 */;
	struct ad5764_state {
		struct spi_device *spi;
		const struct ad5764_chip_info *chip_info;
		struct regulator_bulk_data vref_reg[2];
		union {
			__be32 d32;
			u8 d8[4];
		} data[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/dac/ad5764.c 52 */;
	struct ad5764_chip_info {
		unsigned long int_vref;
		const struct iio_chan_spec *channels;
	} cocci_id/* drivers/iio/dac/ad5764.c 39 */;
	struct spi_driver cocci_id/* drivers/iio/dac/ad5764.c 355 */;
	const struct spi_device_id cocci_id/* drivers/iio/dac/ad5764.c 346 */[];
	struct iio_dev *cocci_id/* drivers/iio/dac/ad5764.c 275 */;
	enum ad5764_type cocci_id/* drivers/iio/dac/ad5764.c 274 */;
	struct spi_device *cocci_id/* drivers/iio/dac/ad5764.c 272 */;
	const struct iio_info cocci_id/* drivers/iio/dac/ad5764.c 267 */;
	int *cocci_id/* drivers/iio/dac/ad5764.c 221 */;
	unsigned int cocci_id/* drivers/iio/dac/ad5764.c 212 */;
	struct ad5764_state *cocci_id/* drivers/iio/dac/ad5764.c 211 */;
	u16 cocci_id/* drivers/iio/dac/ad5764.c 208 */;
	const int cocci_id/* drivers/iio/dac/ad5764.c 186 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ad5764.c 167 */;
	long cocci_id/* drivers/iio/dac/ad5764.c 167 */;
	int cocci_id/* drivers/iio/dac/ad5764.c 167 */;
	struct spi_transfer cocci_id/* drivers/iio/dac/ad5764.c 143 */[];
	unsigned int *cocci_id/* drivers/iio/dac/ad5764.c 139 */;
	const struct ad5764_chip_info cocci_id/* drivers/iio/dac/ad5764.c 104 */[];
}
