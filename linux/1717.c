cocci_test_suite() {
	u16 cocci_id/* drivers/iio/imu/adis16460.c 96 */;
	struct adis16460 {
		const struct adis16460_chip_info *chip_info;
		struct adis adis;
	} cocci_id/* drivers/iio/imu/adis16460.c 68 */;
	struct adis16460_chip_info {
		unsigned int num_channels;
		const struct iio_chan_spec *channels;
		unsigned int gyro_max_val;
		unsigned int gyro_max_scale;
		unsigned int accel_max_val;
		unsigned int accel_max_scale;
	} cocci_id/* drivers/iio/imu/adis16460.c 59 */;
	struct spi_driver cocci_id/* drivers/iio/imu/adis16460.c 476 */;
	const struct of_device_id cocci_id/* drivers/iio/imu/adis16460.c 470 */[];
	const struct spi_device_id cocci_id/* drivers/iio/imu/adis16460.c 464 */[];
	struct spi_device *cocci_id/* drivers/iio/imu/adis16460.c 403 */;
	const struct adis_data cocci_id/* drivers/iio/imu/adis16460.c 386 */;
	const char *const cocci_id/* drivers/iio/imu/adis16460.c 377 */[];
	bool cocci_id/* drivers/iio/imu/adis16460.c 322 */;
	struct adis *cocci_id/* drivers/iio/imu/adis16460.c 322 */;
	const struct iio_info cocci_id/* drivers/iio/imu/adis16460.c 315 */;
	const struct adis16460_chip_info cocci_id/* drivers/iio/imu/adis16460.c 301 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/imu/adis16460.c 290 */[];
	enum{ADIS16460_SCAN_GYRO_X, ADIS16460_SCAN_GYRO_Y, ADIS16460_SCAN_GYRO_Z, ADIS16460_SCAN_ACCEL_X, ADIS16460_SCAN_ACCEL_Y, ADIS16460_SCAN_ACCEL_Z, ADIS16460_SCAN_TEMP,} cocci_id/* drivers/iio/imu/adis16460.c 234 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/imu/adis16460.c 190 */;
	long cocci_id/* drivers/iio/imu/adis16460.c 190 */;
	unsigned int cocci_id/* drivers/iio/imu/adis16460.c 176 */;
	uint16_t cocci_id/* drivers/iio/imu/adis16460.c 174 */;
	int *cocci_id/* drivers/iio/imu/adis16460.c 171 */;
	struct adis16460 *cocci_id/* drivers/iio/imu/adis16460.c 131 */;
	struct iio_dev *cocci_id/* drivers/iio/imu/adis16460.c 129 */;
	int cocci_id/* drivers/iio/imu/adis16460.c 129 */;
	u32 cocci_id/* drivers/iio/imu/adis16460.c 114 */;
	u64 *cocci_id/* drivers/iio/imu/adis16460.c 111 */;
	void *cocci_id/* drivers/iio/imu/adis16460.c 111 */;
}
