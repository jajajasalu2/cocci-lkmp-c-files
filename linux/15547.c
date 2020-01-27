cocci_test_suite() {
	enum ad9834_supported_device_ids{ID_AD9833, ID_AD9834, ID_AD9837, ID_AD9838,} cocci_id/* drivers/staging/iio/frequency/ad9834.c 95 */;
	struct ad9834_state {
		struct spi_device *spi;
		struct regulator *reg;
		struct clk *mclk;
		unsigned short control;
		unsigned short devid;
		struct spi_transfer xfer;
		struct spi_message msg;
		struct spi_transfer freq_xfer[2];
		struct spi_message freq_msg;
		struct mutex lock;
		__be16 data ____cacheline_aligned;
		__be16 freq_data[2];
	} cocci_id/* drivers/staging/iio/frequency/ad9834.c 71 */;
	struct spi_driver cocci_id/* drivers/staging/iio/frequency/ad9834.c 538 */;
	const struct of_device_id cocci_id/* drivers/staging/iio/frequency/ad9834.c 528 */[];
	const struct spi_device_id cocci_id/* drivers/staging/iio/frequency/ad9834.c 519 */[];
	struct regulator *cocci_id/* drivers/staging/iio/frequency/ad9834.c 397 */;
	struct iio_dev *cocci_id/* drivers/staging/iio/frequency/ad9834.c 396 */;
	struct ad9834_state *cocci_id/* drivers/staging/iio/frequency/ad9834.c 395 */;
	struct spi_device *cocci_id/* drivers/staging/iio/frequency/ad9834.c 393 */;
	int cocci_id/* drivers/staging/iio/frequency/ad9834.c 393 */;
	const struct iio_info cocci_id/* drivers/staging/iio/frequency/ad9834.c 389 */;
	const struct attribute_group cocci_id/* drivers/staging/iio/frequency/ad9834.c 381 */;
	struct attribute *cocci_id/* drivers/staging/iio/frequency/ad9834.c 362 */[];
	char *cocci_id/* drivers/staging/iio/frequency/ad9834.c 282 */;
	struct device_attribute *cocci_id/* drivers/staging/iio/frequency/ad9834.c 281 */;
	struct device *cocci_id/* drivers/staging/iio/frequency/ad9834.c 280 */;
	ssize_t cocci_id/* drivers/staging/iio/frequency/ad9834.c 280 */;
	u32 cocci_id/* drivers/staging/iio/frequency/ad9834.c 233 */;
	bool cocci_id/* drivers/staging/iio/frequency/ad9834.c 229 */;
	struct iio_dev_attr *cocci_id/* drivers/staging/iio/frequency/ad9834.c 227 */;
	size_t cocci_id/* drivers/staging/iio/frequency/ad9834.c 223 */;
	const char *cocci_id/* drivers/staging/iio/frequency/ad9834.c 222 */;
	u64 cocci_id/* drivers/staging/iio/frequency/ad9834.c 104 */;
	unsigned long long cocci_id/* drivers/staging/iio/frequency/ad9834.c 104 */;
	unsigned long cocci_id/* drivers/staging/iio/frequency/ad9834.c 102 */;
	unsigned int cocci_id/* drivers/staging/iio/frequency/ad9834.c 102 */;
}
