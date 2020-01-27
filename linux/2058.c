cocci_test_suite() {
	struct spi_driver cocci_id/* drivers/iio/gyro/adis16260.c 433 */;
	const struct spi_device_id cocci_id/* drivers/iio/gyro/adis16260.c 422 */[];
	struct iio_dev *cocci_id/* drivers/iio/gyro/adis16260.c 359 */;
	struct adis16260 *cocci_id/* drivers/iio/gyro/adis16260.c 358 */;
	const struct spi_device_id *cocci_id/* drivers/iio/gyro/adis16260.c 357 */;
	struct spi_device *cocci_id/* drivers/iio/gyro/adis16260.c 355 */;
	int cocci_id/* drivers/iio/gyro/adis16260.c 355 */;
	const struct adis_data cocci_id/* drivers/iio/gyro/adis16260.c 335 */;
	const char *const cocci_id/* drivers/iio/gyro/adis16260.c 325 */[];
	const struct iio_info cocci_id/* drivers/iio/gyro/adis16260.c 319 */;
	s16 cocci_id/* drivers/iio/gyro/adis16260.c 201 */;
	u8 cocci_id/* drivers/iio/gyro/adis16260.c 200 */;
	struct adis *cocci_id/* drivers/iio/gyro/adis16260.c 198 */;
	const struct adis16260_chip_info *cocci_id/* drivers/iio/gyro/adis16260.c 197 */;
	long cocci_id/* drivers/iio/gyro/adis16260.c 194 */;
	int *cocci_id/* drivers/iio/gyro/adis16260.c 193 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/gyro/adis16260.c 192 */;
	const u8 cocci_id/* drivers/iio/gyro/adis16260.c 187 */[][2];
	u16 cocci_id/* drivers/iio/gyro/adis16260.c 178 */;
	const struct adis16260_chip_info cocci_id/* drivers/iio/gyro/adis16260.c 152 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/gyro/adis16260.c 122 */[];
	enum adis16260_type{ADIS16251, ADIS16260, ADIS16266,} cocci_id/* drivers/iio/gyro/adis16260.c 116 */;
	struct adis16260 {
		const struct adis16260_chip_info *info;
		struct adis adis;
	} cocci_id/* drivers/iio/gyro/adis16260.c 110 */;
	struct adis16260_chip_info {
		unsigned int gyro_max_val;
		unsigned int gyro_max_scale;
		const struct iio_chan_spec *channels;
		unsigned int num_channels;
	} cocci_id/* drivers/iio/gyro/adis16260.c 103 */;
}
