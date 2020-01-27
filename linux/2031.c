cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/iio/accel/bma220_spi.c 97 */;
	void *cocci_id/* drivers/iio/accel/bma220_spi.c 97 */;
	const unsigned long cocci_id/* drivers/iio/accel/bma220_spi.c 92 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/accel/bma220_spi.c 80 */[];
	struct bma220_data {
		struct spi_device *spi_device;
		struct mutex lock;
		s8 buffer[16];
		u8 tx_buf[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/accel/bma220_spi.c 73 */;
	const int cocci_id/* drivers/iio/accel/bma220_spi.c 69 */[][4];
	const struct attribute_group cocci_id/* drivers/iio/accel/bma220_spi.c 65 */;
	struct attribute *cocci_id/* drivers/iio/accel/bma220_spi.c 60 */[];
	enum bma220_axis{AXIS_X, AXIS_Y, AXIS_Z,} cocci_id/* drivers/iio/accel/bma220_spi.c 52 */;
	struct spi_driver cocci_id/* drivers/iio/accel/bma220_spi.c 319 */;
	const struct acpi_device_id cocci_id/* drivers/iio/accel/bma220_spi.c 312 */[];
	const struct spi_device_id cocci_id/* drivers/iio/accel/bma220_spi.c 307 */[];
	struct device *cocci_id/* drivers/iio/accel/bma220_spi.c 292 */;
	struct bma220_data *cocci_id/* drivers/iio/accel/bma220_spi.c 227 */;
	struct iio_dev *cocci_id/* drivers/iio/accel/bma220_spi.c 226 */;
	struct spi_device *cocci_id/* drivers/iio/accel/bma220_spi.c 209 */;
	int cocci_id/* drivers/iio/accel/bma220_spi.c 209 */;
	const struct iio_info cocci_id/* drivers/iio/accel/bma220_spi.c 185 */;
	u8 cocci_id/* drivers/iio/accel/bma220_spi.c 126 */;
	int *cocci_id/* drivers/iio/accel/bma220_spi.c 123 */;
	long cocci_id/* drivers/iio/accel/bma220_spi.c 123 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/accel/bma220_spi.c 122 */;
	struct iio_poll_func *cocci_id/* drivers/iio/accel/bma220_spi.c 100 */;
}
