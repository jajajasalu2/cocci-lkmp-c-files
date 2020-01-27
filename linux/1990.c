cocci_test_suite() {
	const struct ad5761_range_params cocci_id/* drivers/iio/dac/ad5761.c 80 */[];
	struct ad5761_state {
		struct spi_device *spi;
		struct regulator *vref_reg;
		bool use_intref;
		int vref;
		enum ad5761_voltage_range range;
		union {
			__be32 d32;
			u8 d8[4];
		} data[3]____cacheline_aligned;
	} cocci_id/* drivers/iio/dac/ad5761.c 62 */;
	enum ad5761_supported_device_ids{ID_AD5721, ID_AD5721R, ID_AD5761, ID_AD5761R,} cocci_id/* drivers/iio/dac/ad5761.c 46 */;
	struct spi_driver cocci_id/* drivers/iio/dac/ad5761.c 416 */;
	struct ad5761_range_params {
		int m;
		int c;
	} cocci_id/* drivers/iio/dac/ad5761.c 41 */;
	const struct spi_device_id cocci_id/* drivers/iio/dac/ad5761.c 407 */[];
	struct ad5761_chip_info {
		unsigned long int_vref;
		const struct iio_chan_spec channel;
	} cocci_id/* drivers/iio/dac/ad5761.c 36 */;
	struct ad5761_platform_data *cocci_id/* drivers/iio/dac/ad5761.c 353 */;
	enum ad5761_voltage_range cocci_id/* drivers/iio/dac/ad5761.c 352 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/ad5761.c 347 */;
	struct spi_device *cocci_id/* drivers/iio/dac/ad5761.c 345 */;
	const struct ad5761_chip_info *cocci_id/* drivers/iio/dac/ad5761.c 289 */;
	const struct ad5761_chip_info cocci_id/* drivers/iio/dac/ad5761.c 269 */[];
	const struct iio_info cocci_id/* drivers/iio/dac/ad5761.c 250 */;
	long cocci_id/* drivers/iio/dac/ad5761.c 201 */;
	int *cocci_id/* drivers/iio/dac/ad5761.c 199 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ad5761.c 198 */;
	struct spi_transfer cocci_id/* drivers/iio/dac/ad5761.c 137 */[];
	u8 cocci_id/* drivers/iio/dac/ad5761.c 134 */;
	u16 *cocci_id/* drivers/iio/dac/ad5761.c 134 */;
	struct ad5761_state *cocci_id/* drivers/iio/dac/ad5761.c 134 */;
	int cocci_id/* drivers/iio/dac/ad5761.c 134 */;
	u16 cocci_id/* drivers/iio/dac/ad5761.c 115 */;
}
