cocci_test_suite() {
	struct spi_transfer cocci_id/* drivers/iio/gyro/adxrs450.c 95 */[];
	u16 *cocci_id/* drivers/iio/gyro/adxrs450.c 90 */;
	u8 cocci_id/* drivers/iio/gyro/adxrs450.c 89 */;
	struct adxrs450_state {
		struct spi_device *us;
		struct mutex buf_lock;
		__be32 tx ____cacheline_aligned;
		__be32 rx;
	} cocci_id/* drivers/iio/gyro/adxrs450.c 73 */;
	enum{ID_ADXRS450, ID_ADXRS453,} cocci_id/* drivers/iio/gyro/adxrs450.c 61 */;
	struct spi_driver cocci_id/* drivers/iio/gyro/adxrs450.c 454 */;
	const struct spi_device_id cocci_id/* drivers/iio/gyro/adxrs450.c 447 */[];
	struct spi_device *cocci_id/* drivers/iio/gyro/adxrs450.c 411 */;
	const struct iio_info cocci_id/* drivers/iio/gyro/adxrs450.c 406 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/gyro/adxrs450.c 370 */[2][2];
	s16 cocci_id/* drivers/iio/gyro/adxrs450.c 310 */;
	long cocci_id/* drivers/iio/gyro/adxrs450.c 307 */;
	int *cocci_id/* drivers/iio/gyro/adxrs450.c 305 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/gyro/adxrs450.c 304 */;
	struct adxrs450_state *cocci_id/* drivers/iio/gyro/adxrs450.c 240 */;
	u16 cocci_id/* drivers/iio/gyro/adxrs450.c 238 */;
	u32 cocci_id/* drivers/iio/gyro/adxrs450.c 237 */;
	struct iio_dev *cocci_id/* drivers/iio/gyro/adxrs450.c 235 */;
	int cocci_id/* drivers/iio/gyro/adxrs450.c 235 */;
	struct spi_transfer cocci_id/* drivers/iio/gyro/adxrs450.c 209 */;
	u32 *cocci_id/* drivers/iio/gyro/adxrs450.c 205 */;
	char cocci_id/* drivers/iio/gyro/adxrs450.c 205 */;
	s16 *cocci_id/* drivers/iio/gyro/adxrs450.c 165 */;
}
