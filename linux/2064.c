cocci_test_suite() {
	long cocci_id/* drivers/iio/gyro/adis16080.c 80 */;
	int *cocci_id/* drivers/iio/gyro/adis16080.c 78 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/gyro/adis16080.c 77 */;
	struct spi_transfer cocci_id/* drivers/iio/gyro/adis16080.c 56 */[];
	u16 cocci_id/* drivers/iio/gyro/adis16080.c 52 */;
	struct adis16080_state {
		struct spi_device *us;
		const struct adis16080_chip_info *info;
		struct mutex lock;
		__be16 buf ____cacheline_aligned;
	} cocci_id/* drivers/iio/gyro/adis16080.c 43 */;
	struct adis16080_chip_info {
		int scale_val;
		int scale_val2;
	} cocci_id/* drivers/iio/gyro/adis16080.c 31 */;
	struct spi_driver cocci_id/* drivers/iio/gyro/adis16080.c 230 */;
	const struct spi_device_id cocci_id/* drivers/iio/gyro/adis16080.c 223 */[];
	struct iio_dev *cocci_id/* drivers/iio/gyro/adis16080.c 191 */;
	struct adis16080_state *cocci_id/* drivers/iio/gyro/adis16080.c 190 */;
	const struct spi_device_id *cocci_id/* drivers/iio/gyro/adis16080.c 189 */;
	struct spi_device *cocci_id/* drivers/iio/gyro/adis16080.c 187 */;
	int cocci_id/* drivers/iio/gyro/adis16080.c 187 */;
	const struct adis16080_chip_info cocci_id/* drivers/iio/gyro/adis16080.c 174 */[];
	enum{ID_ADIS16080, ID_ADIS16100,} cocci_id/* drivers/iio/gyro/adis16080.c 169 */;
	const struct iio_info cocci_id/* drivers/iio/gyro/adis16080.c 165 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/gyro/adis16080.c 130 */[];
}
