cocci_test_suite() {
	u32 cocci_id/* drivers/iio/gyro/adis16130.c 74 */;
	long cocci_id/* drivers/iio/gyro/adis16130.c 71 */;
	int *cocci_id/* drivers/iio/gyro/adis16130.c 70 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/gyro/adis16130.c 69 */;
	struct spi_transfer cocci_id/* drivers/iio/gyro/adis16130.c 49 */;
	u8 cocci_id/* drivers/iio/gyro/adis16130.c 45 */;
	u32 *cocci_id/* drivers/iio/gyro/adis16130.c 45 */;
	struct adis16130_state {
		struct spi_device *us;
		struct mutex buf_lock;
		u8 buf[4]____cacheline_aligned;
	} cocci_id/* drivers/iio/gyro/adis16130.c 39 */;
	struct spi_driver cocci_id/* drivers/iio/gyro/adis16130.c 163 */;
	struct iio_dev *cocci_id/* drivers/iio/gyro/adis16130.c 142 */;
	struct adis16130_state *cocci_id/* drivers/iio/gyro/adis16130.c 141 */;
	struct spi_device *cocci_id/* drivers/iio/gyro/adis16130.c 139 */;
	int cocci_id/* drivers/iio/gyro/adis16130.c 139 */;
	const struct iio_info cocci_id/* drivers/iio/gyro/adis16130.c 135 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/gyro/adis16130.c 115 */[];
}
