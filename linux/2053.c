cocci_test_suite() {
	char cocci_id/* drivers/iio/gyro/adis16136.c 77 */[20];
	loff_t *cocci_id/* drivers/iio/gyro/adis16136.c 73 */;
	char __user *cocci_id/* drivers/iio/gyro/adis16136.c 73 */;
	size_t cocci_id/* drivers/iio/gyro/adis16136.c 73 */;
	struct file *cocci_id/* drivers/iio/gyro/adis16136.c 72 */;
	struct adis16136 {
		const struct adis16136_chip_info *chip_info;
		struct adis adis;
	} cocci_id/* drivers/iio/gyro/adis16136.c 64 */;
	struct adis16136_chip_info {
		unsigned int precision;
		unsigned int fullscale;
	} cocci_id/* drivers/iio/gyro/adis16136.c 59 */;
	struct spi_driver cocci_id/* drivers/iio/gyro/adis16136.c 573 */;
	const struct spi_device_id cocci_id/* drivers/iio/gyro/adis16136.c 564 */[];
	const struct spi_device_id *cocci_id/* drivers/iio/gyro/adis16136.c 503 */;
	struct spi_device *cocci_id/* drivers/iio/gyro/adis16136.c 501 */;
	const struct adis16136_chip_info cocci_id/* drivers/iio/gyro/adis16136.c 482 */[];
	enum adis16136_id{ID_ADIS16133, ID_ADIS16135, ID_ADIS16136, ID_ADIS16137,} cocci_id/* drivers/iio/gyro/adis16136.c 475 */;
	const struct adis_data cocci_id/* drivers/iio/gyro/adis16136.c 457 */;
	const char *const cocci_id/* drivers/iio/gyro/adis16136.c 450 */[];
	const struct iio_info cocci_id/* drivers/iio/gyro/adis16136.c 402 */;
	const struct attribute_group cocci_id/* drivers/iio/gyro/adis16136.c 398 */;
	struct attribute *cocci_id/* drivers/iio/gyro/adis16136.c 393 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/gyro/adis16136.c 357 */[];
	enum{ADIS16136_SCAN_GYRO, ADIS16136_SCAN_TEMP,} cocci_id/* drivers/iio/gyro/adis16136.c 352 */;
	uint32_t cocci_id/* drivers/iio/gyro/adis16136.c 299 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/gyro/adis16136.c 296 */;
	long cocci_id/* drivers/iio/gyro/adis16136.c 296 */;
	uint16_t cocci_id/* drivers/iio/gyro/adis16136.c 274 */;
	unsigned int cocci_id/* drivers/iio/gyro/adis16136.c 273 */;
	int *cocci_id/* drivers/iio/gyro/adis16136.c 270 */;
	const unsigned cocci_id/* drivers/iio/gyro/adis16136.c 241 */[];
	struct device_attribute *cocci_id/* drivers/iio/gyro/adis16136.c 223 */;
	char *cocci_id/* drivers/iio/gyro/adis16136.c 223 */;
	struct device *cocci_id/* drivers/iio/gyro/adis16136.c 222 */;
	ssize_t cocci_id/* drivers/iio/gyro/adis16136.c 222 */;
	const char *cocci_id/* drivers/iio/gyro/adis16136.c 203 */;
	unsigned int *cocci_id/* drivers/iio/gyro/adis16136.c 188 */;
	struct adis16136 *cocci_id/* drivers/iio/gyro/adis16136.c 149 */;
	struct iio_dev *cocci_id/* drivers/iio/gyro/adis16136.c 147 */;
	int cocci_id/* drivers/iio/gyro/adis16136.c 147 */;
	u64 *cocci_id/* drivers/iio/gyro/adis16136.c 129 */;
	void *cocci_id/* drivers/iio/gyro/adis16136.c 129 */;
	u16 cocci_id/* drivers/iio/gyro/adis16136.c 114 */;
	const struct file_operations cocci_id/* drivers/iio/gyro/adis16136.c 104 */;
}
