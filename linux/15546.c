cocci_test_suite() {
	struct ad9832_state {
		struct spi_device *spi;
		struct regulator *avdd;
		struct regulator *dvdd;
		struct clk *mclk;
		unsigned short ctrl_fp;
		unsigned short ctrl_ss;
		unsigned short ctrl_src;
		struct spi_transfer xfer;
		struct spi_message msg;
		struct spi_transfer freq_xfer[4];
		struct spi_message freq_msg;
		struct spi_transfer phase_xfer[2];
		struct spi_message phase_msg;
		struct mutex lock;
		union {
			__be16 freq_data[4]____cacheline_aligned;
			__be16 phase_data[2];
			__be16 data;
		};
	} cocci_id/* drivers/staging/iio/frequency/ad9832.c 95 */;
	struct spi_driver cocci_id/* drivers/staging/iio/frequency/ad9832.c 461 */;
	const struct spi_device_id cocci_id/* drivers/staging/iio/frequency/ad9832.c 454 */[];
	struct ad9832_state *cocci_id/* drivers/staging/iio/frequency/ad9832.c 301 */;
	struct iio_dev *cocci_id/* drivers/staging/iio/frequency/ad9832.c 300 */;
	struct ad9832_platform_data *cocci_id/* drivers/staging/iio/frequency/ad9832.c 299 */;
	struct spi_device *cocci_id/* drivers/staging/iio/frequency/ad9832.c 297 */;
	int cocci_id/* drivers/staging/iio/frequency/ad9832.c 297 */;
	const struct iio_info cocci_id/* drivers/staging/iio/frequency/ad9832.c 293 */;
	const struct attribute_group cocci_id/* drivers/staging/iio/frequency/ad9832.c 289 */;
	struct attribute *cocci_id/* drivers/staging/iio/frequency/ad9832.c 273 */[];
	u32 cocci_id/* drivers/staging/iio/frequency/ad9832.c 185 */;
	struct iio_dev_attr *cocci_id/* drivers/staging/iio/frequency/ad9832.c 176 */;
	const char *cocci_id/* drivers/staging/iio/frequency/ad9832.c 172 */;
	size_t cocci_id/* drivers/staging/iio/frequency/ad9832.c 172 */;
	struct device_attribute *cocci_id/* drivers/staging/iio/frequency/ad9832.c 171 */;
	struct device *cocci_id/* drivers/staging/iio/frequency/ad9832.c 171 */;
	ssize_t cocci_id/* drivers/staging/iio/frequency/ad9832.c 171 */;
	unsigned int cocci_id/* drivers/staging/iio/frequency/ad9832.c 130 */;
	u64 cocci_id/* drivers/staging/iio/frequency/ad9832.c 123 */;
	unsigned long long cocci_id/* drivers/staging/iio/frequency/ad9832.c 123 */;
	unsigned long cocci_id/* drivers/staging/iio/frequency/ad9832.c 121 */;
}
